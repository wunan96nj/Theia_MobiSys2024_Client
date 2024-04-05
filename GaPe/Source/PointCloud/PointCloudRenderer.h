// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"


#include <vector>
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>

#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraDataInterfaceTexture.h"
//#include "Engine/Texture2D.h"
//#include <Eigen/Core>
//#include <jpeglib.h>

//#include "plyreader.h"
//#include "tcp_multithread.h"
//#include "decompress_multithread.h"
#include "VideoCommunication.h"
#include "videodata.h"
#include "frame_buffer.h"
#include "tools.h"


#include "PointCloudRenderer.generated.h"

#define PI 3.14159265


UCLASS()
class POINTCLOUD_API APointCloudRenderer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APointCloudRenderer();
	~APointCloudRenderer();

	void render_thread();

	// The niagara system which should be used for rendering:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FX")
	UNiagaraSystem* pointCloudRenderer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComponent;

	int t = -10;
	float scale = 0.181731;
	//plyreader P;
	//plyreader P2;
	FString current_filename = FPaths::ProjectDir() + TEXT("Content/PLYFiles/soldier_vox10_0536.ply");
	
	
	bool isStalling = false;
	uint64_t stallBegin;
	uint64_t stallDuration = 0;


	//static std::queue<float*> highResPosFrameQueue;
	//static std::queue<uint8_t*> highResColorFrameQueue;
	static std::queue<float*> highResPosFrameQueue;
	static std::queue<uint8_t*> highResColorFrameQueue;
	static std::queue<float*> highResSizeFrameQueue;

	//static std::queue<std::vector<float>> highResPosFrameQueue;
	//static std::queue<std::vector<uint8_t>> highResColorFrameQueue;
	//static std::queue<std::vector<float>> highResSizeFrameQueue;

	//static pthread_mutex_t highResFrameQueueLock;
	static std::mutex highResFrameQueueLock;

	static FCriticalSection highResFrameQueueLockCS;

	// 
	//static pthread_cond_t highResFrameQueueCond;
	static std::condition_variable highResFrameQueueCond;

	static int head_id;

	static int buffer_frame_size;

	static bool automation;

	std::queue<std::vector<float>> pose_position;
	std::queue<std::vector<float>> pose_rotation;

	TArray<TArray<FString>> read_csv(std::string filename_in);
	TArray<TArray<FString>> read_csv90(std::string filename_in);


	int playback_id = 1;
	TArray<TArray<FString>> parsedCSV;
	TArray<TArray<FString>> parsedCSVhead;

	FVector NewPosition = FVector(0, 0, 0);
	FRotator NewRotation = FRotator(0, 0, 0);

private:
	// The instance of the niagara system:
	UNiagaraComponent* rendererInstance;

	// Textures to transfer the data to the niagara system:
	UTexture2D* positionTexture;
	UTexture2D* colorTexture;

	// further data:
	uint32_t textureWidth;
	uint32_t textureHeight;
	uint32_t pointCount;

	// The data which has to be written into the textures:
	float* positions;
	uint8_t* colors;

	// precalculated part of the sine function:
	float* precalc;

	// Runtime of the game:
	float runtime;
	uint64 current_frameid = -1;

	// Definition of the region which should be updated:
	FUpdateTextureRegion2D region;

	int runtime_frame = -1;

	int playback_frame = 0;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
