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


	void move(); // �𸮾󿡼� ó�� �׽�Ʈ�Ҷ� ����� �������� 2�� 3�� �����Ҷ� ���� ������ ������ ��


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
