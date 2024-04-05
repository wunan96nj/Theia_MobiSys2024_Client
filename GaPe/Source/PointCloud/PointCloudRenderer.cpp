// Fill out your copyright notice in the Description page of Project Settings.


#include "PointCloudRenderer.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include <string.h>
#include <vector>

#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <array>

#include <winsock2.h>
#undef UpdateResource


//#include "plyreader.h"
//#include "DracoBase.h"
//#include "tcp_multithread.h"
#include "nativelib.h"
#include "video_scheduler.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "EyeTrackerFunctionLibrary.h"
#include "DrawDebugHelpers.h"
#include "EyeActor.h"



#define BUFF_SIZE (1024*1024)
#define FILE_NAME_LENGTH 1024
               

//std::queue<float*> APointCloudRenderer::highResPosFrameQueue;
//std::queue<uint8_t*> APointCloudRenderer::highResColorFrameQueue;

std::queue<float*> APointCloudRenderer::highResPosFrameQueue;
std::queue<uint8_t*> APointCloudRenderer::highResColorFrameQueue;
std::queue<float*> APointCloudRenderer::highResSizeFrameQueue;

//std::queue<std::vector<float>> APointCloudRenderer::highResPosFrameQueue;
//std::queue<std::vector<uint8_t>> APointCloudRenderer::highResColorFrameQueue;
//std::queue<std::vector<float>> APointCloudRenderer::highResSizeFrameQueue;


std::mutex APointCloudRenderer::highResFrameQueueLock;
std::condition_variable APointCloudRenderer::highResFrameQueueCond;

FCriticalSection APointCloudRenderer::highResFrameQueueLockCS;

int APointCloudRenderer::head_id = 0;
int APointCloudRenderer::buffer_frame_size = 30;
bool APointCloudRenderer::automation = false;




using namespace std;

//DEFINE_LOG_CATEGORY_STATIC(TEST, Log, All);

void Split_t(char* str, char* seps, vector<string>& s) {
	s.clear();
	char* token;
	token = strtok(str, seps);
	while (token != NULL) {
		s.push_back(token);
		token = strtok(NULL, seps);
	}
}


/**
 * Just a helper method to set a texture for a user variable because the UNiagaraComponent
 * has no direct way to edit a texture variable compared to float, vectors, ...
 */

void SetNiagaraVariableTexture(class UNiagaraComponent* niagara, FString variableName, UTexture* texture) {
	if (!niagara || !texture)
		return;

	FNiagaraUserRedirectionParameterStore& overrideParameters = niagara->GetOverrideParameters();
	FNiagaraVariable niagaraVariable = FNiagaraVariable(FNiagaraTypeDefinition(UNiagaraDataInterfaceTexture::StaticClass()), *variableName);

	UNiagaraDataInterfaceTexture* dataInterface = (UNiagaraDataInterfaceTexture*)overrideParameters.GetDataInterface(niagaraVariable);
	dataInterface->SetTexture(texture);
}





// Sets default values
APointCloudRenderer::APointCloudRenderer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//PrimaryActorTick.TickInterval = 0.033f;

	// Create and attach the camera component
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(RootComponent);

	// Just define how many points you want. You can define pointCount arbitrary as long as 
	// textureWidth * textureHeight is greater or equals pointCount:
	textureWidth = 450;
	textureHeight = 450;
	pointCount = textureWidth * textureHeight;

	positions = new float[textureWidth * textureHeight * 4];
	colors = new uint8_t[textureWidth * textureHeight * 4];

	region = FUpdateTextureRegion2D(0, 0, 0, 0, textureWidth, textureHeight);

	head_id = 0;
}


// Just the destructor:
APointCloudRenderer::~APointCloudRenderer()
{
	delete[] positions;
	delete[] colors;
	delete[] precalc;
}



