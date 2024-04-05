#include "EyeActor.h"
#include "EyeTrackerFunctionLibrary.h"
#include "DrawDebugHelpers.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "HAL/Runnable.h"


#include <functional> 
#include <string.h>
#include <sstream>
#include <iomanip>

#include "tools.h"



bool AEyeActor::useWatcher = false;
bool AEyeActor::startstreaming = false;



std::vector<float> AEyeActor::replayGazeCenterX90fps_buffer;
std::vector<float> AEyeActor::replayGazeCenterY90fps_buffer;
std::vector<float> AEyeActor::replayGazeCenterZ90fps_buffer;
std::vector<float> AEyeActor::replayGazeRotationY90fps_buffer;
std::vector<float> AEyeActor::replayGazeRotationP90fps_buffer;
std::vector<float> AEyeActor::replayGazeRotationR90fps_buffer;

float AEyeActor::replayHeadCenterX90fps;
float AEyeActor::replayHeadCenterY90fps;
float AEyeActor::replayHeadCenterZ90fps;
float AEyeActor::replayHeadRotationY90fps;
float AEyeActor::replayHeadRotationP90fps;
float AEyeActor::replayHeadRotationR90fps;

std::mutex AEyeActor::gazeBufferLock;




TArray<TArray<FString>> AEyeActor::read_gaze90(std::string filename_in) {
    FString dat_filename = FPaths::ProjectDir() + FString::Printf(TEXT("Content/90FPS_Gaze_data/01/%s"), *FString(filename_in.c_str()));
    UE_LOG(TEST, Log, TEXT("%s"), *dat_filename);

    TArray<TArray<FString>> temp_parsedCSV;


    FString FileContent;
    //Read the csv file
    FFileHelper::LoadFileToString(FileContent, *dat_filename);
    //UE_LOG(LogTemp, Error, TEXT("%s"), *FileContent);

    const TCHAR* Terminators[] = { L"\n" }; //LINE_TERMINATOR
    const TCHAR* CSVDelimeters[] = { TEXT(",") };

    TArray<FString> CSVLines;
    FileContent.ParseIntoArray(CSVLines, Terminators, 1);

    TArray<FString> temp_array;
    for (int i = 0; i < CSVLines.Num(); i++) {
        temp_array.Empty();
        CSVLines[i].ParseIntoArray(temp_array, CSVDelimeters, 1);
        temp_parsedCSV.Add(temp_array);
    }
    UE_LOG(LogTemp, Warning, TEXT("CSVLines Num %d"), CSVLines.Num());

    return temp_parsedCSV;
}

void AEyeActor::captureThread_unreal_read()
{
    while (AEyeActor::startstreaming != true) {
        FPlatformProcess::Sleep(0.011f);
    }

    // std::ofstream ofstream_unreal_90_single(std::string(TCHAR_TO_UTF8(*file_unreal_90_single)), std::ios_base::app);
    uint64_t previous_time = NDKGetTime();

    int playback_gaze_id = 1;
    while (true)
    {


        if (NDKGetTime() - previous_time >= 11) {
            std::vector<float> temp_position = { FCString::Atof(*parsedCSVgaze[playback_gaze_id][8]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][9]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][10]) };
            std::vector<float> temp_rotation = { FCString::Atof(*parsedCSVgaze[playback_gaze_id][11]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][12]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][13]) };

            std::unique_lock<std::mutex> lck_gaze(AEyeActor::gazeBufferLock);
            replayGazeCenterX90fps_buffer.push_back(temp_position[0]);
            replayGazeCenterY90fps_buffer.push_back(temp_position[1]);
            replayGazeCenterZ90fps_buffer.push_back(temp_position[2]);

            replayGazeRotationY90fps_buffer.push_back(temp_rotation[0]);
            replayGazeRotationP90fps_buffer.push_back(temp_rotation[1]);
            replayGazeRotationR90fps_buffer.push_back(temp_rotation[2]);

            if (replayGazeCenterX90fps_buffer.size() > 9) {
                replayGazeCenterX90fps_buffer.erase(replayGazeCenterX90fps_buffer.begin());
                replayGazeCenterY90fps_buffer.erase(replayGazeCenterY90fps_buffer.begin());;
                replayGazeCenterZ90fps_buffer.erase(replayGazeCenterZ90fps_buffer.begin());;

                replayGazeRotationY90fps_buffer.erase(replayGazeRotationY90fps_buffer.begin());;
                replayGazeRotationP90fps_buffer.erase(replayGazeRotationP90fps_buffer.begin());;
                replayGazeRotationR90fps_buffer.erase(replayGazeRotationR90fps_buffer.begin());;

            }
            replayHeadCenterX90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][2]);
            replayHeadCenterY90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][3]);
            replayHeadCenterZ90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][4]);
            replayHeadRotationY90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][5]);
            replayHeadRotationP90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][6]);
            replayHeadRotationR90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][7]);


            lck_gaze.unlock();
            playback_gaze_id++;
            previous_time = NDKGetTime();
        }
        else {
            FPlatformProcess::Sleep(0.001f);

        }

    }

}


