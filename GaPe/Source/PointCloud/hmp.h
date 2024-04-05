
#ifndef VIDEO360PLAYER_HMP_H
#define VIDEO360PLAYER_HMP_H

class HMPredict {
private:
    static void LinearRegression(float* feature, float* label, int len, float & a, float & b);

public:
    //these must be identical to those defined in Config.java
    static const int PREDICT_PERFECT = 1;
    static const int PREDICT_LINEAR = 2;
    static const int PREDICT_RIDGE = 4;
    static const int PREDICT_RECENT = 8;
    static const int PREDICT_ADAPTIVE = 16;

    static int nSlots;  //total # buffer slots (each slot has 12 bytes)
    static int * pWrittenSlots; //point to the # of slots written
    static float * pBaseTime;
    static float * pBaseLat;
    static float * pBaseLon;

private:
    int predictionMode;

    //void LoadPrediction(const char * filename, int nColumns, int hInterval, int vInterval);

    static void Predict_Recent(int nextFrame, float * lat, float * lon, int n);
    static void Predict_Linear(int nextFrame, float * eyeX, float * eyeY, float * eyeZ, float * yaw, float * pitch);
    //void Predict_Trace(int nextFrame, float * lat, float * lon, int n, int hInterval, int chunkDuration);

    static float PredictLat(float ts, float a, float b);
    static float PredictLon(float ts, float a, float b);

public:
    HMPredict(int predictionMode);
    ~HMPredict();

    void Predict(int nextFrame, float * eyeX, float * eyeY, float * eyeZ, float * yaw, float * pitch);

};

#endif //VIDEO360PLAYER_HMP_H
