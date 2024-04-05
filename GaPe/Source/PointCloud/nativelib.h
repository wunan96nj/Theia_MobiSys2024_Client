
#ifndef UBUNTU_PLAYER_NATIVELIB_H
#define UBUNTU_PLAYER_NATIVELIB_H

//#include "vpp.h"
//#include "WorkerThread.h"

//#include "tools.h"
//#include "Test_Compression.h"
//#include "frame_buffer.h"
//#include "data_reader.h"
//#include "logger.h"
//#include "videocomm.h"
//#include "videodata.h"
//#include "video_scheduler.h"
//#include "config.h"

#include <vector>
#include <map>
#include <algorithm>
#include <string>

//using namespace std;

class nativelib{
public:
    static const int GRP = 3;
    static const int SIZE_FLOAT = 4;
    static const int SIZE_FRAME_META = 16;

    static const int SETTING_CLIENT_DATA_BUFFER_SIZE = 1*1024*1024;    //# bytes
    static BYTE * encDataBufferRaw;

    //the actual data size is s*3*(4+4)
    //static const int SETTING_POINT_BUF_SIZE = 50*1024*1024;  //s=50MB points
    static const int SETTING_POINT_BUF_SIZE = 300000;  //s=300K points
    static BYTE * pointBufferRaw;
    static float * pointBufferFloat;

    static BYTE * colorBufferRaw;
    static float * colorBufferFloat;

    static const int SETTING_FRAME_META_BUF_SIZE = 4096; //4K frames
    static BYTE * frameMetaBufferRaw;
    static int * frameMetaBufferInt;

    static const int SETTING_QUICK_SHARE_SIZE = 128;   //# item, each item is an int
    static BYTE * qShareRaw;
    static int * qShareInt;

    //static WorkerThread workerThread;


    static void init();
    static void end();

    static void networkLoop(std::string serverIP, std::string videoName, int serverPort);

    static void schedulerLoop();

    //passing static configs to Native
    static void setConfig(int bLogging, int FOVX, int FOVY, int dashAlg, int predictAlg, int bw, int bwDamp, int videoID, int userID, int sperkeXMit, int nDecoders, int FPS, int nTilesY, int nQuality, float aspectRatio, int dynamicFrame, int theta_bins, bool automation);


    //logging
    static void logInit();
    static void logFinish();

    //static void logStartVideo();
    static void logDecodeTileBegin(int chunkID, int tileID);
    static void logDecodeTileEnd(int chunkID, int tileID);
    static void logDrawFrame(int frameID);
    static void logConsumeTile(int chunkID, int tileID);
    static void logStall(int status);

    static void reportChunkDecodingTime(int ms);
    //static void onStartTileDecoding(int chunkID, int tileID);

    //static void logRenderTileBegin(int chunkID, int tileID);
    //static void logRenderTileEnd(int chunkID, int tileID);


    //return 1 if within the startup duration, 0 if not
    static int checkStartup();

    static int getTileQuality(int tileIdx);

    static void onNextFrame(int nextFrame, float lat, float lon);

    static void onNextFrame(int nextFrame);

    static void onMetaDataAvailable(int nChunks, int nTilesX, int nTilesZ,int nQualities, int gopSize, int tileWidth, int tileHeight);

    static void onChunkAvailable(int chunkID);

    static void onChunkReceived(int chunkID);

    static std::string summarizePerf(float stallDuration);

};

#endif //UBUNTU_PLAYER_NATIVELIB_H
