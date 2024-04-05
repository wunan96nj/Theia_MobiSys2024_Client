#include "videodata.h"
//#include "videocomm.h"
#include "tools.h"
#include "video_scheduler.h"
//#include "encoded_buffer.h"
#include <math.h>

//#include "DracoBase.h"
#include "VideoCommunication.h"
using namespace std;

//DEFINE_LOG_CATEGORY_STATIC(TEST, Log, All);


int VIDEO_DATA::nChunks = 0;
int VIDEO_DATA::nTilesX = 0;
int VIDEO_DATA::nTilesY = 0;
int VIDEO_DATA::nTilesZ = 0;
int VIDEO_DATA::nTiles = 0;
int VIDEO_DATA::nQualities = 0;
int VIDEO_DATA::gopSize = 0;
int VIDEO_DATA::tileWidth = 0;
int VIDEO_DATA::tileHeight = 0;
char VIDEO_DATA::baseDir[64];

int VIDEO_DATA::segmentation = 0;
float VIDEO_DATA::step = 0.0f;
int VIDEO_DATA::segments_x = 0;
int VIDEO_DATA::segments_y = 0;
int VIDEO_DATA::segments_z = 0;
float VIDEO_DATA::minBox_x = 0.0f;
float VIDEO_DATA::minBox_y = 0.0f;
float VIDEO_DATA::minBox_z = 0.0f;
float VIDEO_DATA::maxBox_x = 0.0f;
float VIDEO_DATA::maxBox_y = 0.0f;
float VIDEO_DATA::maxBox_z = 0.0f;

int VIDEO_DATA::encodedMetaDataLen = 0;
BYTE *VIDEO_DATA::pEncodedMetaData = NULL;

BYTE *VIDEO_DATA::pBuf = NULL;
CHUNK_INFO *VIDEO_DATA::pMeta = NULL;

long VIDEO_DATA::bufSize = 0;
int * VIDEO_DATA::chunkSizes = NULL;
int * VIDEO_DATA::chunkPoints = NULL;
float * VIDEO_DATA::bitrateUtilities = NULL;
float * VIDEO_DATA::curBitrateUtility = NULL;

int VIDEO_DATA::nRequestedCells[];

void VIDEO_DATA::Init() {
    //pBuf = new BYTE[SETTING_SERVER_BUFFER_SIZE];
    //MyAssert(pBuf != NULL, 3397);

    //pMeta = new CHUNK_INFO[SETTING_MAX_CHUNKS];
    //MyAssert(pMeta != NULL, 3398);

    bitrateUtilities = new float[VIDEO_DATA::MAX_QUALITIES * 3 * sizeof(float)];
    curBitrateUtility = GetBitrateUtility(BITRATE_UTILITY_LINEAR);  //TODO: change utility function here

    chunkSizes = new int[SETTING_MAX_CHUNKS];
    //MyAssert(chunkSizes != NULL, 3413);

    chunkPoints = new int[SETTING_MAX_CHUNKS];
    //MyAssert(chunkPoints != NULL, 3415);

    segmentation = VIDEO_DATA::nTilesY; //Nan Unit in meter
    if (segmentation == 1) return;

    if (segmentation == 2) step = 1.0f;
    else if (segmentation == 4) step = 0.5f;
    else if (segmentation == 8) step = 0.25f;
    else if (segmentation == 10) step = 0.2f;

    segments_x = segments_y =segments_z = 0;
    minBox_x = minBox_y = minBox_z = 0.0f;
    maxBox_x = maxBox_y = maxBox_z = 0.0f;





    if (VIDEO_COMM::videoID < 5) {
        segments_x = segments_y = segments_z = segmentation;
        minBox_x = minBox_y = minBox_z = -1.0f;
        maxBox_x = maxBox_y = maxBox_z = 1.0f;
    }
    else if (VIDEO_COMM::videoID == 5) {       // cosplay
        minBox_x = -1.0f;
        minBox_y = -1.0f;
        minBox_z = -1.0f;

        maxBox_x = 4.0f;
        maxBox_y = 1.0f;
        maxBox_z = 4.0f;

        segments_x = (int)((maxBox_x - minBox_x) / step);
        segments_y = (int)((maxBox_y - minBox_y) / step);
        segments_z = (int)((maxBox_z - minBox_z) / step);
    }
    else if (VIDEO_COMM::videoID == 6) {       // singers
        minBox_x = -3.5f;
        minBox_y = -1.0f;
        minBox_z = -0.5f;

        maxBox_x = 3.5f;
        maxBox_y = 1.0f;
        maxBox_z = 6.5f;

        segments_x = (int)((maxBox_x - minBox_x) / step);
        segments_y = (int)((maxBox_y - minBox_y) / step);
        segments_z = (int)((maxBox_z - minBox_z) / step);
    }
    else if (VIDEO_COMM::videoID == 7) {       // soldier 
        minBox_x = -1.0f;
        minBox_y = -0.05f;
        minBox_z = -1.05f;

        maxBox_x = 1.0f;
        maxBox_y = 1.95f;
        maxBox_z = 0.95f;

        segments_x = (int)((maxBox_x - minBox_x) / step);
        segments_y = (int)((maxBox_y - minBox_y) / step);
        segments_z = (int)((maxBox_z - minBox_z) / step);
    }
    //InfoMessage("VIDEO_DATA::Init() %d %.3lf %.3lf", segments_x, minBox_x, maxBox_x);
    MyAssert(segments_x != 0 && minBox_x != 0.0f && maxBox_x != 0.0f, 3902);
    
}

void VIDEO_DATA::UnloadVideo() {
    bufSize = 0;
    encodedMetaDataLen = 0;
    curBitrateUtility = NULL;
}

