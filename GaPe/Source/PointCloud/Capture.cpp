// Fill out your copyright notice in the Description page of Project Settings.


#include "Capture.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
// Sets default values
ACapture::ACapture()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CaptureInterval = 3.0f;

}

// Called when the game starts or when spawned
void ACapture::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ACapture::CaptureFrame, CaptureInterval, true);

}

// Function called to capture a frame
void ACapture::CaptureFrame()
{
	// Execute the HighResShot console command
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->ConsoleCommand("HighResShot 1280x720");

	// Set a timer to call the CaptureFrame function again at the specified interval
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->ConsoleCommand("HighResShot 1280x720");
}

// Called every frame
void ACapture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

