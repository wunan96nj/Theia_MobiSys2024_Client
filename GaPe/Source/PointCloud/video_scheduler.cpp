//#include <jni.h>
#include "video_scheduler.h"
#include "videodata.h"
#include "VideoCommunication.h"
//#include "encoded_buffer.h"       
#include "tools.h"
#include "logger.h"
#include "PointCloudRenderer.h"
#include "EyeActor.h"
//#include "nativelib.h"
#include <math.h>
using namespace std;

//DEFINE_LOG_CATEGORY_STATIC(TEST, Log, All);

int VIDEO_SCHEDULER::tileRecvCounter = 0;

int VIDEO_SCHEDULER::nClasses = 0;
int VIDEO_SCHEDULER::FOVX = -1;
int VIDEO_SCHEDULER::FOVY = -1;
float VIDEO_SCHEDULER::aspectRatio = 2;
int VIDEO_SCHEDULER::bFoV = 0;

int VIDEO_SCHEDULER::dashAlg = -1;
int VIDEO_SCHEDULER::predictAlg = -1;
int VIDEO_SCHEDULER::nDecoders = -1;
int VIDEO_SCHEDULER::FPS = -1;
int VIDEO_SCHEDULER::nQuality = -1;

BYTE * VIDEO_SCHEDULER::receivedChunks = NULL;
double * VIDEO_SCHEDULER::requestTime = NULL;
int VIDEO_SCHEDULER::startupChunks = 0;
FESTIVE_THROUGHPUT_ESTIMATOR VIDEO_SCHEDULER::thEst;
//pthread_mutex_t VIDEO_SCHEDULER::downloadLock;
mutex VIDEO_SCHEDULER::downloadLock;
int* VIDEO_SCHEDULER::CPU_Time = NULL;


int head_frame_buffer = 10000;
int head_frame_buffer90 = 300*9*3;


//float * VIDEO_SCHEDULER::replayLookAtMCenterX = NULL;
//float * VIDEO_SCHEDULER::replayLookAtMCenterY = NULL;
//float * VIDEO_SCHEDULER::replayLookAtMCenterZ = NULL;
//float * VIDEO_SCHEDULER::replayYaw = NULL;
//float * VIDEO_SCHEDULER::replayPitch = NULL;
//float * VIDEO_SCHEDULER::replayRoll = NULL;
//float * VIDEO_SCHEDULER::replayLookAtMEyeX = NULL;
//float * VIDEO_SCHEDULER::replayLookAtMEyeY = NULL;
//float * VIDEO_SCHEDULER::replayLookAtMEyeZ = NULL;
float* VIDEO_SCHEDULER::replayLookAtMCenterX = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayLookAtMCenterY = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayLookAtMCenterZ = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayYaw = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayPitch = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayRoll = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayLookAtMEyeX = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayLookAtMEyeY = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayLookAtMEyeZ = new float[head_frame_buffer];


float* VIDEO_SCHEDULER::replayGazeCenterX = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayGazeCenterY = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayGazeCenterZ = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayGazeDirX = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayGazeDirY = new float[head_frame_buffer];
float* VIDEO_SCHEDULER::replayGazeDirZ = new float[head_frame_buffer];

float* VIDEO_SCHEDULER::replayGazeCenterX90fps = new float[head_frame_buffer90];
float* VIDEO_SCHEDULER::replayGazeCenterY90fps = new float[head_frame_buffer90];
float* VIDEO_SCHEDULER::replayGazeCenterZ90fps = new float[head_frame_buffer90];
float* VIDEO_SCHEDULER::replayGazeDirX90fps = new float[head_frame_buffer90];
float* VIDEO_SCHEDULER::replayGazeDirY90fps = new float[head_frame_buffer90];
float* VIDEO_SCHEDULER::replayGazeDirZ90fps = new float[head_frame_buffer90];


int VIDEO_SCHEDULER::replaySize = 0;
int VIDEO_SCHEDULER::nextFrame = 0;
float VIDEO_SCHEDULER::curLat = 0.0f;
float VIDEO_SCHEDULER::curLon = 0.0f;

const int VIDEO_SCHEDULER::BUFFER_LENGTH = 60;
int VIDEO_SCHEDULER::nextChunkID = 0;
int VIDEO_SCHEDULER::recvCells = 0;
int VIDEO_SCHEDULER::bStartup = 1;
int VIDEO_SCHEDULER::nReceivedChunks = 0;
int VIDEO_SCHEDULER::nReceivedBytes = 0;
int VIDEO_SCHEDULER::nDisplayedChunks = 0;
int VIDEO_SCHEDULER::nInTransitChunks = 0;
double VIDEO_SCHEDULER::firstRequestTime = -1.0f;
int VIDEO_SCHEDULER::STARTUP_DELAY = 0;
long VIDEO_SCHEDULER::nDownloadedCells = 0;

FrustumG VIDEO_SCHEDULER::frustum;
int * VIDEO_SCHEDULER::visibilityMap = NULL;
int * VIDEO_SCHEDULER::nRequestedCells = NULL;

vector<HMPredict *> VIDEO_SCHEDULER::predictors;

int VIDEO_SCHEDULER::dtSamplesLimit = -1;
int * VIDEO_SCHEDULER::dtSamples = NULL;
int VIDEO_SCHEDULER::dtSum = 0;
int VIDEO_SCHEDULER::dtSamplePos = 0;
double VIDEO_SCHEDULER::decodingPenalty = 0.0f;

void VIDEO_SCHEDULER::AddHMP(HMPredict * pPredict) {
    predictors.push_back(pPredict);
    MyAssert(predictors.size() <= MAX_PREDICTORS, 3660);
}

void VIDEO_SCHEDULER::RemoveAllHMP() {
    predictors.clear();
}

int VIDEO_SCHEDULER::CheckStartup() {
    return bStartup;
}

void VIDEO_SCHEDULER::OnReceiveChunks(int chunkID, int tileID, int cls, int quality, int size, int bLast, double t) {
    BYTE* p = &receivedChunks[chunkID * VIDEO_DATA::nTiles + tileID];
    //MyAssert(*p == 0xFF, 3507);
    *p = (BYTE)quality;

    //InfoMessage("Received %d %d %d %d", chunkID, tileID, quality, size);
    nReceivedBytes += size;
    //TODO: check race condition for thEst???
    //throughput estimation
    //thEst.OnNewData(NDKGetTime(), size, bLast);
    if (recvCells == 0) firstRequestTime = NDKGetTime();
    recvCells++;
    //if (recvCells == nRequestedCells[chunkID]) {
    if (recvCells == VIDEO_DATA::nTiles) {
        //InfoMessage("Time for chunk %d %.3lf", chunkID, NDKGetTime() - firstRequestTime);
        recvCells = 0;
        nInTransitChunks--;
        nReceivedChunks++;
        nDisplayedChunks++;

        if (nReceivedChunks >= startupChunks-3) {
            bStartup = 0;
        }
        if (nReceivedChunks >= startupChunks) {
            startupChunks = 0;
        }
        UE_LOG(TEST, Log, TEXT("CPU_Time %d, nReceivedBytes %d"), CPU_Time[chunkID], nReceivedBytes);

        //TODO time for the first bit
        if (nReceivedBytes > 10000) thEst.OnNewData(chunkID, requestTime[chunkID], t, nReceivedBytes);
        CPU_Time[chunkID] = 0;

        nReceivedBytes = 0;
        UE_LOG(TEST, Log, TEXT("nReceivedChunks: %d, startupChunks: %d"), nReceivedChunks, startupChunks);

        //OnNextFrame(nDisplayedChunks);
    }
}

void VIDEO_SCHEDULER::OnNextFrame(int nextFrame_in, float lat, float lon) {
    VIDEO_SCHEDULER::nextFrame = nextFrame_in;
    VIDEO_SCHEDULER::curLat = lat;
    VIDEO_SCHEDULER::curLon = lon;
}

void VIDEO_SCHEDULER::OnNextFrame(int nextFrame_in) {
    VIDEO_SCHEDULER::nextFrame = nextFrame_in;

    //nDisplayedChunks++;

    int len = 3;
    //if (nextFrame % FPS == 0) {

    if (len == 3 && nextFrame_in >= 28) {
        while (nextChunkID < startupChunks) {
            FPlatformProcess::Sleep(0.001);
        }
        //while ((APointCloudRenderer::head_id) < (nextFrame_in - 1)) {
        //    //UE_LOG(TEST, Log, TEXT("nReceivedChunks: %d, startupChunks: %d"), nReceivedChunks, startupChunks);
        //    //std::this_thread::sleep_for(std::chrono::milliseconds(1));
        //    FPlatformProcess::Sleep(0.001);
        //}
        ViVoFetchNextChunk();
    }
    else if (len == 8 && nextFrame_in >= 16) {
        ViVoFetchNextChunk();
    }
}

