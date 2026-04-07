// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySpecialPlatform.generated.h"

UCLASS()
class UE5_3P_BLERNER_API AMySpecialPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMySpecialPlatform();

	UFUNCTION(BlueprintCallable, Category="Movement")
	void EnableMovement();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void DisableMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float movSpeed = 0;

	float currentSpeed = 0; 

	UPROPERTY(EditAnywhere)
	FVector VectorDirection = FVector(1, 1, 1);

	UPROPERTY(EditAnywhere)
	FVector PosLimit1 = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere)
	FVector PosLimit2 = FVector(0, 0, 0);


	int dirMoveX = 1;
	int dirMoveY = 1;
	int dirMoveZ = 1;


};