void AEyeActor::captureThread_unreal_read30fps()
{
    while (AEyeActor::startstreaming != true) {
        FPlatformProcess::Sleep(0.011f);
    }

    // std::ofstream ofstream_unreal_90_single(std::string(TCHAR_TO_UTF8(*file_unreal_90_single)), std::ios_base::app);
    uint64_t previous_time = NDKGetTime();

    int playback_gaze_id = 1;
    while (true)
    {


        if (NDKGetTime() - previous_time >= 11) {
            std::vector<float> temp_position = { FCString::Atof(*parsedCSVgaze[playback_gaze_id][8]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][9]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][10]) };
            std::vector<float> temp_rotation = { FCString::Atof(*parsedCSVgaze[playback_gaze_id][11]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][12]), FCString::Atof(*parsedCSVgaze[playback_gaze_id][13]) };

            std::unique_lock<std::mutex> lck_gaze(AEyeActor::gazeBufferLock);
            replayGazeCenterX90fps_buffer.push_back(temp_position[0]);
            replayGazeCenterY90fps_buffer.push_back(temp_position[1]);
            replayGazeCenterZ90fps_buffer.push_back(temp_position[2]);

            replayGazeRotationY90fps_buffer.push_back(temp_rotation[0]);
            replayGazeRotationP90fps_buffer.push_back(temp_rotation[1]);
            replayGazeRotationR90fps_buffer.push_back(temp_rotation[2]);

            if (replayGazeCenterX90fps_buffer.size() > 9) {
                replayGazeCenterX90fps_buffer.erase(replayGazeCenterX90fps_buffer.begin());
                replayGazeCenterY90fps_buffer.erase(replayGazeCenterY90fps_buffer.begin());;
                replayGazeCenterZ90fps_buffer.erase(replayGazeCenterZ90fps_buffer.begin());;

                replayGazeRotationY90fps_buffer.erase(replayGazeRotationY90fps_buffer.begin());;
                replayGazeRotationP90fps_buffer.erase(replayGazeRotationP90fps_buffer.begin());;
                replayGazeRotationR90fps_buffer.erase(replayGazeRotationR90fps_buffer.begin());;

            }
            replayHeadCenterX90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][2]);
            replayHeadCenterY90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][3]);
            replayHeadCenterZ90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][4]);
            replayHeadRotationY90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][5]);
            replayHeadRotationP90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][6]);
            replayHeadRotationR90fps = FCString::Atof(*parsedCSVgaze[playback_gaze_id][7]);


            lck_gaze.unlock();
            playback_gaze_id++;
            previous_time = NDKGetTime();
        }
        else {
            FPlatformProcess::Sleep(0.001f);

        }

    }

}


//#include "gaze_multithread.h"
// Sets default values
AEyeActor::AEyeActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
    //PrimaryActorTick.TickInterval = 1.0f / 60.0f;


}