#define NUMDIM  3
#define RIGHT   0
#define LEFT    1
#define MIDDLE  2
#define TRUE    1
#define FALSE   0

int HitBoundingBox(double * minB, double * maxB,                /*box */
                   double * origin, double * dir,          /*ray */
                   double * coord)                         /* hit point */
{
    int inside = TRUE;
    int quadrant[NUMDIM];
    register int i;
    int whichPlane;
    double maxT[NUMDIM];
    double candidatePlane[NUMDIM];

    /* Find candidate planes; this loop can be avoided if
    rays cast all from the eye(assume perpsective view) */
    for (i = 0; i < NUMDIM; i++)
        if(origin[i] < minB[i]) {
            quadrant[i] = LEFT;
            candidatePlane[i] = minB[i];
            inside = FALSE;
        }else if (origin[i] > maxB[i]) {
            quadrant[i] = RIGHT;
            candidatePlane[i] = maxB[i];
            inside = FALSE;
        }else   {
            quadrant[i] = MIDDLE;
        }

    /* Ray origin inside bounding box */
    if(inside)      {
        coord = origin;
        return (TRUE);
    }

    /* Calculate T distances to candidate planes */
    for (i = 0; i < NUMDIM; i++)
        if (quadrant[i] != MIDDLE && dir[i] != 0.)
            maxT[i] = (candidatePlane[i] - origin[i]) / dir[i];
        else
            maxT[i] = -1.;

    /* Get largest of the maxT's for final choice of intersection */
    whichPlane = 0;
    for (i = 1; i < NUMDIM; i++)
        if (maxT[whichPlane] < maxT[i])
            whichPlane = i;

    /* Check final candidate actually inside box */
    if (maxT[whichPlane] < 0.) return (FALSE);
    for (i = 0; i < NUMDIM; i++)
        if (whichPlane != i) {
            coord[i] = origin[i] + maxT[whichPlane] * dir[i];
            if (coord[i] < minB[i] || coord[i] > maxB[i])
                return (FALSE);
        } else {
            coord[i] = candidatePlane[i];
        }
    return (TRUE);                          /* ray hits box */
}

int visibility(int idx, int chunkID, int quality, int coordx, int coordy, int coordz, float eyex, float eyey, float eyez) {
    //int segmentation = VIDEO_DATA::segmentation;

    int newQuality = quality;
    float step = VIDEO_DATA::step;

    int segments_x = VIDEO_DATA::segments_x;
    int segments_y = VIDEO_DATA::segments_y;
    int segments_z = VIDEO_DATA::segments_z;
    float minBox_x = VIDEO_DATA::minBox_x;
    float minBox_y = VIDEO_DATA::minBox_y;
    float minBox_z = VIDEO_DATA::minBox_z;

    double minB[NUMDIM], maxB[NUMDIM];              /*box */
    double origin[NUMDIM], dir[NUMDIM], lookat[NUMDIM];             /*ray */
    double coord[NUMDIM];

    double lowX = minBox_x + coordx * step;
    double lowY = minBox_y + coordy * step;
    double lowZ = minBox_z + coordz * step;

    origin[0] = eyex;
    origin[1] = eyey;
    origin[2] = eyez;

    lookat[0] = lowX + step / 2;
    lookat[1] = lowY + step / 2;
    lookat[2] = lowZ + step / 2;

    dir[0] = lookat[0] - origin[0];
    dir[1] = lookat[1] - origin[1];
    dir[2] = lookat[2] - origin[2];

    int nHitBoxes = 0;
    float maxRatio = 0.0f;
    int nPoints = VIDEO_DATA::GetChunkPoints(chunkID, idx, quality);
    //cout << idx << " " << coordx << " " << coordy << " " << coordz << " " << bitmap[idx] << "(" << lookat[0] << " " << lookat[1] << " " << lookat[2] << ")" << endl;
    double dist = sqrt((lookat[0] - origin[0]) * (lookat[0] - origin[0]) + (lookat[1] - origin[1]) * (lookat[1] - origin[1]) + (lookat[2] - origin[2]) * (lookat[2] - origin[2]));
    for (int x = coordx - 1; x <= coordx + 1; x++) {
        for (int y = coordy - 1; y <= coordy + 1; y++) {
            for (int z = coordz - 1; z <= coordz + 1; z++) {
                //if (x == coordx && y == coordy && z == coordz)
                if (x == coordx && z == coordz)
                    continue;

                if (x < 0 || y < 0 || z < 0 || x >= segments_x || y >= segments_y || z >= segments_z)
                    continue;

                int cellID = z + y * segments_z + x * segments_z * segments_y;
                minB[0] = minBox_x + x * step;
                minB[1] = minBox_y + y * step;
                minB[2] = minBox_z + z * step;

                maxB[0] = minB[0] + step;
                maxB[1] = minB[1] + step;
                maxB[2] = minB[2] + step;

                int hit = HitBoundingBox(minB, maxB, origin, dir, coord);
                if (hit) {
                    double hit_dist = sqrt((coord[0] - origin[0]) * (coord[0] - origin[0]) + (coord[1] - origin[1]) * (coord[1] - origin[1]) + (coord[2] - origin[2]) * (coord[2] - origin[2]));
                    if (hit_dist < dist) {
                        nHitBoxes++;
                        int hitBoxPoints = VIDEO_DATA::GetChunkPoints(chunkID, cellID, quality);
                        float ratio = hitBoxPoints / (float) nPoints;
                        if (ratio > maxRatio)
                            maxRatio = ratio;
                    }

                    /*
                    if (hit_dist < dist && VIDEO_DATA::GetChunkPoints(chunkID, cellID, quality) > 0.5 * VIDEO_DATA::GetChunkPoints(chunkID, idx, quality)) {
                        //InfoMessage("%d %d %d x %d y %d z %d (%d %d %d) dist %.3lf hit_dis %.3lf minB[0] %.3lf minB[1] %.3lf minB[2] %.3lf coord[0] %.3lf coord[1] %.3lf coord[2] %.3lf",
                        //            chunkID, VIDEO_DATA::GetChunkPoints(chunkID, cellID, quality), VIDEO_DATA::GetChunkPoints(chunkID, idx, quality), x, y ,z, coordx, coordy, coordz, dist, hit_dist, minB[0], minB[1], minB[2], coord[0], coord[1], coord[2]);
                        //cout << x << " " << y << " " << z << " " << dist << " " << hit_dist << "(" << minB[0] << " " << minB[1] << " " << minB[2] << " " << coord[0] << " " << coord[1] << " " << coord[2] << ")" << endl;
                        return 0;
                    }
                    */
                }
            }
        }
    }

    float coefficient = 0.8f;
    if (nHitBoxes == 1) {
        if (maxRatio < 0.6) newQuality = quality;
        else if (maxRatio >= 0.6 && maxRatio < 1.0) newQuality = quality - 1;
            //else if (maxRatio >= 0.8) newQuality = quality - 2;
        else if (maxRatio >= 1.0 && maxRatio < 3.0) newQuality = quality - 2;
        else if (maxRatio >= 3.0) newQuality = quality - 3;
    }
    else if (nHitBoxes == 2) {
        if (maxRatio < 0.6*coefficient) newQuality = quality;
        else if (maxRatio >= 0.6*coefficient && maxRatio < 1.0*coefficient) newQuality = quality - 1;
            //else if (maxRatio >= 0.8) newQuality = quality - 2;
        else if (maxRatio >= 1.0*coefficient && maxRatio < 3.0*coefficient) newQuality = quality - 2;
        else if (maxRatio >= 3.0*coefficient) newQuality = quality - 3;
    }
    else if (nHitBoxes >= 3) {
        if (maxRatio < 0.6*coefficient*coefficient) newQuality = quality;
        else if (maxRatio >= 0.6*coefficient*coefficient && maxRatio < 1.0*coefficient*coefficient) newQuality = quality - 1;
            //else if (maxRatio >= 0.8) newQuality = quality - 2;
        else if (maxRatio >= 1.0*coefficient*coefficient && maxRatio < 3.0*coefficient*coefficient) newQuality = quality - 2;
        else if (maxRatio >= 3.0*coefficient*coefficient) newQuality = quality - 3;
    }

    //if (nHitBoxes > 2) newQuality--;

    if (newQuality < 0) newQuality = 0;

    return newQuality;

    //if (nHitBoxes != 0 ) InfoMessage("HitBoxes %d Ratio %.3lf", nHitBoxes, maxRatio);
    //return 1;
}

