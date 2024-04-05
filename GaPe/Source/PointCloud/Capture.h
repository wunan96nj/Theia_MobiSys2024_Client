// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capture.generated.h"

UCLASS()
class POINTCLOUD_API ACapture : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapture();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// The interval between captures (in seconds)
	UPROPERTY(EditAnywhere, Category = "Frame Capture")
	float CaptureInterval;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CaptureFrame();
	FTimerHandle TimerHandle;


};
