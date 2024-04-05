//#include <pthread.h>
#include <thread>
#include <mutex>
#include <condition_variable>

#ifndef VIDEO360PLAYER_LOGGER_H
#define VIDEO360PLAYER_LOGGER_H

#endif //VIDEO360PLAYER_LOGGER_H

//#define LOG_BW_PREDICT 1
//#define LOG_TRANSMIT_TILE 2   //sim only
#define LOG_RECEIVE_TILE 3
#define LOG_PLAYBACK 4
//#define LOG_FOV 5
#define LOG_STALL 6
#define LOG_TILE_CONSUMPTION 7
#define LOG_TILE_REQUEST 8
#define LOG_TILE_DECODE_START 9
#define LOG_TILE_DECODE_END 10
//#define LOG_VIDEO_START 11


class EVENT_LOGGER {
public:
    static int bEnable;   //the main switch
    static void Init();
    static void Finish();

    //general events
    //static void Log_StartVideo();

    //the pipeline
    static void Log_SendTileRequest(int chunkID, int tileID, int quality, int seqnum, float timeToDL);
    static void Log_ReceiveTile(int chunkID, int tileID, int quality, int seqnum);
    static void Log_DecodeTile_Begin(int chunkID, int tileID);  //logDecodeTileBegin
    static void Log_DecodeTile_End(int chunkID, int tileID);    //logDecodeTileEnd
    static void Log_DrawFrame(int frameID);
    static void Log_Stall(int status);
    static void Log_ConsumeTile(int chunkID, int tileID);

    static void Log_RenderTile_Begin(int chunkID, int tileID);   //to tile cache
    static void Log_RenderTile_End(int chunkID, int tileID);

    

private:
    //static pthread_mutex_t bufLock;
    static std::mutex bufLock;

    static BYTE * GetBufferPointer(int nBytes);

    static const int logCapacity = 12*1024*1024;
    static BYTE * pBase;
    static BYTE * pNow;
    EVENT_LOGGER();
    ~EVENT_LOGGER();
};