#define ANG2RAD 3.14159265358979323846/180.0

float min4c(float a, float b, float c, float d){
    float res = a;
    if(b < res) res = b;
    if(c < res) res = c;
    if(d < res) res = d;
    return res;
}

void VIDEO_SCHEDULER::BatchRequestCells(int chunkID, int iniQuality) {
    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;

    int quality;
    if (nQuality != -1) quality = nQuality;
    else quality = iniQuality;

    //memset(visibilityMap, 0x00, sizeof(int)*(nTiles));
    for (int i = 0; i < nTiles; i++)
        visibilityMap[i] = -1;

    int fetchPointsThreshold = 20;
    double t1 = NDKGetTime();
    int cells = 0;

    int segmentation = VIDEO_DATA::segmentation;
    MyAssert(segmentation != 1, 3901);

    float step = VIDEO_DATA::step;

    int segments_x = VIDEO_DATA::segments_x;
    int segments_y = VIDEO_DATA::segments_y;
    int segments_z = VIDEO_DATA::segments_z;
    float minBox_x = VIDEO_DATA::minBox_x;
    float minBox_y = VIDEO_DATA::minBox_y;
    float minBox_z = VIDEO_DATA::minBox_z;
    //InfoMessage("VIDEO_SCHEDULER::BatchRequestCells() %d %.3lf", segments_x, minBox_x);

    //FrustumG frustum;
    float nearP = 0.1f, farP = 50.0f;
    float angle = FOVY; //, ratio = 2;
    //float angle = 100, ratio = 2;
    //InfoMessage("aspectRatio: %.3lf", aspectRatio);
    frustum.setCamInternals(angle, aspectRatio, nearP, farP);

    int minCellIdx = -1;
    int minCellSize = 1024*1024;
    float predictedEyeX, predictedEyeY, predictedEyeZ, predictedYaw, predictedPitch;

    predictors[0]->Predict(chunkID, &predictedEyeX, &predictedEyeY, &predictedEyeZ, &predictedYaw, &predictedPitch);
    float R = 100.0f;
    float lookX = 0.0f;
    float lookY = 0.0f;
    float lookZ = R;
    lookY = R * (float)sin(-predictedPitch * ANG2RAD);
    lookX = R * (float)cos(predictedPitch * ANG2RAD) * (float)sin(-predictedYaw * ANG2RAD);
    lookZ = R * (float)cos(predictedPitch * ANG2RAD) * (float)cos(predictedYaw * ANG2RAD);

    lookX += predictedEyeX;
    lookY += predictedEyeY;
    lookZ += predictedEyeZ;
    //InfoMessage("Linear Predicted: %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf (%d)", predictedEyeX, predictedEyeY, predictedEyeZ, predictedYaw, predictedPitch, lookX, lookY, lookZ, chunkID);
    //InfoMessage("Linear Actual:    %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf", replayLookAtMEyeX[chunkID], replayLookAtMEyeY[chunkID], replayLookAtMEyeZ[chunkID], replayYaw[chunkID], replayPitch[chunkID], replayLookAtMCenterX[chunkID], replayLookAtMCenterY[chunkID], replayLookAtMCenterZ[chunkID]);

    if (VIDEO_COMM::videoID == 3 || VIDEO_COMM::videoID == 4 || VIDEO_COMM::videoID == 7) {
        float dist = sqrt(predictedEyeX*predictedEyeX + predictedEyeY*predictedEyeY + predictedEyeZ*predictedEyeZ);
        float dist_coeffecient = 1.2f;
        if(dist > (6.2f*dist_coeffecient)){
            quality -= 4;
        }else if(dist > (5.2f*dist_coeffecient)){
            quality -= 3;
        }else if(dist > (4.2f*dist_coeffecient)){
            quality -= 2;
        }else if(dist > (3.2f*dist_coeffecient)){
            quality -= 1;
        }
        if(quality < 0) quality = 0;
    }
    if (VIDEO_COMM::videoID == 5) {
        float dist = min(sqrt(predictedEyeX*predictedEyeX + predictedEyeY*predictedEyeY + predictedEyeZ*predictedEyeZ),
                         sqrt((predictedEyeX-(3))*(predictedEyeX-(3)) + predictedEyeY*predictedEyeY + (predictedEyeZ-(3))*(predictedEyeZ-(3))));
        float dist_coeffecient = 1.2f;
        if(dist > (4.5f*dist_coeffecient)){
            quality -= 4;
        }else if(dist > (3.9f*dist_coeffecient)){
            quality -= 3;
        }else if(dist > (3.2f*dist_coeffecient)){
            quality -= 2;
        }else if(dist > (2.7f*dist_coeffecient)){
            quality -= 1;
        }
        if(quality < 0) quality = 0;
    }
    if (VIDEO_COMM::videoID == 6) {
        float dist = min4c(sqrt(predictedEyeX*predictedEyeX + predictedEyeY*predictedEyeY + predictedEyeZ*predictedEyeZ),
                          sqrt((predictedEyeX-(-3))*(predictedEyeX-(-3)) + predictedEyeY*predictedEyeY + (predictedEyeZ-(3))*(predictedEyeZ-(3))),
                          sqrt(predictedEyeX*predictedEyeX + predictedEyeY*predictedEyeY + (predictedEyeZ-(6))*(predictedEyeZ-(6))),
                          sqrt((predictedEyeX-3)*(predictedEyeX-3) + predictedEyeY*predictedEyeY + (predictedEyeZ-(3))*(predictedEyeZ-(3))));
        float dist_coeffecient = 1.2f;
        if(dist > (4.5f*dist_coeffecient)){
            quality -= 4;
        }else if(dist > (3.9f*dist_coeffecient)){
            quality -= 3;
        }else if(dist > (3.2f*dist_coeffecient)){
            quality -= 2;
        }else if(dist > (2.7f*dist_coeffecient)){
            quality -= 1;
        }
        if(quality < 0) quality = 0;
    }


    Vec3 p(predictedEyeX, predictedEyeY, predictedEyeZ), l(lookX, lookY, lookZ), u(0, 1, 0);
    frustum.setCamDef(p, l, u);

    for (int j = 0; j < nTiles; j++) {
        int nPoints = VIDEO_DATA::GetChunkPoints(chunkID, j, quality);
        if (nPoints < fetchPointsThreshold) continue;
        if (nPoints < minCellSize) {
            minCellSize = nPoints;
            minCellIdx = j;
        }

        if (!bStartup) {
            int coordx, coordy, coordz;
            coordz = j % segments_z;
            coordy = ((j - coordz) / segments_z) % segments_y;
            coordx = (j - coordz - coordy * segments_z) / segments_z / segments_y;

            Vec3 v(minBox_x + coordx * step, minBox_y + coordy * step, minBox_z + coordz * step);
            AABox b(v, step, step, step);
            //InfoMessage("%d %d %d (%d %d %d) (%.3lf %.3lf %.3lf) (%.3lf %.3lf %.3lf)", chunkID + i, j, nPoints, coordx, coordy, coordz, minBox_x + coordx * step, minBox_y + coordy * step, minBox_z + coordz * step, minBox_x + coordx * step + step, minBox_y + coordy * step + step, minBox_z + coordz * step + step);
            if (frustum.boxInFrustum(b) == FrustumG::OUTSIDE) continue;
            //float nCulling = frustum.boxInFrustumDist(b);
            //InfoMessage("Culling: %d (%d %d)", nCulling, chunkID, j);
            //if (nCulling <= -0.2) continue;

            visibilityMap[j] = quality;
            //InfoMessage("Visible cell: %d %d %d", chunkID, j, quality);
            visibilityMap[j] = visibility(j, chunkID, quality, coordx, coordy, coordz, predictedEyeX, predictedEyeY, predictedEyeZ);
            //InfoMessage("Visible cell (occlusion): %d %d %d", chunkID, j, quality);

            if (visibilityMap[j] == -1) continue;
        }

        cells++;
    }

    Vec3 pTruth(replayLookAtMEyeX[chunkID], replayLookAtMEyeY[chunkID], replayLookAtMEyeZ[chunkID]), lTruth(replayLookAtMCenterX[chunkID], replayLookAtMCenterY[chunkID], replayLookAtMCenterZ[chunkID]), uTruth(0, 1, 0);
    frustum.setCamDef(pTruth, lTruth, uTruth);

    int visibleCells = 0;
    int missingCells = 0;
    for (int j = 0; j < nTiles; j++) {
        int nPoints = VIDEO_DATA::GetChunkPoints(chunkID, j, quality);
        if (nPoints < fetchPointsThreshold) continue;

        if (!bStartup) {
            int coordx, coordy, coordz;
            coordz = j % segments_z;
            coordy = ((j - coordz) / segments_z) % segments_y;
            coordx = (j - coordz - coordy * segments_z) / segments_z / segments_y;

            Vec3 v(minBox_x + coordx * step, minBox_y + coordy * step, minBox_z + coordz * step);
            AABox b(v, step, step, step);
            if (frustum.boxInFrustum(b) == FrustumG::OUTSIDE) continue;

            visibleCells++;
            if (visibilityMap[j] == -1) missingCells++;
            //InfoMessage("Missing cell: %d %d %d", chunkID, j, nPoints);
        }
    }
    if (visibleCells != 0) InfoMessage("Cell missing percentage is %.3lf (%d %d)", missingCells / (float)visibleCells, missingCells, visibleCells);

    int extendedFoV[3];
    extendedFoV[0] = 60;
    extendedFoV[1] = 90;
    extendedFoV[2] = 120;

    for (int i = 0; i < 3; i++) {
        frustum.setCamInternals(extendedFoV[i], aspectRatio, nearP, farP);
        frustum.setCamDef(p, l, u);

        int newQuality = quality - i - 1;
        if (newQuality < 0) newQuality = 0;

        for (int j = 0; j < nTiles; j++) {
            int nPoints = VIDEO_DATA::GetChunkPoints(chunkID, j, quality);
            if (nPoints < fetchPointsThreshold) continue;
            if (nPoints < minCellSize) {
                minCellSize = nPoints;
                minCellIdx = j;
            }

            if (!bStartup) {
                int coordx, coordy, coordz;
                coordz = j % segments_z;
                coordy = ((j - coordz) / segments_z) % segments_y;
                coordx = (j - coordz - coordy * segments_z) / segments_z / segments_y;

                Vec3 v(minBox_x + coordx * step, minBox_y + coordy * step, minBox_z + coordz * step);
                AABox b(v, step, step, step);
                //InfoMessage("%d %d %d (%d %d %d) (%.3lf %.3lf %.3lf) (%.3lf %.3lf %.3lf)", chunkID + i, j, nPoints, coordx, coordy, coordz, minBox_x + coordx * step, minBox_y + coordy * step, minBox_z + coordz * step, minBox_x + coordx * step + step, minBox_y + coordy * step + step, minBox_z + coordz * step + step);
                if (frustum.boxInFrustum(b) == FrustumG::OUTSIDE) continue;
                //float nCulling = frustum.boxInFrustumDist(b);
                //InfoMessage("Culling: %d (%d %d)", nCulling, chunkID, j);
                //if (nCulling <= -0.2) continue;

                if (visibilityMap[j] == -1) {
                    visibilityMap[j] = newQuality;
                    //InfoMessage("Additional visible cell: %d %d %d", chunkID, j, newQuality);
                    cells++;
                }
            }
        }
    }
    double t2 = NDKGetTime();

    visibleCells = 0;
    missingCells = 0;
    for (int j = 0; j < nTiles; j++) {
        int nPoints = VIDEO_DATA::GetChunkPoints(chunkID, j, quality);
        if (nPoints < fetchPointsThreshold) continue;

        if (!bStartup) {
            int coordx, coordy, coordz;
            coordz = j % segments_z;
            coordy = ((j - coordz) / segments_z) % segments_y;
            coordx = (j - coordz - coordy * segments_z) / segments_z / segments_y;

            Vec3 v(minBox_x + coordx * step, minBox_y + coordy * step, minBox_z + coordz * step);
            AABox b(v, step, step, step);
            if (frustum.boxInFrustum(b) == FrustumG::OUTSIDE) continue;

            visibleCells++;
            if (visibilityMap[j] == -1) missingCells++;
            //InfoMessage("Missing cell: %d %d %d", chunkID, j, nPoints);
        }
    }
    if (visibleCells != 0 && missingCells != 0) InfoMessage("Final cell missing percentage is %.3lf (%d %d)", missingCells / (float)visibleCells, missingCells, visibleCells);

    if (nQuality == -1) {
        double thEstimation = thEst.GetValue();

        while (true) {
            int toBeFetchedBytes = 0;

            for (int i = 0; i < nTiles; i++) {
                if (visibilityMap[i] == -1) continue;

                toBeFetchedBytes += VIDEO_DATA::GetChunkSize(chunkID, i, visibilityMap[i]);
            }
            //InfoMessage("To be fetched bytes %d Estimated throughput %.3lf", toBeFetchedBytes, thEstimation);

            if (toBeFetchedBytes < thEstimation * 0.03) break;
            else {
                for (int i = 0; i < nTiles; i++) {
                    if (visibilityMap[i] > 0) visibilityMap[i]--;
                }

                int maxQuality = -2;
                for (int i = 0; i < nTiles; i++) {
                    if (visibilityMap[i] > maxQuality) maxQuality = visibilityMap[i];
                }

                if (maxQuality <= 0) break;
            }
        }
    }

    for (int j = 0; j < nTiles; j++) {
        int nPoints = VIDEO_DATA::GetChunkPoints(chunkID, j, visibilityMap[j]);
        if (visibilityMap[j] != -1 && nPoints < fetchPointsThreshold) {
            //InfoMessage("%d %d %d %d", chunkID, j, visibilityMap[j], nPoints);
            cells--;
            visibilityMap[j] = -1;
        }
    }

    if (cells == 0) {
        cells = 1;
        int reqLen = cells * 5 + 9;
        int seqnum = chunkID;
        BYTE * batchedRequest = VIDEO_COMM::vms.AllocateBlock(reqLen);
        batchedRequest[0] = MSG_BATCH_REQUESTS;
        WriteInt(batchedRequest + 1, reqLen);
        WriteInt(batchedRequest + 5, seqnum);
        BYTE * pCurTile = batchedRequest + 9;

        WriteWORD(pCurTile, (WORD) (chunkID));
        WriteWORD(pCurTile + 2, (WORD) minCellIdx);
        pCurTile[4] = (BYTE) quality;
        pCurTile += 5;

        nRequestedCells[chunkID] = 1;

        VIDEO_COMM::SendMessage_BatchedRequest(batchedRequest);
    } else {
        int reqLen = cells * 5 + 9;
        int seqnum = chunkID;
        BYTE *batchedRequest = VIDEO_COMM::vms.AllocateBlock(reqLen);
        batchedRequest[0] = MSG_BATCH_REQUESTS;
        WriteInt(batchedRequest + 1, reqLen);
        WriteInt(batchedRequest + 5, seqnum);
        BYTE *pCurTile = batchedRequest + 9;

        //now sendout the requests
        for (int j = 0; j < nTiles; j++) {
            int nPoints = VIDEO_DATA::GetChunkPoints(chunkID, j, visibilityMap[j]);
            if (nPoints < fetchPointsThreshold) continue;

            if (!bStartup) {
                if (visibilityMap[j] == -1) continue;
            }

            WriteWORD(pCurTile, (WORD) (chunkID));
            WriteWORD(pCurTile + 2, (WORD) j);
            pCurTile[4] = (BYTE) visibilityMap[j];  // quality
            pCurTile += 5;
            //InfoMessage("chunkID %d tileID %d quality %d", chunkID, j, visibilityMap[j]);
        }

        nRequestedCells[chunkID] = cells;

        VIDEO_COMM::SendMessage_BatchedRequest(batchedRequest);
    }

    nDownloadedCells += cells;
    InfoMessage("Frustum culling time: %.3lf (%d %d %lu)", t2-t1, chunkID, cells, nDownloadedCells);
}