void VIDEO_DATA::DecodeMetaData(BYTE *pData, int metaLen) {
    //MyAssert(VIDEO_COMM::mode == MODE_CLIENT, 3414);

    int readLen = 0;
    BYTE *p = pData;
    //MyAssert(*p == MSG_VIDEO_METADATA, 3411);
    p++;
    readLen++;

    //MyAssert(ReadInt(p) == metaLen, 3412);
    p += sizeof(int);

    VIDEO_DATA::nChunks = ReadInt(p);
    p += sizeof(int);
    VIDEO_DATA::nTilesX = ReadInt(p);
    p += sizeof(int);
    VIDEO_DATA::nTilesZ = ReadInt(p);
    p += sizeof(int);
    VIDEO_DATA::nQualities = ReadInt(p);
    p += sizeof(int);
    VIDEO_DATA::gopSize = ReadInt(p);
    p += sizeof(int);
    VIDEO_DATA::tileWidth = ReadInt(p);
    p += sizeof(int);
    VIDEO_DATA::tileHeight = ReadInt(p);
    p += sizeof(int);
    readLen += 8 * sizeof(int);

    int buLen = 3 * MAX_QUALITIES * sizeof(float);
    memcpy(bitrateUtilities, p, (size_t)buLen);
    p += buLen;
    readLen += buLen;

    for (int i=0; i<nQualities; i++) {
        InfoMessage("Quality %d: %.3f Mbps", i, curBitrateUtility[i]);
    }

    VIDEO_DATA::nTiles  = VIDEO_DATA::nTilesX * VIDEO_DATA::nTilesY * VIDEO_DATA::nTilesX;

    MyAssert(nChunks * nTiles * nQualities < SETTING_MAX_CHUNKS, 3422);
    MyAssert(nChunks < SETTING_MAX_FRAMES, 3426);

    for (int i = 0; i < nChunks; i++) {
        for (int j = 0; j < nTiles; j++) {
            for (int k = 0; k < nQualities; k++) {
                SetChunkSizePoints(i, j, k, CHUNK_HEADER_LEN, 0);
            }
        }
    }

    int quality = 0;
    int frameID = 0;
    int cellID = 0;
    int len = 0;
    int points = 0;
    while (readLen < metaLen) {
        frameID = ReadWORD(p);
        p += sizeof(WORD);

        cellID = ReadWORD(p);
        p += sizeof(WORD);

        len = ReadWORD(p);
        p += sizeof(WORD);

        readLen += 3 * sizeof(WORD);

        if (len == 0) {
            len = ReadInt(p);
            p += sizeof(int);
            readLen += sizeof(int);
        }

        points = ReadWORD(p);
        p += sizeof(WORD);
        readLen += sizeof(WORD);

        if (points == 0) {
            points = ReadInt(p);
            p += sizeof(int);
            readLen += sizeof(int);
        }

        quality = *p;
        p++;
        readLen++;

        SetChunkSizePoints(frameID, cellID, quality, len, points);
        //InfoMessage("%d %d %d %d %d %d", frameID, cellID, quality, len, points);
    }

    //SetChunkSizePoints(frameID, cellID, quality, len, points);

    /*
    for (int i = 0; i < nChunks; i++) {
        for (int j = 0; j < nTiles; j++) {
            for (int k = 0; k < nQualities; k++) {
                int frameID = ReadWORD(p);
                p += sizeof(WORD);
                int cellID = ReadWORD(p);
                p += sizeof(WORD);

                int len = ReadWORD(p);
                p += sizeof(WORD);

                if (len == 0) {
                    len = ReadInt(p);
                    p += sizeof(int);
                }

                int points = ReadWORD(p);
                p += sizeof(WORD);

                if (points == 0) {
                    points = ReadInt(p);
                    p += sizeof(int);
                }

                SetChunkSizePoints(i, j, k, len, points);
            }
        }
    }
    */

    /*int len = GetChunkSize(nChunks - 1, nTiles - 1, nQualities - 1);
    int points = GetChunkPoints(nChunks - 1, nTiles - 1, nQualities - 1);
    p++;*/
}

void VIDEO_DATA::SetChunkSizePoints(int chunkID, int tileID, int quality, int len, int points) {
    chunkSizes[chunkID * nTiles * nQualities + tileID * nQualities + quality] = len;
    chunkPoints[chunkID * nTiles * nQualities + tileID * nQualities + quality] = points;
}

int VIDEO_DATA::GetChunkSize(int chunkID, int tileID, int quality) {
    return chunkSizes[chunkID * nTiles * nQualities + tileID * nQualities + quality];
}

//int VIDEO_DATA::GetChunkSize(int chunkID, int tileID, int quality) {
//    return pMeta[chunkID * nTiles * nQualities + tileID * nQualities + quality].len;
//}

int VIDEO_DATA::GetChunkPoints(int chunkID, int tileID, int quality) {
    return chunkPoints[chunkID * nTiles * nQualities + tileID * nQualities + quality];
}
//int VIDEO_DATA::GetChunkPoints(int chunkID, int tileID, int quality) {
//    return pMeta[chunkID * nTiles * nQualities + tileID * nQualities + quality].points;
//}

FILE * VIDEO_DATA::OpenFile(const char * filename, const char *mode) {
    char fullpath[128];
    sprintf(fullpath, "%s%s", baseDir, filename);
    FILE * fs = fopen(fullpath, mode);

    MyAssert(fs != NULL, 3722);
    return fs;
}

float * VIDEO_DATA::GetBitrateUtility(int u) {
    switch (u) {
        case BITRATE_UTILITY_LINEAR:
            return bitrateUtilities;

        case BITRATE_UTILITY_LOG:
            return bitrateUtilities + MAX_QUALITIES;

        case BITRATE_UTILITY_HD:
            return bitrateUtilities + MAX_QUALITIES * 2;

        default:
            MyAssert(0, 3723);
            return NULL;
    }
}

/*
char * VIDEO_DATA::SkipComment(FILE * ifs) {
    static char line[256];
    while (!feof(ifs)) {
        if (fgets(line, sizeof(line), ifs) == NULL) {
            MyAssert(0, 3429);
            return NULL;
        }

        Chomp(line);
        if (strlen(line) == 0) continue;
        if (strlen(line) >= 2 && line[0] == '/' && line[1] == '/') continue;


        //InfoMessage("***** Line = %s", line);

        return line;
    }

    MyAssert(0, 3430);
    return NULL;
}
*/

