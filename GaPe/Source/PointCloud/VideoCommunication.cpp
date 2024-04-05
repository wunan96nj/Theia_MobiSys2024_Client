// Fill out your copyright notice in the Description page of Project Settings.


#include "VideoCommunication.h"

//#include <jni.h>
//#include "videocomm.h"
#include "videodata.h"
#include "tools.h"
//#include "encoded_buffer.h"       

#define NOMINMAX
#include "PointCloudRenderer.h"

#include "video_scheduler.h"
#include "logger.h"

#include "frame_buffer.h"
//#include "nativelib.h"
//#include "Player.h"

#include <sstream>
#include <WS2tcpip.h>
#include <winsock2.h>
#undef UpdateResource


#include <draco/point_cloud/point_cloud_builder.h>
#include <draco/compression/point_cloud/point_cloud_sequential_decoder.h>
#include <draco/compression/point_cloud/point_cloud_sequential_encoder.h>
#include <draco/compression/point_cloud/point_cloud_kd_tree_decoder.h>
#include <draco/compression/point_cloud/point_cloud_kd_tree_encoder.h>

#include "settings.h"
using namespace std;


//DEFINE_LOG_CATEGORY_STATIC(TEST, Log, All);


VideoCommunication::VideoCommunication()
{
}

VideoCommunication::~VideoCommunication()
{
}



using namespace draco;

int VIDEO_COMM::mode;
struct pollfd VIDEO_COMM::peers[1];
int VIDEO_COMM::fds[1];

int VIDEO_COMM::sentBytes;
MESSAGE_QUEUE VIDEO_COMM::sendMsgQueue[SETTING_MAX_PRIORITY + 1];
int VIDEO_COMM::sendingPri = -1;

int VIDEO_COMM::rcvdBytes;
VIDEO_MESSAGE VIDEO_COMM::rcvdMsg;
BYTE* VIDEO_COMM::pDataRcvdMsg = NULL;

int VIDEO_COMM::msgDecoderCounter = 0;
queue<BYTE*> VIDEO_COMM::msgQueue;


//FEvent msgChunkCond = FPlatformProcess::GetSynchEventFromPool();
//VIDEO_COMM::msgQueueCond.Trigger();
//pthread_mutex_t VIDEO_COMM::msgQueueLock = PTHREAD_MUTEX_INITIALIZER;
//pthread_cond_t VIDEO_COMM::msgQueueCond = PTHREAD_COND_INITIALIZER;
//pthread_mutex_t VIDEO_COMM::enqueueFrameLock = PTHREAD_MUTEX_INITIALIZER;
//pthread_cond_t VIDEO_COMM::msgChunkCond = PTHREAD_COND_INITIALIZER;

mutex VIDEO_COMM::msgQueueLock;
condition_variable VIDEO_COMM::msgQueueCond;

FCriticalSection VIDEO_COMM::msgQueueLockCS;
FEvent* VIDEO_COMM::msgQueueEvent = FPlatformProcess::GetSynchEventFromPool();

mutex VIDEO_COMM::decodeFrameLock;

mutex VIDEO_COMM::enqueueFrameLock;
FCriticalSection VIDEO_COMM::enqueueFrameLockCS;

condition_variable VIDEO_COMM::msgChunkCond;

condition_variable VIDEO_COMM::msgRenderCond;

FEvent* VIDEO_COMM::msgChunkEvent = FPlatformProcess::GetSynchEventFromPool();
FEvent* VIDEO_COMM::msgRenderEvent = FPlatformProcess::GetSynchEventFromPool();



//pthread_mutex_t VIDEO_COMM::triggerLock = PTHREAD_MUTEX_INITIALIZER;

int VIDEO_COMM::xmitCounter = 0;
VIDEO_MESSAGE_STORAGE VIDEO_COMM::vms;
int VIDEO_COMM::priMode;

//jmethodID VIDEO_COMM::mid_onChunkAvailable;
//jmethodID VIDEO_COMM::mid_onChunkReceived; 


int VIDEO_COMM::wastedBytes = 0;
int VIDEO_COMM::totalBytes = 0;

int VIDEO_COMM::bw = -1;
int VIDEO_COMM::bwDamp = -1;
int VIDEO_COMM::userID = -1;
int VIDEO_COMM::videoID = -1;
int VIDEO_COMM::tileXMitMode = -1;

int VIDEO_COMM::dynamicFrame=1;
int VIDEO_COMM::pre_outter_idx=0;
int VIDEO_COMM::theta_bins = 285;
int VIDEO_COMM::inner_point_idx = 174 * 285;


int VIDEO_COMM::recvBufferCapacity = -1;
int VIDEO_COMM::nRequestedCells[];

int VIDEO_COMM::curFrameID = 0;
int VIDEO_COMM::cloudX[MAX_POINT_CLOUD_SIZE];
int VIDEO_COMM::cloudY[MAX_POINT_CLOUD_SIZE];
int VIDEO_COMM::cloudZ[MAX_POINT_CLOUD_SIZE];
int VIDEO_COMM::cloudR[MAX_POINT_CLOUD_SIZE];
int VIDEO_COMM::cloudG[MAX_POINT_CLOUD_SIZE];
int VIDEO_COMM::cloudB[MAX_POINT_CLOUD_SIZE];
//float VIDEO_COMM::pointBuf[MAX_POINT_CLOUD_SIZE * 3];
//uint8_t VIDEO_COMM::colorBuf[MAX_POINT_CLOUD_SIZE * 3];
//float VIDEO_COMM::pointSizeBuf[MAX_POINT_CLOUD_SIZE];

float* VIDEO_COMM::pointBuf = (float*)malloc(MAX_POINT_CLOUD_SIZE * 3 * sizeof(float));
uint8_t* VIDEO_COMM::colorBuf = (uint8_t*)malloc(MAX_POINT_CLOUD_SIZE * 3 * sizeof(uint8_t));

float* VIDEO_COMM::pointSizeBuf = (float*)malloc(MAX_POINT_CLOUD_SIZE * sizeof(float));




int VIDEO_COMM::curPointCloudSize = 0;
int VIDEO_COMM::curPointCloudSize_outer = 0;
int VIDEO_COMM::curPointCloudSize_inner = 0;
int VIDEO_COMM::curPointCloudSize_dynamic_inner = 114000;

double VIDEO_COMM::decodingTime = 0.0f;
uint64_t VIDEO_COMM::decodingTime_timestamp = 0;

int VIDEO_COMM::nReceivedCells[];

double VIDEO_COMM::decodingTimeStart = 0.0f;
double VIDEO_COMM::decodingTimeTotal = 0.0f;
double VIDEO_COMM::decodingTimeTotal2 = 0.0f;
bool VIDEO_COMM::bDecoding = true;

//extern JNIEnv * pEnvNetwork;
//extern jclass jnativeClass;

//extern void CacheJNIEnv(JNIEnv * * ppEnv);




VIDEO_COMM::UZMQServerThread::UZMQServerThread() {
    bStop = false;
    Thread = FRunnableThread::Create(this, TEXT("ZMQBodyThread"), TPri_Highest);
}

void VIDEO_COMM::UZMQServerThread::Stop() {
    bStop = true;
}

void VIDEO_COMM::UZMQServerThread::Exit() {
}

VIDEO_COMM::UZMQServerThread::~UZMQServerThread()
{
    if (Thread) {
        delete Thread;
        Thread = nullptr;
    }
}

bool VIDEO_COMM::UZMQServerThread::Init()
{
    bool ret = true;
    bStop = false;
    return ret;
}