void VIDEO_SCHEDULER::ViVoFetchNextChunk() {
    //pthread_mutex_lock(&downloadLock);
    //unique_lock<mutex> lck(downloadLock);

    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;
    int nQualities = VIDEO_DATA::nQualities;
    int gopSize = VIDEO_DATA::gopSize;

    MyAssert(nQualities < VIDEO_DATA::MAX_QUALITIES &&
             nTiles < MAX_TILES &&
             nClasses < MAX_CLASSES, 3496);

    int tileID = 0;

    MyAssert(nextChunkID != 0, 3900);

    if (nextChunkID >= nChunks) {
        //pthread_mutex_unlock(&downloadLock);
        //lck.unlock();
        //return;
        nextChunkID = 0;
    }

    /*
    //get the throughput estimation. The unit is byte/sec
    //double thEstimation = thEst.GetValue() * 0.85;
    double thEstimation = thEst.GetValue();

    int indexQuality;
    for (indexQuality = 0; indexQuality < nQualities; indexQuality++) {
        //TODO quality in bitrate in Mbps
        if (VIDEO_DATA::curBitrateUtility[indexQuality] > (thEstimation * 8 / 1024 / 1024)) break;
    }

    indexQuality--;
    if (indexQuality < 0) indexQuality = 0;
    indexQuality = nQuality;   
    */

    //TODO seqnum = 0, each chunk will be requested only once
    //TODO-HB: need to set the threshold for nInTransitChunks dynamically
    //if (nextChunkID < nChunks && nReceivedChunks - nDisplayedChunks + nInTransitChunks <= BUFFER_LENGTH && nInTransitChunks <= 3) {
    if (nextChunkID < nChunks && nReceivedChunks - nDisplayedChunks + nInTransitChunks <= BUFFER_LENGTH && nInTransitChunks <= 30) {
        UE_LOG(TEST, Log, TEXT("fetch next chunk %d (buffer length %d in-transit chunks %d)"), nextChunkID, nReceivedChunks - nDisplayedChunks, nInTransitChunks)
        InfoMessage("fetch next chunk %d (buffer length %d in-transit chunks %d)", nextChunkID, nReceivedChunks - nDisplayedChunks, nInTransitChunks);
        requestTime[nextChunkID] = NDKGetTime();
        UE_LOG(TEST, Log, TEXT("fetch next chunk %d, at time: %llu"), nextChunkID, NDKGetTime());

        FString message_fstring = FString::Printf(TEXT("fetch next chunk %d, at time: %llu"), VIDEO_SCHEDULER::nextFrame+2, NDKGetTime());
        std::string message = TCHAR_TO_UTF8(*message_fstring);

        {
            std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
            AloggerActor::log_queue.push(message);
        }



        //VIDEO_COMM::SendMessage_RequestChunk((WORD)nextChunkID, (BYTE)tileID, (BYTE)indexQuality, 0, 0);
        // 
        //BatchRequestCells(nextChunkID, nQualities - 1); //Nan 20221223
        //BatchRequestAllCells(nextChunkID, 1, nQuality);
        //BatchRequest_gaze(nextChunkID, 1, nQuality);
        BatchRequest_gaze_90fps(nextChunkID, 1, nQuality);
        nInTransitChunks += 1;
        nextChunkID += 1;
    }
    //else InfoMessage("nextChunkID %d nChunks %d nReceivedChunks %d nDisplayedChunks %d BUFFER LENGTH %d", nextChunkID, nChunks, nReceivedChunks, nDisplayedChunks, BUFFER_LENGTH);

    //pthread_mutex_unlock(&downloadLock);
    //lck.unlock();
}

