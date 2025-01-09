// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::step(int32& i, int32& l)
{
	x += FMath::RandRange(0, 1);
	y += FMath::RandRange(0, 1);
}

void AMyActor::move()
{
	step(x, y);
	UE_LOG(LogTemp, Warning, TEXT("Position: (%d, %d)"), x, y);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello, World!"));

	for (int i = 0; i < 10; i++)
	{
		move();
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

