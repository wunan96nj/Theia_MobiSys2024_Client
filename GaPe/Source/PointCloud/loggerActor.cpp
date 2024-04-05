#include "loggerActor.h"
#include <fstream>
#include <thread>

std::mutex AloggerActor::log_queue_mutex;
std::queue<std::string> AloggerActor::log_queue;
// Sets default values
AloggerActor::AloggerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}





void AloggerActor::write_log_thread()
{
	std::ofstream ofstream_unreal_log(std::string(TCHAR_TO_UTF8(*file_log)), std::ios_base::app);
	while (true) {
		std::string temp_write;

		{
			std::unique_lock<std::mutex> lock(AloggerActor::log_queue_mutex);
			if (!log_queue.empty()) {
				temp_write = log_queue.front();
				log_queue.pop();
			}
		}

		if (!temp_write.empty()) {
			ofstream_unreal_log << temp_write << std::endl;
			ofstream_unreal_log.flush();
		}
		else {
			FPlatformProcess::Sleep(0.0001f);
		}
		//if (!log_queue.empty()) {
		//	std::string temp_write = log_queue.front();
		//	log_queue.pop();

		//	ofstream_unreal_log << temp_write << std::endl;
		//	ofstream_unreal_log.flush();
		//}
		//else {
		//	FPlatformProcess::Sleep(0.001f);
		//}

	}
}

// Called when the game starts or when spawned
void AloggerActor::BeginPlay()
{
	Super::BeginPlay();
	FDateTime Now = FDateTime::Now();
	FString DateString = Now.ToString(TEXT("%Y-%m-%d_%H-%M-%S"));
	file_log.Append(FString::Printf(TEXT("log_%s.txt"), *DateString));

	std::thread eye_thread(&AloggerActor::write_log_thread, this);
	eye_thread.detach();

}

// Called every frame
void AloggerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

