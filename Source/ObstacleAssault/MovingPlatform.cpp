// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
    UE_LOG(LogTemp, Display, TEXT("Hello World, again"));
    
    bool MyBool = true;
    FString myString = "My String";
    UE_LOG(LogTemp, Display, TEXT("The string: %s"), *myString) //need to give it an astrisk
    

    
	
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
    FVector CurrentLocation = GetActorLocation();
    CurrentLocation += (PlatformVelocity * DeltaTime);
    
    SetActorLocation(CurrentLocation);
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
    //rotate the potate
//    FVector CurrentLocation = GetActorLocation();
//    CurrentLocation += (PlatformVelocity * DeltaTime);
//    
//    SetActorLocation(CurrentLocation);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    MovePlatform(DeltaTime);
    RotatePlatform(DeltaTime);

}