uint32 VIDEO_COMM::UZMQServerThread::Run()
{
    UE_LOG(TEST, Log, TEXT("Decoder %d is ready."), 0);
    //unique_lock<mutex> lck(msgQueueLock);

    FScopeLock lck(&msgQueueLockCS);
    //pthread_mutex_lock(&msgQueueLock);
    // 
    // 
    //JNIEnv * pEnvDecompress = NULL;
    //CacheJNIEnv(&pEnvDecompress);

    //jmethodID mid_onChunkAvailableLocal = pEnvDecompress->GetStaticMethodID(jnativeClass, "onChunkAvailable", "(I)V");
    //MyAssert(mid_onChunkAvailableLocal != NULL, 3446);
    
    int decoderIdx;
    msgDecoderCounter++;
    decoderIdx = msgDecoderCounter;
    //printf("Decoder #%d is ready.\n", msgDecoderCounter);
    UE_LOG(TEST, Log, TEXT("Decoder #%d is ready."), msgDecoderCounter);

    //pthread_mutex_unlock(&msgQueueLock);
    //lck.unlock();
    lck.Unlock();

    
    BYTE* pData = NULL;
    
    while (true) {
        
        //pthread_mutex_lock(&msgQueueLock);
        while (msgQueue.empty()) {
            //FPlatformProcess::Sleep(0.1);
            //msgQueueCond.wait(lck_msg);
            msgQueueEvent->Wait();

            //pthread_cond_wait(&msgQueueCond, &msgQueueLock);
        }
        UE_LOG(TEST, Log, TEXT("Not Empty now."));
        //unique_lock<mutex> lck_msg(msgQueueLock);
        FScopeLock lck_msg(&msgQueueLockCS);
        if (!msgQueue.empty()) {
            pData = msgQueue.front();
            //printf("Thread %d dequeue %p \n", decoderIdx, pData);
            msgQueue.pop();
        }
        lck_msg.Unlock();
        //pthread_mutex_unlock(&msgQueueLock);

        MyAssert(pData != NULL, 3401);

        uint64_t t = NDKGetTime();
        int dataLen = ReadInt(pData + 1) - CHUNK_HEADER_LEN;
        int chunkID = ReadWORD(pData + 5);
        int tileID = ReadWORD(pData + 7);
        int quality = pData[9];
        int cls = 0;
        int seqnum = ReadInt(pData + 10);
        BYTE bLast = pData[14]; //the flag
        //int num_points = ReadInt(pData + 15); //Nan add a number of Points flag

        int frameSize = dataLen + CHUNK_HEADER_LEN;
        //int frameSize = VIDEO_DATA::GetChunkSize(chunkID, tileID, quality);
        int framePoints = VIDEO_DATA::GetChunkPoints(chunkID, tileID, quality);
        //InfoMessage("frameSize %d dataLen %d chunkID %d tileID %d Points %d", frameSize, dataLen, chunkID, tileID, framePoints);
        MyAssert(frameSize == dataLen + CHUNK_HEADER_LEN, 3402);

        DecoderBuffer dec_buffer;
        dec_buffer.Init((char*)(&pData[CHUNK_HEADER_LEN]), frameSize - CHUNK_HEADER_LEN);
        //PointCloudKdTreeDecoder decoder;
        PointCloudSequentialDecoder decoder;
        std::unique_ptr<PointCloud> out_pc(new PointCloud());
        DecoderOptions dec_options;
        uint64_t t1 = NDKGetTime();
        int ret = decoder.Decode(dec_options, &dec_buffer, out_pc.get()).ok();
        if (ret == false)
            InfoMessage("BAD: %d %d %d", chunkID, tileID, framePoints);
        MyAssert(ret, 2003);
        uint64_t t2 = NDKGetTime();
        decodingTime += t2 - t1;

        //MyAssert(framePoints == out_pc->num_points(), 3395);

        int pointBufferSize = out_pc->attribute(0)->buffer()->data_size();
        int colorBufferSize = out_pc->attribute(1)->buffer()->data_size();
        int sizeBufferSize = out_pc->attribute(2)->buffer()->data_size();

        char* pointBuffer = (char*)out_pc->attribute(0)->buffer()->data();
        char* colorBuffer = (char*)out_pc->attribute(1)->buffer()->data();
        char* sizeBuffer = (char*)out_pc->attribute(2)->buffer()->data();

        //MyAssert(pointBufferSize % 12 == 0 && colorBufferSize % 3 == 0 && pointBufferSize / 12 == colorBufferSize / 3 && pointBufferSize / 12 <= framePoints, 2004);
        int nPointsNew = pointBufferSize / 12;

        int pOffset = 0;
        int cOffset = 0;
        int sOffset = 0;
        UE_LOG(TEST, Log, TEXT("Decoding Time %llu,%llu,%llu,chunkID %d,tileID %d"), t1, t2, t2-t1, chunkID, tileID);

        
        //unique_lock<mutex> lck_frame(enqueueFrameLock);
        
        //pthread_mutex_lock(&enqueueFrameLock);
        while (chunkID != curFrameID) {

            //msgChunkCond.wait(lck_frame);
            //pthread_cond_wait(&msgChunkCond, &enqueueFrameLock);
            msgChunkEvent->Wait();
        }
        FScopeLock lck_frame(&enqueueFrameLockCS);
        uint64_t t3 = NDKGetTime();
        for (int i = 0; i < nPointsNew; i++, curPointCloudSize++) {
            float* pp = (float*)(pointBuffer + pOffset);
            BYTE* pc = (BYTE*)(colorBuffer + cOffset);
            float* ps = (float*)(sizeBuffer + sOffset);


            //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
            //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
            //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
            //
            //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
            //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
            //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);
            pointBuf[curPointCloudSize * 3] = (float)((pp[0]) * 100);
            pointBuf[curPointCloudSize * 3 + 1] = (float)((pp[1]) * 100);
            pointBuf[curPointCloudSize * 3 + 2] = (float)((pp[2]) * 100);

            colorBuf[curPointCloudSize * 3] = (uint8_t)(BYTE)pc[0];
            colorBuf[curPointCloudSize * 3 + 1] = (uint8_t)(BYTE)pc[1];
            colorBuf[curPointCloudSize * 3 + 2] = (uint8_t)(BYTE)pc[2];
            //printf("Raw point data: %.3f %.3f\n", pointBuf[curPointCloudSize*3], colorBuf[curPointCloudSize*3]);

            pointSizeBuf[curPointCloudSize] = (float)(ps[0]) * 100.0f * 2;


            pOffset += sizeof(float) * 3;
            cOffset += 3;
            sOffset += sizeof(float);
        }
        nReceivedCells[chunkID]++;
        uint64_t t4 = NDKGetTime();
        decodingTime += t4 - t3;
        //InfoMessage("Decoding time %d %d %.3lf %.3lf (decoder #%d)", chunkID, tileID, t2-t1, t4-t3, decoderIdx);
        UE_LOG(TEST, Log, TEXT("Time %llu,%llu,%llu,%llu"), t1, t2, t3, t4);
        UE_LOG(TEST, Log, TEXT("Single Cell frame ID:%d,%d (%d), decoding time %llu (decoder #%d)"), chunkID, tileID, curPointCloudSize, t2 - t1 + t4 - t3, decoderIdx);




        
        //if (nReceivedCells[chunkID] == nRequestedCells[chunkID]) {    //Nan Local
        //if (nReceivedCells[chunkID] == VIDEO_SCHEDULER::nRequestedCells[chunkID]) { //Nan VIVO
        if (nReceivedCells[chunkID] == 8) {
            nReceivedCells[chunkID] = 0;
            MyAssert(curPointCloudSize != 0, 3400);
            //int dataSize = (sizeof(WORD) + sizeof(BYTE)) * curPointCloudSize * FRAME_BUFFER::GRP;
            //BYTE *frameBuf = new BYTE[dataSize];
            //GenerateFrame(chunkID, curPointCloudSize, frameBuf);

            //FRAME_BUFFER::EnqueueFrame(chunkID, curPointCloudSize, frameBuf);
            //call handler to sent message to rendering thread
            //pEnvDecompress->CallStaticVoidMethod(jnativeClass, mid_onChunkAvailableLocal, chunkID);
            //nativelib::onChunkAvailable(chunkID);

            //InfoMessage("Decoding time: %d %.3lf %d %d (decoder #%d)\n", chunkID, decodingTime, curPointCloudSize, nReceivedCells[chunkID], decoderIdx);
            //printf("current frame ID:%d,%d (%d), decoding time %f (decoder #%d)\n", curFrameID, chunkID, curPointCloudSize, decodingTime, decoderIdx);
            //UE_LOG(TEST, Log, TEXT("current frame ID:%d,%d (%d), decoding time %f (decoder #%d)"), curFrameID, chunkID, curPointCloudSize, decodingTime, decoderIdx);
            
            
            UE_LOG(TEST, Log, TEXT("All current frame ID:%d,%d (%d), decoding time %llu (decoder #%d), current timestamp: %llu"), curFrameID, chunkID, curPointCloudSize, (uint64_t)NDKGetTime() - decodingTime_timestamp, decoderIdx, (uint64_t)NDKGetTime());
            decodingTime_timestamp = NDKGetTime();

            for (int i = curPointCloudSize; i < MAX_POINT_CLOUD_SIZE; i++) {
                //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
                //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
                //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
                //
                //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
                //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
                //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);
                pointBuf[i * 3] = (float)(0.0);
                pointBuf[i * 3 + 1] = (float)(0.0);
                pointBuf[i * 3 + 2] = (float)(0.0);

                colorBuf[i * 3] = (uint8_t)(BYTE)0;
                colorBuf[i * 3 + 1] = (uint8_t)(BYTE)0;
                colorBuf[i * 3 + 2] = (uint8_t)(BYTE)0;

                pointSizeBuf[curPointCloudSize] = (float)(0);

            }

            decodingTimeTotal2 += decodingTime;
            //delete [] frameBuf;
            //UE_LOG(TEST, Log, TEXT("VC current pointBuf %f,%f,%f, colorBuf  %f,%f,%f,"), pointBuf[0], pointBuf[1], pointBuf[2], (float)colorBuf[0], (float)colorBuf[1], (float)colorBuf[2]);



            
            ////float temp_point[MAX_POINT_CLOUD_SIZE * 3];
            //std::array<float, MAX_POINT_CLOUD_SIZE * 3> temp_point;
            //std::copy(pointBuf, pointBuf + MAX_POINT_CLOUD_SIZE * 3, temp_point.data());
            ////std::copy(std::begin(pointBuf), std::end(pointBuf), std::begin(temp_point));

            ////uint8_t temp_color[MAX_POINT_CLOUD_SIZE * 3];
            //std::array<uint8_t, MAX_POINT_CLOUD_SIZE * 3> temp_color;
            //std::copy(colorBuf, colorBuf + MAX_POINT_CLOUD_SIZE * 3, temp_color.data());
            ////std::copy(std::begin(colorBuf), std::end(colorBuf), std::begin(temp_color));

            //std::array<float, MAX_POINT_CLOUD_SIZE> temp_size;
            //std::copy(pointSizeBuf, pointSizeBuf + MAX_POINT_CLOUD_SIZE, temp_size.data());
            ////std::copy(std::begin(pointSizeBuf), std::end(pointSizeBuf), std::begin(temp_size));
            //
            //if (APointCloudRenderer::highResPosFrameQueue.size() >= APointCloudRenderer::buffer_frame_size) {
            //    //msgRenderCond.wait(lck_frame);
            //    msgRenderEvent->Wait();
            //}
            //
            //unique_lock<mutex> lck_renderer(APointCloudRenderer::highResFrameQueueLock);
            ////FScopeLock lck_renderer(&APointCloudRenderer::highResFrameQueueLockCS);
            //APointCloudRenderer::highResPosFrameQueue.push(temp_point);
            //APointCloudRenderer::highResColorFrameQueue.push(temp_color);
            //APointCloudRenderer::highResSizeFrameQueue.push(temp_size);

            //lck_renderer.unlock();

            //double t5 = NDKGetTime();
            //PTCL_PLAYER::RenderOneFrame();
            //double t6 = NDKGetTime();

            
            if (curFrameID == VIDEO_DATA::nChunks - 1) {
                decodingTimeTotal = NDKGetTime() - decodingTimeStart;
                bDecoding = false;
            }
            
            curPointCloudSize = 0;
            decodingTime = 0.0f;
            
            curFrameID++;
            curFrameID = curFrameID % VIDEO_DATA::nChunks;
            //pthread_cond_broadcast(&msgChunkCond);
            //msgChunkCond.notify_all();
            for (int i = 0; i < 8; i++) {
                msgChunkEvent->Trigger();
            }
        }
        lck_frame.Unlock();
        //pthread_mutex_unlock(&enqueueFrameLock);
        //if (frameID == 750) InfoMessage("%d %d %d %d %d", frameID, tileID, nPoints, nPointsNew, curPointCloudSize);

        MyAssert(curPointCloudSize < MAX_POINT_CLOUD_SIZE, 3399);
        //InfoMessage("KD-Tree Decoding time (%d %d): %.6f %.6f %.6f\n", frameID, nPoints, t2 - t1, t4 - t3, t6 - t5);
        
        delete[] pData;
    }

    return 0;
}



VIDEO_MESSAGE_STORAGE::VIDEO_MESSAGE_STORAGE() {
    data = new BYTE[limit];
    head = tail = size = 0;
}

VIDEO_MESSAGE_STORAGE::~VIDEO_MESSAGE_STORAGE() {
    delete[] data;
}

BYTE* VIDEO_MESSAGE_STORAGE::AllocateBlock(int len) {
    BYTE* p = data + tail;
    tail += len;
    size += len;
    if (tail >= limit) tail = 0;
    MyAssert(size < limit - 1, 3532);
    return p;
}

void VIDEO_MESSAGE_STORAGE::ReleaseBlock(BYTE* pData, int len) {
    //assuming blocks are released in a FIFO
    MyAssert(pData == data + head && size >= len, 3533);
    head += len;
    size -= len;
    if (head >= limit) head = 0;
}

MESSAGE_QUEUE::MESSAGE_QUEUE() {
    data = new VIDEO_MESSAGE[SETTING_SEND_MESSAGE_QUEUE_SIZE];
    head = 0;    //point to the current spot
    tail = 0;    //point to the next empty spot
    size = 0;
}

MESSAGE_QUEUE::~MESSAGE_QUEUE() {
    delete[] data;
}

void MESSAGE_QUEUE::Enqueue(VIDEO_MESSAGE* pm) {
    data[tail++] = *pm;
    if (tail >= SETTING_SEND_MESSAGE_QUEUE_SIZE) tail -= SETTING_SEND_MESSAGE_QUEUE_SIZE;
    if (++size >= SETTING_SEND_MESSAGE_QUEUE_SIZE) {
        MyAssert(0, 3381);
    }
}

int MESSAGE_QUEUE::GetSize() { return size; }

int MESSAGE_QUEUE::Dequeue(VIDEO_MESSAGE* pm) {
    if (size == 0) return 0;
    if (pm != NULL) *pm = data[head];
    head++;
    if (head >= SETTING_SEND_MESSAGE_QUEUE_SIZE) head -= SETTING_SEND_MESSAGE_QUEUE_SIZE;
    size--;
    return 1;
}

VIDEO_MESSAGE* MESSAGE_QUEUE::GetHead() {
    if (size == 0) return NULL; else return &data[head];
}