char* VIDEO_DATA::SkipComment(TArray<uint8>& FileData, int& CurrentIndex) {
    static char line[256];
    //int32 CurrentIndex = 0;
    while (CurrentIndex < FileData.Num()) {
        int32 LineLength = 0;
        while (CurrentIndex < FileData.Num() && FileData[CurrentIndex] != '\n') {
            line[LineLength] = FileData[CurrentIndex];
            LineLength++;
            CurrentIndex++;
        }
        //memcpy(line, FileData.GetData() + CurrentIndex, LineLength);
        line[LineLength] = '\0';
        CurrentIndex++;
        Chomp(line);
        //CurrentIndex += LineLength + 1; // +1 for the newline character

        if (strlen(line) == 0) continue;
        if (strlen(line) >= 2 && line[0] == '/' && line[1] == '/') continue;

        //InfoMessage("***** Line = %s", line);

        return line;
    }

    MyAssert(0, 3430);
    return NULL;
}


void VIDEO_DATA::LoadVideo(const char * name) {
    InfoMessage("Loading video...");
    if (nChunks != 0) {
        UnloadVideo();
    }

    char filename[256];
    int r;
    char * _line;   
    vector<string> crf;
    vector<string> v;
    vector<string> bitrate;
    
    //Step 1: read info.txt
    //sprintf(filename, "%s/%s/info.txt", SETTING_BASE_DIRECTORY, name);
    //size_t n_filename = strlen(name);
    //const FString& Str_filename = FString(n_filename, name);
    FString filename_fstring = FPaths::ProjectDir() + FString::Printf(TEXT("Content/PLYFiles/%s/info.txt"), *FString(UTF8_TO_TCHAR(name)));
    UE_LOG(TEST, Log, TEXT("%s"), *filename_fstring);

    sprintf(filename, TCHAR_TO_ANSI(*filename_fstring));
    //FILE * ifs = OpenFileForRead(filename);
    TArray<uint8> ifs = OpenFileForRead(filename_fstring);
    int info_CurrentIndex = 0;
    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &nTilesX); MyAssert(r == 1, 3428);

    if (strstr(name, "1x1x1") != NULL) nTilesY = 1;
    else if (strstr(name, "2x2x2") != NULL) nTilesY = 2;
    else if (strstr(name, "4x4x4") != NULL) nTilesY = 4;
    else if (strstr(name, "8x8x8") != NULL) nTilesY = 8;
    else if (strstr(name, "10x10x10") != NULL) nTilesY = 10;
    else {
        InfoMessage("No supported segmentation (%s)", name);
        return;
    }

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &nTilesZ); MyAssert(r == 1, 3428);

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &nQualities); MyAssert(r == 1, 3431);

    _line = SkipComment(ifs, info_CurrentIndex);
    Split(_line, (const char *) " ", crf);
    MyAssert(crf.size() == nQualities, 3432);

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &gopSize); MyAssert(r == 1, 3431);
    
    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &tileWidth); MyAssert(r == 1, 3431);

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &tileHeight); MyAssert(r == 1, 3431);

    _line = SkipComment(ifs, info_CurrentIndex);
    Split(_line, (const char *) " ", bitrate);
    MyAssert(bitrate.size() == nQualities, 3432);

    printf("%d,%d,%d,%d\n",nTilesX,nTilesY,nTilesZ,nQualities);
    MyAssert(nTilesX>0 && nTilesZ>0 && tileWidth>0 && tileHeight>0, 3447);
    //fclose(ifs);
    ifs.Empty();
    
    long tmpBufSize = 256*1024*1024;
    BYTE * pTmp = new BYTE[tmpBufSize];
    MyAssert(pTmp != NULL, 3434);   
    //int * pChunkLen;    
    VIDEO_DATA::nChunks = 1;  
    //BYTE * pFrameSizes;
    //char line[256];
    
    nTiles = nTilesX * nTilesY * nTilesZ;
    int frameID = 0;
    int rFrameID = 0;

    bufSize = 0;
    //read each (tile, quality)
    for (int i = 0; i < nQualities; i++) {
        //video data file

        //sprintf(filename, "%s/%s/video.%s", SETTING_BASE_DIRECTORY, name, crf[i].c_str());
        FString filename_video_fstring = FPaths::ProjectDir() + FString::Printf(TEXT("Content/PLYFiles/%s/video.%s"), *FString(UTF8_TO_TCHAR(name)), *FString(UTF8_TO_TCHAR(crf[i].c_str())));
        UE_LOG(TEST, Log, TEXT("%s"), *filename_video_fstring);

        sprintf(filename, TCHAR_TO_ANSI(*filename_video_fstring));

        long filesize;
        r = GetFileSize(filename, filesize);
        MyAssert(r, 3433);          

        if (filesize >= tmpBufSize) {
            tmpBufSize = long(filesize * 1.1);
            //InfoMessage("%lu\n", tmpBufSize);
            delete [] pTmp;
            pTmp = new BYTE[tmpBufSize];
            MyAssert(pTmp != NULL, 3815);
        }

        //ifs = OpenFileForRead(filename);
        //r = fread(pTmp, filesize, 1, ifs);
        //MyAssert(r == 1, 3435);
        //fclose(ifs);
        ifs = OpenFileForRead(filename_video_fstring);
        if (ifs.Num() != filesize)
        {
            UE_LOG(TEST, Log, TEXT("Error reading file"));
            ErrorMessage("Error reading file: %s", filename);
            MyAssert(0, 3427);
            return;
        }

        // Copy the file data from the memory buffer into the destination buffer
        memcpy(pTmp, ifs.GetData(), filesize);

        //MyAssert(r == 1, 3435);
        //fclose(ifs);
        ifs.Empty();

        //metafile
        //sprintf(filename, "%s/%s/meta.%s", SETTING_BASE_DIRECTORY, name, crf[i].c_str());
        FString filename_meta_fstring = FPaths::ProjectDir() + FString::Printf(TEXT("Content/PLYFiles/%s/meta.%s"), *FString(UTF8_TO_TCHAR(name)), *FString(UTF8_TO_TCHAR(crf[i].c_str())));
        UE_LOG(TEST, Log, TEXT("%s"), *filename_meta_fstring);

        sprintf(filename, TCHAR_TO_ANSI(*filename_meta_fstring));
        /*
        ifs = OpenFileForRead(filename);                        
        int cellID = 0;
        int nPoints = 0;
        int nSize = 0;

        frameID = 0;
        long offset = 0;
        //read frame-by-frame
        //getchar();
        while (!feof(ifs)) {
            for (int j = 0; j < nTiles; j++) {
                r = fread(&rFrameID, sizeof(int), 1, ifs);
                UE_LOG(TEST, Log, TEXT("%d"), rFrameID);
                if (r != 1) break;
                MyAssert(rFrameID == frameID, 5001);

                r = fread(&cellID, sizeof(int), 1, ifs);
                MyAssert(r == 1, 4006);
                MyAssert(cellID == j, 5002);

                r = fread(&nPoints, sizeof(int), 1, ifs);
                MyAssert(r == 1, 4007);

                r = fread(&nSize, sizeof(int), 1, ifs);
                MyAssert(r == 1, 4008);

                int idx = frameID*nTiles*nQualities + j*nQualities + i;
                pMeta[idx].offset = bufSize;
                pMeta[idx].frameID = frameID;
                pMeta[idx].cellID = cellID;
                pMeta[idx].quality = i;
                pMeta[idx].len = nSize + CHUNK_HEADER_LEN;
                pMeta[idx].points = nPoints;
            
                BYTE * pData = pBuf + bufSize;  
                pData[0] = MSG_VIDEO_DATA;
                WriteInt(pData + 1, nSize + CHUNK_HEADER_LEN);
                WriteWORD(pData + 5, (WORD)frameID);
                WriteWORD(pData + 7, (WORD)cellID);
                pData[9] = (BYTE)i;
                WriteInt(pData + 10, -1);   //seqnum - this will not be used by the client
                pData[14] = 0;  //bLast
                bufSize += CHUNK_HEADER_LEN;

                memcpy(pBuf + bufSize , pTmp + offset, nSize);
                offset += nSize;
                bufSize += nSize;

                //printf("%d %d %d %d %ld %ld %ld\n", frameID, cellID, nPoints, nSize, offset, bufSize, SETTING_SERVER_BUFFER_SIZE);
                MyAssert(bufSize < SETTING_SERVER_BUFFER_SIZE, 3441);
            }
            frameID++;

        }

        fclose(ifs);*/

        ifs = OpenFileForRead(filename_meta_fstring);
        int meta_CurrentIndex = 0;
        int cellID = 0;
        int nPoints = 0;
        int nSize = 0;

        frameID = 0;
        long offset = 0;

        // Read the file data, frame by frame
        while (meta_CurrentIndex < ifs.Num()) {
            for (int j = 0; j < nTiles; j++) {
                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&rFrameID, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                if (rFrameID != frameID) break;

                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&cellID, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                MyAssert(cellID == j, 5002);

                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&nPoints, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                //MyAssert(r == 1, 4007);

                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&nSize, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                //MyAssert(r == 1, 4008);

                int idx = frameID * nTiles * nQualities + j * nQualities + i;
                pMeta[idx].offset = bufSize;
                pMeta[idx].frameID = frameID;
                pMeta[idx].cellID = cellID;
                pMeta[idx].quality = i;
                pMeta[idx].len = nSize + CHUNK_HEADER_LEN;
                pMeta[idx].points = nPoints;

                BYTE* pData = pBuf + bufSize;
                pData[0] = MSG_VIDEO_DATA;
                WriteInt(pData + 1, nSize + CHUNK_HEADER_LEN);
                WriteWORD(pData + 5, (WORD)frameID);
                WriteWORD(pData + 7, (WORD)cellID);
                pData[9] = (BYTE)i;
                WriteInt(pData + 10, -1);   //seqnum - this will not be used by the client
                pData[14] = 0;  //bLast
                bufSize += CHUNK_HEADER_LEN;

                //if (meta_CurrentIndex + nSize > ifs.Num()) break;
                memcpy(pBuf + bufSize, pTmp + offset, nSize);
                //meta_CurrentIndex += nSize;

                offset += nSize;
                bufSize += nSize;

                //printf("%d %d %d %d %ld %ld %ld\n", frameID, cellID, nPoints, nSize, offset, bufSize, SETTING_SERVER_BUFFER_SIZE);
                MyAssert(bufSize < SETTING_SERVER_BUFFER_SIZE, 3441);
            }
            frameID++;
            UE_LOG(TEST, Log, TEXT("%d"), VIDEO_COMM::msgQueue.size());
        }
        ifs.Empty();
    }

    delete pTmp;

    nChunks = rFrameID + 1;

    if (bitrateUtilities == NULL) {
        bitrateUtilities = new float[3 * MAX_QUALITIES];
    }

    //ComputeBitrateUtility(BITRATE_UTILITY_LINEAR, bitrateUtilities, bitrate);
    //ComputeBitrateUtility(BITRATE_UTILITY_LOG, bitrateUtilities + MAX_QUALITIES, bitrate);
    //ComputeBitrateUtility(BITRATE_UTILITY_HD, bitrateUtilities + MAX_QUALITIES * 2, bitrate);

    //EncodeMetaData();
    //FillInFixedVideoDataHeaders();

    InfoMessage("Video %s loaded. nChunks=%d nTiles=%dx%dx%d nQualities=%d gopSize=%d frameSize=%dx%d totalSize=%.2lf MB", 
        name, nChunks, nTilesX, nTilesY, nTilesZ, nQualities, gopSize,tileWidth,tileHeight,
        bufSize / 1e6
    );
}

