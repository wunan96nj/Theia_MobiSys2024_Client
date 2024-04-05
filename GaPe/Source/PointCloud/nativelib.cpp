#include "nativelib.h"
#include <string>

#include "tools.h"
//#include "Test_Compression.h"
#include "frame_buffer.h"
//#include "data_reader.h"
#include "logger.h"
#include "VideoCommunication.h"
#include "PointCloudRenderer.h"
#include "videodata.h"
#include "video_scheduler.h"
#include "config.h"
//#include "WorkerThread.h"
using namespace std;

//DEFINE_LOG_CATEGORY_STATIC(TEST, Log, All);

//char baseDir[128];
//char runTime[128];
//int totalThreads;

BYTE * nativelib::encDataBufferRaw = NULL;

BYTE * nativelib::pointBufferRaw = NULL;
float * nativelib::pointBufferFloat = NULL;
BYTE * nativelib::colorBufferRaw = NULL;
float * nativelib::colorBufferFloat = NULL;
BYTE * nativelib::frameMetaBufferRaw = NULL;
int * nativelib::frameMetaBufferInt = NULL;

//WorkerThread nativelib::workerThread;


inline bool checkEndian()
{
    const int value { 0x01 };
    const void * address = static_cast<const void *>(&value);
    const unsigned char * least_significant_address = static_cast<const unsigned char *>(address);
    return (*least_significant_address == 0x01);
}

void nativelib::init() {
    MyAssert(checkEndian()==true,9001);


    try{
        int pointBufferSize = SETTING_POINT_BUF_SIZE * GRP * SIZE_FLOAT;
        pointBufferRaw = new BYTE[pointBufferSize];
        pointBufferFloat = (float *) pointBufferRaw;
        WriteInt(pointBufferRaw, SETTING_POINT_BUF_SIZE);

        colorBufferRaw = new BYTE[pointBufferSize];
        colorBufferFloat = (float *) colorBufferRaw;
        //WriteInt(colorBufferRaw,SETTING_POINT_BUF_SIZE);


        frameMetaBufferRaw = new BYTE[SETTING_FRAME_META_BUF_SIZE * SIZE_FRAME_META];
        frameMetaBufferInt = (int *) frameMetaBufferRaw;
        WriteInt(frameMetaBufferRaw, SETTING_FRAME_META_BUF_SIZE);
        InfoMessage("Memory Allocation Success!");
        UE_LOG(TEST, Warning, TEXT("Memory Allocation Success!"));
        nativelib::pointBufferRaw = NULL;
        nativelib::pointBufferFloat = NULL;
        nativelib::colorBufferRaw = NULL;
        nativelib::colorBufferFloat = NULL;
        nativelib::frameMetaBufferRaw = NULL;
        nativelib::frameMetaBufferInt = NULL;
    }
    catch (exception& e)
    {
        InfoMessage("Memory Allocation exception: ",e.what());
        UE_LOG(TEST, Warning, TEXT("Memory Allocation exception : "));
        //throw e;
    }


}

void nativelib::end(){
    if(pointBufferRaw != NULL) {
        delete[] pointBufferRaw;
    }
    if(colorBufferRaw != NULL) {
        delete[] colorBufferRaw;
    }
    if(frameMetaBufferRaw != NULL) {
        delete[] frameMetaBufferRaw;
    }
};

void nativelib::logInit() {
    EVENT_LOGGER::Init();
}

void nativelib::onNextFrame(int nextFrame) {
    switch (VIDEO_SCHEDULER::dashAlg) {
        case VIDEO_SCHEDULER::ALG_VIVO:
            VIDEO_SCHEDULER::OnNextFrame(nextFrame);
            break;

        case VIDEO_SCHEDULER::ALG_FESTIVE:
            VIDEO_SCHEDULER_FESTIVE::OnNextFrame(nextFrame);
            break;

        default:
            MyAssert(0, 3824);
    }
    VIDEO_COMM::OnPlayed(nextFrame - 1);   //up to this frame has been played

    // local video
    //pReader->OnPlayed(nextFrame - 1);
}

