#include "tools.h"

#include <WS2tcpip.h>
#include <winsock2.h>
#undef UpdateResource

using namespace std;

#define DEBUG_LEVEL_INFO
//DEFINE_LOG_CATEGORY_STATIC(TEST, Log, All);
#ifndef TCP_QUICKACK
#define TCP_QUICKACK 0
#endif


void SetNonBlockIO(int fd) {
    unsigned long mode = 1;
    if (ioctlsocket(fd, FIONBIO, &mode) != 0) {
        // An error occurred
        MyAssert(0, 1616);
    }
    //int val = fcntl(fd, F_GETFL, 0);
    //if (fcntl(fd, F_SETFL, val | O_NONBLOCK) != 0) {
    //    MyAssert(0, 1616);
    //}
}

//no need for this if local and remote proxies are deployed on two machines
//void SetMaxSegSize(int fd, int nBytes) {
//    int r = setsockopt(fd, IPPROTO_TCP, TCP_MAXSEG, &nBytes, sizeof(int));
//    MyAssert(r == 0, 1751);
//}

//void SetSocketBuffer(int fd, int readBufSize, int writeBufSize) {
//    int r1 = 0;
//    int r2 = 0;
//    if (readBufSize != 0) {
//        r1 = setsockopt(fd, SOL_SOCKET, SO_RCVBUF, &readBufSize, sizeof(int));
//        MyAssert(r1 == 0, 1786);
//    }
//
//    if (writeBufSize != 0) {
//        r2 = setsockopt(fd, SOL_SOCKET, SO_SNDBUF, &writeBufSize, sizeof(int));
//        MyAssert(r2 == 0, 1787);
//    }
//
//    /*
//    socklen_t s1, s2;
//    s1 = s2 = 4;
//    r1 = getsockopt(fd, SOL_SOCKET, SO_RCVBUF, &readBufSize, &s1);
//    r2 = getsockopt(fd, SOL_SOCKET, SO_SNDBUF, &writeBufSize, &s2);
//    */
//
//    MyAssert(r1 == 0 && r2 == 0, 1769);
//
//    //InfoMessage("*** %d %d readBufSize=%d writeBufSize=%d ***", (int)s1, (int)s2, readBufSize, writeBufSize);
//}

void SetSocketNoDelay_TCP(int fd) {
    static int enable = 1;
    int r = setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, (const char*)&enable, sizeof(int));
    MyAssert(r == 0, 1768);
}

void SetQuickACK(int fd) {
    static int enable = 1;
    int r = setsockopt(fd, IPPROTO_TCP, TCP_QUICKACK, (const char*)&enable, sizeof(int));
    MyAssert(r == 0, 2040);
}




const char *ConvertDWORDToIP(unsigned int ip) {
    static char ipstr[5][128];
    static int count = 0;

    int i = count++;
    if (count == 5) count = 0;
    sprintf(ipstr[i], "%d.%d.%d.%d",
            (ip & 0x000000FF),
            (ip & 0x0000FF00) >> 8,
            (ip & 0x00FF0000) >> 16,
            (ip & 0xFF000000) >> 24
    );
    return ipstr[i];
}

void GetClientIPPort(int fd, unsigned int& ip, unsigned short& port) {
    struct sockaddr_in sin;
    socklen_t addrlen = sizeof(sin);
    if (getsockname(fd, (struct sockaddr*)&sin, &addrlen) == 0 &&
        sin.sin_family == AF_INET &&
        addrlen == sizeof(sin)) {
        ip = sin.sin_addr.s_addr;
        port = ntohs(sin.sin_port);
    }
    else {
        ip = port = 0;
        MyAssert(0, 1697);
    }
}

const char *GetTimeString() {
    static char timeStr[32];

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    sprintf(timeStr, "%02d:%02d:%02d", tm.tm_hour, tm.tm_min, tm.tm_sec);
    return timeStr;
}