void VIDEO_COMM::Init(int priorityMode, int nDecoders, int dashAlg) {
    VIDEO_COMM::priMode = priorityMode;

    sentBytes = 0;
    rcvdBytes = 0;

    recvBufferCapacity = SETTING_RECV_BUFFER_SIZE_LARGE;
    pDataRcvdMsg = rcvdMsg.pData = new BYTE[recvBufferCapacity];

    //    mid_onChunkAvailable = env->GetStaticMethodID(cls, "onChunkAvailable", "(I)V");
    //    MyAssert(mid_onChunkAvailable != NULL, 3446);
    //
    //    mid_onChunkReceived = env->GetStaticMethodID(cls, "onChunkReceived", "(I)V");
    //    MyAssert(mid_onChunkReceived != NULL, 3447);

    totalBytes = 0;
    wastedBytes = 0;

    for (int i = 0; i < SETTING_MAX_FRAMES; i++) {
        nReceivedCells[i] = 0;
        nRequestedCells[i] = VIDEO_DATA::nRequestedCells[i];
    }

    float base = (theta_bins + M_PI) / (theta_bins - M_PI);
    float radius_min = 0.00029088821f;
    inner_point_idx = (int)(log(tan(0.75 * M_PI / 180.0) / radius_min) / log(base)) * theta_bins;

    curPointCloudSize_inner = inner_point_idx;

    msgDecoderCounter = 0;
    int nThreads = nDecoders;

    decodingTimeStart = NDKGetTime();
    bDecoding = true;
    if (dashAlg == SETTING_ALG_FESTIVE && nThreads >= 1) {
        //pthread_t tid[nThreads];
        vector<thread> threads_decompress;
        for (int i = 0; i < nThreads; i++)
            //pthread_create(&tid[i], NULL, DecompressFrameThread, NULL);
            //thread &tid[i](DecompressFrameThread);
            threads_decompress.push_back(thread(DecompressFrameThread, nullptr));
        //for (auto& t : threads_decompress)
            //t.join();
    }
    if (dashAlg == SETTING_ALG_VIVO && nThreads >= 1) {
        //pthread_t tid[nThreads];
        //vector<thread> threads_point;
        for (int i = 0; i < 4; i++) {
            //pthread_create(&tid[i], NULL, AddtoPointCloudThread, NULL);
            UE_LOG(TEST, Log, TEXT("%d"), i);

            std::thread dec_thread(AddtoPointCloudThread, nullptr);
            HANDLE dech_thread = dec_thread.native_handle();

            // Set the thread priority
            if (!SetThreadPriority(dech_thread, THREAD_PRIORITY_TIME_CRITICAL))
            {
                UE_LOG(TEST, Log, TEXT("Failed to set thread priority"));
            }
            dec_thread.detach();
            //threads_point.push_back(thread(AddtoPointCloudThread, nullptr));
        }
        //vector<UZMQServerThread> ue_threads;
        //for (int i = 0; i < 6; i++) {
        //    //pthread_create(&tid[i], NULL, AddtoPointCloudThread, NULL);
        //    UE_LOG(TEST, Log, TEXT("%d"), i);
        //    threads_point.push_back(thread(AddtoPointCloudThread, nullptr));
        //}
        //for (auto& t : threads_point)
        //    t.detach();
        //UE_LOG(TEST, Log, TEXT("%d"), 0);
        //UZMQServerThread* test0 = new UZMQServerThread();
        //UE_LOG(TEST, Log, TEXT("%d"), 1);
        //UZMQServerThread* test1 = new UZMQServerThread();
        //UE_LOG(TEST, Log, TEXT("%d"), 2);
        //UZMQServerThread* test2 = new UZMQServerThread();
        //UE_LOG(TEST, Log, TEXT("%d"), 3);
        //UZMQServerThread* test3 = new UZMQServerThread();
        //UE_LOG(TEST, Log, TEXT("%d"), 0);
        //UZMQServerThread* test4 = new UZMQServerThread();
        //UE_LOG(TEST, Log, TEXT("%d"), 1);
        //UZMQServerThread* test5 = new UZMQServerThread();



    }
}

void VIDEO_COMM::TransmitMessages() {

    if (sendingPri != -1) {
        //we need to first resume transmitting the previous message
        MyAssert(sentBytes > 0, 3425);
        if (!TransmitMessage_Core(sendingPri, 1)) return;
    }


    switch (priMode) {
    case PRIORITY_MODE_STRICT: {
        for (int i = 0; i <= SETTING_MAX_PRIORITY; i++) {
            if (!TransmitMessage_Core(i, 0)) break;
        }
        break;
    }

    case PRIORITY_MODE_NULL: {
        int toXmit[SETTING_MAX_PRIORITY + 1];
        int j;
        while (1) {
            j = 0;
            for (int i = 0; i <= SETTING_MAX_PRIORITY; i++) {
                if (sendMsgQueue[i].GetHead() != NULL) {
                    toXmit[j++] = i;
                }
            }

            if (j == 0) break;
            if (!TransmitMessage_Core(toXmit[rand() % j], 1)) break;
        }

        break;
    }

    default:
        MyAssert(0, 3423);
    }
}


//return 1 if fully transmitted for this channel
int VIDEO_COMM::TransmitMessage_Core(int pri, int bXmitOneMsg) {
    int fd = fds[0];

    while (1) {
        UE_LOG(TEST, Log, TEXT("sendMsgQueue size %d, time: %llu"), (int)sendMsgQueue[pri].GetSize(),NDKGetTime());
        VIDEO_MESSAGE* pM = sendMsgQueue[pri].GetHead();
        sendingPri = pri;

        if (pM == NULL) {
            peers[0].events &= ~POLLWRNORM;
            sendingPri = -1;
            //InfoMessage("### UNSET POLLWRNORM A, ch = %d ###", ch);
            return 1;
        }

        //BYTE* pBase = pM->pData;
        //MyAssert(pBase != NULL && pM->msgLen - sentBytes > 0, 3534);

        //while (pM->msgLen - sentBytes > 0) {
        //    int n = (int)write(fd, pBase + sentBytes, (size_t)pM->msgLen - sentBytes);
        //    if (n >= 0) {
        //        sentBytes += n;
        //    }
        //    else if (n < 0 && (errno == ECONNRESET || errno == EPIPE)) {
        //        ErrorMessage("Connection closed.");
        //        MyAssert(0, 3384);
        //    }
        //    else if (n < 0 && (errno == EWOULDBLOCK)) {
        //        if (sentBytes == 0) sendingPri = -1;
        //        peers[0].events |= POLLWRNORM;
        //        //InfoMessage("### SET POLLWRNORM, ch = %d ###", ch);
        //        return 0;
        //    }
        //    else {
        //        ErrorMessage("Unexpected send error %d: %s", errno, strerror(errno));
        //        MyAssert(0, 3385);
        //    }
        //}
        BYTE* pBase = pM->pData;
        MyAssert(pBase != NULL && pM->msgLen - sentBytes > 0, 3534);

        while (pM->msgLen - sentBytes > 0) {
            int n = send(fd, (const char*)(pBase + sentBytes), (int)(pM->msgLen - sentBytes), 0);
            if (n == SOCKET_ERROR) {
                // An error occurred
                int error = WSAGetLastError();
                if (error == WSAECONNRESET || error == WSAECONNABORTED) {
                    ErrorMessage("Connection closed.");
                    MyAssert(0, 3384);
                }
                else if (error == WSAEWOULDBLOCK) {
                    if (sentBytes == 0) sendingPri = -1;
                    peers[0].events |= POLLWRNORM;
                    //InfoMessage("### SET POLLWRNORM, ch = %d ###", ch);
                    return 0;
                }
                else {
                    ErrorMessage("Unexpected send error %d: %s", error, strerror(error));
                    MyAssert(0, 3385);
                }
            }
            else {
                // The data was sent successfully
                sentBytes += n;
            }
        }

        if (sentBytes == pM->msgLen) {
            xmitCounter++;
            if (pM->id == MSG_REQUEST_CHUNK || pM->id == MSG_BATCH_REQUESTS || pM->id == MSG_GAZE_BATCH_REQUESTS) {
                vms.ReleaseBlock(pM->pData, pM->msgLen);
            }

            //InfoMessage("XMit #%d Priority %d", xmitCounter, pri);
            sentBytes = 0;
            sendMsgQueue[pri].Dequeue(NULL);

            if (bXmitOneMsg) { //transmit only one message
                peers[0].events &= ~POLLWRNORM;
                sendingPri = -1;
                //InfoMessage("### UNSET POLLWRNORM B, ch = %d ###", ch);
                return 1;
            }
        }
    }
}

void VIDEO_COMM::DecompressFrame(int frameID, int* nPoints, int nSize, BYTE* dataBuf, int decoderIdx) {
    DecoderBuffer dec_buffer;
    dec_buffer.Init((char*)(&dataBuf[CHUNK_HEADER_LEN]), nSize - CHUNK_HEADER_LEN);
    PointCloudKdTreeDecoder decoder;

    std::unique_ptr<PointCloud> out_pc(new PointCloud());
    DecoderOptions dec_options;
    uint64_t t1 = NDKGetTime();
    MyAssert(decoder.Decode(dec_options, &dec_buffer, out_pc.get()).ok(), 2002);
    uint64_t t2 = NDKGetTime();

    MyAssert(*nPoints == out_pc->num_points(), 3395);

    int pOffset = 0;
    int cOffset = 0;
    //WORD * rawPoint = (WORD *)frameBuf;
    //BYTE * rawColor =  frameBuf + sizeof(WORD) * (*nPoints) * FRAME_BUFFER::GRP;

    int pointBufferSize = out_pc->attribute(0)->buffer()->data_size();
    int colorBufferSize = out_pc->attribute(1)->buffer()->data_size();
    char* pointBuffer = (char*)out_pc->attribute(0)->buffer()->data();
    char* colorBuffer = (char*)out_pc->attribute(1)->buffer()->data();

    MyAssert(pointBufferSize % 12 == 0 && colorBufferSize % 3 == 0 && pointBufferSize / 12 == colorBufferSize / 3 && pointBufferSize / 12 <= *nPoints, 2004);
    //*nPoints = pointBufferSize / 12;
    //rawColor =  frameBuf + sizeof(WORD) * (*nPoints) * FRAME_BUFFER::GRP;

    uint64_t t3 = NDKGetTime();

    //TODO:need a lock to reuse the shared memory pointBuf and colorBuf
    for (int i = 0; i < *nPoints; i++) {
        float* pp = (float*)(pointBuffer + pOffset);
        BYTE* pc = (BYTE*)(colorBuffer + cOffset);

        pointBuf[3 * i] = (float)pp[0];
        pointBuf[3 * i + 1] = (float)pp[1];
        pointBuf[3 * i + 2] = (float)pp[2];

        colorBuf[3 * i] = (uint8_t)pc[0];
        colorBuf[3 * i + 1] = (uint8_t)pc[1];
        colorBuf[3 * i + 2] = (uint8_t)pc[2];


        pOffset += sizeof(float) * 3;
        cOffset += 3;
    }
    uint64_t t4 = NDKGetTime();
    //printf("Decoding time (%d %d): %.6f %.6f (decoder #%d)\n", frameID, *nPoints, t2 - t1, t4 - t3, decoderIdx);
    decodingTimeTotal2 += (t2 - t1) + (t4 - t3);
    if (frameID == VIDEO_DATA::nChunks - 1) {
        decodingTimeTotal = NDKGetTime() - decodingTimeStart;
        bDecoding = false;
    }
}

void VIDEO_COMM::AddtoPointCloud(int frameID, int tileID, int nPoints, int nSize, BYTE* dataBuf) {
    uint64_t t3 = NDKGetTime();
    DecoderBuffer dec_buffer;
    dec_buffer.Init((char*)(&dataBuf[CHUNK_HEADER_LEN]), nSize - CHUNK_HEADER_LEN);
    PointCloudKdTreeDecoder decoder;
    uint64_t t4 = NDKGetTime();

    //InfoMessage("%d %d %d %d", frameID, tileID, nPoints, nSize);
    std::unique_ptr<PointCloud> out_pc(new PointCloud());
    DecoderOptions dec_options;
    uint64_t t1 = NDKGetTime();
    int ret = decoder.Decode(dec_options, &dec_buffer, out_pc.get()).ok();
    if (ret == false)
        InfoMessage("BAD: %d %d %d", frameID, tileID, nPoints);
    MyAssert(ret, 2003);
    uint64_t t2 = NDKGetTime();
    decodingTime += t2 - t1;

    MyAssert(nPoints == out_pc->num_points(), 3395);

    int nGetValue = 2;
    if (nGetValue == 0) {
        uint64_t t5 = NDKGetTime();
        std::vector<float> att_entry_points(out_pc->attribute(0)->num_components());
        std::vector<uint8_t> att_entry_color(out_pc->attribute(1)->num_components());
        for (PointIndex i(0); i < out_pc->num_points(); i++, curPointCloudSize++) {
            out_pc->attribute(0)->ConvertValue(out_pc->attribute(0)->mapped_index(i),
                &att_entry_points[0]);
            out_pc->attribute(1)->ConvertValue(out_pc->attribute(1)->mapped_index(i),
                &att_entry_color[0]);

            //            cloudX[curPointCloudSize] = (int) round((att_entry_points[0] * 1000));
            //            cloudY[curPointCloudSize] = (int) round((att_entry_points[1] * 1000));
            //            cloudZ[curPointCloudSize] = (int) round((att_entry_points[2] * 1000));
            //
            //            cloudR[curPointCloudSize] = (BYTE) (att_entry_color[0]);
            //            cloudG[curPointCloudSize] = (BYTE) (att_entry_color[1]);
            //            cloudB[curPointCloudSize] = (BYTE) (att_entry_color[2]);
        }
        uint64_t t6 = NDKGetTime();
    }
    else if (nGetValue == 1) {
        int pointComponents = out_pc->attribute(0)->num_components();
        int colorComponents = out_pc->attribute(1)->num_components();
        float points[3];
        uint8_t color[3];

        uint64_t t5 = NDKGetTime();
        for (int i = 0; i < int(out_pc->num_points()); i++, curPointCloudSize++) {
            out_pc->attribute(0)->GetValue(AttributeValueIndex(i), &points);
            out_pc->attribute(1)->GetValue(AttributeValueIndex(i), &color);

            //            cloudX[curPointCloudSize] = (int) round((points[0] * 1000));
            //            cloudY[curPointCloudSize] = (int) round((points[1] * 1000));
            //            cloudZ[curPointCloudSize] = (int) round((points[2] * 1000));
            //
            //            cloudR[curPointCloudSize] = (BYTE) (color[0]);
            //            cloudG[curPointCloudSize] = (BYTE) (color[1]);
            //            cloudB[curPointCloudSize] = (BYTE) (color[2]);
        }
        uint64_t t6 = NDKGetTime();
    }
    else if (nGetValue == 2) {
        int pointBufferSize = out_pc->attribute(0)->buffer()->data_size();
        int colorBufferSize = out_pc->attribute(1)->buffer()->data_size();
        char* pointBuffer = (char*)out_pc->attribute(0)->buffer()->data();
        char* colorBuffer = (char*)out_pc->attribute(1)->buffer()->data();

        MyAssert(pointBufferSize % 12 == 0 && colorBufferSize % 3 == 0 && pointBufferSize / 12 == colorBufferSize / 3 && pointBufferSize / 12 <= nPoints, 2004);
        int nPointsNew = pointBufferSize / 12;

        uint64_t t5 = NDKGetTime();
        int pOffset = 0;
        int cOffset = 0;
        for (int i = 0; i < nPointsNew; i++, curPointCloudSize++) {
            float* pp = (float*)(pointBuffer + pOffset);
            BYTE* pc = (BYTE*)(colorBuffer + cOffset);

            //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
            //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
            //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
            //
            //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
            //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
            //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);

            pOffset += sizeof(float) * 3; //FRAME_BUFFER::GRP
            cOffset += 3; //FRAME_BUFFER::GRP
        }
        uint64_t t6 = NDKGetTime();
        //if (frameID == 750) InfoMessage("%d %d %d %d %d", frameID, tileID, nPoints, nPointsNew, curPointCloudSize);
    }
    else {
        InfoMessage("nGetValue not supported.");
    }

    MyAssert(curPointCloudSize < MAX_POINT_CLOUD_SIZE, 3399);
    //InfoMessage("KD-Tree Decoding time (%d %d): %.6f %.6f %.6f\n", frameID, nPoints, t2 - t1, t4 - t3, t6 - t5);
}

