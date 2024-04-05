#include "logger.h"
#include "tools.h"

#include "videodata.h"
#include <time.h>
#include <sys/types.h>
using namespace std;

/*
LOG_BW_PREDICT = 1 [SIM]

LOG_TRANSMIT_TILE = 2 [SIM]
        (id, step, chunkID, tileID, quality, seqnum, size)

LOG_RECEIVE_TILE = 3 [SIM] [REAL] *
(id, step, chunkID, tileID, quality, seqnum, size)

LOG_PLAYBACK = 4 [SIM] [REAL] *
(id, step, frameID)

LOG_FOV = 5

LOG_STALL = 6 [SIM] [REAL] *
(id, step, status)	//1=begin, 0=end

LOG_TILE_CONSUMPTION = 7 [SIM] [REAL] *
(id, step, chunkID, tileID)

LOG_TILE_REQUEST = 8 [REAL] *
(id, step, chunkID, tileID, quality, seqnum, timeToDL)

LOG_TILE_DECODE_START = 9 [REAL] *
(id, step, chunkID, tileID)

LOG_TILE_DECODE_END = 10 [REAL] *
(id, step, chunkID, tileID)
*/


BYTE * EVENT_LOGGER::pBase = NULL;
BYTE * EVENT_LOGGER::pNow = NULL;
//pthread_mutex_t EVENT_LOGGER::bufLock;
mutex EVENT_LOGGER::bufLock;


int EVENT_LOGGER::bEnable = 0;

EVENT_LOGGER::EVENT_LOGGER() {

}

EVENT_LOGGER::~EVENT_LOGGER() {

}

BYTE * EVENT_LOGGER::GetBufferPointer(int nBytes) {
    //pthread_mutex_lock(&bufLock);
    unique_lock<mutex> lck(bufLock);

    BYTE * p = pNow;
    pNow += nBytes;
    //pthread_mutex_unlock(&bufLock);
    lck.unlock();

    MyAssert(p - pBase + nBytes < logCapacity, 3563);
    return p;
}

void EVENT_LOGGER::Init() {
    MyAssert(bEnable && pBase == NULL && pNow == NULL, 3559);
    pBase = new BYTE[logCapacity];
    pNow = pBase;

    //if (pthread_mutex_init(&bufLock, NULL) != 0) {
        //MyAssert(0, 3562);
    //}
}

void EVENT_LOGGER::Finish() {
    /*
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("now: %d-%d-%d %d:%d:%d\n",
     tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
     */

    FILE * ofs = VIDEO_DATA::OpenFile("360log.dat", "wb");
    MyAssert(ofs != NULL, 3561);

    fprintf(ofs, "%d %d %d\n", VIDEO_DATA::nChunks, VIDEO_DATA::nTiles, VIDEO_DATA::nQualities);

    //dump log in text file
    BYTE * p = pBase;
    double beginTS = -1.0f;
    int step;
    static const double SECONDS_PER_STEP = 1e-4 / 3.0;
    #define CALC_STEP {if (beginTS < -0.5f) beginTS = ReadDouble(p); step = int((ReadDouble(p) - beginTS) / SECONDS_PER_STEP + 0.5f);}

    while (p < pNow) {
        int logType = ReadInt(p + 8);
        switch (logType) {
            case LOG_RECEIVE_TILE:
            {
                int chunkID = ReadInt(p + 12);
                int tileID = ReadInt(p + 16);
                int quality = ReadInt(p + 20);
                int seqnum = ReadInt(p + 24);
                int size = ReadInt(p + 28);
                CALC_STEP;
                fprintf(ofs, "%d %d %d %d %d %d %d\n", logType, step, chunkID, tileID, quality, seqnum, size);
                p += 32;
                break;
            }

            case LOG_PLAYBACK:
            {
                int frameID = ReadInt(p + 12);
                CALC_STEP;
                fprintf(ofs, "%d %d %d\n", logType, step, frameID);
                p += 16;
                break;
            }

            case LOG_STALL:
            {
                int status = ReadInt(p + 12);
                CALC_STEP;
                fprintf(ofs, "%d %d %d\n", logType, step, status);
                p += 16;
                break;
            }

            case LOG_TILE_CONSUMPTION:
            case LOG_TILE_DECODE_START:
            case LOG_TILE_DECODE_END:
            {
                int chunkID = ReadInt(p + 12);
                int tileID = ReadInt(p + 16);
                CALC_STEP;
                fprintf(ofs, "%d %d %d %d\n", logType, step, chunkID, tileID);
                p += 20;
                break;
            }

            case LOG_TILE_REQUEST:
            {
                int chunkID = ReadInt(p + 12);
                int tileID = ReadInt(p + 16);
                int quality = ReadInt(p + 20);
                int seqnum = ReadInt(p + 24);
                float timeToDL = ReadFloat(p + 28);
                CALC_STEP;
                fprintf(ofs, "%d %d %d %d %d %d %.3f\n", logType, step, chunkID, tileID, quality, seqnum, timeToDL);
                p += 32;
                break;
            }

            /*
            case LOG_VIDEO_START:
            {
                MyAssert(p == pBase, 3728);
                beginTS = ReadDouble(p);
                p += 12;
                break;
            }
             */

            default:
                MyAssert(0, 3727);
        }
    }

    //fwrite(pBase, pNow-pBase, 1, ofs);    //binary only
    fclose(ofs);

    //pthread_mutex_destroy(&bufLock);
}

