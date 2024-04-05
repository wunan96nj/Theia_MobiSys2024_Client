//
// Created by Ding Zhang on 4/12/21.
//
#include "config.h"
#include <fstream>
#include <iostream>
#include <sstream>

#include "tools.h"

std::string Config::serverAddr;
int Config::sperkeXMit;
int Config::dampSel;
int Config::bwSel;
int Config::alg;
int Config::predict;
int Config::vidSel;
int Config::segSel;
int Config::userSel;

int Config::FOVX;
int Config::FOVY;
int Config::thread;
int Config::FPS;

int Config::bFoVGuided;
int Config::bLogging;
int Config::bOverlay;
int Config::bRealtimeStats;


int Config::MaxFrameSize;

float * Config::replayLookAtMEyeX = NULL;
float * Config::replayLookAtMEyeY = NULL;
float * Config::replayLookAtMEyeZ = NULL;
float * Config::replayYaw = NULL;
float * Config::replayPitch = NULL;
float * Config::replayRoll = NULL;
float * Config::replayLookAtMCenterX = NULL;
float * Config::replayLookAtMCenterY = NULL;
float * Config::replayLookAtMCenterZ = NULL;

//define here, used in nativelib.cpp
int Config::nChunks = 0;
int Config::nRows = 0;
int Config::nColumns = 0;
int Config::nQualities = 0;
int Config::nGopSize = 0;
int Config::tileWidthPixels = 0;
int Config::tileHeightPixels = 0;
int Config::nTiles = 0;

bool Config::loadConfig(std::string filename) {
    std::ifstream inputFile(filename);
    bool b = false;

    if (!inputFile.is_open()) {
        std::cout << "Error opening file";
    } else {
        std::string line;
        /* while (std::getline(file, line)) {
             // using printf() in all tests for consistency
             printf("%s", line.c_str());
         }*/
        std::getline(inputFile, line);
        Config::serverAddr = line;

        std::getline(inputFile, line);
        Config::sperkeXMit = stoi(line);

        std::getline(inputFile, line);
        Config::dampSel = stoi(line);

        std::getline(inputFile, line);
        Config::bwSel = stoi(line);

        std::getline(inputFile, line);
        Config::alg = stoi(line);

        std::getline(inputFile, line);
        Config::predict = stoi(line);

        std::getline(inputFile, line);
        Config::vidSel = stoi(line);

        std::getline(inputFile, line);
        Config::segSel = stoi(line);

        std::getline(inputFile, line);
        Config::userSel = stoi(line);

        std::getline(inputFile, line);
        Config::FOVX = stoi(line);

        std::getline(inputFile, line);
        Config::FOVY = stoi(line);

        std::getline(inputFile, line);
        Config::thread = stoi(line);

        std::getline(inputFile, line);
        Config::FPS = stoi(line);

        std::getline(inputFile, line);
        Config::bFoVGuided = stoi(line);

        std::getline(inputFile, line);
        Config::bLogging = stoi(line);

        std::getline(inputFile, line);
        Config::bOverlay = stoi(line);

        std::getline(inputFile, line);
        Config::bRealtimeStats = stoi(line);

        inputFile.close();
        b = true;
    }

    return b;
}

bool Config::loadHeadMovementTrace(std::string userTraceFile) {
    std::ifstream inputFile(userTraceFile);
    bool b = false;

    if (!inputFile.is_open()) {
        std::cout << "Error opening file";
    } else {
        std::string line;
        int countFrame = 0;
        while (getline(inputFile, line)){
            countFrame ++;
        }
        //printf("frame num: %d\n",countFrame);
        Config::MaxFrameSize = countFrame;
        replayLookAtMEyeX = new float[MaxFrameSize];
        replayLookAtMEyeY = new float[MaxFrameSize];
        replayLookAtMEyeZ = new float[MaxFrameSize];
        replayYaw = new float[MaxFrameSize];
        replayPitch = new float[MaxFrameSize];
        replayRoll = new float[MaxFrameSize];
        replayLookAtMCenterX = new float[MaxFrameSize];
        replayLookAtMCenterY = new float[MaxFrameSize];
        replayLookAtMCenterZ = new float[MaxFrameSize];
        inputFile.clear();
        inputFile.seekg(0);
        int count = 1;
        while (getline(inputFile, line)){
            std::stringstream ss(line);
            std::string data;
            ss>>data;
            int indexFrame = stoi(data);
            MyAssert(count==indexFrame,9002);

            ss>>data;
            float eyeX = stof(data);
            replayLookAtMEyeX[indexFrame-1] = eyeX;

            ss>>data;
            float eyeY = stof(data);
            replayLookAtMEyeY[indexFrame-1] = eyeY;

            ss>>data;
            float eyeZ = stof(data);
            replayLookAtMEyeZ[indexFrame-1] = eyeZ;

            ss>>data;
            float yaw = stof(data);
            replayYaw[indexFrame-1] = yaw;

            ss>>data;
            float pitch = stof(data);
            replayPitch[indexFrame-1] = pitch;

            ss>>data;
            float roll = stof(data);
            replayRoll[indexFrame-1] = roll;

            ss>>data;
            float centerX = stof(data);
            replayLookAtMCenterX[indexFrame-1] = centerX;

            ss>>data;
            float centerY = stof(data);
            replayLookAtMCenterY[indexFrame-1] = centerY;

            ss>>data;
            float centerZ = stof(data);
            replayLookAtMCenterZ[indexFrame-1] = centerZ;

            //printf("%d,%f,%f,%f,%f,%f,%f,%f,%f,%f\n",indexFrame,replayLookAtMEyeX[indexFrame],replayLookAtMEyeY[indexFrame],replayLookAtMEyeZ[indexFrame],
            //       replayYaw[indexFrame],replayPitch[indexFrame],replayRoll[indexFrame],replayLookAtMEyeX[indexFrame],replayLookAtMCenterY[indexFrame],replayLookAtMCenterZ[indexFrame]);
            count ++;
        }
        b = true;
    }
    return b;
}
