// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectGenerator.h"

// Sets default values
AObjectGenerator::AObjectGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObjectGenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjectGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