void VIDEO_SCHEDULER::BatchRequestAllCells(int chunkID, int nReqChunks, int quality) {
    UE_LOG(TEST, Log, TEXT("BatchRequestAllCells: %llu"), NDKGetTime());
    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;

    int frames = 0;
    if (chunkID + nReqChunks > nChunks) frames = nChunks - chunkID;
    else frames = nReqChunks;

    int fetchPointsThreshold = 20;
    int cells = 0;

    int segmentation = VIDEO_DATA::segmentation;
    //MyAssert(segmentation != 1, 3901);

    for (int i = 0 ; i < frames; i++) {
        for (int j = 0; j < nTiles; j++) {
            int nPoints = VIDEO_DATA::GetChunkPoints(chunkID + i, j, quality);
            UE_LOG(TEST, Log, TEXT("nPoints: %d"), nPoints);
            if (nPoints < fetchPointsThreshold) continue;

            cells++;
            nRequestedCells[chunkID + i]++;
        }
    }

    int reqLen = cells * 5 + 9;
    int seqnum = chunkID;
    BYTE * batchedRequest = VIDEO_COMM::vms.AllocateBlock(reqLen);
    batchedRequest[0] = MSG_BATCH_REQUESTS;
    WriteInt(batchedRequest + 1, reqLen);
    WriteInt(batchedRequest + 5, seqnum);
    BYTE * pCurTile = batchedRequest + 9;

    //now sendout the requests
    requestTime[chunkID] = NDKGetTime();
    for (int i = 0 ; i < frames; i++) {
        for (int j = 0; j < nTiles; j++) {
            int nPoints = VIDEO_DATA::GetChunkPoints(chunkID + i, j, quality);
            if (nPoints < fetchPointsThreshold) continue;

            UE_LOG(TEST, Log, TEXT("chunkID + i: %d"), (chunkID + i));
            WriteWORD(pCurTile, (WORD) (chunkID + i));
            WriteWORD(pCurTile + 2, (WORD) j);
            pCurTile[4] = (BYTE) quality;
            pCurTile += 5;
            //if (chunkID + i == 2069) InfoMessage("%d %d %d %d %d", chunkID + i, j, quality, reqLen, cells);
        }
    }

    VIDEO_COMM::SendMessage_BatchedRequest(batchedRequest);
}