TArray<uint8> ReceiveDataTCP() {
	TArray<uint8> ReceivedData;


	printf("start...\n");

	unsigned short port;       
	char buf[BUFF_SIZE];      
	const char* hostnm;    
	struct sockaddr_in server; 
	int s;

	hostnm = "192.168.1.209";


	port = 5011;
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	server.sin_addr.s_addr = inet_addr(hostnm);

	if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("Socket error\n");
		exit(3);
	}

	printf("ready to connet to server ...\n");
	if (connect(s, (struct sockaddr*)&server, sizeof(server)) < 0)
	{
		printf("Connect error\n");
		exit(4);
	}

	int iRecv = 0;
	memset(buf, 0, BUFF_SIZE);
	iRecv = recv(s, buf, BUFF_SIZE, 0);
	if (iRecv < 0) {
		printf("recv fileSize error\n");
		exit(5);
	}
	long long int totalFileSize = atoll(buf);
	printf("totalFileSize:%lld\n", totalFileSize);

	char* fileName = "recv.bin";

	char* filePath = new char[FILE_NAME_LENGTH];
	memset(filePath, 0, FILE_NAME_LENGTH);
	const char* basePath = "./";
	memcpy(filePath, basePath, strlen(basePath));
	strcat(filePath, fileName);
	printf("filePath:%s\n", filePath);

	long long int fileRecv = 0;
	time_t start;
	start = time(NULL);

	while (fileRecv < totalFileSize) {
		memset(buf, 0, BUFF_SIZE);
		iRecv = recv(s, buf, BUFF_SIZE, 0);
		if (iRecv < 0)
		{
			printf("Recv error\n");
			exit(6);
		}
		if (iRecv == 0) {
			break;
		}
		fileRecv += iRecv;
		for (int i = 0; i < iRecv; i++) {
			ReceivedData.Emplace(buf[i]);
		}

		time_t end = time(NULL);
		time_t cost = end - start;
		time_t totalTime = 0;
		time_t leftTime = 0;
		if (cost != 0) {
			totalTime = totalFileSize / (fileRecv / cost);
			leftTime = (totalFileSize - fileRecv) / (fileRecv / cost);
		}
	}



	return ReceivedData;
}


void* networkLoop(void* arg) {
	//start the main loop
	//CacheJNIEnv(&pEnvNetwork);

	VIDEO_COMM::MainLoop();

	// local video
	//pReader = (DATA_READER *)arg;
	//pReader->MainLoop();

	return NULL;
}

TArray<TArray<FString>> APointCloudRenderer::read_csv90(std::string filename_in) {
	FString dat_filename = FPaths::ProjectDir() + FString::Printf(TEXT("Content/Gaze_data/%s"), *FString(filename_in.c_str()));
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

	playback_frame = 0;
	return temp_parsedCSV;
	//TArray<FString> GetCSVDataToString(FString fPath);
	//FCsvParser* csvfiles = new FCsvParser(FileContent); alternate method?


}