void VIDEO_COMM::GenerateFrame(int chunkID, int nPoints, BYTE * frameBuf) {
    int pOffset = 0;
    int cOffset = 0;
    WORD * rawPoint = (WORD *)frameBuf;
    BYTE * rawColor =  frameBuf + sizeof(WORD) * nPoints * FRAME_BUFFER::GRP;
    for (int i = 0; i< nPoints; i++) {
        int x = cloudX[i];
        int y = cloudY[i];
        int z = cloudZ[i];

        BYTE r = (BYTE)(cloudR[i]);
        BYTE g = (BYTE)(cloudG[i]);
        BYTE b = (BYTE)(cloudB[i]);

        memcpy(rawPoint + pOffset, &x, sizeof(WORD));
        memcpy(rawPoint + pOffset + 1, &y, sizeof(WORD));
        memcpy(rawPoint + pOffset + 2, &z, sizeof(WORD));
        memcpy(rawColor + cOffset, &r, sizeof(BYTE));
        memcpy(rawColor + cOffset + 1, &g, sizeof(BYTE));
        memcpy(rawColor + cOffset + 2, &b, sizeof(BYTE));

        pOffset += FRAME_BUFFER::GRP;
        cOffset += FRAME_BUFFER::GRP;
    }
}

void* VIDEO_COMM::AddtoPointCloudThread_test(void* arg) {


    UE_LOG(TEST, Log, TEXT("Decoder %d is ready."), 0);

    return NULL;
}