void VIDEO_DATA::LoadVideoLocal(const char * name, int quality) {
    InfoMessage("Loading video...");
    if (nChunks != 0) {
        UnloadVideo();
    }

    char filename[256];
    int r;
    char * _line;
    std::vector<std::string> crf;
    std::vector<std::string> v;
    std::vector<std::string> bitrate;

    //Step 1: read info.txt
    //sprintf(filename, "%s/info.txt", name);
    FString filename_fstring = FPaths::ProjectDir() + FString::Printf(TEXT("Content/PLYFiles/%s/info.txt"), *FString(UTF8_TO_TCHAR(name)));
    UE_LOG(TEST, Log, TEXT("%s"), *filename_fstring);
    
    sprintf(filename, TCHAR_TO_ANSI(*filename_fstring));
    UE_LOG(TEST, Log, TEXT("sprintf"));
    //FILE * ifs = OpenFileForRead(filename);
    TArray<uint8> ifs = OpenFileForRead(filename_fstring);
    UE_LOG(TEST, Log, TEXT("openfileforread"));
    int info_CurrentIndex = 0;

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &nTilesX); MyAssert(r == 1, 3428);

    if (strstr(name, "1x1x1") != NULL) nTilesY = 1;
    else if (strstr(name, "2x2x2") != NULL) nTilesY = 2;
    else if (strstr(name, "4x4x4") != NULL) nTilesY = 4;
    else if (strstr(name, "8x8x8") != NULL) nTilesY = 8;
    else if (strstr(name, "10x10x10") != NULL) nTilesY = 10;
    else {
        InfoMessage("No supported segmentation (%s)", name);
        return;
    }

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &nTilesZ); MyAssert(r == 1, 3428);

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &nQualities); MyAssert(r == 1, 3431);

    UE_LOG(TEST, Log, TEXT("%d,%d,%d,%d"), nTilesX, nTilesY, nTilesZ, nQualities);

    _line = SkipComment(ifs, info_CurrentIndex);
    Split(_line, (const char *) " ", crf);
    MyAssert(crf.size() == nQualities, 3432);

    

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &gopSize); MyAssert(r == 1, 3431);

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &tileWidth); MyAssert(r == 1, 3431);

    _line = SkipComment(ifs, info_CurrentIndex);
    r = sscanf(_line, "%d", &tileHeight); MyAssert(r == 1, 3431);

    _line = SkipComment(ifs, info_CurrentIndex);
    Split(_line, (const char *) " ", bitrate);

    UE_LOG(TEST, Log, TEXT("%d,%d,%d,%d,%d,%d,%d"), nTilesX, nTilesY, nTilesZ, nQualities, gopSize, tileWidth, tileHeight);


    MyAssert(bitrate.size() == nQualities, 3432);

    printf("%d,%d,%d,%d\n",nTilesX,nTilesY,nTilesZ,nQualities);
    MyAssert(nTilesX>0 && nTilesZ>0 && tileWidth>0 && tileHeight>0, 3447);
    //fclose(ifs);
    ifs.Empty();

    long tmpBufSize = 256*1024*1024;
    BYTE * pTmp = new BYTE[tmpBufSize];
    MyAssert(pTmp != NULL, 3434);
    //int * pChunkLen;
    //VIDEO_DATA::nChunks = 1; 
    //BYTE * pFrameSizes;
    //char line[256];

    nTiles = nTilesX * nTilesY * nTilesZ;
    int frameID = 0;
    int rFrameID = 0;

    bufSize = 0;
    //read each (tile, quality)
    for (int i = 0; i < nQualities; i++) {
        if (i!=quality){
            continue;
        }
        //video data file
        //sprintf(filename, "%s/video.%s", name, crf[i].c_str());

        FString filename_video_fstring = FPaths::ProjectDir() + FString::Printf(TEXT("Content/PLYFiles/%s/video.%s"), *FString(UTF8_TO_TCHAR(name)), *FString(UTF8_TO_TCHAR(crf[i].c_str())));
        UE_LOG(TEST, Log, TEXT("%s"), *filename_video_fstring);

        sprintf(filename, TCHAR_TO_ANSI(*filename_video_fstring));


        long filesize;
        //r = GetFileSize(filename, filesize);
        r = GetFileSize(filename_video_fstring, filesize);
        MyAssert(r, 3433);

        if (filesize >= tmpBufSize) {
            tmpBufSize = long(filesize * 1.1);
            //InfoMessage("%lu\n", tmpBufSize);
            delete [] pTmp;
            pTmp = new BYTE[tmpBufSize];
            MyAssert(pTmp != NULL, 3815);
        }

        //ifs = OpenFileForRead(filename);
        //r = fread(pTmp, filesize, 1, ifs);

        ifs = OpenFileForRead(filename_video_fstring);
        if (ifs.Num() != filesize)
        {
            UE_LOG(TEST, Log, TEXT("Error reading file"));
            ErrorMessage("Error reading file: %s", filename);
            MyAssert(0, 3427);
            return;
        }

        // Copy the file data from the memory buffer into the destination buffer
        memcpy(pTmp, ifs.GetData(), filesize);

        //MyAssert(r == 1, 3435);
        //fclose(ifs);
        ifs.Empty();

        //metafile
        //sprintf(filename, "%s/meta.%s", name, crf[i].c_str());
        FString filename_meta_fstring = FPaths::ProjectDir() + FString::Printf(TEXT("Content/PLYFiles/%s/meta.%s"), *FString(UTF8_TO_TCHAR(name)), *FString(UTF8_TO_TCHAR(crf[i].c_str())));
        UE_LOG(TEST, Log, TEXT("%s"), *filename_meta_fstring);


        sprintf(filename, TCHAR_TO_ANSI(*filename_meta_fstring));
        /*
        ifs = OpenFileForRead(filename);
        int cellID = 0;
        int nPoints = 0;
        int nSize = 0;

        frameID = 0;
        long offset = 0;
        //read frame-by-frame
        //getchar();
        while (!feof(ifs)) {
            for (int j = 0; j < nTiles; j++) {
                r = fread(&rFrameID, sizeof(int), 1, ifs);
                if (r != 1) break;
                MyAssert(rFrameID == frameID, 5001);

                r = fread(&cellID, sizeof(int), 1, ifs);
                MyAssert(r == 1, 4006);
                MyAssert(cellID == j, 5002);

                r = fread(&nPoints, sizeof(int), 1, ifs);
                MyAssert(r == 1, 4007);

                r = fread(&nSize, sizeof(int), 1, ifs);
                MyAssert(r == 1, 4008);

                int idx = frameID*nTiles*nQualities + j*nQualities + i;
                pMeta[idx].offset = bufSize;
                pMeta[idx].frameID = frameID;
                pMeta[idx].cellID = cellID;
                pMeta[idx].quality = i;
                pMeta[idx].len = nSize + CHUNK_HEADER_LEN;
                pMeta[idx].points = nPoints;

                BYTE * pData = pBuf + bufSize;
                pData[0] = MSG_VIDEO_DATA;
                WriteInt(pData + 1, nSize + CHUNK_HEADER_LEN);
                WriteWORD(pData + 5, (WORD)frameID);
                WriteWORD(pData + 7, (WORD)cellID);
                pData[9] = (BYTE)i;
                WriteInt(pData + 10, -1);   //seqnum - this will not be used by the client
                pData[14] = 0;  //bLast
                bufSize += CHUNK_HEADER_LEN;

                memcpy(pBuf + bufSize , pTmp + offset, nSize);

                if (i == quality) {
                    //VIDEO_COMM::msgQueueLock.Lock();
                    //pthread_mutex_lock(&VIDEO_COMM::msgQueueLock);
                    unique_lock<mutex> lck(VIDEO_COMM::msgQueueLock);
                    //std::lock_guard<mutex> lkgrd(VIDEO_COMM::msgQueueLock);

                    //int recvMsgLen = SETTING_RECV_BUFFER_SIZE_NORMAL;
                    //BYTE * pDataMsg = new BYTE[recvMsgLen];
                    int pDataLen = ReadInt(pData + 1);
                    BYTE * pDataMsg = new BYTE[pDataLen];
                    //MyAssert(pDataLen <= recvMsgLen, 3403);
                    MyAssert(pDataMsg != NULL, 3403);
                    memcpy(pDataMsg, pData, pDataLen);

                    VIDEO_COMM::msgQueue.push(pDataMsg);
                    InfoMessage("Enqueue %p", pDataMsg);

                    //pthread_cond_signal(&VIDEO_COMM::msgQueueCond);
                    //VIDEO_COMM::msgQueueCond.Trigger();
                    VIDEO_COMM::msgQueueCond.notify_one();
                 
                    //pthread_mutex_unlock(&VIDEO_COMM::msgQueueLock);
                    //VIDEO_COMM::msgQueueLock.Unlock();
                    lck.unlock();
                }
                offset += nSize;
                bufSize += nSize;

                //printf("%d %d %d %d %ld %ld %ld\n", frameID, cellID, nPoints, nSize, offset, bufSize, SETTING_SERVER_BUFFER_SIZE);
                MyAssert(bufSize < SETTING_SERVER_BUFFER_SIZE, 3441);
            }
            frameID++;
            UE_LOG(TEST, Log, TEXT("%d"), VIDEO_COMM::msgQueue.size());
        }

        fclose(ifs);
        */

        ifs = OpenFileForRead(filename_meta_fstring);
        int meta_CurrentIndex = 0;
        int cellID = 0;
        int nPoints = 0;
        int nSize = 0;

        frameID = 0;
        long offset = 0;

        // Read the file data, frame by frame
        while (meta_CurrentIndex < ifs.Num()) {
            int msg_count = 0;
            for (int j = 0; j < nTiles; j++) {
                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&rFrameID, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                if (rFrameID != frameID) break;

                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&cellID, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                MyAssert(cellID == j, 5002);

                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&nPoints, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                //MyAssert(r == 1, 4007);

                if (meta_CurrentIndex + sizeof(int) > ifs.Num()) break;
                memcpy(&nSize, ifs.GetData() + meta_CurrentIndex, sizeof(int));
                meta_CurrentIndex += sizeof(int);
                //MyAssert(r == 1, 4008);

                int idx = frameID * nTiles * nQualities + j * nQualities + i;
                pMeta[idx].offset = bufSize;
                pMeta[idx].frameID = frameID;
                pMeta[idx].cellID = cellID;
                pMeta[idx].quality = i;
                pMeta[idx].len = nSize + CHUNK_HEADER_LEN;
                pMeta[idx].points = nPoints;

                BYTE* pData = pBuf + bufSize;
                pData[0] = MSG_VIDEO_DATA;
                WriteInt(pData + 1, nSize + CHUNK_HEADER_LEN);
                WriteWORD(pData + 5, (WORD)frameID);
                WriteWORD(pData + 7, (WORD)cellID);
                pData[9] = (BYTE)i;
                WriteInt(pData + 10, -1);   //seqnum - this will not be used by the client
                pData[14] = 0;  //bLast
                bufSize += CHUNK_HEADER_LEN;

                if (nSize == 0) {
                    continue;
                }


  

                memcpy(pBuf + bufSize, pTmp + offset, nSize);

                if (i == quality) {
                    //UE_LOG(TEST, Log, TEXT("quality %d"), quality);
                    //VIDEO_COMM::msgQueueLock.Lock();
                    //pthread_mutex_lock(&VIDEO_COMM::msgQueueLock);
                    unique_lock<mutex> lck(VIDEO_COMM::msgQueueLock);
                    //std::lock_guard<mutex> lkgrd(VIDEO_COMM::msgQueueLock);

                    //int recvMsgLen = SETTING_RECV_BUFFER_SIZE_NORMAL;
                    //BYTE * pDataMsg = new BYTE[recvMsgLen];
                    int pDataLen = ReadInt(pData + 1);
                    BYTE* pDataMsg = new BYTE[pDataLen];
                    //MyAssert(pDataLen <= recvMsgLen, 3403);
                    MyAssert(pDataMsg != NULL, 3403);
                    memcpy(pDataMsg, pData, pDataLen);

                    VIDEO_COMM::msgQueue.push(pDataMsg);
                    InfoMessage("Enqueue %p", pDataMsg);

                    //pthread_cond_signal(&VIDEO_COMM::msgQueueCond);
                    //VIDEO_COMM::msgQueueCond.Trigger();
                    VIDEO_COMM::msgQueueCond.notify_one();

                    //pthread_mutex_unlock(&VIDEO_COMM::msgQueueLock);
                    //VIDEO_COMM::msgQueueLock.Unlock();
                    lck.unlock();

                    msg_count++;
                }
                offset += nSize;
                bufSize += nSize;

                //printf("%d %d %d %d %ld %ld %ld\n", frameID, cellID, nPoints, nSize, offset, bufSize, SETTING_SERVER_BUFFER_SIZE);
                MyAssert(bufSize < SETTING_SERVER_BUFFER_SIZE, 3441);
            }
            nRequestedCells[frameID] = msg_count;
            frameID++;
            UE_LOG(TEST, Log, TEXT("%d"), VIDEO_COMM::msgQueue.size());
        }
        ifs.Empty();


    }

    delete pTmp;

    nChunks = rFrameID + 1;