TArray<TArray<FString>> APointCloudRenderer::read_csv(std::string filename_in) {
	FString dat_filename = FPaths::ProjectDir() + FString::Printf(TEXT("Content/30FPS_HeadGaze/%s"), *FString(filename_in.c_str()));
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

// Called when the game starts or when spawned
void APointCloudRenderer::BeginPlay()
{
	Super::BeginPlay();
	if (PLATFORM_WINDOWS) {
		APointCloudRenderer* NiagaraActor = this; // Get a reference to the current Niagara actor instance

		if (NiagaraActor)
		{
			APlayerController* PlayerController = Cast<APlayerController>(GetWorld()->GetFirstPlayerController());
			// Set the player's view target to the custom Niagara actor
			PlayerController->SetViewTargetWithBlend(NiagaraActor);
			//unique_lock<mutex> lck_renderer(APointCloudRenderer::highResFrameQueueLock);
			NiagaraActor->CameraComponent->SetFieldOfView(90.0f);
			NiagaraActor->CameraComponent->AspectRatio = 64.0f / 36.0f;
			NiagaraActor->CameraComponent->SetProjectionMode(ECameraProjectionMode::Perspective);

			//lck_renderer.unlock();
		}
	}
	string server_ip = "192.168.1.166";
	//string server_ip = "192.168.1.153";
	//string server_ip = "10.42.0.1";
	string video_name = "soldier.2x2x2_original_1M";
	//string video_name = "longdress300.2x2x2_original_1M";
	//string video_name = "loot.2x2x2_original_1M";
	//string video_name = "redandblack300.2x2x2_original_1M";
	//string video_name = "lubna300.2x2x2_original_1M";
	//string video_name = "matis300.2x2x2_original_1M";
	//string video_name = "cosplay300.2x2x2_original_1M";
	//string video_name = "singner300.2x2x2_original_1M";

	//string video_name = "soldier300.2x2x2_original_200K";

	std::stringstream temp_filename;
	temp_filename << "soldier_200K" << ".csv";
	//temp_filename << "longdress_200K" << ".csv";
	//temp_filename << "loot_200K" << ".csv";
	//temp_filename << "redandblack_200K" << ".csv";
	//temp_filename << "Lubna_200K" << ".csv";
	//temp_filename << "Matis_200K" << ".csv";
	//temp_filename << "c1_90K" << ".csv";
	//temp_filename << "female_singer_2_box_90K" << ".csv";

	std::string gaze_filename = temp_filename.str();
	parsedCSV = read_csv(gaze_filename);

	//std::stringstream temp_filename_head;
	//temp_filename_head << "merged_gaze_data_" << std::setw(2) << std::setfill('0') << playback_id << ".csv";
	//std::string gaze_filename_head = temp_filename_head.str();
	//parsedCSVhead = read_csv(gaze_filename_head);


	int server_port = 6001;

	nativelib::init();

	nativelib::setConfig(0, 43, 29, 0, 2, 1, 100, 7, 1, 0, 4, 30, 2, 0, 2, 1, 285, false);

	nativelib::networkLoop(server_ip, video_name, server_port);

	while (VIDEO_DATA::nChunks <= 0) {
		FPlatformProcess::Sleep(0.001);
		//UE_LOG(TEST, Log, TEXT("nchunks begin: %d"), VIDEO_DATA::nChunks);	
	}

	nativelib::schedulerLoop();

	// Initialize the Niagara System:
	rendererInstance = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		this,
		pointCloudRenderer,
		FVector(0, 0, 0),
		FRotator(0),
		FVector(1),
		true,
		true,
		ENCPoolMethod::AutoRelease,
		true
	);
	//rendererInstance->set
	//rendererInstance->SetCastShadow(true);

	// Create dynamic texture for position:
	positionTexture = UTexture2D::CreateTransient(textureWidth, textureHeight, PF_A32B32G32R32F, "PositionData");
	positionTexture->Filter = TF_Nearest;
	positionTexture->UpdateResource();

	// Create dynamic texture for color:
	colorTexture = UTexture2D::CreateTransient(textureWidth, textureHeight, PF_B8G8R8A8, "ColorTexture");
	colorTexture->Filter = TF_Nearest;
	colorTexture->UpdateResource();

	// Set the niagara system user variables:
	SetNiagaraVariableTexture(rendererInstance, "User.PositionTexture", positionTexture);
	SetNiagaraVariableTexture(rendererInstance, "User.ColorTexture", colorTexture);

	rendererInstance->SetVariableInt("User.TextureWidth", textureWidth);
	rendererInstance->SetVariableInt("User.TextureHeight", textureHeight);
	rendererInstance->SetVariableInt("User.PointCount", pointCount);

	runtime = 0;
	//positionTexture->UpdateTextureRegions(0, 1, &region, textureWidth * 16, 16, (uint8*)positions);
	//colorTexture->UpdateTextureRegions(0, 1, &region, textureWidth * 4, 4, (uint8*)colors);

	std::thread render_t(&APointCloudRenderer::render_thread, this);
	render_t.detach();

}

