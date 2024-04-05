#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include <queue>
#include <string>
#include <mutex>
#include "loggerActor.generated.h"

UCLASS()
class POINTCLOUD_API AloggerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AloggerActor();

	FString file_log = FPaths::FPaths::ProjectSavedDir();
	static std::queue<std::string> log_queue;
	static std::mutex log_queue_mutex;
	void write_log_thread();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