void* VIDEO_COMM::AddtoPointCloudThread(void* arg) {
    UE_LOG(TEST, Log, TEXT("Decoder %d is ready."), 0);
    unique_lock<mutex> lck(msgQueueLock);
    //pthread_mutex_lock(&msgQueueLock);
    // 
    // 
    //JNIEnv * pEnvDecompress = NULL;
    //CacheJNIEnv(&pEnvDecompress);

    //jmethodID mid_onChunkAvailableLocal = pEnvDecompress->GetStaticMethodID(jnativeClass, "onChunkAvailable", "(I)V");
    //MyAssert(mid_onChunkAvailableLocal != NULL, 3446);

    int decoderIdx;
    msgDecoderCounter++;
    decoderIdx = msgDecoderCounter;
    //printf("Decoder #%d is ready.\n", msgDecoderCounter);
    UE_LOG(TEST, Log, TEXT("Decoder #%d is ready."), msgDecoderCounter);
    
    //pthread_mutex_unlock(&msgQueueLock);
    lck.unlock();


    //BYTE* pData = NULL;

    while (true) {
        BYTE* pData = NULL;
        unique_lock<mutex> lck_msg(msgQueueLock);
        //pthread_mutex_lock(&msgQueueLock);
        while (msgQueue.empty()) {
            //FPlatformProcess::Sleep(0.1);
            msgQueueCond.wait(lck_msg);

            //pthread_cond_wait(&msgQueueCond, &msgQueueLock);
        }

        if (!msgQueue.empty()) {
            pData = msgQueue.front();
            //printf("Thread %d dequeue %p \n", decoderIdx, pData);
            msgQueue.pop();
        }
        lck_msg.unlock();
        //pthread_mutex_unlock(&msgQueueLock);

        MyAssert(pData != NULL, 3401);

        uint64_t t = NDKGetTime();
        int dataLen = ReadInt(pData + 1) - CHUNK_HEADER_LEN;

        int chunkID = ReadWORD(pData + 5);

        /*
        if (dataLen == 0) {
            unique_lock<mutex> lck_frame(enqueueFrameLock);
            nReceivedCells[chunkID]++;
            lck_frame.unlock();

            unique_lock<mutex> lck_frame2(enqueueFrameLock);
            if (nReceivedCells[chunkID] == VIDEO_DATA::nTiles) {
                nReceivedCells[chunkID] = 0;
                MyAssert(curPointCloudSize != 0, 3400);
                //int dataSize = (sizeof(WORD) + sizeof(BYTE)) * curPointCloudSize * FRAME_BUFFER::GRP;
                //BYTE *frameBuf = new BYTE[dataSize];
                //GenerateFrame(chunkID, curPointCloudSize, frameBuf);

                //FRAME_BUFFER::EnqueueFrame(chunkID, curPointCloudSize, frameBuf);
                //call handler to sent message to rendering thread
                //pEnvDecompress->CallStaticVoidMethod(jnativeClass, mid_onChunkAvailableLocal, chunkID);
                //nativelib::onChunkAvailable(chunkID);

                //InfoMessage("Decoding time: %d %.3lf %d %d (decoder #%d)\n", chunkID, decodingTime, curPointCloudSize, nReceivedCells[chunkID], decoderIdx);
                //printf("current frame ID:%d,%d (%d), decoding time %f (decoder #%d)\n", curFrameID, chunkID, curPointCloudSize, decodingTime, decoderIdx);
                //UE_LOG(TEST, Log, TEXT("current frame ID:%d,%d (%d), decoding time %f (decoder #%d)"), curFrameID, chunkID, curPointCloudSize, decodingTime, decoderIdx);
                UE_LOG(TEST, Log, TEXT("All current frame ID:%d,%d (%d), decoding time %llu (decoder #%d), current timestamp: %llu"), curFrameID, chunkID, curPointCloudSize, (uint64_t)NDKGetTime() - decodingTime_timestamp, decoderIdx, (uint64_t)NDKGetTime());
                decodingTime_timestamp = NDKGetTime();

                for (int i = curPointCloudSize; i < 202500; i++) {
                    //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
                    //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
                    //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
                    //
                    //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
                    //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
                    //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);
                    pointBuf[i * 3] = (float)(0.0);
                    pointBuf[i * 3 + 1] = (float)(0.0);
                    pointBuf[i * 3 + 2] = (float)(0.0);

                    colorBuf[i * 3] = (uint8_t)(BYTE)0;
                    colorBuf[i * 3 + 1] = (uint8_t)(BYTE)0;
                    colorBuf[i * 3 + 2] = (uint8_t)(BYTE)0;

                    pointSizeBuf[curPointCloudSize] = (float)(0);

                }

                decodingTimeTotal2 += decodingTime;
                //delete [] frameBuf;
                //UE_LOG(TEST, Log, TEXT("VC current pointBuf %f,%f,%f, colorBuf  %f,%f,%f,"), pointBuf[0], pointBuf[1], pointBuf[2], (float)colorBuf[0], (float)colorBuf[1], (float)colorBuf[2]);




                //float temp_point[MAX_POINT_CLOUD_SIZE * 3];
                std::array<float, MAX_POINT_CLOUD_SIZE * 3> temp_point;
                std::copy(std::begin(pointBuf), std::end(pointBuf), std::begin(temp_point));

                //uint8_t temp_color[MAX_POINT_CLOUD_SIZE * 3];
                std::array<uint8_t, MAX_POINT_CLOUD_SIZE * 3> temp_color;
                std::copy(std::begin(colorBuf), std::end(colorBuf), std::begin(temp_color));

                std::array<float, MAX_POINT_CLOUD_SIZE> temp_size;
                std::copy(std::begin(pointSizeBuf), std::end(pointSizeBuf), std::begin(temp_size));

                if (APointCloudRenderer::highResPosFrameQueue.size() >= APointCloudRenderer::buffer_frame_size) {
                    msgRenderCond.wait(lck_frame2);
                }
                unique_lock<mutex> lck_renderer(APointCloudRenderer::highResFrameQueueLock);
                APointCloudRenderer::highResPosFrameQueue.push(temp_point);
                APointCloudRenderer::highResColorFrameQueue.push(temp_color);
                APointCloudRenderer::highResSizeFrameQueue.push(temp_size);

                lck_renderer.unlock();

                if (curFrameID == VIDEO_DATA::nChunks - 1) {
                    decodingTimeTotal = NDKGetTime() - decodingTimeStart;
                    bDecoding = false;
                }
                curPointCloudSize = 0;
                decodingTime = 0.0f;

                curFrameID++;
                curFrameID = curFrameID % VIDEO_DATA::nChunks;
                //pthread_cond_broadcast(&msgChunkCond);
                msgChunkCond.notify_all();
            }
            lck_frame2.unlock();
            continue;
        }
        else {

        }*/
        int tileID = ReadWORD(pData + 7);
        int quality = pData[9];
        int cls = 0;
        int seqnum = ReadInt(pData + 10);
        int bLast = pData[14]; //the flag of dynamic
        //int num_points = ReadInt(pData + 15); //Nan add a number of Points flag
        UE_LOG(TEST, Log, TEXT("bLast %d"), bLast);
        int frameSize = dataLen + CHUNK_HEADER_LEN;
        //int frameSize = VIDEO_DATA::GetChunkSize(chunkID, tileID, quality);
        int framePoints = VIDEO_DATA::GetChunkPoints(chunkID, tileID, quality);
        //InfoMessage("frameSize %d dataLen %d chunkID %d tileID %d Points %d", frameSize, dataLen, chunkID, tileID, framePoints);
        MyAssert(frameSize == dataLen + CHUNK_HEADER_LEN, 3402);


        //unique_lock<mutex> lck_dec(decodeFrameLock);
        //while (chunkID != curFrameID) {

        //    msgChunkCond.wait(lck_dec);
        //    //pthread_cond_wait(&msgChunkCond, &enqueueFrameLock);
        //}
        //lck_dec.unlock();
        int nPointsNew = 0;
        char* pointBuffer = nullptr;
        char* colorBuffer = nullptr;
        char* sizeBuffer = nullptr;
        uint64_t t1 = 0;
        uint64_t t2 = 0;
        std::unique_ptr<PointCloud> out_pc(new PointCloud());

        if (dataLen != 0) {
            DecoderBuffer dec_buffer;
            dec_buffer.Init((char*)(&pData[CHUNK_HEADER_LEN]), frameSize - CHUNK_HEADER_LEN);
            //PointCloudKdTreeDecoder decoder;
            PointCloudSequentialDecoder decoder;
            DecoderOptions dec_options;
            t1 = NDKGetTime();
            int ret = decoder.Decode(dec_options, &dec_buffer, out_pc.get()).ok();
            if (ret == false)
                InfoMessage("BAD: %d %d %d", chunkID, tileID, framePoints);
            MyAssert(ret, 2003);
            t2 = NDKGetTime();
            decodingTime += t2 - t1;

            //MyAssert(framePoints == out_pc->num_points(), 3395);

            int pointBufferSize = out_pc->attribute(0)->buffer()->data_size();
            int colorBufferSize = out_pc->attribute(1)->buffer()->data_size();
            int sizeBufferSize = out_pc->attribute(2)->buffer()->data_size();

            pointBuffer = (char*)out_pc->attribute(0)->buffer()->data();
            colorBuffer = (char*)out_pc->attribute(1)->buffer()->data();
            sizeBuffer = (char*)out_pc->attribute(2)->buffer()->data();

            //MyAssert(pointBufferSize % 12 == 0 && colorBufferSize % 3 == 0 && pointBufferSize / 12 == colorBufferSize / 3 && pointBufferSize / 12 <= framePoints, 2004);
            nPointsNew = pointBufferSize / 12;
        }
        


        int pOffset = 0;
        int cOffset = 0;
        int sOffset = 0;

        unique_lock<mutex> lck_frame(enqueueFrameLock);
        //pthread_mutex_lock(&enqueueFrameLock);
        while (chunkID != curFrameID) {

            msgChunkCond.wait(lck_frame);
            //pthread_cond_wait(&msgChunkCond, &enqueueFrameLock);
        }
        if (bLast > 0) {
            

            uint64_t t3 = NDKGetTime();
            for (int i = 0; i < nPointsNew; i++, curPointCloudSize_inner++) {
                float* pp = (float*)(pointBuffer + pOffset);
                BYTE* pc = (BYTE*)(colorBuffer + cOffset);
                float* ps = (float*)(sizeBuffer + sOffset);


                //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
                //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
                //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
                //
                //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
                //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
                //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);
                pointBuf[curPointCloudSize_inner * 3] = (float)((pp[0]) * 100);
                pointBuf[curPointCloudSize_inner * 3 + 1] = (float)((pp[1]) * 100);
                pointBuf[curPointCloudSize_inner * 3 + 2] = (float)((pp[2]) * 100);

                colorBuf[curPointCloudSize_inner * 3] = (uint8_t)(BYTE)pc[0];
                colorBuf[curPointCloudSize_inner * 3 + 1] = (uint8_t)(BYTE)pc[1];
                colorBuf[curPointCloudSize_inner * 3 + 2] = (uint8_t)(BYTE)pc[2];
                //printf("Raw point data: %.3f %.3f\n", pointBuf[curPointCloudSize*3], colorBuf[curPointCloudSize*3]);

                pointSizeBuf[curPointCloudSize_inner] = (float)(ps[0]) * 100.0f;


                pOffset += sizeof(float) * 3;
                cOffset += 3;
                sOffset += sizeof(float);
            }
            nReceivedCells[chunkID]++;
            uint64_t t4 = NDKGetTime();
            decodingTime += t4 - t3;
            //InfoMessage("Decoding time %d %d %.3lf %.3lf (decoder #%d)", chunkID, tileID, t2-t1, t4-t3, decoderIdx);
            UE_LOG(TEST, Log, TEXT("Time %llu,%llu,%llu,%llu"), t1, t2, t3, t4);
            UE_LOG(TEST, Log, TEXT("Singel dynamic Cell frame ID:%d,%d (%d), decoding time %llu (decoder #%d)"), curFrameID, chunkID, curPointCloudSize_inner, t2 - t1 + t4 - t3, decoderIdx);

            FString message_fstring = FString::Printf(TEXT("Singel dynamic Cell frame ID:%d,%d (%d), decoding time %llu (decoder #%d)"), curFrameID, chunkID, curPointCloudSize_inner, t2 - t1 + t4 - t3, decoderIdx);
            std::string message = TCHAR_TO_UTF8(*message_fstring);
            {
                std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
                AloggerActor::log_queue.push(message);
            }

            
        }
        else {
            uint64_t t3 = NDKGetTime();
            for (int i = 0; i < nPointsNew; i++, curPointCloudSize++) {
                float* pp = (float*)(pointBuffer + pOffset);
                BYTE* pc = (BYTE*)(colorBuffer + cOffset);
                float* ps = (float*)(sizeBuffer + sOffset);


                //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
                //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
                //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
                //
                //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
                //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
                //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);
                pointBuf[curPointCloudSize * 3] = (float)((pp[0]) * 100);
                pointBuf[curPointCloudSize * 3 + 1] = (float)((pp[1]) * 100);
                pointBuf[curPointCloudSize * 3 + 2] = (float)((pp[2]) * 100);

                colorBuf[curPointCloudSize * 3] = (uint8_t)(BYTE)pc[0];
                colorBuf[curPointCloudSize * 3 + 1] = (uint8_t)(BYTE)pc[1];
                colorBuf[curPointCloudSize * 3 + 2] = (uint8_t)(BYTE)pc[2];
                //printf("Raw point data: %.3f %.3f\n", pointBuf[curPointCloudSize*3], colorBuf[curPointCloudSize*3]);

                pointSizeBuf[curPointCloudSize] = (float)(ps[0]) * 100.0f;


                pOffset += sizeof(float) * 3;
                cOffset += 3;
                sOffset += sizeof(float);
            }
            nReceivedCells[chunkID]++;
            uint64_t t4 = NDKGetTime();
            decodingTime += t4 - t3;
            //InfoMessage("Decoding time %d %d %.3lf %.3lf (decoder #%d)", chunkID, tileID, t2-t1, t4-t3, decoderIdx);
            UE_LOG(TEST, Log, TEXT("Time %llu,%llu,%llu,%llu"), t1, t2, t3, t4);
            UE_LOG(TEST, Log, TEXT("Singel Cell frame ID:%d,%d (%d), decoding time %llu (decoder #%d)"), curFrameID, chunkID, curPointCloudSize, t2 - t1 + t4 - t3, decoderIdx);

            FString message_fstring = FString::Printf(TEXT("Singel dynamic Cell frame ID:%d,%d (%d), decoding time %llu (decoder #%d)"), curFrameID, chunkID, curPointCloudSize, t2 - t1 + t4 - t3, decoderIdx);
            std::string message = TCHAR_TO_UTF8(*message_fstring);
            {
                std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
                AloggerActor::log_queue.push(message);
            }
            
        }


        //if (pointBuffer != nullptr)
        //    delete[] pointBuffer;
        //if (colorBuffer != nullptr)
        //    delete[] colorBuffer;
        //if (sizeBuffer != nullptr)
        //    delete[] sizeBuffer;
        




        //if (nReceivedCells[chunkID] == VIDEO_DATA::nTiles / 2) {
        //    if (chunkID % dynamicFrame == 0) {
        //        pre_outter_idx = curPointCloudSize;
        //    }
        //    else {
        //        curPointCloudSize = pre_outter_idx;
        //    }
        //}

        

        //if (nReceivedCells[chunkID] == nRequestedCells[chunkID]) {    //Nan Local
        //if (nReceivedCells[chunkID] == VIDEO_SCHEDULER::nRequestedCells[chunkID]) { //Nan VIVO
        if (nReceivedCells[chunkID] == VIDEO_DATA::nTiles) {
            nReceivedCells[chunkID] = 0;
            //MyAssert(curPointCloudSize != 0, 3400);
            
            
            
            //int dataSize = (sizeof(WORD) + sizeof(BYTE)) * curPointCloudSize * FRAME_BUFFER::GRP;
            //BYTE *frameBuf = new BYTE[dataSize];
            //GenerateFrame(chunkID, curPointCloudSize, frameBuf);

            //FRAME_BUFFER::EnqueueFrame(chunkID, curPointCloudSize, frameBuf);
            //call handler to sent message to rendering thread
            //pEnvDecompress->CallStaticVoidMethod(jnativeClass, mid_onChunkAvailableLocal, chunkID);
            //nativelib::onChunkAvailable(chunkID);

            //InfoMessage("Decoding time: %d %.3lf %d %d (decoder #%d)\n", chunkID, decodingTime, curPointCloudSize, nReceivedCells[chunkID], decoderIdx);
            //printf("current frame ID:%d,%d (%d), decoding time %f (decoder #%d)\n", curFrameID, chunkID, curPointCloudSize, decodingTime, decoderIdx);
            //UE_LOG(TEST, Log, TEXT("current frame ID:%d,%d (%d), decoding time %f (decoder #%d)"), curFrameID, chunkID, curPointCloudSize, decodingTime, decoderIdx);
            UE_LOG(TEST, Log, TEXT("All current frame ID:%d,%d (%d), All decoding time %llu (decoder #%d), current timestamp: %llu"), curFrameID, chunkID, curPointCloudSize, (uint64_t)NDKGetTime() - decodingTime_timestamp, decoderIdx, (uint64_t)NDKGetTime());
            
            {
                FString message_fstring = FString::Printf(TEXT("All current frame ID:%d,%d (%d), All decoding time %llu (decoder #%d), current timestamp: %llu"), curFrameID, chunkID, curPointCloudSize, (uint64_t)NDKGetTime() - decodingTime_timestamp, decoderIdx, (uint64_t)NDKGetTime());
                std::string message = TCHAR_TO_UTF8(*message_fstring);
                {
                    std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
                    AloggerActor::log_queue.push(message);

                }
                
            }


            decodingTime_timestamp = NDKGetTime();

            if (bLast > 0) {
                for (int i = curPointCloudSize_inner; i < MAX_POINT_CLOUD_SIZE; i++) {
                    //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
                    //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
                    //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
                    //
                    //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
                    //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
                    //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);
                    pointBuf[i * 3] = (float)(0.0);
                    pointBuf[i * 3 + 1] = (float)(0.0);
                    pointBuf[i * 3 + 2] = (float)(0.0);

                    colorBuf[i * 3] = (uint8_t)(BYTE)0;
                    colorBuf[i * 3 + 1] = (uint8_t)(BYTE)0;
                    colorBuf[i * 3 + 2] = (uint8_t)(BYTE)0;

                    pointSizeBuf[i] = (float)(0);

                }
            }
            else {
                for (int i = curPointCloudSize; i < MAX_POINT_CLOUD_SIZE; i++) {
                    //            cloudX[curPointCloudSize] = (int)round((pp[0] * 1000));
                    //            cloudY[curPointCloudSize] = (int)round((pp[1] * 1000));
                    //            cloudZ[curPointCloudSize] = (int)round((pp[2] * 1000));
                    //
                    //            cloudR[curPointCloudSize] = (BYTE)(pc[0]);
                    //            cloudG[curPointCloudSize] = (BYTE)(pc[1]);
                    //            cloudB[curPointCloudSize] = (BYTE)(pc[2]);
                    pointBuf[i * 3] = (float)(0.0);
                    pointBuf[i * 3 + 1] = (float)(0.0);
                    pointBuf[i * 3 + 2] = (float)(0.0);

                    colorBuf[i * 3] = (uint8_t)(BYTE)0;
                    colorBuf[i * 3 + 1] = (uint8_t)(BYTE)0;
                    colorBuf[i * 3 + 2] = (uint8_t)(BYTE)0;

                    pointSizeBuf[i] = (float)(0);

                }

            }



            decodingTimeTotal2 += decodingTime;
            //delete [] frameBuf;
            UE_LOG(TEST, Log, TEXT("VC current pointBuf %f,%f,%f, colorBuf  %f,%f,%f,"), pointBuf[0], pointBuf[1], pointBuf[2], (float)colorBuf[0], (float)colorBuf[1], (float)colorBuf[2]);

            


            ////float temp_point[MAX_POINT_CLOUD_SIZE * 3];
            //std::array<float, MAX_POINT_CLOUD_SIZE * 3> temp_point;
            //std::copy(pointBuf, pointBuf + MAX_POINT_CLOUD_SIZE * 3, temp_point.data());
            ////std::copy(std::begin(pointBuf), std::end(pointBuf), std::begin(temp_point));

            ////uint8_t temp_color[MAX_POINT_CLOUD_SIZE * 3];
            //std::array<uint8_t, MAX_POINT_CLOUD_SIZE * 3> temp_color;
            //std::copy(colorBuf, colorBuf + MAX_POINT_CLOUD_SIZE * 3, temp_color.data());
            ////std::copy(std::begin(colorBuf), std::end(colorBuf), std::begin(temp_color));

            //std::array<float, MAX_POINT_CLOUD_SIZE> temp_size;
            //std::copy(pointSizeBuf, pointSizeBuf + MAX_POINT_CLOUD_SIZE, temp_size.data());
            ////std::copy(std::begin(pointSizeBuf), std::end(pointSizeBuf), std::begin(temp_size));

            //std::vector<float> temp_point(pointBuf, pointBuf + MAX_POINT_CLOUD_SIZE * 3);
            //std::vector<uint8_t> temp_color(colorBuf, colorBuf + MAX_POINT_CLOUD_SIZE * 3);
            //std::vector<float> temp_size(pointSizeBuf, pointSizeBuf + MAX_POINT_CLOUD_SIZE);


            float* pointBuf_add = new float[MAX_POINT_CLOUD_SIZE * 3];
            uint8_t* colorBuf_add = new uint8_t[MAX_POINT_CLOUD_SIZE * 3];
            float* pointSizeBuf_add = new float[MAX_POINT_CLOUD_SIZE];

            //memcpy(pointBuf_add, pointBuf, MAX_POINT_CLOUD_SIZE * sizeof(float) * 3);
            //memcpy(colorBuf_add, colorBuf, MAX_POINT_CLOUD_SIZE * sizeof(uint8_t) * 3);
            //memcpy(pointSizeBuf_add, pointSizeBuf, MAX_POINT_CLOUD_SIZE * sizeof(float));
            std::copy(pointBuf, pointBuf + MAX_POINT_CLOUD_SIZE * 3, pointBuf_add);
            std::copy(colorBuf, colorBuf + MAX_POINT_CLOUD_SIZE * 3, colorBuf_add);
            std::copy(pointSizeBuf, pointSizeBuf + MAX_POINT_CLOUD_SIZE, pointSizeBuf_add);
  

            if (APointCloudRenderer::highResPosFrameQueue.size() >= APointCloudRenderer::buffer_frame_size) {
                msgRenderCond.wait(lck_frame);
            }
            unique_lock<mutex> lck_renderer(APointCloudRenderer::highResFrameQueueLock);
            APointCloudRenderer::highResPosFrameQueue.push(pointBuf_add);
            APointCloudRenderer::highResColorFrameQueue.push(colorBuf_add);
            APointCloudRenderer::highResSizeFrameQueue.push(pointSizeBuf_add);

            lck_renderer.unlock();
            UE_LOG(TEST, Log, TEXT("Added frame to buffer, current timestamp: %llu"), (uint64_t)NDKGetTime());

            {
                FString message_fstring = FString::Printf(TEXT("Added frame to buffer, current timestamp: %llu"), (uint64_t)NDKGetTime());
                std::string message = TCHAR_TO_UTF8(*message_fstring);
                {
                    std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
                    AloggerActor::log_queue.push(message);
                }
                
            }

/*
#ifdef RENDER
            pthread_mutex_lock(&PTCL_PLAYER::highResFrameQueueLock);
            PTCL_PLAYER::highResFrameQueue.push(pointBuf);
            PTCL_PLAYER::highResCFrameQueue.push(colorBuf);
            PTCL_PLAYER::nPointsQueue.push(curPointCloudSize);
            PTCL_PLAYER::highResFrameIDQueue.push(chunkID);
            pthread_cond_signal(&PTCL_PLAYER::highResFrameQueueCond);
            pthread_mutex_unlock(&PTCL_PLAYER::highResFrameQueueLock);
            //cout << PTCL_PLAYER::nPointsQueue.size() << ' '<< PTCL_PLAYER::highResFrameIDQueue.size() << endl;
#endif
*/
            //double t5 = NDKGetTime();
            //PTCL_PLAYER::RenderOneFrame();
            //double t6 = NDKGetTime();


            if (curFrameID == VIDEO_DATA::nChunks - 1) {
                decodingTimeTotal = NDKGetTime() - decodingTimeStart;
                bDecoding = false;
            }
            curPointCloudSize_inner = curPointCloudSize;
            //if (bLast > 0) {
            //    curPointCloudSize = inner_point_idx;
            //}
            //else {
            //    curPointCloudSize = 0;
            //}
            curPointCloudSize = 0;
            
            //if ((chunkID+1) % dynamicFrame == 0) {
            //    curPointCloudSize_outer = 0;
            //    curPointCloudSize_inner = inner_point_idx;
            //}
            
            decodingTime = 0.0f;

            curFrameID++;
            curFrameID = curFrameID % VIDEO_DATA::nChunks;
            //pthread_cond_broadcast(&msgChunkCond);
            msgChunkCond.notify_all();
        }
        lck_frame.unlock();
        //pthread_mutex_unlock(&enqueueFrameLock);
        //if (frameID == 750) InfoMessage("%d %d %d %d %d", frameID, tileID, nPoints, nPointsNew, curPointCloudSize);

        MyAssert(curPointCloudSize < MAX_POINT_CLOUD_SIZE, 3399);
        //InfoMessage("KD-Tree Decoding time (%d %d): %.6f %.6f %.6f\n", frameID, nPoints, t2 - t1, t4 - t3, t6 - t5);

        delete[] pData;
    }

    return NULL;
}

