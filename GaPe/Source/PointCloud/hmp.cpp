#include "hmp.h"
#include "VideoCommunication.h"
#include "videodata.h"
#include "tools.h"

#include "video_scheduler.h"
//#include "encoded_buffer.h"
using namespace std;

int HMPredict::nSlots = 0;
int * HMPredict::pWrittenSlots = NULL;
float * HMPredict::pBaseTime = NULL;
float * HMPredict::pBaseLat = NULL;
float * HMPredict::pBaseLon = NULL;

HMPredict::HMPredict(int predictionMode) {
    this->predictionMode = predictionMode;
}


HMPredict::~HMPredict() {

}



//lat[0] and lon[0] are the current (real) lat/lon
void HMPredict::Predict_Recent(int nextFrame, float * lat, float * lon, int n) {



    lat[0] = VIDEO_SCHEDULER::curLat;
    lon[0] = VIDEO_SCHEDULER::curLon;

    for (int i=1; i<n; i++) {
        lat[i] = lat[0];
        lon[i] = lon[0];
    }
}

void HMPredict::LinearRegression(float* feature, float* label, int len, float & a, float & b) {
    float mean_x =0;
    float mean_y =0;
    for (int i=0; i<len; i++) {
        mean_x = mean_x + feature[i];
        mean_y = mean_y + label[i];
        //InfoMessage("label %d: %.3lf", i, label[i]);
    }
    mean_x = mean_x / float(len);
    mean_y = mean_y / float(len);

    float sum1 = 0;
    float sum2 = 0;
    for (int i=0; i<len; i++) {
        sum1 = sum1 + (feature[i]-mean_x)*(label[i]-mean_y);
        sum2 = sum2 + (feature[i]-mean_x)*(feature[i]-mean_x);
    }
    a = sum1 / sum2;
    b = mean_y - a * mean_x;
    //InfoMessage("%.3lf %.3lf %.3lf %.3lf %.3lf %.3lf", a, b, sum1, sum2, mean_x, mean_y);
    //float test_label = a * test + b;
}

float HMPredict::PredictLat(float ts, float a, float b) {
    float lat = a * ts + b;
    if (lat > 90) {
        if (lat - 90 > 45 || lat - 90 < -45)
            lat = 90;
        else
            lat = 180 - lat;
    } else if (lat < -90) {
        if (lat + 90 > 45 || lat + 90 < -45)
            lat = -90;
        else
            lat = -180 - lat;
    }

    return lat;
}

float HMPredict::PredictLon(float ts, float a, float b) {
    float lon = a * ts + b;
    while (lon > 180) lon -= 360;
    while (lon < -180) lon += 360;
    return lon;
}

void HMPredict::Predict_Linear(int nextFrame, float * eyeX, float * eyeY, float * eyeZ, float * yaw, float * pitch) {

    float a, b;
    int len = 3;

    if (len == 3) {
        float features[3];

        // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30

        for (int i = 0; i < 3; i++)
            features[i] = (float) (i + 22);

        double t1 = NDKGetTime();
        LinearRegression(features, &(VIDEO_SCHEDULER::replayLookAtMEyeX[nextFrame - 6 - 2]), 3, a, b);
        //InfoMessage("%.3lf %.3lf", a, b);
        *eyeX = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayLookAtMEyeY[nextFrame - 6 - 2]), 3, a, b);
        *eyeY = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayLookAtMEyeZ[nextFrame - 6 - 2]), 3, a, b);
        *eyeZ = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayYaw[nextFrame - 6 - 2]), 3, a, b);
        *yaw = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayPitch[nextFrame - 6 - 2]), 3, a, b);
        *pitch = 30.0f * a + b;
        double t2 = NDKGetTime();
    }
    else if (len == 8) {
        float features[8];

        // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30

        for (int i = 0; i < 8; i++)
            features[i] = (float) (i + 8);

        double t1 = NDKGetTime();
        LinearRegression(features, &(VIDEO_SCHEDULER::replayLookAtMEyeX[nextFrame - 15 - 7]), 8, a, b);
        //InfoMessage("%.3lf %.3lf", a, b);
        *eyeX = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayLookAtMEyeY[nextFrame - 15 - 7]), 8, a, b);
        *eyeY = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayLookAtMEyeZ[nextFrame - 15 - 7]), 8, a, b);
        *eyeZ = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayYaw[nextFrame - 15 - 7]), 8, a, b);
        *yaw = 30.0f * a + b;

        LinearRegression(features, &(VIDEO_SCHEDULER::replayPitch[nextFrame - 15 - 7]), 8, a, b);
        *pitch = 30.0f * a + b;
        double t2 = NDKGetTime();
    }

    
}



void HMPredict::Predict(int nextFrame, float * eyeX, float * eyeY, float * eyeZ, float * yaw, float * pitch) {
    switch (predictionMode) {
        case PREDICT_PERFECT:
        case PREDICT_RIDGE:
        case PREDICT_ADAPTIVE:
        case PREDICT_RECENT:
            MyAssert(0, 3850);
            break;

        case PREDICT_LINEAR:
            //Predict_Trace(nextFrame, lat, lon, n, hInterval, chunkDuration);
            Predict_Linear(nextFrame, eyeX, eyeY, eyeZ, yaw, pitch);
            break;

        //case PREDICT_RECENT:
            //Predict_Recent(nextFrame, lat, lon, n);
            break;

        default:
            MyAssert(0, 3659);
    }
}

