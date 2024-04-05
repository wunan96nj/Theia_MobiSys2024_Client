#ifndef _SETTINGS_H_
#define _SETTINGS_H_

#define RENDER
#define _HAS_STD_BYTE 0


//#include <linux/socket.h>
//#include <sys/socket.h>
//#include <poll.h>
//#include <netinet/in.h>
//#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
//#include <arpa/inet.h>
#include <string.h>
#include <errno.h>
//#include <sys/time.h>
//#include <pthread.h>
#include <fcntl.h>
//#include <linux/tcp.h>
//#include <sys/ioctl.h>
//#include <net/if.h>
//#include <sys/time.h>
//#include <sys/mman.h>
//#include <linux/fb.h>

#include <vector>
#include <map>
#include <algorithm>
#include <string>

//using namespace std;

#define MY_VERSION "Theia_Player"

#define SETTING_ALG_VIVO 0
#define SETTING_ALG_FESTIVE 1

//Show debug message?
//#define DEBUG_MESSAGE

//Output levels
//#define DEBUG_LEVEL_VERBOSE
#define DEBUG_LEVEL_INFO
//#define DEBUG_LEVEL_WARNING

#define DEBUG_ENABLE_ASSERTION

#define R_SUCC 1
#define R_FAIL 0

#define MODE_CLIENT 1
#define MODE_SERVER 2

typedef unsigned char BYTE;
//typedef unsigned int DWORD;
//typedef unsigned short WORD;

typedef long long INT64;
typedef unsigned long long DWORD64;


#define SETTING_POLL_TIMEOUT 5000 //millisecond
#define SETTING_SEND_MESSAGE_QUEUE_SIZE 500
#define SETTING_RECV_BUFFER_SIZE_NORMAL 1024*1024*5
#define SETTING_RECV_BUFFER_SIZE_LARGE 1024*1024*30

#define SETTING_MAX_CHUNKS 10*1024*1024
#define SETTING_MAX_FRAMES 1024
//#define SETTING_SERVER_BUFFER_SIZE 350000000
#define SETTING_SERVER_BUFFER_SIZE 350000000
#define SETTING_META_BUFFER_SIZE 1*1024*1024
#define SETTING_MAX_PRIORITY 0        //0 to 15

#define PRIORITY_MODE_NULL 1
#define PRIORITY_MODE_STRICT 2



#define SETTING_BASE_DIRECTORY "/home/labadmin/Theia/data"
//#define SETTING_BASE_DIRECTORY TCHAR_TO_ANSI(*(FPaths::ProjectDir() + TEXT("Content/PLYFiles/")));



#endif