void* VIDEO_COMM::DecompressFrameThread(void* arg) {
    unique_lock<mutex> lck(msgQueueLock);

    //pthread_mutex_lock(&msgQueueLock);
    
    
    //JNIEnv * pEnvDecompress = NULL;
    //CacheJNIEnv(&pEnvDecompress);

    //jmethodID mid_onChunkAvailableLocal = pEnvDecompress->GetStaticMethodID(jnativeClass, "onChunkAvailable", "(I)V");
    //MyAssert(mid_onChunkAvailableLocal != NULL, 3446);

    //jmethodID mid_onChunkReceivedLocal = pEnvDecompress->GetStaticMethodID(jnativeClass, "onChunkReceived", "(I)V");
    //MyAssert(mid_onChunkAvailableLocal != NULL, 3446);

    int decoderIdx;
    msgDecoderCounter++;
    decoderIdx = msgDecoderCounter;
    InfoMessage("Decoder #%d is ready.", msgDecoderCounter);
    
    lck.unlock();
    //pthread_mutex_unlock(&msgQueueLock);

    BYTE* pData = NULL;

    while (true) {
        unique_lock<mutex> lck_msg(msgQueueLock);

        
        //pthread_mutex_lock(&msgQueueLock);
        while (msgQueue.empty()) {
            msgQueueCond.wait(lck_msg);
            //pthread_cond_wait(&msgQueueCond, &msgQueueLock);
        }

        if (!msgQueue.empty()) {
            pData = msgQueue.front();
            //InfoMessage("Thread %d dequeue %p", decoderIdx, pData);
            msgQueue.pop();
        }
        
        lck_msg.unlock();
        //pthread_mutex_unlock(&msgQueueLock);

        MyAssert(pData != NULL, 3401);

        uint64_t t = NDKGetTime();
        int dataLen = ReadInt(pData + 1) - CHUNK_HEADER_LEN;
        int chunkID = ReadWORD(pData + 5);
        int tileID = ReadWORD(pData + 7);
        int quality = pData[9];
        int cls = 0;
        int seqnum = ReadInt(pData + 10);
        BYTE bLast = pData[14]; //the flag

        int frameSize = VIDEO_DATA::GetChunkSize(chunkID, tileID, quality);
        int framePoints = VIDEO_DATA::GetChunkPoints(chunkID, tileID, quality);
        //InfoMessage("frameSize %d dataLen %d chunkID %d tileID %d", frameSize, dataLen, chunkID, tileID);
        MyAssert(frameSize == dataLen + CHUNK_HEADER_LEN, 3402);

        //pthread_mutex_lock(&triggerLock); // atomic trigger the message to Java
        //pEnvDecompress->CallStaticVoidMethod(jnativeClass, mid_onChunkReceivedLocal, chunkID);
        //VIDEO_SCHEDULER_FESTIVE::OnReceiveChunks(chunkID, tileID, cls, quality, dataLen,
        //                                         bLast, t);
        //pthread_mutex_unlock(&triggerLock);

        //int dataSize = (sizeof(WORD) + sizeof(BYTE)) * framePoints * FRAME_BUFFER::GRP;
        //BYTE *frameBuf = new BYTE[dataSize];
        DecompressFrame(chunkID, &framePoints, frameSize, pData, decoderIdx);

/*
#ifdef RENDER
        //TODO:out of order enqueue
        pthread_mutex_lock(&PTCL_PLAYER::highResFrameQueueLock);
        PTCL_PLAYER::highResFrameQueue.push(pointBuf);
        PTCL_PLAYER::highResCFrameQueue.push(colorBuf);
        PTCL_PLAYER::nPointsQueue.push(framePoints);
        PTCL_PLAYER::highResFrameIDQueue.push(chunkID);
        pthread_cond_signal(&PTCL_PLAYER::highResFrameQueueCond);
        pthread_mutex_unlock(&PTCL_PLAYER::highResFrameQueueLock);
        //cout << PTCL_PLAYER::nPointsQueue.size() << ' '<< PTCL_PLAYER::highResFrameIDQueue.size() << endl;
#endif
*/
        delete[] pData;
    }

    return NULL;
}


//void VIDEO_COMM::OnPlayed(int frameID) {
//    int nThreads = VIDEO_SCHEDULER::nDecoders;
//    if (nThreads > 1) {
//        pthread_mutex_lock(&enqueueFrameLock);
//        FRAME_BUFFER::DequeueFrames(frameID);
//        pthread_mutex_unlock(&enqueueFrameLock);
//    } else FRAME_BUFFER::DequeueFrames(frameID);
//}

