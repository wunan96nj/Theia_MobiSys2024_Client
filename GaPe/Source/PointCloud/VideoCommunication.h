// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define _HAS_STD_BYTE 0
#include "CoreMinimal.h"


/**
 * 
 */
class POINTCLOUD_API VideoCommunication
{
public:
	VideoCommunication();
	~VideoCommunication();
};

#ifndef _VIDEO_COMM_H_
#define _VIDEO_COMM_H_

//#include <jni.h>
#include "settings.h"

#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>
//using namespace std;

# define M_PI           3.14159265358979323846  /* pi */

#define CHUNK_HEADER_LEN 15

#define MAX_POINT_CLOUD_SIZE 302500

struct VIDEO_MESSAGE {
    BYTE id;

    int msgLen;
    BYTE* pData;
};

//for small messages
struct VIDEO_MESSAGE_STORAGE {
    static const int limit = 1024 * 1024;
    BYTE* data;

    int size;
    int head;
    int tail;

    VIDEO_MESSAGE_STORAGE();
    ~VIDEO_MESSAGE_STORAGE();

    void ReleaseBlock(BYTE* pData, int len);
    BYTE* AllocateBlock(int len);
};





//messages have a common header of 5 bytes (1B: ID + 4B: tot Len)

//over control channel
#define MSG_SELECT_VIDEO 1  //client->server
//ID (1 byte)                 0
//len (4B) = xx + 11          1
//bwID (2 byte)               5
//damp (2 byte)               7
//tileXMitMode (2 byte)       9
//the video name (xx bytes)   11 //including the trailing 0x0

#define MSG_REQUEST_CHUNK 2 //client->server
//ID (1 byte)    0
//len (4B) = 15  1
//chunk_id (2B)  5
//tile_id (2B)   7
//quality (1B)   9
//seqnumber (4B) 10
//flag (1B)      14 (reserved for future uses, 0 for now)

#define MSG_VIDEO_METADATA 3  //server->client
//ID (1 byte)	 0
//len (4B) = xx	 1
//nChunks (4B)	 5
//nTilesX (4B)	 9
//nTilesZ (4B)	 13
//nQualities (4) 17
//gopSize (4)	 21
//tileWidth (4)  25
//tileHeight (4) 29
//encoded meta data 33

#define MSG_BATCH_REQUESTS 4
//ID (1 byte)	 0
//len (4B) = XX  1
//seqnumber (4B) 5
//lists of tiles (5B*x) 9
//{chunk_id 2B, tileID 1B, quality 1B, class 1B}

//over data channel
#define MSG_VIDEO_DATA 5 //server->client
//ID (1 byte)     0
//len (4B) = ??   1
//chunk_id (2B)   5
//tile_id (2B)    7   
//quality (1B)    9
//seqnumber (4B) 10 //not available in LB mode
//flag (1B)		 14 //fornow, 1=more data coming form the sending queue, 0=end of sending queue (for now)
//encoded frame size (4*gopSize) 15
//actual data    15+4*gopSize

//over data channel
#define MSG_GAZE_BATCH_REQUESTS 6 //server->client
//ID (1 byte)	 0
//len (4B) = XX  1
//seqnumber (4B) 5
//lists of tiles (5B*x) 9
//{chunk_id 2B, tileID 1B, quality 1B, class 1B}
//actual data    15+4*gopSize

#define MSG_VIDEO_DATA_DYNAMIC 7

struct MESSAGE_QUEUE {
    int head;
    int tail;
    int size;

    VIDEO_MESSAGE* data;

    MESSAGE_QUEUE();

    ~MESSAGE_QUEUE();

    void Enqueue(VIDEO_MESSAGE* pm);

    int GetSize();

    int Dequeue(VIDEO_MESSAGE* pm);

    VIDEO_MESSAGE* GetHead();
};


struct VIDEO_COMM {

    
    //static FCriticalSection msgQueueLock;
    //static pthread_mutex_t msgQueueLock;
    static std::mutex msgQueueLock;
    static FCriticalSection msgQueueLockCS;

    static std::queue<BYTE*> msgQueue;

    static std::mutex decodeFrameLock;

    //static pthread_cond_t msgQueueCond;
    //static FSemaphore(1) msgQueueCond;
    //static FEvent msgQueueCond;
    static std::condition_variable msgQueueCond;
    static std::mutex enqueueFrameLock;

    static FCriticalSection enqueueFrameLockCS;
    static FEvent* msgQueueEvent;

    //static pthread_cond_t msgChunkCond;
    //static FEvent msgChunkCond;
    static std::condition_variable msgChunkCond;
    static std::condition_variable msgRenderCond;

    static FEvent* msgChunkEvent;
    static FEvent* msgRenderEvent;