void VIDEO_SCHEDULER::BatchRequest_gaze_90fps(int chunkID, int nReqChunks, int quality) {
    UE_LOG(TEST, Log, TEXT("BatchRequest_gaze"));
    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;
    double thEstimation = thEst.GetValue();// * 8.0 / 1024.0 / 1024.0;

    UE_LOG(TEST, Log, TEXT("thEstimation: %f"), (float)thEstimation);

    quality = int(33 / (thEstimation) * 10);
    if (quality > 10)
        quality = 10;
    UE_LOG(TEST, Log, TEXT("quality: %d"), (int)quality);

    //double thEstimation = thEst.GetValue() * 8.0 / 1024.0 / 1024.0;

    //UE_LOG(TEST, Log, TEXT("thEstimation: %f"), (float)thEstimation);


    //if (thEstimation <= 8.0) {
    //    quality = 0;
    //}
    //else if (thEstimation <= 16.0) {
    //    quality = 1;
    //}
    //else if (thEstimation <= 24.0) {
    //    quality = 2;
    //}
    //else if (thEstimation < 32.0) {
    //    quality = 3;
    //}
    //else {
    //    quality = 4;
    //}


    int frames = 0;
    if (chunkID + nReqChunks > nChunks) frames = nChunks - chunkID;
    else frames = nReqChunks;

    int fetchPointsThreshold = 20;
    int cells = 0;

    int segmentation = VIDEO_DATA::segmentation;
    //MyAssert(segmentation != 1, 3901);

    for (int i = 0; i < frames; i++) {
        cells++;
        nRequestedCells[chunkID + i]++;
        //for (int j = 0; j < nTiles; j++) {
        //    int nPoints = VIDEO_DATA::GetChunkPoints(chunkID + i, j, quality);
        //    UE_LOG(TEST, Log, TEXT("nPoints: %d"), nPoints);
        //    if (nPoints < fetchPointsThreshold) continue;

        //    cells++;
        //    nRequestedCells[chunkID + i]++;
        //}
    }

    int reqLen = 9 + cells * 5 + sizeof(float) * 6 * 9; //history 3 gaze data
    int seqnum = chunkID;
    BYTE* batchedRequest = VIDEO_COMM::vms.AllocateBlock(reqLen);
    batchedRequest[0] = MSG_GAZE_BATCH_REQUESTS;
    WriteInt(batchedRequest + 1, reqLen);
    WriteInt(batchedRequest + 5, seqnum);
    BYTE* pCurTile = batchedRequest + 9;

    //now sendout the requests
    for (int i = 0; i < frames; i++) {
        UE_LOG(TEST, Log, TEXT("chunkID + i: %d"), (chunkID + i));
        WriteWORD(pCurTile, (WORD)(chunkID + i));
        WriteWORD(pCurTile + 2, (WORD)0);
        pCurTile[4] = (BYTE)quality;
        pCurTile += 5;
        //if (chunkID + i == 2069) InfoMessage("%d %d %d %d %d", chunkID + i, j, quality, reqLen, cells);

        int temp_frame_id;
        if (chunkID - 3 < 0) {
            temp_frame_id = 9 * (chunkID - 3 + VIDEO_DATA::nChunks);
        }
        else {
            temp_frame_id = 9 * (chunkID - 3);
        }

        for (int repeat = 0; repeat < 9; repeat++) {
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterX90fps[temp_frame_id + repeat]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterY90fps[temp_frame_id + repeat]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterZ90fps[temp_frame_id + repeat]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirX90fps[temp_frame_id + repeat]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirY90fps[temp_frame_id + repeat]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirZ90fps[temp_frame_id + repeat]);
            pCurTile += 4;
            UE_LOG(TEST, Log, TEXT("Sent Gaze: %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf"), VIDEO_SCHEDULER::replayGazeCenterX90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeCenterY90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeCenterZ90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeDirX90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeDirY90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeDirZ90fps[temp_frame_id + repeat]);
        }





        //for (int j = 0; j < 3; j++) {
        //    int temp_frame_id = 0;
        //    if (chunkID - 3 - 2 + j < 0) {
        //        temp_frame_id = 9 * (chunkID - 3 - 2 + j + VIDEO_DATA::nChunks);
        //    }
        //    else {
        //        temp_frame_id = 9 * (chunkID - 3 - 2 + j);
        //    }

        //    for (int repeat = 0; repeat < 3; repeat++) {
        //        WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterX90fps[temp_frame_id + repeat]);
        //        pCurTile += 4;
        //        WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterY90fps[temp_frame_id + repeat]);
        //        pCurTile += 4;
        //        WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterZ90fps[temp_frame_id + repeat]);
        //        pCurTile += 4;
        //        WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirX90fps[temp_frame_id + repeat]);
        //        pCurTile += 4;
        //        WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirY90fps[temp_frame_id + repeat]);
        //        pCurTile += 4;
        //        WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirZ90fps[temp_frame_id + repeat]);
        //        pCurTile += 4;
        //        UE_LOG(TEST, Log, TEXT("Sent Gaze: %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf"), VIDEO_SCHEDULER::replayGazeCenterX90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeCenterY90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeCenterZ90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeDirX90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeDirY90fps[temp_frame_id + repeat], VIDEO_SCHEDULER::replayGazeDirZ90fps[temp_frame_id + repeat]);
        //    }            

        //}
        //for (int temp_iterate = 0; temp_iterate < 9; temp_iterate++) {
        //    WriteFLOAT(pCurTile, AEyeActor::replayGazeCenterX90fps_buffer[temp_iterate]);
        //    pCurTile += 4;
        //    WriteFLOAT(pCurTile, AEyeActor::replayGazeCenterY90fps_buffer[temp_iterate]);
        //    pCurTile += 4;
        //    WriteFLOAT(pCurTile, AEyeActor::replayGazeCenterZ90fps_buffer[temp_iterate]);
        //    pCurTile += 4;
        //    WriteFLOAT(pCurTile, AEyeActor::replayGazeRotationY90fps_buffer[temp_iterate]);
        //    pCurTile += 4;
        //    WriteFLOAT(pCurTile, AEyeActor::replayGazeRotationP90fps_buffer[temp_iterate]);
        //    pCurTile += 4;
        //    WriteFLOAT(pCurTile, AEyeActor::replayGazeRotationR90fps_buffer[temp_iterate]);
        //    pCurTile += 4;
        //    UE_LOG(TEST, Log, TEXT("Sent Gaze: %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf"), AEyeActor::replayGazeCenterX90fps_buffer[temp_iterate], AEyeActor::replayGazeCenterY90fps_buffer[temp_iterate], AEyeActor::replayGazeCenterZ90fps_buffer[temp_iterate], AEyeActor::replayGazeRotationY90fps_buffer[temp_iterate], AEyeActor::replayGazeRotationP90fps_buffer[temp_iterate], AEyeActor::replayGazeRotationR90fps_buffer[temp_iterate]);
        //}

        //for (int j = 0; j < nTiles; j++) {
        //    int nPoints = VIDEO_DATA::GetChunkPoints(chunkID + i, j, quality);
        //    if (nPoints < fetchPointsThreshold) continue;

        //    UE_LOG(TEST, Log, TEXT("chunkID + i: %d"), (chunkID + i));
        //    WriteWORD(pCurTile, (WORD) (chunkID + i));
        //    WriteWORD(pCurTile + 2, (WORD) j);
        //    pCurTile[4] = (BYTE) quality;
        //    pCurTile += 5;
        //    //if (chunkID + i == 2069) InfoMessage("%d %d %d %d %d", chunkID + i, j, quality, reqLen, cells);
        //}
    }
    requestTime[chunkID] = NDKGetTime();

    VIDEO_COMM::SendMessage_BatchedGAZERequest(batchedRequest);
}


void VIDEO_SCHEDULER::BatchRequest_gaze(int chunkID, int nReqChunks, int quality) {
    UE_LOG(TEST, Log, TEXT("BatchRequest_gaze"));
    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;

    int frames = 0;
    if (chunkID + nReqChunks > nChunks) frames = nChunks - chunkID;
    else frames = nReqChunks;

    int fetchPointsThreshold = 20;
    int cells = 0;

    int segmentation = VIDEO_DATA::segmentation;
    //MyAssert(segmentation != 1, 3901);

    for (int i = 0 ; i < frames; i++) {
        cells++;
        nRequestedCells[chunkID + i]++;
        //for (int j = 0; j < nTiles; j++) {
        //    int nPoints = VIDEO_DATA::GetChunkPoints(chunkID + i, j, quality);
        //    UE_LOG(TEST, Log, TEXT("nPoints: %d"), nPoints);
        //    if (nPoints < fetchPointsThreshold) continue;

        //    cells++;
        //    nRequestedCells[chunkID + i]++;
        //}
    }

    int reqLen = cells * 5 + 9 + sizeof(float) * 6 * 3; //history 3 gaze data
    int seqnum = chunkID;
    BYTE * batchedRequest = VIDEO_COMM::vms.AllocateBlock(reqLen);
    batchedRequest[0] = MSG_GAZE_BATCH_REQUESTS;
    WriteInt(batchedRequest + 1, reqLen);
    WriteInt(batchedRequest + 5, seqnum);
    BYTE * pCurTile = batchedRequest + 9;

    //now sendout the requests
    requestTime[chunkID] = NDKGetTime();
    for (int i = 0 ; i < frames; i++) {
        UE_LOG(TEST, Log, TEXT("chunkID + i: %d"), (chunkID + i));
        WriteWORD(pCurTile, (WORD)(chunkID + i));
        WriteWORD(pCurTile + 2, (WORD)0);
        pCurTile[4] = (BYTE)quality;
        pCurTile += 5;
        //if (chunkID + i == 2069) InfoMessage("%d %d %d %d %d", chunkID + i, j, quality, reqLen, cells);

        for (int j = 0; j < 3; j++) {
            int temp_frame_id = 0;
            if (chunkID - 3 - 2 + j < 0) {
                temp_frame_id = chunkID - 3 - 2 + j + VIDEO_DATA::nChunks;
            }
            else {
                temp_frame_id = chunkID - 3 - 2 + j;
            }
            
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterX[temp_frame_id]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterY[temp_frame_id]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeCenterZ[temp_frame_id]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirX[temp_frame_id]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirY[temp_frame_id]);
            pCurTile += 4;
            WriteFLOAT(pCurTile, VIDEO_SCHEDULER::replayGazeDirZ[temp_frame_id]);
            pCurTile += 4;

            UE_LOG(TEST, Log, TEXT("Sent Gaze: %.4lf %.4lf %.4lf %.4lf %.4lf %.4lf"), VIDEO_SCHEDULER::replayGazeCenterX[temp_frame_id], VIDEO_SCHEDULER::replayGazeCenterY[temp_frame_id], VIDEO_SCHEDULER::replayGazeCenterZ[temp_frame_id], VIDEO_SCHEDULER::replayGazeDirX[temp_frame_id], VIDEO_SCHEDULER::replayGazeDirY[temp_frame_id], VIDEO_SCHEDULER::replayGazeDirZ[temp_frame_id]);
        }


        //for (int j = 0; j < nTiles; j++) {
        //    int nPoints = VIDEO_DATA::GetChunkPoints(chunkID + i, j, quality);
        //    if (nPoints < fetchPointsThreshold) continue;

        //    UE_LOG(TEST, Log, TEXT("chunkID + i: %d"), (chunkID + i));
        //    WriteWORD(pCurTile, (WORD) (chunkID + i));
        //    WriteWORD(pCurTile + 2, (WORD) j);
        //    pCurTile[4] = (BYTE) quality;
        //    pCurTile += 5;
        //    //if (chunkID + i == 2069) InfoMessage("%d %d %d %d %d", chunkID + i, j, quality, reqLen, cells);
        //}
    }

    VIDEO_COMM::SendMessage_BatchedGAZERequest(batchedRequest);
}
void VIDEO_SCHEDULER::ViVoScheduler() {
    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;
    int nQualities = VIDEO_DATA::nQualities;

    MyAssert(nQualities < VIDEO_DATA::MAX_QUALITIES &&
             nTiles < MAX_TILES &&
             nClasses < MAX_CLASSES, 3496);

    int tileID = 0;
    int nPredictors = (int)predictors.size();

    thEst.Init();
    nextChunkID = 0;
    recvCells = 0;
    nReceivedBytes = 0;
    bStartup = 1;
    nDownloadedCells = 0;

    requestTime = new double[nChunks];
    CPU_Time = new int[nChunks];

    memset(requestTime, 0, sizeof(double) * nChunks);
    memset(CPU_Time, 0, sizeof(int) * nChunks);

    STARTUP_DELAY = 1;
    //startupTiles = STARTUP_DELAY * 1000 / CHUNK_DURATION * VIDEO_DATA::nTiles;

    receivedChunks = new BYTE[nTiles * nChunks];
    memset(receivedChunks, 0xFF, (size_t)(nTiles * nChunks));

    //startupChunks = STARTUP_DELAY * FPS *0.5;
    startupChunks = 30;
    //startupChunks = 1;

    //if (pthread_mutex_init(&downloadLock, NULL) != 0) {
    //    MyAssert(0, 3562);
    //}

    visibilityMap = new int[nTiles];
    memset(visibilityMap, 0x00, sizeof(int)*nTiles);
    nRequestedCells = new int[nChunks];
    memset(nRequestedCells, 0x00, sizeof(int)*nChunks);

    //startup time with the same quality, if adaptive, use quality 1
    if (nQuality == -1) {
        nQuality = 1;
    }

    //TODO loop with sleep
    while (1) {
        if (nextChunkID == 0) {
            firstRequestTime = NDKGetTime();
            //requestTime[nextChunkID] = NDKGetTime();
            //VIDEO_COMM::SendMessage_RequestChunk((WORD) nextChunkID, (WORD) tileID, 0, 0, 0);
            for (int i = 0; i < startupChunks; i++) {
                BatchRequestAllCells(nextChunkID, 1, nQuality);
                //VIDEO_COMM::SendMessage_RequestChunk((WORD)nextChunkID, (WORD)tileID, nQuality, 0, 0);
                nInTransitChunks += 1;
                nextChunkID += 1;
                //usleep(30000);
                std::this_thread::sleep_for(std::chrono::milliseconds(30));
            }
        }
        else {
            //usleep(10000);
            std::this_thread::sleep_for(std::chrono::milliseconds(30));
        } // sleep 10ms

        //if (nextFrame >= nChunks) {
        //    InfoMessage("Exiting scheduler");
        //    std::this_thread::sleep_for(std::chrono::seconds(100));
        //    break;
        //}
    }

    //clean up
    delete [] visibilityMap;

    delete [] receivedChunks;
    receivedChunks = NULL;
    //pthread_mutex_destroy(&downloadLock);

    thEst.Destroy();
    delete [] requestTime;
}