//    if (bitrateUtilities == NULL) {
//        bitrateUtilities = new float[3 * MAX_QUALITIES];
//    }

    //ComputeBitrateUtility(BITRATE_UTILITY_LINEAR, bitrateUtilities, bitrate);
    //ComputeBitrateUtility(BITRATE_UTILITY_LOG, bitrateUtilities + MAX_QUALITIES, bitrate);
    //ComputeBitrateUtility(BITRATE_UTILITY_HD, bitrateUtilities + MAX_QUALITIES * 2, bitrate);

    //EncodeMetaData();
    //FillInFixedVideoDataHeaders();

    InfoMessage("Video %s loaded. nChunks=%d nTiles=%dx%dx%d nQualities=%d gopSize=%d frameSize=%dx%d totalSize=%.2lf MB",
                name, nChunks, nTilesX, nTilesY, nTilesZ, nQualities, gopSize,tileWidth,tileHeight,
                bufSize / 1e6
    );
}

void VIDEO_DATA::ComputeBitrateUtility(int bitrateUtility, float * bu, std::vector<std::string> & bitrate) {
    nTiles = nTilesX * nTilesY * nTilesZ;
    for (int i=0; i<nQualities; i++) {
        bu[i] = 0.0f;
    }

    if (bitrateUtility == BITRATE_UTILITY_HD) {
        //sigcomm'17 settings
        // added more qualities Ding 
        MyAssert(nQualities == 5, 3683);
        bu[0] = 1.0f / nTiles;
        bu[1] = 2.0f / nTiles;
        bu[2] = 3.0f / nTiles;
        bu[3] = 12.0f / nTiles;
        bu[4] = 15.0f / nTiles;
        //bu[5] = 18.0f / nTiles; // addedy randomly
        return;
    }
    
    /*
    for (int i=0; i<nChunks; i++) {
        for (int j=0; j<nTiles; j++) {
            for (int k=0; k<nQualities; k++) {
                int size = GetChunkSize(i, j, k);
                bu[k] += size;              
            }
        }
    }

    //convert to mbps
    float minBitrateQ = 1e30f;
    for (int i=0; i<nQualities; i++) {
        bu[i] = bu[i] * 8.0f / (1e6f * nTiles * nChunks);
        if (bu[i] < minBitrateQ)
            minBitrateQ = bu[i];
    }
    */
    
    float minBitrateQ = 1e30f;
    for (int i=0; i<nQualities; i++) {
        bu[i] = (float)atof(bitrate[i].c_str());        
        if (bu[i] < minBitrateQ)
            minBitrateQ = bu[i];
    }

    //apply the utility function
    switch (bitrateUtility) {
        case BITRATE_UTILITY_LINEAR:
            {
                break;  //nothing to do
            }
                    
        case BITRATE_UTILITY_LOG:
            {
                for (int i=0; i<nQualities; i++) {
                    bu[i] = log(bu[i] / minBitrateQ) / nTiles;
                }
                break;
            }

        default:
            MyAssert(0, 3682);
    }
}


