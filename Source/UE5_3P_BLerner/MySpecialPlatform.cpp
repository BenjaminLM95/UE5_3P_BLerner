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
	
}

// Called every frame
void AMySpecialPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