void VIDEO_SCHEDULER::MainLoop() {
    srand((unsigned int)time(NULL));
    PERF_METRICS::Init();
    //tileArrivalTime = new double[VIDEO_DATA::nChunks * VIDEO_DATA::nTiles];

    //heuristic: set to nTiles * 2
    dtSamplesLimit = VIDEO_DATA::nTiles * 2;
    dtSamplePos = dtSum = 0;
    dtSamples = new int[dtSamplesLimit];
    memset(dtSamples, 0xFF, sizeof(int) * dtSamplesLimit);
    decodingPenalty = 0.0f;

    switch (dashAlg) {
        case ALG_VIVO:
            ViVoScheduler();
            break;

        case ALG_FESTIVE:
            VIDEO_SCHEDULER_FESTIVE::FestiveScheduler();
            break;

        default:
            MyAssert(0, 3820);
    }
}





const int VIDEO_SCHEDULER_FESTIVE::BUFFER_LENGTH = 30;
int VIDEO_SCHEDULER_FESTIVE::nextChunkID = 0;
int VIDEO_SCHEDULER_FESTIVE::startupChunks = 0;
int VIDEO_SCHEDULER_FESTIVE::nReceivedChunks = 0;
int VIDEO_SCHEDULER_FESTIVE::nReceivedBytes = 0;
int VIDEO_SCHEDULER_FESTIVE::nDisplayedChunks = 0;
int VIDEO_SCHEDULER_FESTIVE::nInTransitChunks = 0;
double * VIDEO_SCHEDULER_FESTIVE::requestTimeFestive = NULL;
FESTIVE_THROUGHPUT_ESTIMATOR VIDEO_SCHEDULER_FESTIVE::thEstFestive;
//pthread_mutex_t VIDEO_SCHEDULER_FESTIVE::downloadLock;
mutex VIDEO_SCHEDULER_FESTIVE::downloadLock;

int FESTIVE_THROUGHPUT_ESTIMATOR::sampleID = 0;

void FESTIVE_THROUGHPUT_ESTIMATOR::Init() {
    int nChunks = VIDEO_DATA::nChunks;
    sampleID = 0;

    curEst = -1;
    Festive_dl_throughput = new double[nChunks];
    memset(Festive_dl_throughput, 0, sizeof(double) * nChunks);
}

void FESTIVE_THROUGHPUT_ESTIMATOR::Destroy() {
    delete [] Festive_dl_throughput;
}

//now is the clock time in sec, dataLen in bytes
void FESTIVE_THROUGHPUT_ESTIMATOR::OnNewData(int chunkID, double request_time, double now, int dataLen) {
    double rtt = 6.0;
    double airTime = 0.0f;
    if (now - request_time > rtt)
        airTime = now - request_time - rtt;
    else airTime = now - request_time;
    //if (dataLen < 60000) {
    //    airTime = 1.0;
    //}
    double v = airTime;//dataLen / airTime * 1000.0;
    //InfoMessage("New sample data (%d): %.3lf %.3lf %.3lf %.3lf %d", chunkID, v * 8 / 1024 / 1024, now, request_time, airTime, dataLen);
    OnNewSample(chunkID, v);
}

void FESTIVE_THROUGHPUT_ESTIMATOR::OnNewSample(int chunkID, double est) {
    Festive_dl_throughput[sampleID % FESTIVE_SAMPLES] = est;

    const float alpha  = 0.125f;
    if (curEst < -0.5f) {
        curEst = est;
        InfoMessage("sampleID = %d est = %.3lf curEst=%.3lf", chunkID, est, curEst * 8 / 1024 / 1024);
        UE_LOG(TEST, Log, TEXT("sampleID = %d est = %.3lf curEst=%.3lf"), chunkID, est, curEst * 8 / 1024 / 1024);

    }
    else if ((sampleID + 1 ) < FESTIVE_SAMPLES) {
        //curEst = est;
        curEst = est * alpha + curEst * (1 - alpha);
        InfoMessage("sampleID = %d est = %.3lf curEst=%.3lf", chunkID, est, curEst * 8 / 1024 / 1024);
        UE_LOG(TEST, Log, TEXT("sampleID = %d est = %.3lf curEst=%.3lf"), chunkID, est, curEst * 8 / 1024 / 1024);

    }
    else {
        double harmonic_mean = 0;

        for (int index = 0; index < FESTIVE_SAMPLES; index++)
            harmonic_mean += 1.0 / Festive_dl_throughput[index];

        curEst = FESTIVE_SAMPLES / harmonic_mean;
        InfoMessage("sampleID = %d est = %.3lf curEst=%.3lf", chunkID, est, curEst * 8 / 1024 / 1024);
        UE_LOG(TEST, Log, TEXT("sampleID = %d est = %.3lf curEst=%.3lf"), chunkID, est, curEst * 8 / 1024 / 1024);

    }
    sampleID++;
}

//in bytes/sec
double FESTIVE_THROUGHPUT_ESTIMATOR::GetValue() {
    if (curEst < -0.0f)
        return 0.1f;
    else
        return curEst;
}

void VIDEO_SCHEDULER_FESTIVE::OnReceiveChunks(int chunkID, int tileID, int cls, int quality, int size, int bLast, double t) {
    BYTE * p = &receivedChunks[chunkID * VIDEO_DATA::nTiles + tileID];
    //MyAssert(*p == 0xFF, 3507);
    *p = (BYTE)quality;

    //VIDEO_COMM::OnChunkReceived(chunkID);// 
    //InfoMessage("Transmission time for Frame %d %.3lf", chunkID, NDKGetTime() - requestTimeFestive[chunkID]); // record arriving time

    //TODO: check race condition for thEst???
    //throughput estimation
    //thEst.OnNewData(NDKGetTime(), size, bLast);

    nInTransitChunks--;
    nReceivedChunks++;
    if(nReceivedChunks >= startupChunks) {
        bStartup = 0;
    }

    thEstFestive.OnNewData(chunkID, requestTimeFestive[chunkID], t, size);

    //TODO time for the first bit
    /*
    if ((chunkID + 1) % FPS == 0 ){
        thEstFestive.OnNewData(requestTimeFestive[chunkID + 1 - FPS], t, nReceivedBytes);
        nReceivedBytes = 0;
        //FestiveFetchNextChunk();
    }
    else nReceivedBytes += size;
    */
}

