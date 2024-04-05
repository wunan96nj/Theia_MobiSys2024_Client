// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <thread>

#include <chrono>
#include <queue>
#include <mutex>


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EyeActor.generated.h"




UCLASS()
class POINTCLOUD_API AEyeActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AEyeActor();


	bool useGaze;
	static bool useWatcher;
	static bool startstreaming;

	FTimerHandle MemberTimerHandle;

	TArray<TArray<FString>> read_gaze90(std::string filename_in);

	void captureThread_unreal_read();
	void captureThread_unreal_read30fps();

	TArray<TArray<FString>> parsedCSVgaze;

	static std::vector<float> replayGazeCenterX90fps_buffer;
	static std::vector<float> replayGazeCenterY90fps_buffer;
	static std::vector<float> replayGazeCenterZ90fps_buffer;

	static std::vector<float> replayGazeRotationY90fps_buffer;
	static std::vector<float> replayGazeRotationP90fps_buffer;
	static std::vector<float> replayGazeRotationR90fps_buffer;

	static float replayHeadCenterX90fps;
	static float replayHeadCenterY90fps;
	static float replayHeadCenterZ90fps;
	static float replayHeadRotationY90fps;
	static float replayHeadRotationP90fps;
	static float replayHeadRotationR90fps;


	static std::mutex gazeBufferLock;

private:
	//EyeGazeTrackerWatcher member_watcher = nullptr;
	//EyeGazeTrackerWatcher *member_watcher;
	//EyeGazeTracker *m_gazeTracker;
	//EyeGazeTracker m_gazeTracker = nullptr;
	float runtime;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
