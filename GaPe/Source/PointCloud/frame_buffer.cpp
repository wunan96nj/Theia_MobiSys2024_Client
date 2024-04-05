#include "frame_buffer.h"
#include <sstream>

//#include "common.h"
#include "tools.h"
#include "VideoCommunication.h"
#include "video_scheduler.h"
//#include "nativelib.h"
//#include "config.h"
using namespace std;

extern char baseDir[128];

//extern JNIEnv * pEnvNetwork;
//extern jclass jnativeClass;

int FRAME_BUFFER::dataCapacity;
int FRAME_BUFFER::metaCapacity;

float * FRAME_BUFFER::pointBuf;
float * FRAME_BUFFER::colorBuf;
FRAME_META * FRAME_BUFFER::metaData;

int FRAME_BUFFER::dataHead;
int FRAME_BUFFER::dataTail;
int FRAME_BUFFER::dataSize;

int FRAME_BUFFER::metaHead;
int FRAME_BUFFER::metaTail;
int FRAME_BUFFER::metaSize;

int * FRAME_BUFFER::qShareInt;

//jmethodID FRAME_BUFFER::mid_onChunkAvailable;

void FRAME_BUFFER::Init() {
    //TODO:check the order
//    VIDEO_SCHEDULER::replaySize = Config::MaxFrameSize;
//    MyAssert(VIDEO_SCHEDULER::replaySize > 0, 3586);
//    VIDEO_SCHEDULER::replayLookAtMCenterX = Config::replayLookAtMCenterX;
//    VIDEO_SCHEDULER::replayLookAtMCenterY = Config::replayLookAtMCenterY;
//    VIDEO_SCHEDULER::replayLookAtMCenterZ = Config::replayLookAtMCenterZ;
//    VIDEO_SCHEDULER::replayYaw = Config::replayYaw;
//    VIDEO_SCHEDULER::replayPitch = Config::replayPitch;
//    VIDEO_SCHEDULER::replayRoll = Config::replayRoll;
//    VIDEO_SCHEDULER::replayLookAtMEyeX = Config::replayLookAtMEyeX;
//    VIDEO_SCHEDULER::replayLookAtMEyeY = Config::replayLookAtMEyeY;
//    VIDEO_SCHEDULER::replayLookAtMEyeZ = Config::replayLookAtMEyeZ;
//    InfoMessage("User Trace steps:%d",VIDEO_SCHEDULER::replaySize);

    // verify replay data
//    for(int i = 0; i < VIDEO_SCHEDULER::replaySize; i++){
//        printf("%d,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",i+1,VIDEO_SCHEDULER::replayLookAtMEyeX[i],VIDEO_SCHEDULER::replayLookAtMEyeY[i],VIDEO_SCHEDULER::replayLookAtMEyeZ[i],
//               VIDEO_SCHEDULER::replayYaw[i],VIDEO_SCHEDULER::replayPitch[i],VIDEO_SCHEDULER::replayRoll[i],VIDEO_SCHEDULER::replayLookAtMEyeX[i],VIDEO_SCHEDULER::replayLookAtMCenterY[i],VIDEO_SCHEDULER::replayLookAtMCenterZ[i]);
//    }

//    pointBuf = (float *)nativelib::pointBufferRaw;
//    MyAssert(pointBuf != NULL, 3448);
//
//    colorBuf = (float *)nativelib::colorBufferRaw;
//    MyAssert(colorBuf != NULL, 3448);
//
//    MyAssert(sizeof(FRAME_META) == 16, 3462);
//    metaData = (FRAME_META *)nativelib::frameMetaBufferRaw;
//    MyAssert(metaData != NULL, 3448);
//
//    dataCapacity = ReadInt((BYTE *)pointBuf);
//    metaCapacity = ReadInt((BYTE *)metaData);
//    InfoMessage("DataCapacity:%d,MetaCapacity:%d",dataCapacity,metaCapacity);

//    MyAssert(
//            metaData[0].frameID == metaCapacity &&
//            metaData[0].nPoints == -1 &&
//            metaData[0].nDummyPoints == -1 &&
//            metaData[0].offset == -1, 3985
//    );

    for (int i=0; i<metaCapacity; i++) {
        metaData[i].nDummyPoints = 0;
        metaData[i].offset = -1;    //flag, frame not available
    }

    dataHead = metaHead = 0;
    dataTail = metaTail = 0;
    dataSize = metaSize = 0;

}




void FRAME_BUFFER::DequeueFrames(int upToFrame) {
    if (upToFrame <= 0) return;
    while (metaSize > 0) {
        int frameID      = metaData[metaHead].frameID;
        int nPoints      = metaData[metaHead].nPoints;
        int nDummyPoints = metaData[metaHead].nDummyPoints;

        if (frameID <= upToFrame) {
            metaSize--;
            if (++metaHead >= metaCapacity) {
                MyAssert(0, 3980);
                //metaHead = 0;
            }

            dataSize -= (nPoints + nDummyPoints);
            if (dataSize < 0) InfoMessage("%d %d %d %d %d %d %d %d %d", frameID, nPoints, nDummyPoints, metaSize, metaHead, metaCapacity, dataSize, dataHead, dataCapacity);
            MyAssert(dataSize >= 0, 3967);

            dataHead += (nPoints + nDummyPoints);
            if (dataHead >= dataCapacity) dataHead -= dataCapacity;
        } else break;
    }
}

