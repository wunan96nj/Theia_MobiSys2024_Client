#ifndef VPP_FRAME_BUFFER_H
#define VPP_FRAME_BUFFER_H

#include "common.h"

//initialized to -1
struct FRAME_META {
    int frameID;     //start with 0, can be used as an index
    int nPoints;
    int nDummyPoints;
    int offset;     //subscript in pointBuf/colorBuf, -1 indicates the frame is not yet available
};

struct FRAME_BUFFER {
    static const int GRP = 3;
    static int dataCapacity;     //size (GRP*float) of point/colorBuf
    static int metaCapacity;    //size (in FRAME_META)

    //the actual data (circular queue)
    static float * pointBuf;
    static float * colorBuf;

    //quick share
    static int * qShareInt;

    //meta data is also a queue (not circular though)
    //but its capacity must be larger than the total # of frames
    //this allows random access by using frameID as subscript
    static FRAME_META * metaData;

    //in the unit of GRP points
    static int dataHead;    //actual slot
    static int dataTail;    //next available slot
    static int dataSize;

    //in FRAME_DATA
    static int metaHead;
    static int metaTail;
    static int metaSize;

    //static jmethodID mid_onChunkAvailable;

    //static void Init(JNIEnv *env, jclass cls);
    static void Init();
    static void DequeueFrames(int upToFrame);     //recycle all data up to this frame
    static void EnqueueFrame(int frameID, int nPoints, BYTE * rawBuf);
    static void EnqueueFrame(int frameID, int nPoints, int nSize, BYTE * rawBuf);
};


#endif //VPP_FRAME_BUFFER_H