void DebugMessage(const char *format, ...) {
#ifdef DEBUG_MESSAGE
    static char dest[2048];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(dest, format, argptr);
    va_end(argptr);
    printf("[DEBUG] %s %s\n", GetTimeString(), dest);
#endif
}

void WarningMessage(const char *format, ...) {
#ifdef DEBUG_LEVEL_WARNING
    static char dest[2048];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(dest, format, argptr);
    va_end(argptr);
    printf("[WARN] %s %s\n", GetTimeString(), dest);
#endif
}

//#define PRINTF(...) __android_log_print(ANDROID_LOG_ERROR, "VPP", __VA_ARGS__);

void InfoMessage(const char *format, ...) {
#ifdef DEBUG_LEVEL_INFO
    static char dest[2048];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(dest, format, argptr);
    va_end(argptr);
    printf("[INFO] %s %s\n", GetTimeString(), dest);
#endif
}

void ErrorMessage(const char *format, ...) {
    static char dest[2048];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(dest, format, argptr);
    va_end(argptr);
    printf("[ERROR] %s %s\n", GetTimeString(), dest);
    printf("errno = %d (%s)\n", errno, strerror(errno));
}

void VerboseMessage(const char *format, ...) {
#ifdef DEBUG_LEVEL_VERBOSE
    static char dest[2048];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(dest, format, argptr);
    va_end(argptr);
    //::MessageBox(AfxGetMainWnd()->m_hWnd, dest, "Mobile WebPage Profiler", MB_OK | MB_ICONSTOP);
    printf("[VERBOSE] %s %s\n", GetTimeString(), dest);
#endif
}




char *Chomp(char *str) {
    int len = (int)strlen(str);
    while (len > 0 && str[len - 1] < 32) len--;
    str[len] = 0;

    return str;
}

char *ChompSpace(char *str) {
    int len = (int)strlen(str);
    while (len > 0 && str[len - 1] <= 32) len--;
    str[len] = 0;

    return str;
}

char *ChompSpaceTwoSides(char *str) {
    int len = (int)strlen(str);
    while (len > 0 && str[len - 1] <= 32) len--;
    str[len] = 0;

    len = (int)strlen(str);
    int i = 0;
    while (i < len && str[i] <= 32) i++;
    return str + i;
}

unsigned int ConvertIPToDWORD(const char *ip) {
    static char ip0[128];
    strcpy(ip0, ip);

    const char *p[4];
    int pp = 0;
    p[0] = ip0;

    int i = 0;

    while (1) {
        MyAssert(ip0[i] != 0, 1771);
        if (ip0[i] == '.') {
            ip0[i++] = 0;
            p[++pp] = ip0 + i;
            if (pp == 3) break;
        } else {
            i++;
        }
    }

    return
            (unsigned int(atoi(p[0]))) |
            (unsigned int(atoi(p[1])) << 8) |
            (unsigned int(atoi(p[2])) << 16) |
            (unsigned int(atoi(p[3])) << 24);
}


void Split(char *str, const char *seps, std::vector <std::string> &s) {
    s.clear();
    char *token;
    token = strtok(str, seps);
    while (token != NULL) {
        s.push_back(token);
        token = strtok(NULL, seps);
    }
}

void Split(char *str, const char *seps, char **s, int &n) {
    int n0 = n;
    n = 0;
    char *token;
    token = strtok(str, seps);
    while (token != NULL) {
        s[n++] = token;
        MyAssert(n <= n0, 1915);
        token = strtok(NULL, seps);
    }
}

/*
double GetMillisecondTS() {
#ifndef VS_SIMULATION
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec + tv.tv_usec * 1e-6;
#else
    return 0.0f;
#endif
}*/

/*
inline DWORD Reverse(DWORD x) {
	return
		(x & 0xFF) << 24 |
		(x & 0xFF00) << 8 |
		(x & 0xFF0000) >> 8 |
		(x & 0xFF000000) >> 24;
}

inline WORD Reverse(WORD x) {
	return
		(x & 0xFF) << 8 |
		(x & 0xFF00) >> 8;
}

inline int Reverse(int x) {
	return (int)Reverse(DWORD(x));
}

*/

