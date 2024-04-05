#ifndef UBUNTU_PLAYER_CONFIG_H
#define UBUNTU_PLAYER_CONFIG_H


#include <string>
#include <fstream>
#include <vector>

class Config{
public:
    static int FPS;

    //this must be identical to those defined in video_scheduler.h
    static const int ALG_VIVO = 0;
    static const int ALG_FESTIVE = 1;

    //this must be identical to those defined in hmp.h
    static const int PREDICT_PERFECT = 1;
    static const int PREDICT_LINEAR = 2;
    static const int PREDICT_RIDGE = 4;
    static const int PREDICT_RECENT = 8;
    static const int PREDICT_ADAPTIVE = 16;

    //this must be identical to those defined in the server code
    static const int XMIT_QUEUE_UPDATE_ONCE = 0;
    // static const int XMIT_QUEUE_UPDATE_REPLACE_USER = 1;
    // static const int XMIT_QUEUE_UPDATE_REPLACE_KERNEL = 2;

    static const int VIDEO_COUNT = 7;
    static std::vector<std::string> users;
    static std::vector<std::string> segs;
    static std::vector<std::string> bwList;
    static std::vector<std::string> dampList;


    static int bAutoTest;
    //User-configurable parameters
    static std::string serverAddr;

    static int exprID;

    static int sperkeXMit;
    static int dampSel;
    static int bwSel;
    static int predict;
    static int alg;
    static int vidSel;
    static int segSel;
    static int userSel;
    static int selectedUserID;
    static int selectedBWID; //xx.txt, -1 for no bw
    static int selectedDamp; //5 to 100, in percentage
    static int selectedQuality; //20, 40, 60, 80, 100

    static int FOVX;
    static int FOVY;

    static int nTilesY;
    static int thread;
    static int bFoVGuided;
    static int bLogging;
    static int bMovementFromTrace;
    static int bOverlay;
    static int bRealtimeStats;
    // static int tileCacheSize;    //recommended value: 800 for 2x4, 1600 for 4x6

    static float * replayLookAtMCenterX;
    static float * replayLookAtMCenterY;
    static float * replayLookAtMCenterZ;
    static float * replayYaw;
    static float * replayPitch;
    static float * replayRoll;
    static float * replayLookAtMEyeX;
    static float * replayLookAtMEyeY;
    static float * replayLookAtMEyeZ;

    static int allTilesMask;


    static bool loadConfig(std::string filename);

    static bool loadHeadMovementTrace(std::string usertracefile);

    static const int cqueueLookForwardWindow = 2;

    //when fetching chunks, only fetch chunks from [t to t+x] where
    //t is the current playback chunk, and x is this parameter. The unit is chunk duration
    static const int fetchLookForwardWindow = 10;
    static const int cqueueLowOccupancy = 2;         //now it's time to pump in new frames
    static const int cqueueCapacity = 50;           //in frames (was 200)
    static const int mqueueCapacity = 50;            //in frames


    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    //parameters loaded at runtime
    static int tileWidthPixels;
    static int tileHeightPixels;
    static int nTiles;
    static int nRows;
    static int nColumns;
    static int nGopSize;
    static int nChunks;
    static int nQualities;
    static const bool bProjection = true;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    //sensor & FoV data in rendering thread
    static float sensor_rotation[]; // includes 4 items : x_rot, y_rot, z_rot, ang_rot
    static float lookAtMEyeX;
    static float lookAtMEyeY;
    static float lookAtMEyeZ;
    static float lookAtMCenterX;
    static float lookAtMCenterY;
    static float lookAtMCenterZ;

    static int MaxFrameSize;
};


#endif //UBUNTU_PLAYER_CONFIG_H