    class UZMQServerThread;

public:
    static int bw;  //bandwidth trace
    static int bwDamp;  //damp in percentage (5 to 100)
    static int videoID;
    static int userID;
    static int tileXMitMode;
    static int dynamicFrame;

    static int pre_outter_idx;
    static int theta_bins;
    static int inner_point_idx;


private:
    static int recvBufferCapacity;

public:
    static int mode;
    static struct pollfd peers[1];
    static int fds[1];    //fd[0] is used as control channel
    static VIDEO_MESSAGE_STORAGE vms;



    //static void Init(int priorityMode, JNIEnv *env, jclass cls);
    static void Init(int priorityMode, int nDecoders, int dashAlg);

    static int ConnectionSetup(const char* remoteIP, int serverPort);

    static void TransmitMessages();

    static int TransmitMessage_Core(int pri, int bXmitOneMsg);

    static void ReceiveMessage();

    static void SendMessage_SelectVideo(const char* name);

    static void SendMessage_RequestRandomChunk();

    static void SendMessage_RequestChunk(WORD chunkID, WORD tileID, BYTE quality, BYTE cls, int seqnum);

    static void SendMessage_BatchedRequest(BYTE* msg);

    static void SendMessage_BatchedGAZERequest(BYTE* msg);
    

    static void MainLoop();

    static void OnPlayed(int frameID);
    //    static void OnChunkReceived(int frameID);

private:

    static int sendingPri;
    static int sentBytes;    //how many bytes of the *current* (head) msg have been sent?
    static int rcvdBytes;    //how many bytes of the *current* (head) msg have been received?

    static MESSAGE_QUEUE sendMsgQueue[SETTING_MAX_PRIORITY + 1];
    static VIDEO_MESSAGE rcvdMsg;
    static BYTE* pDataRcvdMsg;

    static int msgDecoderCounter;
    //static pthread_mutex_t enqueueFrameLock;
    //static FCriticalSection enqueueFrameLock;


    //static float pointBuf[MAX_POINT_CLOUD_SIZE * 3];
    static float* pointBuf; // = (float*)malloc(302500 * 3 * sizeof(float));
    static uint8_t* colorBuf; //  = (float*)malloc(302500 * 3 * sizeof(float));

    static float* pointSizeBuf; //  = (float*)malloc(302500 * 3 * sizeof(float));

    //static uint8_t colorBuf[MAX_POINT_CLOUD_SIZE * 3];
    //static float pointSizeBuf[MAX_POINT_CLOUD_SIZE];

    static void ProcessMessage(VIDEO_MESSAGE* pM);

    static void SendMessage_Core(VIDEO_MESSAGE* pM);

    static int xmitCounter;

    static int priMode;

    //static jmethodID mid_onChunkAvailable;
    //static jmethodID mid_onChunkReceived;

private:

    static int curFrameID;
    static int cloudX[MAX_POINT_CLOUD_SIZE];
    static int cloudY[MAX_POINT_CLOUD_SIZE];
    static int cloudZ[MAX_POINT_CLOUD_SIZE];
    static int cloudR[MAX_POINT_CLOUD_SIZE];
    static int cloudG[MAX_POINT_CLOUD_SIZE];
    static int cloudB[MAX_POINT_CLOUD_SIZE];
    

    static int curPointCloudSize;
    static int curPointCloudSize_outer;
    static int curPointCloudSize_inner;
    static int curPointCloudSize_dynamic_inner;
    static double decodingTime;
    static uint64_t decodingTime_timestamp;

    static int nReceivedCells[SETTING_MAX_FRAMES];
    static int nRequestedCells[SETTING_MAX_FRAMES];

    static void DecompressFrame(int frameID, int* nPoints, int nSize, BYTE* dataBuf, int decoderIdx);
    static void* DecompressFrameThread(void* arg);
    static void AddtoPointCloud(int frameID, int tileID, int nPoints, int nSize, BYTE* dataBuf);
    static void* AddtoPointCloudThread(void* arg);
    static void* AddtoPointCloudThread_test(void* arg);
    static void GenerateFrame(int chunkID, int nPoints, BYTE* frameBuf);

public:
    static int totalBytes;
    static int wastedBytes; //a counter
    static void PrintStats();

    static double decodingTimeStart;
    static double decodingTimeTotal;
    static double decodingTimeTotal2;
    static bool bDecoding;
};

class VIDEO_COMM::UZMQServerThread : public FRunnable
{
public:

    UZMQServerThread();
    ~UZMQServerThread();

    virtual bool Init() override;
    virtual uint32 Run() override;
    virtual void Stop()override;
    virtual void Exit() override;
private:
    bool bStop;
    FRunnableThread* Thread;
};


#endif