int nativelib::checkStartup() {
    switch (VIDEO_SCHEDULER::dashAlg) {
        case VIDEO_SCHEDULER::ALG_VIVO:
            return VIDEO_SCHEDULER::CheckStartup();
            break;

        case VIDEO_SCHEDULER::ALG_FESTIVE:
            return VIDEO_SCHEDULER_FESTIVE::CheckStartup();
            break;

        default:
            MyAssert(0, 3825);
    }
}

void nativelib::setConfig(int bLogging, int FOVX, int FOVY, int dashAlg, int predictAlg, int bw, int bwDamp, int videoID,
                int userID, int sperkeXMit, int nDecoders, int FPS, int nTilesY, int nQuality, float aspectRatio, int dynamicFrame, int theta_bins, bool automation) {
    EVENT_LOGGER::bEnable = bLogging;
    VIDEO_SCHEDULER::FOVX = FOVX;
    VIDEO_SCHEDULER::FOVY = FOVY;
    VIDEO_SCHEDULER::aspectRatio = aspectRatio;
    VIDEO_SCHEDULER::dashAlg = dashAlg;
    VIDEO_SCHEDULER::predictAlg = predictAlg;

    VIDEO_COMM::bw = bw;
    VIDEO_COMM::bwDamp = bwDamp;
    VIDEO_COMM::videoID = videoID;
    VIDEO_COMM::userID = userID;
    VIDEO_COMM::dynamicFrame = dynamicFrame;
    VIDEO_COMM::theta_bins = theta_bins;
    VIDEO_COMM::tileXMitMode = sperkeXMit;

    VIDEO_SCHEDULER::nDecoders = nDecoders;
    VIDEO_SCHEDULER::FPS = FPS;
    VIDEO_SCHEDULER::nQuality = nQuality;
    //InfoMessage("nQuality: %d", nQuality);

    VIDEO_DATA::nTilesY = nTilesY;

    APointCloudRenderer::automation = automation;
}

void * schedulerLoopSub(void * arg) {
    //CacheJNIEnv(&pEnvScheduler);

    VIDEO_SCHEDULER::MainLoop();

    return NULL;
}

void * networkLoopSub(void * arg) {
    //start the main loop
    //CacheJNIEnv(&pEnvNetwork);

    VIDEO_COMM::MainLoop();

    // local video
    //pReader = (DATA_READER *)arg;
    //pReader->MainLoop();

    return NULL;
}

void nativelib::networkLoop(string serverIP, string videoName, int serverPort) {

    InfoMessage("Version: %s", MY_VERSION);

    VIDEO_DATA::Init();
    FRAME_BUFFER::Init();

    //init communication after video data and frame buffer
    VIDEO_COMM::Init(PRIORITY_MODE_STRICT, VIDEO_SCHEDULER::nDecoders, 0);
    VIDEO_COMM::mode = MODE_CLIENT;

    //const char *_serverIP = env->GetStringUTFChars(serverIP, NULL);
    //InfoMessage("Server IP: %s Server Port: %d", _serverIP, (int)serverPort);
    const char *_serverIP = serverIP.c_str();
    int r = VIDEO_COMM::ConnectionSetup(_serverIP, (int)serverPort);
    MyAssert(r == R_SUCC, 3471);

    UE_LOG(TEST, Warning, TEXT("Client mode: IP=%s"), _serverIP);
    InfoMessage("Client mode: IP=%s", _serverIP);
    //env->ReleaseStringUTFChars(serverIP, _serverIP);

    //pthread_t t;
    //pthread_create(&t, NULL, networkLoopSub, NULL);
    thread t(networkLoopSub, nullptr);
    t.detach();

    //send a "request video" message
    //const char *_videoName = env->GetStringUTFChars(videoName, NULL);
    const char *_videoName = videoName.c_str();
    VIDEO_COMM::SendMessage_SelectVideo(_videoName);


    //env->ReleaseStringUTFChars(videoName, _videoName);

    

    // Added by Ding to test, wait network loop to terminate
    //(void) pthread_join(t, NULL);

    // local video
    /*FRAME_BUFFER::Init(env, cls);
    DATA_READER * pReader = new LOCAL_READER();

    const char *_videoName = env->GetStringUTFChars(videoName, NULL);
    //TODO: deal with _videoName
    pReader->Init(_videoName);
    env->ReleaseStringUTFChars(videoName, _videoName);

    pthread_t t;
    pthread_create(&t, NULL, networkLoop, pReader);
    */
}