BYTE * PERF_METRICS::chunkStatus = NULL;
char PERF_METRICS::output[];

float PERF_METRICS::StandardDeviation(float * v, int k) {
    float avg = 0.0f;
    float stdev = 0.0f;

    MyAssert(k > 0, 3684);
    for (int i=0; i<k; i++) {
        avg += v[i];
    }
    avg /= k;

    for (int i=0; i<k; i++) {
        stdev += (v[i] - avg) * (v[i] - avg);
    }

    return (float)sqrt(stdev / k);
}

void PERF_METRICS::Init() {
    MyAssert(chunkStatus == NULL, 3823);
    chunkStatus = new BYTE[VIDEO_DATA::nChunks * VIDEO_DATA::nTiles + 1];
    memset(chunkStatus, 0xFF, (size_t)VIDEO_DATA::nChunks * VIDEO_DATA::nTiles);
}

void PERF_METRICS::RecordReceivedTile(int chunkID, int tileID, int quality, int dataLen) {
    chunkStatus[chunkID * VIDEO_DATA::nTiles + tileID] = (BYTE)quality;
    //ENCODED_BUFFER::pQSInt[QSHARE_RECV_BYTES] += dataLen;
}

void PERF_METRICS::GetTileStats() {
    int k = 0;
    for (int i=0; i<VIDEO_DATA::nChunks; i++) {
        for (int j=0; j<VIDEO_DATA::nTiles; j++) {
            BYTE & s = chunkStatus[k];
            if (s == 0xFF)
                s = '-';
            else if (s>=0 && s<VIDEO_DATA::nQualities) {
                s += '0';
            } else if (s>=0x80 && s<0x80+VIDEO_DATA::nQualities) {
                s -= 0x80;
                s += 'A';
            } else {
                MyAssert(0, 3835);
            }

            k++;
        }
    }

    chunkStatus[VIDEO_DATA::nChunks * VIDEO_DATA::nTiles] = 0;
}