void VIDEO_COMM::ProcessMessage(VIDEO_MESSAGE *pM) {
    BYTE *pData = pM->pData;
    MyAssert(pData != NULL, 3535);

    switch (pM->id) {
        case MSG_VIDEO_DATA: {
            MyAssert(mode == MODE_CLIENT, 3393);

            double t = NDKGetTime();
            //VIDEO_SCHEDULER::tileArrivalTime[chunkID * VIDEO_DATA::nTiles + tileID] = t;

            int dataLen = ReadInt(pData+1) - CHUNK_HEADER_LEN;
            int chunkID = ReadWORD(pData+5);
            int tileID = ReadWORD(pData+7);
            int quality = pData[9];
            //int cls = pData[9];
            int cls = 0;
            int seqnum = ReadInt(pData+10);
            BYTE bLast = pData[14]; //the flag
            VIDEO_SCHEDULER::CPU_Time[chunkID] = std::max(VIDEO_SCHEDULER::CPU_Time[chunkID], seqnum);

            //int frameSize = VIDEO_DATA::GetChunkSize(chunkID, tileID, quality);
            int frameSize = dataLen + CHUNK_HEADER_LEN;
            int framePoints = VIDEO_DATA::GetChunkPoints(chunkID, tileID, quality);
            
            //InfoMessage("frameSize %d dataLen %d chunkID %d tileID %d", frameSize, dataLen, chunkID, tileID);
            MyAssert(frameSize == dataLen + CHUNK_HEADER_LEN, 3394);

            switch (VIDEO_SCHEDULER::dashAlg) {
                case VIDEO_SCHEDULER::ALG_VIVO:
                    //VIDEO_SCHEDULER::OnReceiveChunks(chunkID, tileID, cls, quality, dataLen, bLast, t);
                    
                    // new frame is coming
                    /*
                    if (curFrameID != chunkID) {
                        curFrameID = chunkID;

                        curPointCloudSize = 0;
                        if (pCloud != NULL) delete pCloud;
                        pcl::PointCloud<pcl::PointXYZRGB> * pCloud = new pcl::PointCloud<pcl::PointXYZRGB>();

                        pCloud->clear();
                        pCloud->width = framePoints;
                        pCloud->height = 1;
                        pCloud->is_dense = false;
                        pCloud->points.resize(pCloud->width * pCloud->height);
                    } else {
                        pCloud->width = pCloud->size() + framePoints;
                        pCloud->points.resize(pCloud->width * pCloud->height);
                    }
                    */

                    if (VIDEO_SCHEDULER::nDecoders > 1) {
                        UE_LOG(TEST, Log, TEXT("frameSize %d dataLen %d chunkID %d tileID %d"), frameSize, dataLen, chunkID, tileID);
                        unique_lock<mutex> lck(msgQueueLock);
                        
                        //pthread_mutex_lock(&msgQueueLock);
                        //int recvMsgLen = SETTING_RECV_BUFFER_SIZE_NORMAL;
                        //BYTE * pDataMsg = new BYTE[recvMsgLen];
                        int pDataLen = ReadInt(pData+1);
                        BYTE * pDataMsg = new BYTE[pDataLen];
                        //MyAssert(pDataLen <= recvMsgLen, 3403);
                        MyAssert(pDataMsg != NULL, 3403);
                        memcpy(pDataMsg, pData, pDataLen);

                        //FScopeLock lckCS(&msgQueueLockCS);
                        msgQueue.push(pDataMsg);
                        //InfoMessage("Enqueue %p", pDataMsg);
                        UE_LOG(TEST, Log, TEXT("msgQueue size %d"), msgQueue.size());

                        //pthread_cond_signal(&msgQueueCond);
                        msgQueueCond.notify_one();
                        //msgQueueEvent->Trigger();
                        //pthread_mutex_unlock(&msgQueueLock);
                        lck.unlock();
                        //lckCS.Unlock();

                    } else {
                        nReceivedCells[chunkID]++;
                        AddtoPointCloud(chunkID, tileID, framePoints, frameSize, pData);

                        if (nReceivedCells[chunkID] == VIDEO_SCHEDULER::nRequestedCells[chunkID]) {
                            MyAssert(curPointCloudSize != 0, 3400);
                            int dataSize = (sizeof(WORD) + sizeof(BYTE)) * curPointCloudSize * FRAME_BUFFER::GRP;
                            BYTE *frameBuf = new BYTE[dataSize];
                            GenerateFrame(chunkID, curPointCloudSize, frameBuf);

                            //FRAME_BUFFER::EnqueueFrame(chunkID, curPointCloudSize, frameBuf);
                            //pEnvNetwork->CallStaticVoidMethod(jnativeClass, mid_onChunkAvailable, chunkID, tileID, quality);

                            delete [] frameBuf;

                            InfoMessage("Decoding time: %.3lf %d (chunkID = %d)\n", decodingTime, curPointCloudSize, chunkID);
                            decodingTime = 0.0f;
                            curPointCloudSize = 0;
                        }
                    }
                    
                    VIDEO_SCHEDULER::OnReceiveChunks(chunkID, tileID, cls, quality, dataLen, bLast, t);

                    break;

                case VIDEO_SCHEDULER::ALG_FESTIVE: {

                    if (VIDEO_SCHEDULER::nDecoders > 1) {
                        //pthread_mutex_lock(&msgQueueLock);
                        // 
                        unique_lock<mutex> lck_festive(msgQueueLock);
                        //int recvMsgLen = SETTING_RECV_BUFFER_SIZE_NORMAL;
                        //BYTE * pDataMsg = new BYTE[recvMsgLen];
                        int pDataLen = ReadInt(pData+1);
                        BYTE * pDataMsg = new BYTE[pDataLen];
                        //MyAssert(pDataLen <= recvMsgLen, 3403);
                        MyAssert(pDataMsg != NULL, 3403);
                        memcpy(pDataMsg, pData, pDataLen);

                        msgQueue.push(pDataMsg);
                        //InfoMessage("Enqueue %p", pDataMsg);

                        //pthread_cond_signal(&msgQueueCond);
                        msgQueueCond.notify_one();
                        //pthread_mutex_unlock(&msgQueueLock);
                        lck_festive.unlock();
                    } else {
                        VIDEO_SCHEDULER_FESTIVE::OnReceiveChunks(chunkID, tileID, cls, quality, dataLen,
                                                                 bLast, t);

                        int dataSize = (sizeof(WORD) + sizeof(BYTE)) * framePoints * FRAME_BUFFER::GRP;
                        BYTE *frameBuf = new BYTE[dataSize];
                        //DecompressFrame(chunkID, &framePoints, frameSize, pData, frameBuf, 0);
                        DecompressFrame(chunkID, &framePoints, frameSize, pData, 0);
                        //FRAME_BUFFER::EnqueueFrame(chunkID, framePoints, frameBuf);
                        //pEnvNetwork->CallStaticVoidMethod(jnativeClass, mid_onChunkAvailable, chunkID, tileID, quality);

                        delete [] frameBuf;
                    }

                    break;
                }

                default:
                    MyAssert(0, 3821);
            }

            if (EVENT_LOGGER::bEnable) {
                EVENT_LOGGER::Log_ReceiveTile(chunkID, tileID, quality, seqnum);
            }

            /*
            InfoMessage("VIDEO_DATA cls=%d id=%d tile=%d quality=%d, data=%d, seqnum=%d",
                        cls, chunkID, tileID, quality, dataLen, seqnum
            );
             */

            //now the chunk has been fully downloaded.
            //int & m = ENCODED_BUFFER::pMap[chunkID * VIDEO_DATA::nTiles + tileID];
            //MyAssert(m >= 0xFFFFFFF, 3465);
            //m -= 0xFFFFFFF;

            PERF_METRICS::RecordReceivedTile(chunkID, tileID, quality, dataLen);

            /*
            if (VIDEO_SCHEDULER::bFoV) {
                //VIDEO_SCHEDULER::OnReceiveChunks(chunkID, tileID, cls, quality, dataLen, bLast);
                VIDEO_SCHEDULER_FESTIVE::OnReceiveChunks(chunkID, tileID, cls, quality, dataLen, bLast);
                //VIDEO_SCHEDULER_H2::OnReceiveChunks(chunkID, tileID, cls, quality, dataLen, bLast);
            }
            */

            VIDEO_SCHEDULER::tileRecvCounter++;

            break;
        }

        case MSG_VIDEO_METADATA: {
            UE_LOG(TEST, Log, TEXT("Decode Metadata"));
            MyAssert(mode == MODE_CLIENT, 3408);
            VIDEO_DATA::DecodeMetaData(pM->pData, pM->msgLen);

            if (VIDEO_DATA::nTiles == 1) {
                //extra recv buffer for 1x1 tiles
                recvBufferCapacity = SETTING_RECV_BUFFER_SIZE_LARGE;
                delete [] pDataRcvdMsg;
                pDataRcvdMsg = rcvdMsg.pData = new BYTE[recvBufferCapacity];
            }

            break;
        }

        default:
            MyAssert(0, 3389);
    }
}

void VIDEO_COMM::ReceiveMessage() {
    UE_LOG(TEST, Log, TEXT("ReceiveMessage, %llu"), (uint64_t)NDKGetTime());
    int fd = fds[0];
    SetSocketNoDelay_TCP(fds[0]);
    SetNonBlockIO(fds[0]);
    int& nRecv = rcvdBytes;

    VIDEO_MESSAGE* pM = &rcvdMsg;
    static const int RECV_NORMAL = 1;
    static const int RECV_WASTE = 2;
    static const int RECV_DRAIN_WASTE = 3;

    static const int WASTE_BLOCK_SIZE = 4096;
    static int whPointer = -1;
    static int whSize = -1;
    static int recvMode = RECV_NORMAL;
    static BYTE wasteHolder[WASTE_BLOCK_SIZE];

    //for client, extend the "header" to 8 bytes
    static const int headerLen = 9;     
    while (1) {
        int nToRead;
        int n;
        int x;
        if (recvMode == RECV_WASTE) {
            //n = (int)read(fd, wasteHolder, WASTE_BLOCK_SIZE);
            //std::FILE* fp = fdopen(fd, "r");
            //n = std::fread(wasteHolder, 1, WASTE_BLOCK_SIZE, fp);
            n = recv(fd, (char*)wasteHolder, (int)WASTE_BLOCK_SIZE, 0);

            if (n > 0) totalBytes += n;
        }
        else {
            if (nRecv < headerLen)
                nToRead = headerLen;
            else
                nToRead = pM->msgLen;

            if (recvMode == RECV_NORMAL) {
                //std::FILE* fp = fdopen(fd, "r");

                //n = (int)read(fd, pM->pData + nRecv, (size_t)nToRead - nRecv);
                //n = std::fread(pM->pData + nRecv, 1, (size_t)nToRead - nRecv, fp);
                UE_LOG(TEST, Log, TEXT("blocked timestamp: %llu"), (uint64_t)NDKGetTime());
                n = recv(fd, (char*)(pM->pData + nRecv), (int)nToRead - nRecv, 0);
                if (n > 0) totalBytes += n;
            }
            else { //RECV_DRAIN_WASTE
                int nRemainingBytesInWH = whSize - whPointer;

                if (nRemainingBytesInWH <= nToRead - nRecv) {
                    memcpy(pM->pData + nRecv, wasteHolder + whPointer, (size_t)nRemainingBytesInWH);
                    n = nRemainingBytesInWH;
                    recvMode = RECV_NORMAL;
                }
                else {
                    memcpy(pM->pData + nRecv, wasteHolder + whPointer, (size_t)nToRead - nRecv);
                    n = nToRead - nRecv;
                    whPointer += n;
                    //stay in RECV_DRAIN_WASTE mode
                }
            }
        }

        if (n > 0) {
            if (recvMode == RECV_WASTE) {
                int i;
                for (i = 0; i < n; i++) {
                    if (wasteHolder[i] != 0xFF) break;
                }

                wastedBytes += i;

                if (i < n) {
                    //now we found the beginning of the next message
                    whPointer = i;
                    whSize = n;

                    int remain = whSize - whPointer;
                    if (remain > 5) {
                        int msgLen = *((int*)(wasteHolder + whPointer + 1));
                        if (msgLen < remain) {
                            //handle a corner case where multiple messages (potentially interleaved by
                            //wasted data) are in the waste holder: consolidate them by removing 0xFF
                            /////////////////////////////////////////////////////////////////////////
                            //p0 points to the next byte after the end of the msg
                            int p0 = whPointer + msgLen;
                            while (1) {
                                int p = p0;
                                while (wasteHolder[p] == 0xFF) {
                                    if (++p >= whSize) break;
                                }

                                wastedBytes += p - p0;

                                if (p == whSize) {
                                    whSize = p0;
                                    break;
                                }
                                else {
                                    //p is now the starting point of another new message
                                    //remove [p0..p-1]
                                    if (p0 != p) {
                                        memmove(wasteHolder + p0, wasteHolder + p, whSize - p);
                                        whSize -= (p - p0);
                                    }
                                }

                                int r = whSize - p0;
                                if (r > 5) {
                                    int l = *((int*)(wasteHolder + p0 + 1));
                                    if (l >= r)
                                        break;
                                    else
                                        p0 += l;
                                }
                            }
                            /////////////////////////////////////////////////////////////////////////
                        }
                    }


                    recvMode = RECV_DRAIN_WASTE;
                }
                continue;
            }

            nRecv += n;
            if (nRecv == headerLen) {
                UE_LOG(TEST, Log, TEXT("nRecv == headerLen, current timestamp: %llu"), (uint64_t)NDKGetTime());
                ///////////////////////////////////////////////////////////////////
                if (recvMode == RECV_NORMAL) {
                    int i;
                    for (i = 0; i < headerLen; i++) {
                        if (pM->pData[i] != 0xFF) break;
                    }

                    wastedBytes += i;
                    if (i == headerLen) {
                        //all wasted bytes
                        nRecv = 0;
                        recvMode = RECV_WASTE;
                        continue;
                    }
                    else if (i > 0) {
                        memmove(pM->pData, pM->pData + i, headerLen - i);
                        nRecv -= i;
                        continue;
                    }
                }
                ///////////////////////////////////////////////////////////////////

                pM->id = pM->pData[0];
                x = int(pM->id);
                UE_LOG(TEST, Log, TEXT("Process Message %d:"), int(pM->id));
                std::cout << int(pM->id) << std::endl;
                pM->msgLen = ReadInt(pM->pData + 1);
                MyAssert(
                    pM->msgLen < recvBufferCapacity&&
                    pM->msgLen > headerLen &&
                    pM->pData == pDataRcvdMsg
                    , 3409);

                if (pM->id == MSG_VIDEO_DATA) {
                    int chunkID = ReadWORD(pM->pData + 5);
                    int tileID = ReadWORD(pM->pData + 7);   
                    //BYTE * pChunkData = ENCODED_BUFFER::AllocateChunkSpace(chunkID, tileID, pM->msgLen); 
                    //memcpy(pChunkData, pM->pData, headerLen);

                    //pM->pData = pChunkData; //replace the pointer
                    UE_LOG(TEST, Log, TEXT("current frame ID:%d, current timestamp: %llu"), chunkID, (uint64_t)NDKGetTime());

                    FString message_fstring = FString::Printf(TEXT("current frame ID:%d, current timestamp: %llu"), chunkID, (uint64_t)NDKGetTime());
                    std::string message = TCHAR_TO_UTF8(*message_fstring);

                    {
                        std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
                        AloggerActor::log_queue.push(message);

                    }
                }
                


            }
            else if (nRecv > headerLen && nRecv == pM->msgLen) {
                UE_LOG(TEST, Log, TEXT("Process Message"));
                ProcessMessage(pM);
                pM->pData = pDataRcvdMsg;   //restore the pointer
                nRecv = 0;
            }
        }
        else if (n == 0 || (n < 0 && errno == WSAECONNRESET)) {
            //connection closed
            MyAssert(0, 3386);
            //close(fd);
            //std::FILE* fp = fdopen(fd, "r");
            //std::fclose(fp);
            closesocket(fd);

        }
        //else if (n < 0 && (errno == EWOULDBLOCK)) {
        else if (n < 0) { //todo error
            break;
        }
        else {
            UE_LOG(TEST, Log, TEXT("SendMessage_BatchedGAZERequest"));
            ErrorMessage("Unexpected recv error %d: %s.", errno, strerror(errno));
            MyAssert(0, 3387);
        }
    }
}

