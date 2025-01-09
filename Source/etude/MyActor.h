// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class ETUDE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	int32 x = 0;
	int32 y = 0;

	void step(int32& i, int32& l);


	void move(); // 언리얼에서 처음 테스트할땐 제대로 나오지만 2번 3번 실행할땐 이전 값부터 시작이 됨


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