void APointCloudRenderer::render_thread() {
	uint64_t previous_time = (uint64_t)NDKGetTime();
	while (true) {
		uint64_t delta_t = (uint64_t)NDKGetTime() - previous_time;
		if (delta_t < 33) {
			FPlatformProcess::Sleep(0.0005);
			continue;
		}
		previous_time = (uint64_t)NDKGetTime();

		//UE_LOG(TEST, Warning, TEXT("My int_vec length is: %u"), multi_TCP->int_vec.size());
		runtime += delta_t;
		if (runtime_frame == -1) {
			runtime_frame = 0;
		}
		AEyeActor::startstreaming = true;
		UE_LOG(TEST, Warning, TEXT("Current timestamp rendering: %llu"), (uint64_t)NDKGetTime());

		//UE_LOG(TEST, Warning, TEXT("My highResPosFrameQueue size is: %d"), highResPosFrameQueue.size());

		//unique_lock<mutex> lck_renderer(APointCloudRenderer::highResFrameQueueLock);

		if (true) {
			unique_lock<mutex> lck_renderer(APointCloudRenderer::highResFrameQueueLock);
			int highResPosFrameQueue_size = highResPosFrameQueue.size();
			int highResColorFrameQueue_size = highResPosFrameQueue.size();

			int highResSizeFrameQueue_size = highResPosFrameQueue.size();
			lck_renderer.unlock();

			if ((highResPosFrameQueue_size > 0) && (highResColorFrameQueue_size > 0)&& (highResSizeFrameQueue_size > 0)) {
				if (isStalling) {
					uint64_t thisDuration = (uint64_t)NDKGetTime() - stallBegin;
					stallDuration += thisDuration;
					//int frameID = curFrameID - 1;

					FString message_fstring = FString::Printf(TEXT("Stall ends. Frame = %d, duration = %llu, total duration = %f"), current_frameid, thisDuration, stallDuration / 1000.0f);
					std::string message = TCHAR_TO_UTF8(*message_fstring);
					{
						std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
						AloggerActor::log_queue.push(message);
					}
					

					isStalling = false;


				}

				//uint64 frameid = min(uint64(floor(runtime / 0.033)) % 300, (highResPosFrameQueue.size() - 1));
				uint64 frameid = current_frameid + 1;
				//if (frameid % 150 == 0) {
				//	UGameplayStatics::GetPlayerController(GetWorld(), 0)->ConsoleCommand("HighResShot 1280x720");

				//}
				if (frameid != current_frameid) {
					current_frameid = frameid;
					UE_LOG(TEST, Warning, TEXT("My current_frameid is: %d, highResPosFrameQueue size: %d, current timestamp: %llu"), current_frameid, highResPosFrameQueue.size(), (uint64_t)NDKGetTime());
					{
						FString message_fstring = FString::Printf(TEXT("My current_frameid is: %d, highResPosFrameQueue size: %d, current timestamp start rendering: %llu"), current_frameid, highResPosFrameQueue.size(), (uint64_t)NDKGetTime());
						std::string message = TCHAR_TO_UTF8(*message_fstring);
						{
							std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
							AloggerActor::log_queue.push(message);
						}

					}

					if (playback_frame > 15) {
						unique_lock<mutex> lck_gaze(AEyeActor::gazeBufferLock);
						for (int temp_iterate = 0; temp_iterate < 9; temp_iterate++) {
							std::vector<float> read_position = { FCString::Atof(*parsedCSV[playback_frame][8 + 6 * temp_iterate]), FCString::Atof(*parsedCSV[playback_frame][8 + 6 * temp_iterate + 1]), FCString::Atof(*parsedCSV[playback_frame][8 + 6 * temp_iterate + 2]) };
							std::vector<float> read_rotation = { FCString::Atof(*parsedCSV[playback_frame][8 + 6 * temp_iterate + 3]), FCString::Atof(*parsedCSV[playback_frame][8 + 6 * temp_iterate + 4]), FCString::Atof(*parsedCSV[playback_frame][8 + 6 * temp_iterate + 5]) };


							VIDEO_SCHEDULER::replayGazeCenterX90fps[9 * ((playback_frame) % VIDEO_DATA::nChunks) + temp_iterate] = read_position[0];
							VIDEO_SCHEDULER::replayGazeCenterY90fps[9 * ((playback_frame) % VIDEO_DATA::nChunks) + temp_iterate] = read_position[1];
							VIDEO_SCHEDULER::replayGazeCenterZ90fps[9 * ((playback_frame) % VIDEO_DATA::nChunks) + temp_iterate] = read_position[2];

							VIDEO_SCHEDULER::replayGazeDirX90fps[9 * ((playback_frame) % VIDEO_DATA::nChunks) + temp_iterate] = read_rotation[0];
							VIDEO_SCHEDULER::replayGazeDirY90fps[9 * ((playback_frame) % VIDEO_DATA::nChunks) + temp_iterate] = read_rotation[1];
							VIDEO_SCHEDULER::replayGazeDirZ90fps[9 * ((playback_frame) % VIDEO_DATA::nChunks) + temp_iterate] = read_rotation[2];

						}






						std::vector<float> angular_diff;
						float diffX = VIDEO_SCHEDULER::replayGazeDirX90fps[3 * ((playback_frame - 1) % VIDEO_DATA::nChunks) + 2] - VIDEO_SCHEDULER::replayGazeDirX90fps[3 * ((playback_frame - 1) % VIDEO_DATA::nChunks)];
						angular_diff.push_back(diffX);
						float diffY = VIDEO_SCHEDULER::replayGazeDirY90fps[3 * ((playback_frame - 1) % VIDEO_DATA::nChunks) + 2] - VIDEO_SCHEDULER::replayGazeDirY90fps[3 * ((playback_frame - 1) % VIDEO_DATA::nChunks)];
						angular_diff.push_back(diffY);


						// Calculate the total rotation speed as the magnitude of the difference vector
						float rotation_speed = std::sqrt(angular_diff[0] * angular_diff[0] + angular_diff[1] * angular_diff[1]) / (0.011f * 2);
						//UE_LOG(LogTemp, Warning, TEXT("rotation_speed %f"), rotation_speed);

						// Set the new position and rotation for the camera
						std::vector<float> temp_position = { FCString::Atof(*parsedCSV[playback_frame][2]), FCString::Atof(*parsedCSV[playback_frame][3]), FCString::Atof(*parsedCSV[playback_frame][4]) };
						std::vector<float> temp_rotation = { FCString::Atof(*parsedCSV[playback_frame][5]), FCString::Atof(*parsedCSV[playback_frame][6]), FCString::Atof(*parsedCSV[playback_frame][7]) };


						NewPosition = FVector(temp_position[0], temp_position[1], temp_position[2]); // Replace X, Y, and Z with desired values
						NewRotation = FRotator(temp_rotation[1], temp_rotation[0], 0.0f); //temp_rotation[2]); // Replace Pitch, Yaw, and Roll with desired values

						lck_gaze.unlock();
					}

					



					playback_frame += 1;
					head_id = current_frameid;
					
					VIDEO_SCHEDULER::OnNextFrame(head_id + 1);

					unique_lock<mutex> lck_renderer2(APointCloudRenderer::highResFrameQueueLock);
					//FScopeLock lck_renderer2(&APointCloudRenderer::highResFrameQueueLockCS);

					float* temp_pointBuf = highResPosFrameQueue.front();
					uint8_t* temp_colorBuf = highResColorFrameQueue.front();
					float* temp_sizeBuf = highResSizeFrameQueue.front();

					highResPosFrameQueue.pop();
					highResColorFrameQueue.pop();
					highResSizeFrameQueue.pop();
					VIDEO_COMM::msgRenderCond.notify_all();
					//VIDEO_COMM::msgRenderEvent->Trigger();
					lck_renderer2.unlock();
					//lck_renderer2.Unlock();


					int iindex = 0;
					for (int id = 0; id < 202500; id++) {
						float point1 = temp_pointBuf[3 * iindex + 0];
						float point2 = -temp_pointBuf[3 * iindex + 2];
						float point3 = temp_pointBuf[3 * iindex + 1];

						uint8_t color1 = temp_colorBuf[3 * iindex + 2];
						uint8_t color2 = temp_colorBuf[3 * iindex + 1];
						uint8_t color3 = temp_colorBuf[3 * iindex + 0];

						float size1 = temp_sizeBuf[iindex];


						positions[id * 4 + 0] = point1;//temp_pointBuf[3 * iindex + 0];
						positions[id * 4 + 1] = point2;//temp_pointBuf[3 * iindex + 2];
						positions[id * 4 + 2] = point3;//temp_pointBuf[3 * iindex + 1];
						positions[id * 4 + 3] = size1;

						//positions[id * 4 + 0] = scale * (positions[id * 4 + 0]);  // < x
						//positions[id * 4 + 1] = scale * (positions[id * 4 + 1]);  // < y
						//positions[id * 4 + 2] = scale * (positions[id * 4 + 2]);  // < z

						colors[id * 4 + 0] = color1;// temp_colorBuf[3 * iindex + 2];  // < b
						colors[id * 4 + 1] = color2;//temp_colorBuf[3 * iindex + 1]; // uint8_t(float(y) / textureHeight * 255); // < g
						colors[id * 4 + 2] = color3;//temp_colorBuf[3 * iindex + 0]; // uint8_t(float(x) / textureWidth * 255);								      // < r
						colors[id * 4 + 3] = 255;

						iindex++;
					}

					//delete temp_pointBuf;
					//delete temp_colorBuf;



					positionTexture->UpdateTextureRegions(0, 1, &region, textureWidth * 16, 16, (uint8*)positions);
					colorTexture->UpdateTextureRegions(0, 1, &region, textureWidth * 4, 4, (uint8*)colors);
					delete[] temp_pointBuf;
					delete[] temp_colorBuf;
					delete[] temp_sizeBuf;

					


					
				}
			}
			else {
				if (!isStalling && VIDEO_SCHEDULER::bStartup == 0) {
					stallBegin = (uint64_t)NDKGetTime();
					isStalling = true;

					FString message_fstring = FString::Printf(TEXT("Stall begins. Frame = %d"), current_frameid);
					std::string message = TCHAR_TO_UTF8(*message_fstring);
					{
						std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
						AloggerActor::log_queue.push(message);
					}

				}
			}
		}
		//FPlatformProcess::Sleep(0.01);
		UE_LOG(TEST, Warning, TEXT("Current timestamp rendering at end: %llu"), (uint64_t)NDKGetTime());

		{
			FString message_fstring = FString::Printf(TEXT("Current timestamp rendering at end: %llu"), (uint64_t)NDKGetTime());
			std::string message = TCHAR_TO_UTF8(*message_fstring);
			{
				std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
				AloggerActor::log_queue.push(message);
			}
			
		}

	}
}

// Called every frame
void APointCloudRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (true) {
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

		if (PLATFORM_WINDOWS) {
			APointCloudRenderer* NiagaraActor = this; // Get a reference to the current Niagara actor instance

			if (NiagaraActor)
			{
				// Set the player's view target to the custom Niagara actor
				PlayerController->SetViewTargetWithBlend(NiagaraActor);
				//unique_lock<mutex> lck_renderer(APointCloudRenderer::highResFrameQueueLock);
				NiagaraActor->CameraComponent->SetRelativeLocation(NewPosition);
				NiagaraActor->CameraComponent->SetRelativeRotation(NewRotation);
				//lck_renderer.unlock();
			}
		}







	}
	
}