// Called when the game starts or when spawned
void AEyeActor::BeginPlay()
{
    Super::BeginPlay();



    //test_func();
    runtime = 0.0f;

    std::stringstream temp_filename;
    // temp_filename << "merged_3090gaze_data_" << std::setw(2) << std::setfill('0') << 1 << ".csv";
    temp_filename << "soldier_200Kgaze_data" << ".csv";
    std::string gaze_filename = temp_filename.str();
    parsedCSVgaze = read_gaze90(gaze_filename);

    std::thread eye_thread(&AEyeActor::captureThread_unreal_read, this);
    eye_thread.detach();
}


// Called every frame
void AEyeActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    ////PrintGaze();
    //runtime += DeltaTime;



    //if (useWatcher == true) {
    //    //winrt::Windows::Foundation::DateTime dt = winrt::clock::now();
    //    winrt::Windows::Foundation::DateTime dt_now = winrt::Windows::Foundation::DateTime::clock::now();

    //    winrt::Windows::Foundation::TimeSpan ts = winrt::Windows::Foundation::TimeSpan::duration(12 * 10000); // 43 ms in ticks
    //    winrt::Windows::Foundation::DateTime dt_current = dt_now - ts;

    //    uint64_t start_time = NDKGetTime();
    //    //uint64_t end_time = NDKGetTime();
    //    UE_LOG(LogTemp, Warning, TEXT("Time Now: %llu"), dt_now.time_since_epoch().count());
    //    while (dt_current.time_since_epoch().count() < (dt_now.time_since_epoch().count() - 11 * 10000)) {
    //        EyeGazeTrackerReading reading = m_gazeTracker.TryGetReadingAfterTimestamp(dt_current);

    //        // 
    //        //EyeGazeTracker test = *m_gazeTracker;
    //        //const auto reading = test.TryGetReadingAtTimestamp(dt);

    //        if (reading)
    //        {
    //            // Subtract 100 milliseconds from the current time to get the time 100 ms ago
    //            dt_current = reading.Timestamp() + winrt::Windows::Foundation::TimeSpan::duration(1 * 10000);

    //            UE_LOG(LogTemp, Warning, TEXT("reading Timestamp: %llu"), reading.Timestamp().time_since_epoch().count());
    //            winrt::Windows::Foundation::Numerics::float3 gazeOrigin;
    //            winrt::Windows::Foundation::Numerics::float3 gazeDirection;
    //            if (reading.TryGetCombinedEyeGazeInTrackerSpace(gazeOrigin, gazeDirection))
    //            {
    //                // Use gazeOrigin and gazeDirection to display the cursor
    //                UE_LOG(LogTemp, Warning, TEXT("Start value: %f, %f, %f, "), gazeOrigin.x, gazeOrigin.y, gazeOrigin.z);
    //                UE_LOG(LogTemp, Warning, TEXT("Start value: %f, %f, %f, "), gazeDirection.x, gazeDirection.y, gazeDirection.z);
    //            }
    //        }

    //        UE_LOG(LogTemp, Warning, TEXT("Used time: %llu"), NDKGetTime() - start_time);    //winrt::Windows::Foundation::DateTime dt = winrt::clock::now();
    //    }


    //}

    //UE_LOG(LogTemp, Warning, TEXT("Eyetracker connected"));
    //FEyeTrackerGazeData GazeData;
    //UEyeTrackerFunctionLibrary::GetGazeData(GazeData);
    //UE_LOG(LogTemp, Warning, TEXT("Get GazeData"));
    //FVector Start = GazeData.GazeOrigin;
    //FVector End = GazeData.GazeOrigin + GazeData.GazeDirection * 100;

    //UE_LOG(LogTemp, Warning, TEXT("Start value: %s"), *Start.ToString());
    //UE_LOG(LogTemp, Warning, TEXT("Dir value: %s"), *GazeData.GazeDirection.ToString());


}