#define LOG_ADD_INT(X) {*((int *)p) = X; p += sizeof(int);}
#define LOG_ADD_FLOAT(X) {*((float *)p) = X; p += sizeof(float);}
#define LOG_ADD_TS {*((double *)p) = NDKGetTime(); p += sizeof(double);}

void EVENT_LOGGER::Log_Stall(int status) {
    BYTE * p = GetBufferPointer(16);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_STALL);
    LOG_ADD_INT(status);
    //InfoMessage("Log_Stall");
}

void EVENT_LOGGER::Log_ConsumeTile(int chunkID, int tileID) {
    BYTE * p = GetBufferPointer(20);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_TILE_CONSUMPTION);
    LOG_ADD_INT(chunkID);
    LOG_ADD_INT(tileID);
    //InfoMessage("Log_ConsumeTile");
}

void EVENT_LOGGER::Log_SendTileRequest(int chunkID, int tileID, int quality, int seqnum, float timeToDL) {
    BYTE * p = GetBufferPointer(32);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_TILE_REQUEST);
    LOG_ADD_INT(chunkID);
    LOG_ADD_INT(tileID);
    LOG_ADD_INT(quality);
    LOG_ADD_INT(seqnum);
    LOG_ADD_FLOAT(timeToDL);
    //InfoMessage("Log_SendTileRequest");
}

void EVENT_LOGGER::Log_ReceiveTile(int chunkID, int tileID, int quality, int seqnum) {
    BYTE * p = GetBufferPointer(32);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_RECEIVE_TILE);
    LOG_ADD_INT(chunkID);
    LOG_ADD_INT(tileID);
    LOG_ADD_INT(quality);
    LOG_ADD_INT(seqnum);
    LOG_ADD_INT(VIDEO_DATA::GetChunkSize(chunkID, tileID, quality));
    //InfoMessage("Log_ReceiveTile");
}

void EVENT_LOGGER::Log_DecodeTile_Begin(int chunkID, int tileID) {
    BYTE * p = GetBufferPointer(20);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_TILE_DECODE_START);
    LOG_ADD_INT(chunkID);
    LOG_ADD_INT(tileID);
    //InfoMessage("Log_DecodeTile_Begin");
}

void EVENT_LOGGER::Log_DecodeTile_End(int chunkID, int tileID) {
    BYTE * p = GetBufferPointer(20);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_TILE_DECODE_END);
    LOG_ADD_INT(chunkID);
    LOG_ADD_INT(tileID);
    //InfoMessage("Log_DecodeTile_End");
}

void EVENT_LOGGER::Log_DrawFrame(int frameID) {
    BYTE * p = GetBufferPointer(16);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_PLAYBACK);
    LOG_ADD_INT(frameID);
    //InfoMessage("Log_DrawFrame");
}


/*
void EVENT_LOGGER::Log_RenderTile_Begin(int chunkID, int tileID) {
    BYTE * p = GetBufferPointer(20);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_RENDER_TILE_BEGIN);
    LOG_ADD_INT(chunkID);
    LOG_ADD_INT(tileID);
}

void EVENT_LOGGER::Log_RenderTile_End(int chunkID, int tileID) {
    BYTE * p = GetBufferPointer(20);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_RENDER_TILE_END);
    LOG_ADD_INT(chunkID);
    LOG_ADD_INT(tileID);
}

void EVENT_LOGGER::Log_StartVideo() {
    BYTE * p = GetBufferPointer(12);

    LOG_ADD_TS;
    LOG_ADD_INT(LOG_VIDEO_START);
}
*/

#undef LOG_ADD_TS
#undef LOG_ADD_INT
#undef LOG_ADD_FLOAT