void FRAME_BUFFER::EnqueueFrame(int frameID, int nPoints, BYTE * rawBuf) {
    //raw data format
    //n * GRP numbers (unsigned short): x, y, z
    //n * GRP numbers (BYTE): color

    unsigned short*rawPoint = (unsigned short*) rawBuf;
    BYTE *rawColor = rawBuf + sizeof(unsigned short) * nPoints * GRP;

    if (!(dataCapacity - dataSize > nPoints && metaCapacity - metaSize > 1))
        InfoMessage("%d %d %d %d %d", dataCapacity, dataSize, nPoints, metaCapacity, metaSize);
    MyAssert(dataCapacity - dataSize > nPoints && metaCapacity - metaSize > 1, 3968);

    if (dataCapacity - dataTail < nPoints) {
        //change nDummyPoints for the last inserted frame
        int prevTail = metaTail - 1;
        MyAssert(prevTail >= 0, 3983);

        FRAME_META &fm = metaData[prevTail];
        MyAssert(fm.offset != -1 && fm.nDummyPoints == 0, 3984);
        fm.nDummyPoints = dataCapacity - dataTail;

        dataTail = 0;
        dataSize += fm.nDummyPoints;

        MyAssert(dataCapacity - dataSize > nPoints, 3969);
    }

    /*
    char logName[128];
    char logLine[2014];
    FILE *ofs = NULL;
    if (frameID == 750) {
        sprintf(logName, "%spoints.log", baseDir);
        InfoMessage("%s %d", logName, nPoints);
        ofs = fopen(logName, "w");
        MyAssert(ofs != NULL, 4009);
    }
    */

    int nn = nPoints * GRP;
    for (int i=0,j=dataTail*GRP; i<nn; i++, j++) {
        //positions
        pointBuf[j] = (short)rawPoint[i] / 1000.0f;
        colorBuf[j] = rawColor[i] / 255.0f;

        /*
        if (frameID == 750) {
            sprintf(logLine, "%.3lf %.3lf \n", pointBuf[j], colorBuf[j]);
            //InfoMessage("%s", logLine);
            fputs(logLine, ofs);
        }
        */
    }

    //if (frameID == 750) fclose(ofs);

    FRAME_META & fm = metaData[metaTail];
    fm.nPoints = nPoints;
    fm.frameID = frameID;
    fm.nDummyPoints = 0;
    fm.offset = dataTail;   //the offset field must be set last, use it as a flag to indicate the frame availability

    dataTail += nPoints;
    dataSize += nPoints;
    if (dataTail >= dataCapacity) dataTail -= dataCapacity;

    if (++metaTail >= metaCapacity) {
        MyAssert(0, 3982);
        //metaTail -= metaCapacity;
    }
    metaSize++;

    //pEnvNetwork->CallStaticVoidMethod(jnativeClass, mid_onChunkAvailable, frameID);
}

void FRAME_BUFFER::EnqueueFrame(int frameID, int nPoints, int nSize, BYTE * rawBuf) {
    std::string strCompressed(&rawBuf[CHUNK_HEADER_LEN], &rawBuf[CHUNK_HEADER_LEN] + nSize - CHUNK_HEADER_LEN);
    std::stringstream compressedData;
    compressedData.str(strCompressed);

    MyAssert(dataCapacity - dataSize > nPoints && metaCapacity - metaSize > 1, 3968);

    if (dataCapacity - dataTail < nPoints) {
        //change nDummyPoints for the last inserted frame
        int prevTail = metaTail - 1;
        MyAssert(prevTail >= 0, 3983);

        FRAME_META & fm = metaData[prevTail];
        MyAssert(fm.offset != -1 && fm.nDummyPoints == 0, 3984);
        fm.nDummyPoints = dataCapacity - dataTail;

        dataTail = 0;
        dataSize += fm.nDummyPoints;

        MyAssert(dataCapacity - dataSize > nPoints, 3969);
    }


    FRAME_META & fm = metaData[metaTail];
    fm.nPoints = nPoints;
    fm.frameID = frameID;
    fm.nDummyPoints = 0;
    fm.offset = dataTail;   //the offset field must be set last, use it as a flag to indicate the frame availability

    dataTail += nPoints;
    dataSize += nPoints;
    if (dataTail >= dataCapacity) dataTail -= dataCapacity;

    if (++metaTail >= metaCapacity) {
        MyAssert(0, 3982);
        //metaTail -= metaCapacity;
    }
    metaSize++;
}
