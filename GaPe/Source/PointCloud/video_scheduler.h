//#include <pty.h>
#define _HAS_STD_BYTE 0
#include "hmp.h"
#include "FrustumG.h"
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>

#include "settings.h"

#ifndef VIVO_VIDEO_SCHEDULER_H
#define VIVO_VIDEO_SCHEDULER_H

#endif //VIDEO360PLAYER_VIDEO_SCHEDULER_OTHER_H


class FESTIVE_THROUGHPUT_ESTIMATOR {
private:
    static const int FESTIVE_SAMPLES = 20;
    static int sampleID;

private:
    double curEst;
    double * Festive_dl_throughput;

private:
    void OnNewSample(int chunkID, double est);

public:
    void Init();
    void Destroy();
    void OnNewData(int chunkID, double request_time, double now, int dataLen);
    double GetValue();

};


struct VIDEO_SCHEDULER {


public:
    //these must be identical to those defined in Config.java
    static const int ALG_VIVO = 0;
    static const int ALG_FESTIVE = 1;


public:
    static int tileRecvCounter;
    static int * nRequestedCells;

public:
    static int bFoV;
    static int FOVX;
    static int FOVY;
    static float aspectRatio;
    static int dashAlg;
    static int predictAlg;
    static int nDecoders;
    static int FPS;
    static int nQuality;

public:
    //limits
    static const int MAX_TILES = 7001;
    static const int MAX_CLASSES = 5;

    static const int LOOKFORWARD_WIN = 3;  //in chunks
    static const int CHUNK_DURATION  = 1000;  //in ms
    static const int HMP_INTERVAL    = 100;   //in ms
    static const int HMP_COUNT       = (CHUNK_DURATION * LOOKFORWARD_WIN) / HMP_INTERVAL + 1;

public:
    //for decoding time measurement
    static void NewDecodingTimeSample(int ms);
    static int dtSamplesLimit;
    static int * dtSamples;
    static int dtSum;
    static int dtSamplePos;
    static double decodingPenalty;
    static int nDisplayedChunks; //Nan 20221223


    /*
    //for queueing time measurement
    static double * tileArrivalTime;
    static void NewTileQueueingTimeSample(int chunkID, int tileID);
    static double totalQueueingTime;
    static double avgQueueingTime;
    static int nQueueingTimeSamples;
    */


private:
    //parameters
    static const float HMP_CHUNK_INTERVAL;

private:
    //parameters
    static float weightClass[MAX_CLASSES];
    static float weightInterChunkSwitch;
    static float weightInterClassSwitch;
    static float weightInterTileSwitch;
    static float ALPHA_FOV_SIMILARITY_EWMA;
    static float RESERVE_BW_RATIO_LB;
    static float RESERVE_BW_RATIO_UB;
    static float OOS_DEGREE;

    static const int BUFFER_LENGTH;
    static int nextChunkID;
    static int recvCells;
    static int startupChunks;
    static int nReceivedChunks;
    static int nReceivedBytes;
    
    static int nInTransitChunks;
    static double * requestTime;
    static FESTIVE_THROUGHPUT_ESTIMATOR thEst;

    static FrustumG frustum;
    static int * visibilityMap;

    static long nDownloadedCells;

    //static pthread_mutex_t downloadLock;
    static std::mutex downloadLock;

public:
    static std::vector<HMPredict *> predictors;
    static void RemoveAllHMP();
    static void AddHMP(HMPredict * pPredict);

    static const int FOV_ROWS = 361*181;
    static int nClasses;     //# classes, class ID starts at 0 (the FoV part)
    static BYTE * classes;   //[FOV_ROWS] rows, each row has [nClasses] numbers representing # tiles for each class *CUMULATIVELY*
    static BYTE * ranks;     //[FOV_ROWS] rows, each row [nTiles] tiles ranked from most to least important

    //HMP results, starting from the *current* head position (i.e., [0] is not the predicted one)
    static const int MAX_PREDICTORS = 3;
    static float HMP_lat[MAX_PREDICTORS][HMP_COUNT];
    static float HMP_lon[MAX_PREDICTORS][HMP_COUNT];

    static BYTE * receivedChunks;       //bitmap storing qualities of received chunks (unreceived = 0xFF)
    static int nReceivedTiles;
    static int bStartup;
    static int STARTUP_DELAY;   //in second
    static double firstRequestTime;
    static int* CPU_Time;

private:

    static int fetchK;

    static float FovSimilarity(float lat1, float lon1, float lat2, float lon2);

private:
    static void InitParameters();
    static void EnumerateQualities(int * stack, BYTE * qq, int * nCombs, int level, int from);
    static int SatisfyBandwidth(int size, float startChunkTime, float endChunkTime, float dampRatio);

private:
    //static void SimpleScheduler(int bFoV);
    static void ViVoScheduler();
    //static void CalculateUtility(TILE_CLASS * pTC);
    static void GenerateFoVMasks(int * pData);

    static void ViVoFetchNextChunk();
    static void BatchRequestCells(int chunkID, int iniQuality);
    static void BatchRequestAllCells(int chunkID, int nReqChunks, int quality);
    static void BatchRequest_gaze(int chunkID, int nReqChunks, int quality);
    static void BatchRequest_gaze_90fps(int chunkID, int nReqChunks, int quality);

    

public:

    static void MainLoop();
    static void OnReceiveChunks(int chunkID, int tileID, int cls, int quality, int size, int bLast, double t);  //called when a new chunk is received
    static int CheckStartup();
    static void OnNextFrame(int nextFrame, float lat, float lon);
    static void OnNextFrame(int nextFrame);

//replay head movement trace
public:
    static float * replayLookAtMCenterX;
    static float * replayLookAtMCenterY;
    static float * replayLookAtMCenterZ;
    static float * replayYaw;
    static float * replayPitch;
    static float * replayRoll;
    static float * replayLookAtMEyeX;
    static float * replayLookAtMEyeY;
    static float * replayLookAtMEyeZ;

    static float* replayGazeCenterX;
    static float* replayGazeCenterY;
    static float* replayGazeCenterZ;
    static float* replayGazeDirX;
    static float* replayGazeDirY;
    static float* replayGazeDirZ;

    static float* replayGazeCenterX90fps;
    static float* replayGazeCenterY90fps;
    static float* replayGazeCenterZ90fps;
    static float* replayGazeDirX90fps;
    static float* replayGazeDirY90fps;
    static float* replayGazeDirZ90fps;

    static int replaySize;

public:
    static int nextFrame;
    static float curLat;
    static float curLon;
};




struct VIDEO_SCHEDULER_FESTIVE : VIDEO_SCHEDULER{

private:
    static const int BUFFER_LENGTH;
    static int nextChunkID;
    static int startupChunks;
    static int nReceivedChunks;
    static int nReceivedBytes;
    static int nDisplayedChunks;
    static int nInTransitChunks;
    static double * requestTimeFestive;

    static FESTIVE_THROUGHPUT_ESTIMATOR thEstFestive;
    //static pthread_mutex_t downloadLock;
    static std::mutex downloadLock;

private:
    static void FestiveFetchNextChunk();
    static void BatchRequest(int chunkID, int frames, int quality);

public:
    static void FestiveScheduler();
    static void OnReceiveChunks(int chunkID, int tileID, int cls, int quality, int size, int bLast, double t);
    static void OnNextFrame(int nextFrame, float lat, float lon);
    static void OnNextFrame(int nextFrame);
};