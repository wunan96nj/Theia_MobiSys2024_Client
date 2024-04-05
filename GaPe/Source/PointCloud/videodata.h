#ifndef _VIDEO_DATA_H_
#define _VIDEO_DATA_H_

#include "settings.h"


#define CHUNK_HEADER_LEN 15
//#define CHUNK_HEADER_LEN 19
#define MSG_VIDEO_DATA 5

struct CHUNK_INFO {
    long offset;
    int frameID;
    int cellID;
    int quality;
    int len;	//includes the 14-byte header and the framesize data, sent to the client through meta data message
    int points;
};

struct VIDEO_DATA {
    static const int MAX_QUALITIES = 6;
    static char baseDir[64];

    static int nChunks;
    static int nTilesX;
    static int nTilesY;
    static int nTilesZ;
    static int nQualities;
    static int gopSize;        //in frames
    static int tileWidth;    //in pixels
    static int tileHeight;    //in pixels
    static int nTiles;

    static int segmentation;
    static float step;
    static int segments_x, segments_y, segments_z;
    static float minBox_x, minBox_y, minBox_z;
    static float maxBox_x, maxBox_y, maxBox_z;

    static void Init();

    //server only
    static void UnloadVideo();
    static void LoadVideo(const char * name);

    static BYTE * GetChunk(int chunkID, int tileID, int quality, int * dataLen);
    static void GetEncodedData(int &encLen, BYTE *&encData);

    //client only
    static void DecodeMetaData(BYTE *pData, int metaLen);
    static void DecodeFrameSizes(BYTE *pData);

    static void SetChunkSizePoints(int chunkID, int tileID, int quality, int len, int points);
    static int  GetChunkSize(int chunkID, int tileID, int quality);
    static int  GetChunkPoints(int chunkID, int tileID, int quality);

public:
    static float * curBitrateUtility;
    static float * bitrateUtilities;
    static const int BITRATE_UTILITY_LINEAR = 1;
    static const int BITRATE_UTILITY_LOG = 2;
    static const int BITRATE_UTILITY_HD = 3;
    static float * GetBitrateUtility(int u);
    static void ComputeBitrateUtility(int bitrateUtility, float * bu, std::vector<std::string> & bitrate);
    static int nRequestedCells[SETTING_MAX_FRAMES];

    static double GetUserConsumptionRatio();

private:
    //server only
    static CHUNK_INFO *pMeta;
    static BYTE *pBuf;
    static long bufSize;
    static BYTE *pEncodedMetaData;
    static int encodedMetaDataLen;
    //static char * SkipComment(FILE * ifs);
    static char* SkipComment(TArray<uint8>& FileData, int& CurrentIndex);


    //client only
    static int *chunkSizes;
    static int *chunkPoints;

public:
    static FILE * OpenFile(const char * filename, const char * mode);


    static void LoadVideoLocal(const char *name, int quality);
};

struct PERF_METRICS {
private:
    static void Finish(float stallDuration);
    static float StandardDeviation(float * v, int k);

public:
    static BYTE * chunkStatus;
    static char output[512];
    static void Init();
    static void RecordReceivedTile(int chunkID, int tileID, int quality, int dataLen);
    static void Summarize(float stallDuration);
    static void GetTileStats();
};


#endif

