#ifndef VIVO_TOOLS_H
#define VIVO_TOOLS_H

//#include <android/log.h>
//#include "vpp.h"
//#define PRINTF(...) __android_log_print(ANDROID_LOG_INFO, "VPP", __VA_ARGS__);
//#define PRINTF(...) __android_log_print(ANDROID_LOG_ERROR, "ViVo:", __VA_ARGS__);



#define DEBUG_ENABLE_ASSERTION
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <chrono>

#include "loggerActor.h"

DEFINE_LOG_CATEGORY_STATIC(TEST, Log, All);


//extern void ThrowRuntimeError(int id);

inline void MyAssert(int x, int assertID) {
#ifdef DEBUG_ENABLE_ASSERTION
    if (!x) {
        printf("=============================================================================");
        printf("Assertion failure: %d\n", assertID);
        printf("errno = %d (%s)\n", errno, strerror(errno));
        UE_LOG(TEST, Log, TEXT("Assertion failure: %d"), assertID);

        exit(-1);

        //ThrowRuntimeError(assertID);
    }
#endif
}


//void MyAssert(int x, int assertID);
void SetNonBlockIO(int fd);

void SetSocketBuffer(int fd, int readBufSize, int writeBufSize);

void SetMaxSegSize(int fd, int nBytes);

void SetSocketNoDelay_TCP(int fd);

void SetQuickACK(int fd);

unsigned int GetCongestionWinSize(int fd);

const char *ConvertDWORDToIP(unsigned int ip);

unsigned int ConvertIPToDWORD(const char *ip);

static inline unsigned short ReverseWORD(unsigned short x) {
    return
            (unsigned short)((x & 0xFF) << 8) |
            (unsigned short)((x & 0xFF00) >> 8);
}

void GetClientIPPort(int fd, unsigned int&ip, unsigned short&port);

const char *GetTimeString();

void DebugMessage(const char *format, ...);

void WarningMessage(const char *format, ...);

void InfoMessage(const char *format, ...);

void ErrorMessage(const char *format, ...);

void VerboseMessage(const char *format, ...);

char *Chomp(char *str);

char *ChompSpace(char *str);

char *ChompSpaceTwoSides(char *str);

//int GetFileSize(const char *filename, long &size);
int GetFileSize(FString filename, long& size);

void Split(char *str, const char *seps, char **s, int &n);

void Split(char *str, const char *seps, std::vector <std::string> &s);

void SetCongestionControl(int fd, const char *tcpVar);

/*
int FindStr(const char * str, const BYTE * pBuf, int n);
int FindRequest(int & rr, const BYTE * pBuf, int n);
int FindResponse(int & rr, const BYTE * pBuf, int n);
*/

#define TCPSOCKET_2_PIPEBUFFER 1
#define PIPEBUFFER_2_PIPESOCKET 2
#define PIPESOCKET_2_TCPBUFFER 3
#define TCPBUFFER_2_TCPSOCKET 4


double GetMillisecondTS();

inline unsigned int Reverse(unsigned int x) {
    return
            (x & 0xFF) << 24 |
            (x & 0xFF00) << 8 |
            (x & 0xFF0000) >> 8 |
            (x & 0xFF000000) >> 24;
}

inline unsigned short Reverse(unsigned short x) {
    return
            (unsigned short)((x & 0xFF) << 8) |
            (unsigned short)((x & 0xFF00) >> 8);
}

inline int Reverse(int x) {
    return (int) Reverse(unsigned int(x));
}

unsigned long GetHighResTimestamp();

inline unsigned long GetLogicTime() {
    static unsigned long l = 100;
    return l++;
}

//double NDKGetTime();
uint64_t NDKGetTime();

void WriteInt(BYTE *pData, int x);

void WriteShort(BYTE *pData, short x);

void WriteWORD(BYTE *pData, unsigned short x);

void WriteFLOAT(BYTE* pData, float x);

int ReadInt(BYTE *pData);

double ReadDouble(BYTE * pData);

float ReadFloat(BYTE * pData);

unsigned short ReadWORD(BYTE *pData);

void ThrowRuntimeError(int assertID);

void DumpMemory(const char * info, const BYTE * pData, int len);

float GenRand();    //gen a random number between -1 and 1

//FILE * OpenFileForRead(const char * filename);
TArray<uint8> OpenFileForRead(FString filename);

#endif //VIVO_TOOLS_H