/*
//the original version that does not handle wasted bytes
void VIDEO_COMM::ReceiveMessage() {
    int fd = fds[0];
    int &nRecv = rcvdBytes;

    VIDEO_MESSAGE *pM = &rcvdMsg;

    //for client, extend the "header" to 8 bytes
    static const int headerLen = 8;
    while (1) {
        int nToRead;
        if (nRecv < headerLen)
            nToRead = headerLen;
        else
            nToRead = pM->msgLen;

        int n = (int)read(fd, pM->pData + nRecv, (size_t)nToRead - nRecv);
        if (n > 0) {
            nRecv += n;
            if (nRecv == headerLen) {
                pM->id = pM->pData[0];
                pM->msgLen = ReadInt(pM->pData + 1);
                MyAssert(
                        pM->msgLen < SETTING_RECV_BUFFER_SIZE &&
                                pM->msgLen > headerLen &&
                                pM->pData == pDataRcvdMsg
                        , 3409);

                if (pM->id == MSG_VIDEO_DATA) {
                    int chunkID = ReadWORD(pM->pData + 5);
                    int tileID = pM->pData[7];
                    BYTE * pChunkData = ENCODED_BUFFER::AllocateChunkSpace(chunkID, tileID, pM->msgLen);
                    memcpy(pChunkData, pM->pData, headerLen);

                    pM->pData = pChunkData; //replace the pointer
                }

            } else if (nRecv > headerLen && nRecv == pM->msgLen) {
                ProcessMessage(pM);
                pM->pData = pDataRcvdMsg;   //restore the pointer
                nRecv = 0;
            }
        } else if (n == 0 || (n < 0 && errno == ECONNRESET)) {
            //connection closed
            MyAssert(0, 3386);
            close(fd);
        } else if (n < 0 && (errno == EWOULDBLOCK)) {
            break;
        } else {
            ErrorMessage("Unexpected recv error %d: %s.", errno, strerror(errno));
            MyAssert(0, 3387);
        }
    }
}
*/

void VIDEO_COMM::SendMessage_Core(VIDEO_MESSAGE* pM) {
    UE_LOG(TEST, Log, TEXT("SendMessage_Core"));
    int pri = 0;

    /*
    switch (pM->id) {
        case MSG_SELECT_VIDEO:
        case MSG_REQUEST_CHUNK:
        case MSG_BATCH_REQUESTS:
        //case MSG_VIDEO_METADATA:
            break;

        default:
            pri = 0;
            MyAssert(0, 3380);
    }

    MyAssert(pri >= 0 && pri <= SETTING_MAX_PRIORITY, 3382);
     */

    sendMsgQueue[pri].Enqueue(pM);

    TransmitMessages();
}

void VIDEO_COMM::SendMessage_SelectVideo(const char* name) {
    static BYTE msgBuf[64];

    VIDEO_MESSAGE m;
    m.id = MSG_SELECT_VIDEO;

    int len = (int)strlen(name);
    MyAssert(len > 0 && len < 48, 3379);
    m.msgLen = len + 1 + 11;

    msgBuf[0] = m.id;
    WriteInt(msgBuf + 1, m.msgLen);
    WriteShort(msgBuf + 5, (short)bw);
    WriteWORD(msgBuf + 7, (WORD)bwDamp);
    WriteWORD(msgBuf + 9, (WORD)tileXMitMode);
    strcpy((char*)(msgBuf + 11), name);
    m.pData = msgBuf;

    SendMessage_Core(&m);
}

void VIDEO_COMM::SendMessage_RequestRandomChunk() {
    int chunkID = rand() % VIDEO_DATA::nChunks;
    int tileID = rand() % VIDEO_DATA::nTiles;
    int quality = rand() % VIDEO_DATA::nQualities;

    static int seqnum = 0;
    SendMessage_RequestChunk((WORD)chunkID, (WORD)tileID, (BYTE)quality, 0, seqnum++);
}

void VIDEO_COMM::SendMessage_RequestChunk(WORD chunkID, WORD tileID, BYTE quality, BYTE cls, int seqnum) {
    //InfoMessage("Sending request: c=%d t=%d q=%d c=%d seq=%d", chunkID, (int)tileID, (int)quality, (int)cls, seqnum);

    VIDEO_MESSAGE m;
    m.id = MSG_REQUEST_CHUNK;
    m.msgLen = CHUNK_HEADER_LEN;
    m.pData = vms.AllocateBlock(CHUNK_HEADER_LEN);

    m.pData[0] = m.id;
    WriteInt(m.pData + 1, m.msgLen);
    WriteWORD(m.pData + 5, chunkID);
    WriteWORD(m.pData + 7, tileID);
    m.pData[9] = quality;
    WriteInt(m.pData + 10, seqnum);
    m.pData[14] = 0;    //TODO: set the flag

    SendMessage_Core(&m);
}

void VIDEO_COMM::SendMessage_BatchedRequest(BYTE* msg) {
    UE_LOG(TEST, Log, TEXT("SendMessage_BatchedRequest"));
    VIDEO_MESSAGE m;
    m.id = MSG_BATCH_REQUESTS;
    m.msgLen = ReadInt(msg + 1);
    m.pData = msg;

    SendMessage_Core(&m);
}

void VIDEO_COMM::SendMessage_BatchedGAZERequest(BYTE* msg) {
    UE_LOG(TEST, Log, TEXT("SendMessage_BatchedGAZERequest"));
    VIDEO_MESSAGE m;
    m.id = MSG_GAZE_BATCH_REQUESTS;
    m.msgLen = ReadInt(msg + 1);
    m.pData = msg;

    SendMessage_Core(&m);
}

int VIDEO_COMM::ConnectionSetup(const char* remoteIP, int serverPort) {
    fds[0] = -1;

    ////////////////////////////// Local Proxy ///////////////////////////////
    if (mode == MODE_CLIENT) {
        MyAssert(remoteIP != NULL, 1719);
        fds[0] = socket(AF_INET, SOCK_STREAM, 0);
        //SetMaxSegSize(fd[i], MAGIC_MSS_VALUE);
        if (fds[0] < 0) {
            ErrorMessage("Error: %d: %s", errno, strerror(errno));
            return R_FAIL;
        }
        SetSocketNoDelay_TCP(fds[0]);

        //TODO: set socket buffer
        //SetSocketBuffer(fd[i], PROXY_SETTINGS::pipeReadBufLocalProxy, PROXY_SETTINGS::pipeWriteBufLocalProxy); //This MUST be called before connect()!

        struct sockaddr_in serverAddr;
        memset(&serverAddr, 0, sizeof(serverAddr));
        serverAddr.sin_family = AF_INET;
        serverAddr.sin_port = htons((unsigned short)serverPort);
        //inet_pton(AF_INET, remoteIP, &serverAddr.sin_addr);
        inet_pton(AF_INET, remoteIP, &serverAddr.sin_addr);
        if (connect(fds[0], (const struct sockaddr*)&serverAddr, sizeof(serverAddr)) != 0)
            return R_FAIL;

        //SetCongestionControl(fd[i], PROXY_SETTINGS::pipeProtocol[i].c_str());
        SetNonBlockIO(fds[0]);

        unsigned int clientIP;
        unsigned short clientPort;
        GetClientIPPort(fds[0], clientIP, clientPort);
        UE_LOG(TEST, Log, TEXT("Pipe established. Local port=%d"), (int)clientPort);
        InfoMessage("Pipe established. Local port=%d", (int)clientPort);


    }
    else { ////////////////////////////// server ///////////////////////////////
        MyAssert(remoteIP == NULL, 1718);

        int listenFD = socket(AF_INET, SOCK_STREAM, 0);
        if (listenFD < 0) return R_FAIL;

        struct sockaddr_in serverAddr;
        memset(&serverAddr, 0, sizeof(sockaddr_in));
        serverAddr.sin_family = AF_INET;
        serverAddr.sin_port = htons((unsigned short)serverPort);
        serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);

        int optval = 1;
        int r = setsockopt(listenFD, SOL_SOCKET, SO_REUSEADDR, (const char*)&optval, sizeof(optval));
        MyAssert(r == 0, 1762);

        //TODO: set socket buffer
        //SetSocketBuffer(listenFD, PROXY_SETTINGS::pipeReadBufRemoteProxy, PROXY_SETTINGS::pipeWriteBufRemoteProxy); //This must be called for listenFD !

        if (::bind(listenFD, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) != 0) return R_FAIL;

        if (listen(listenFD, 32) != 0) return R_FAIL;

        //wait for the connection
        struct sockaddr_in clientAddr;
        socklen_t clientAddrLen = sizeof(clientAddr);
        fds[0] = accept(listenFD, (struct sockaddr*)&clientAddr, &clientAddrLen);
        if (fds[0] == -1) return R_FAIL;

        //SetCongestionControl(fd[i], PROXY_SETTINGS::pipeProtocol[i].c_str());

        SetSocketNoDelay_TCP(fds[0]);
        SetNonBlockIO(fds[0]);
        int localPort = (int)ntohs(clientAddr.sin_port);

        InfoMessage("Pipe established. Local port=%d", localPort);


        //close(listenFD);
        closesocket(listenFD);
    }

    memset(peers, 0, sizeof(peers));
    peers[0].fd = -1;
    peers[0].fd = fds[0];
    peers[0].events = POLLRDNORM;

    return R_SUCC;
}

void VIDEO_COMM::OnPlayed(int frameID) {
    int nThreads = VIDEO_SCHEDULER::nDecoders;
    if (nThreads > 1) {
        //pthread_mutex_lock(&enqueueFrameLock);
        unique_lock<mutex> lck_frame(enqueueFrameLock);
        FRAME_BUFFER::DequeueFrames(frameID);
        //pthread_mutex_unlock(&enqueueFrameLock);
        lck_frame.unlock();
    }
    else FRAME_BUFFER::DequeueFrames(frameID);
}

void VIDEO_COMM::MainLoop() {
    UE_LOG(TEST, Log, TEXT("video_comm mainloop"));
    while (1) {
        //int nReady = poll(peers, 1, SETTING_POLL_TIMEOUT);
        int nReady = WSAPoll(peers, 1, SETTING_POLL_TIMEOUT);
        UE_LOG(TEST, Log, TEXT("nready: %d"), nReady);
        MyAssert(nReady >= 0, 1699);

        int peerFD = peers[0].fd;
        //UE_LOG(TEST, Log, TEXT("nready: %d"), peerFD);
        MyAssert(peerFD >= 0, 3377);
        //fd_set readfds;
        //FD_ZERO(&readfds);
        //FD_SET(peers[0].fd, &readfds);

        //struct timeval timeout;
        //timeout.tv_sec = SETTING_POLL_TIMEOUT / 1000;
        //timeout.tv_usec = (SETTING_POLL_TIMEOUT % 1000) * 1000;

        //int nReady = select(0, &readfds, NULL, NULL, &timeout);
        //UE_LOG(TEST, Log, TEXT("nready: %d"), nReady);
        //MyAssert(nReady >= 0, 1699);

        //int peerFD = peers[0].fd;
        //UE_LOG(TEST, Log, TEXT("nready: %d"), peerFD);
        //MyAssert(peerFD >= 0, 3377);


        if (peers[0].revents & (POLLRDNORM | POLLERR | POLLHUP)) {
            FPlatformProcess::Sleep(0.001);
            ReceiveMessage();
        }

        if (peers[0].revents & POLLWRNORM) {
            //peers[0].events &= ~POLLWRNORM;
            TransmitMessages();
        }
    }
}