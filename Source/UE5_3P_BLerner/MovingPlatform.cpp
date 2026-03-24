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
	
	//UE_LOG(LogTemp, Display, TEXT("MovingPlatform BeginPlay 1"));	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// Increase X position by 1 each frame
	FVector CurrentLocation = GetActorLocation(); 

	// Regarding X
	if(CurrentLocation.X > PosLimit1.X || CurrentLocation.X < PosLimit2.X)
	{
		dirMoveX *= -1; 
	}	

	// Regarding Y
	if(CurrentLocation.Y > PosLimit1.Y || CurrentLocation.Y < PosLimit2.Y)
	{
		dirMoveY *= -1; 
	}

	// Regarding Z
	if(CurrentLocation.Z > PosLimit1.Z || CurrentLocation.Z < PosLimit2.Z)
	{
		dirMoveZ *= -1; 
	}

	CurrentLocation += (FVector(VectorDirection.X * dirMoveX, VectorDirection.Y * dirMoveY, VectorDirection.Z * dirMoveZ) * movSpeed);

	SetActorLocation(CurrentLocation); 
}