void VIDEO_SCHEDULER_FESTIVE::OnNextFrame(int nextFrame_in, float lat, float lon) {
    VIDEO_SCHEDULER::nextFrame = nextFrame_in;
    VIDEO_SCHEDULER::curLat = lat;
    VIDEO_SCHEDULER::curLon = lon;

    //TODO frame per second?
    //InfoMessage("nextFrame %d", nextFrame);
    if (nextFrame_in != 1 && (nextFrame_in - 1) % FPS == 0) {
        nDisplayedChunks++;
        FestiveFetchNextChunk();
    }
}

void VIDEO_SCHEDULER_FESTIVE::OnNextFrame(int nextFrame_in) {
    VIDEO_SCHEDULER::nextFrame = nextFrame_in;

    //TODO frame per second?
    //InfoMessage("nextFrame %d", nextFrame);

    nDisplayedChunks++;

    //if (nextFrame % FPS == 0) {
        FestiveFetchNextChunk();
    //}
}

void VIDEO_SCHEDULER_FESTIVE::BatchRequest(int chunkID, int frames, int quality) {

    VIDEO_COMM::SendMessage_RequestChunk(chunkID, 0, quality, 0, 0);

    /*
    int nChunks = VIDEO_DATA::nChunks;

    int nFrames = 0;
    if (chunkID + frames > nChunks) nFrames = nChunks - chunkID;
    else nFrames = frames;

    int reqLen = nFrames * 5 + 9;
    int seqnum = 0;
    BYTE * batchedRequest = VIDEO_COMM::vms.AllocateBlock(reqLen);
    batchedRequest[0] = MSG_BATCH_REQUESTS;
    WriteInt(batchedRequest + 1, reqLen);
    WriteInt(batchedRequest + 5, seqnum);
    BYTE * pCurTile = batchedRequest + 9;

    //now sendout the requests
    int tileID = 0;
    for (int i = 0; i < nFrames; i++) {
        WriteWORD(pCurTile, (WORD) (chunkID + i));
        WriteWORD(pCurTile + 2, (WORD) tileID);
        pCurTile[4] = (BYTE)quality;
        pCurTile += 5;
    }

    VIDEO_COMM::SendMessage_BatchedRequest(batchedRequest);
    */
}

void VIDEO_SCHEDULER_FESTIVE::FestiveFetchNextChunk() {
    //pthread_mutex_lock(&downloadLock);
    unique_lock<mutex> lck(downloadLock);

    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;
    int nQualities = VIDEO_DATA::nQualities;
    int gopSize = VIDEO_DATA::gopSize;

    MyAssert(nQualities < VIDEO_DATA::MAX_QUALITIES &&
             nTiles < MAX_TILES &&
             nClasses < MAX_CLASSES, 3496);

    int tileID = 0;

    MyAssert(nextChunkID != 0, 3900);

    if (nextChunkID >= nChunks) {
        //pthread_mutex_unlock(&downloadLock);
        lck.unlock();
        return;
    }

    //get the throughput estimation. The unit is byte/sec
    //double thEstimation = thEstFestive.GetValue() * 0.85;
    double thEstimation = thEstFestive.GetValue();

    int indexQuality;
    for (indexQuality = 0; indexQuality < nQualities; indexQuality++) {
        //TODO quality in bitrate in Mbps
        if (VIDEO_DATA::curBitrateUtility[indexQuality] > (thEstimation * 8 / 1024 / 1024)) break;
    }

    indexQuality--;
    if (indexQuality < 0) indexQuality = 0;
    if (nQuality != -1) {
        //InfoMessage("Fixed quality at %d", nQuality);
        indexQuality = nQuality;   
    }

    //TODO seqnum = 0, each chunk will be requested only once
    //TODO-HB: need to set the threshold for nInTransitChunks dynamically
    //if (nextChunkID < nChunks && nReceivedChunks - nDisplayedChunks + nInTransitChunks <= BUFFER_LENGTH && nInTransitChunks <= 3) {
    if (nextChunkID < nChunks && nReceivedChunks - nDisplayedChunks + nInTransitChunks <= BUFFER_LENGTH && nInTransitChunks <= 30) {
        InfoMessage("fetch next chunk %d with quality %d (buffer length %d in-transit chunks %d)", nextChunkID, indexQuality, nReceivedChunks - nDisplayedChunks, nInTransitChunks);
        requestTimeFestive[nextChunkID] = NDKGetTime();
        //VIDEO_COMM::SendMessage_RequestChunk((WORD)nextChunkID, (BYTE)tileID, (BYTE)indexQuality, 0, 0);
        BatchRequest(nextChunkID, 1, indexQuality);
        nInTransitChunks += 1;
        nextChunkID += 1;
    }
    //else InfoMessage("nextChunkID %d nChunks %d nReceivedChunks %d nDisplayedChunks %d BUFFER LENGTH %d", nextChunkID, nChunks, nReceivedChunks, nDisplayedChunks, BUFFER_LENGTH);

    //pthread_mutex_unlock(&downloadLock);
    lck.unlock();
}

void VIDEO_SCHEDULER_FESTIVE::FestiveScheduler() {
    int nChunks = VIDEO_DATA::nChunks;
    int nTiles = VIDEO_DATA::nTiles;

    int tileID = 0;

    requestTimeFestive = new double[nChunks];
    memset(requestTimeFestive, 0, sizeof(double) * nChunks);

    thEstFestive.Init();
    nextChunkID = 0;
    nReceivedChunks = 0;
    bStartup = 1;

    STARTUP_DELAY = 1;
    startupChunks = STARTUP_DELAY * FPS*0.5;

    receivedChunks = new BYTE[nTiles * nChunks];
    memset(receivedChunks, 0xFF, (size_t)(nTiles * nChunks));

    //if (pthread_mutex_init(&downloadLock, NULL) != 0) {
    //    MyAssert(0, 3562);
    //}

    //startup time with the same selected quality, if adaptive, use quality = 1
    if (nQuality == -1) {
        nQuality = 1;
    }

    //TODO loop with sleep
    while (1) {
        if (nextChunkID == 0) {
            firstRequestTime = NDKGetTime();
            //VIDEO_COMM::SendMessage_RequestChunk((WORD) nextChunkID, (WORD) tileID, 0, 0, 0);
            for (int i = 0; i < startupChunks; i++) {
                requestTimeFestive[nextChunkID] = NDKGetTime();
                BatchRequest(nextChunkID, 1, nQuality);
                nInTransitChunks += 1;
                nextChunkID += 1;

                //usleep(30000);
                std::this_thread::sleep_for(std::chrono::milliseconds(30));
            }
        }
        else {
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        } // sleep 10ms


        /*
        int slotID = ENCODED_BUFFER::pQSInt[QSHARE_SLOT_CUR_HMP] + 1;
        if (slotID >= QSHARE_HMP_SLOTS) slotID = 0;
        int * pSlot = ENCODED_BUFFER::pQSInt + QSHARE_SLOT_HMP_BEGIN + QSHARE_HMP_SIZE * slotID;
        int slotEntryCount = 0;

        int fromChunk = nextFrame / VIDEO_DATA::gopSize;
        int toChunk = fromChunk + 2; //set it to 2 (instead of LOOKFORWARD_WIN) to save tile cache slots
        if (toChunk >= VIDEO_DATA::nChunks) toChunk = VIDEO_DATA::nChunks - 1;
        for (int i = fromChunk; i <= toChunk; i++) {
            if (ENCODED_BUFFER::pMap[i] >= 0 && ENCODED_BUFFER::pMap[i] < 0xFFFFFFF) {
                pSlot[slotEntryCount++] = i;
            }
        }

        pSlot[slotEntryCount] = -1;
        ENCODED_BUFFER::pQSInt[QSHARE_SLOT_CUR_HMP] = slotID;
        */

        /*
        if (nextChunkID > nChunks)
            break;
        */
        if (nextFrame >= nChunks) {
            InfoMessage("Exiting scheduler");
            break;
        }
    }

    //clean up
    delete [] receivedChunks;
    receivedChunks = NULL;
    //pthread_mutex_destroy(&downloadLock);

    thEstFestive.Destroy();
    delete [] requestTimeFestive;
}