void nativelib::schedulerLoop() {
    //ENCODED_BUFFER::Init(env, cls);  

    VIDEO_SCHEDULER::RemoveAllHMP();
    if (VIDEO_SCHEDULER::predictAlg & HMPredict::PREDICT_PERFECT) {
        VIDEO_SCHEDULER::AddHMP(new HMPredict(HMPredict::PREDICT_PERFECT));
        InfoMessage("Add Perfect Predictor");
    }

    if (VIDEO_SCHEDULER::predictAlg & HMPredict::PREDICT_LINEAR) {
        /*
        sprintf(filename, "prediction/linear/predict_%d_%d.txt", VIDEO_COMM::userID, VIDEO_COMM::videoID);
        VIDEO_SCHEDULER::AddHMP(new HMPredict(HMPredict::PREDICT_LINEAR, filename,30,100,30));
        */
        VIDEO_SCHEDULER::AddHMP(new HMPredict(HMPredict::PREDICT_LINEAR));
        InfoMessage("Add Linear Predictor");
    }

    if (VIDEO_SCHEDULER::predictAlg & HMPredict::PREDICT_RIDGE) {
        /*
        sprintf(filename, "prediction/ridgecv/predict_%d_%d.txt", VIDEO_COMM::userID, VIDEO_COMM::videoID);
        VIDEO_SCHEDULER::AddHMP(new HMPredict(HMPredict::PREDICT_RIDGE, filename,30,100,30));
        */
        InfoMessage("Add Ridge Predictor");
        MyAssert(0, 3852);
    }

    if (VIDEO_SCHEDULER::predictAlg & HMPredict::PREDICT_ADAPTIVE) {
        /*
        sprintf(filename, "prediction/adaptive/predict_%d_%d.txt", VIDEO_COMM::userID, VIDEO_COMM::videoID);
        VIDEO_SCHEDULER::AddHMP(new HMPredict(HMPredict::PREDICT_ADAPTIVE, filename,30,100,30));
        */
        InfoMessage("Add Adaptive Predictor");
        MyAssert(0, 3853);
    }

    if (VIDEO_SCHEDULER::predictAlg & HMPredict::PREDICT_RECENT) {
        VIDEO_SCHEDULER::AddHMP(new HMPredict(HMPredict::PREDICT_RECENT));
        InfoMessage("Add Recent Predictor");
    }

    //pthread_t t;
    //pthread_create(&t, NULL, schedulerLoopSub, NULL);

    thread t(schedulerLoopSub, nullptr);
    t.detach();
}

string nativelib::summarizePerf(float stallDuration) {
    PERF_METRICS::Summarize(stallDuration);
    return PERF_METRICS::output;
}

void nativelib::onMetaDataAvailable(int nChunks, int nTilesX, int nTilesZ,
                         int nQualities, int gopSize, int tileWidth, int tileHeight) {
    Config::nChunks = nChunks;
    Config::nRows = nTilesZ;
    Config::nColumns = nTilesX;
    Config::nQualities = nQualities;
    Config::nGopSize = gopSize;
    Config::tileWidthPixels = tileWidth;
    Config::tileHeightPixels = tileHeight;
    Config::nTiles = Config::nColumns * Config::nRows;

    // use handler to send message to the render thread
    //ViVoActivity.renderThread.handler.sendEmptyMessage(RenderThread.MSG_METADATA_READY);
    //std::shared_ptr<ThreadMsg> threadMsg(new ThreadMsg(WorkerThread::MSG_METADATA_READY, 0));
    // Create message to send to worker thread 1
    //printf("Meta Data Available!");

    //std::shared_ptr<ThreadMsg> UserMsg1(new ThreadMsg(WorkerThread::MSG_METADATA_READY,"Hello from Nativelib!"));
    //WorkerThread::PostMsg(UserMsg1);
}

void nativelib::onChunkAvailable(int chunkID) {

}

void nativelib::onChunkReceived(int chunkID) {

}