void PERF_METRICS::Summarize(float stallDuration) {
    int n = VIDEO_SCHEDULER::replaySize;
    int nFrames = VIDEO_SCHEDULER::nextFrame;

    for (int i = 0; i < nFrames; i++) {
        int j = (i >= n) ? n - 1 : i;
        /*int idx = VIDEO_SCHEDULER::GetFoVDBIndex(
                VIDEO_SCHEDULER::replayLat[j],
                VIDEO_SCHEDULER::replayLon[j]
        );

        int chunkID = i/VIDEO_DATA::gopSize;
        int m = VIDEO_SCHEDULER::classes[idx * VIDEO_SCHEDULER::nClasses];

        for (int k=0; k<m; k++) {
            int tileID = VIDEO_SCHEDULER::ranks[idx * VIDEO_DATA::nTiles + k];
            int t = chunkID * VIDEO_DATA::nTiles + tileID;
            if (chunkStatus[t] == 0xFF) {
                InfoMessage("Chunk %d Tile %d consumed but not downloaded", chunkID, tileID);
                continue;
            }

            chunkStatus[t] |= 0x80;
        }*/
    }

    Finish(stallDuration);
}

void PERF_METRICS::Finish(float stallDuration) {
    {
        //print out summary
        int nChunks = VIDEO_DATA::nChunks;
        int nTiles = VIDEO_DATA::nTiles;

        unsigned long downloadedBytes = 0;
        unsigned long totalQ = 0;
        unsigned long totalPoints = 0;
        for (int i = 0; i < nChunks; i++) {
            for (int j = 0; j < nTiles; j++) {
                BYTE s = chunkStatus[i * nTiles + j];
                if (s == 0xFF) continue;

                BYTE quality = (BYTE)(s & 0x7F);

                int tileSize = VIDEO_DATA::GetChunkSize(i, j, quality);
                downloadedBytes += tileSize;

                int tilePoints = VIDEO_DATA::GetChunkPoints(i, j, quality);
                totalPoints += tilePoints;
                totalQ += tilePoints * quality;
            }
        }

        sprintf(output, "Downloaded byte %lu Average quality %.3f Stall time %.3f", downloadedBytes, (float)totalQ / totalPoints, stallDuration);
        //InfoMessage("%s", output);

        /*
        //1. playback bytes
        int downloadedBytes = 0;
        {
        int consumedBytes = 0;

        for (int i=0; i<nChunks; i++) {
        for (int j=0; j<nTiles; j++) {
        BYTE s = chunkStatus[i*nTiles+j];
        if  (s == 0xFF) continue;

        int bConsumed = (s & 0x80);
        BYTE quality = (BYTE)(s & 0x7F);

        int tileSize = VIDEO_DATA::GetChunkSize(i, j, quality);
        downloadedBytes += tileSize;

        if (bConsumed) {
        consumedBytes += tileSize;
        }
        }
        }


        //3rd and 4th number: "real" bitrate calculated from downloaded bytes
        //printf("%d %d %.3f %.3f ", downloadedBytes, consumedBytes,
        //    downloadedBytes * 8.0f / (1e6),
        //    consumedBytes * 8.0f / (1e6)
        //);
        }

        //int nConsumedTiles = 0;
        //2. calculate the utilities of quality change and bitrate (and stall)
        {
        static const int MAX_TILES = 32;
        MyAssert(VIDEO_DATA::nTiles < MAX_TILES, 3822);
        float v[MAX_TILES];
        float intraQC = 0.0f;	//total utility of intra-chunk quality change
        float interQC = 0.0f;	//total utility of inter-chunk quality change

        float total = 0.0f;		//total utility of bitrate (consumed)
        float totalRaw = 0.0f;	//total utility of bitrate (raw)

        int totalQ = 0;			//total quality levels (consumed)
        int nConsumedTiles = 0;

        float prev, now;
        float prevQ, nowQ;

        //intra-chunk: the quality change is the bitrate stddev
        for (int i=0; i<nChunks; i++) {
        int k = 0;
        now = 0;
        nowQ = 0;
        for (int j=0; j<nTiles; j++) {
        BYTE s = chunkStatus[i*nTiles+j];
        if  (s == 0xFF) continue;

        int bConsumed = (s & 0x80);
        BYTE quality = (BYTE)(s & 0x7F);
        MyAssert(quality>=0 && quality<VIDEO_DATA::nQualities, 3685);

        if (bConsumed) {
        //nConsumedTiles++;
        //v[k++] = DATA::bitrateQ[quality];	 //old metric
        v[k++] = quality;
        now += VIDEO_DATA::curBitrateUtility[quality];
        nowQ += quality;

        totalQ += quality;
        nConsumedTiles++;
        }

        totalRaw += VIDEO_DATA::curBitrateUtility[quality] * VIDEO_DATA::gopSize / 30;
        }

        nowQ /= k;

        //intraQC += StandardDeviation(v, k) * nTiles;	//old metric
        intraQC += StandardDeviation(v, k);
        if (i > 0) {
        //interQC += (now > prev) ? (now - prev) : (prev - now); //old metric
        interQC += (nowQ > prevQ) ? (nowQ - prevQ) : (prevQ - nowQ);
        }

        total += now * VIDEO_DATA::gopSize / 30;	//multiply it by the length (in sec) of the chunk
        prev = now;
        prevQ = nowQ;
        }

        total *= (float)VIDEO_DATA::GetUserConsumptionRatio();

        int durationInSec = nChunks * VIDEO_DATA::gopSize / 30;

        sprintf(output, "%d %.3f %.3f %.3f %.3f %.3f %.3f",
        downloadedBytes,			//DL bytes
        totalRaw / durationInSec,	//DL Mbps
        total / durationInSec,		//consumed Mbps
        (float)totalQ / nConsumedTiles,	//lvl.avg
        stallDuration, //stall
        interQC / durationInSec,	//Lvl.AvgInterQC
        intraQC / durationInSec);	//Lvl.AvgIntraQC

        //InfoMessage("DL.Bytes, DL.Mbps, Consume.Mbps, Lvl.Avg, Stall, Lvl.AvgInterQC, Lvl.AvgIntraQC");
        //InfoMessage("%s", output);
        //InfoMessage("Consumed bitrate %% = %.3lf", (double)total / totalRaw);
        }

        //Debug_DumpReceivedTiles();
        }*/
    }
}
