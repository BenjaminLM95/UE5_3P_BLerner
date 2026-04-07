// Fill out your copyright notice in the Description page of Project Settings.


#include "MySpecialPlatform.h"

// Sets default values
AMySpecialPlatform::AMySpecialPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMySpecialPlatform::BeginPlay()
{
	Super::BeginPlay();

	DisableMovement(); 
	
}

void AMySpecialPlatform::EnableMovement()
{
	currentSpeed = movSpeed; 	
}

void AMySpecialPlatform::DisableMovement()
{
	currentSpeed = 0; 
}

// Called every frame
void AMySpecialPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	// Regarding X
	if (CurrentLocation.X > PosLimit1.X || CurrentLocation.X < PosLimit2.X)
	{
		dirMoveX *= -1;
	}

	// Regarding Y
	if (CurrentLocation.Y > PosLimit1.Y || CurrentLocation.Y < PosLimit2.Y)
	{
		dirMoveY *= -1;
	}

	// Regarding Z
	if (CurrentLocation.Z > PosLimit1.Z || CurrentLocation.Z < PosLimit2.Z)
	{
		dirMoveZ *= -1;
	}

	CurrentLocation += (FVector(VectorDirection.X * dirMoveX, VectorDirection.Y * dirMoveY, VectorDirection.Z * dirMoveZ) * currentSpeed);

	SetActorLocation(CurrentLocation);

}