/*
extern unsigned long highResTimestampBase;

unsigned long GetHighResTimestamp() {
#ifndef VS_SIMULATION
	struct timeval tv;
	gettimeofday(&tv, NULL);
	unsigned long tNow = tv.tv_sec * 1000000 + tv.tv_usec;

	return tNow - highResTimestampBase;
#else
	return 0;
#endif
}

*/

void WriteInt(BYTE *pData, int x) {
    memcpy(pData, &x, sizeof(int));
}

void WriteShort(BYTE *pData, short x) {
    memcpy(pData, &x, sizeof(short));
}

void WriteWORD(BYTE *pData, unsigned short x) {
    memcpy(pData, &x, sizeof(unsigned short));
}

void WriteFLOAT(BYTE* pData, float x) {
    memcpy(pData, &x, sizeof(float));
}

int ReadInt(BYTE *pData) {
    return *((int *) pData);
}

double ReadDouble(BYTE * pData) {
    return *((double *) pData);
}

float ReadFloat(BYTE * pData) {
    return *((float *) pData);
}

unsigned short ReadWORD(BYTE *pData) {
    return *((unsigned short*) pData);
}

/*
double NDKGetTime() {
    struct timespec res;
    clock_gettime(CLOCK_REALTIME, &res);
    double t = res.tv_sec + (double) res.tv_nsec / 1e9f;
    return t;
}*/

uint64_t timeSinceEpochMillisec() {
    using namespace std::chrono;
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

uint64_t NDKGetTime() {
    //struct timespec res;
    //clock_gettime(CLOCK_REALTIME, &res);
    //double t = res.tv_sec + (double)res.tv_nsec / 1e9f;

    //float t = FPlatformTime::Seconds()*1000;
    
    uint64_t t = timeSinceEpochMillisec();
    return t;
}


void DumpMemory(const char * info, const BYTE * pData, int len) {
    printf("*************** %s MEMORY DUMP ***************", info);
    static const int bytesPerLine = 16;
    char buf[bytesPerLine * 3 + 1];
    char tmp[4];

    int k = 0;
    int nLines = len / bytesPerLine;
    if (len % bytesPerLine != 0) nLines++;

    for (int i=0; i<nLines; i++) {
        buf[0] = 0;
        int r = len - k;
        if (r > bytesPerLine) r = bytesPerLine;
        for (int j=0; j<r; j++) {
            sprintf(tmp, "%02x ", pData[k++]);
            strcat(buf, tmp);
        }
        printf("%s", buf);
    }
}

float GenRand() {
    if (rand() % 2)
        return (float)rand() / RAND_MAX;
    else
        return -(float)rand() / RAND_MAX;
}

/*
FILE * OpenFileForRead(const char * filename) {
    FILE * ifs = fopen(filename, "rb");

    if (ifs == NULL) {
        UE_LOG(TEST, Log, TEXT("File not found"));
        ErrorMessage("File not found: %s", filename);
        MyAssert(0, 3427);
        return NULL;
    }

    return ifs;
}*/

TArray<uint8> OpenFileForRead(FString filename) {
    // Load the file into a memory buffer
    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *filename))
    {
        UE_LOG(TEST, Log, TEXT("File not found"));
        //ErrorMessage("File not found: %s", filename);
        MyAssert(0, 3427);
        return FileData;
    }

    // Return the memory buffer as a TArray
    return FileData;
}

/*
int GetFileSize(const char * filename, long & size) {
    FILE * ifs = fopen(filename, "rb");
    if (ifs == NULL) return 0;

    fseek(ifs, 0, SEEK_END);
    size = (long)ftell(ifs);
    fclose(ifs);

    return 1;
}*/


int GetFileSize(FString filename, long& size) {
    // Load the file into a memory buffer
    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *filename))
    {
        return 0;
    }

    // Set the size variable to the size of the memory buffer
    size = FileData.Num();

    return 1;
}

