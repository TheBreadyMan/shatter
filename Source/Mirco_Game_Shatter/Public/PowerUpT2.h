// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUpT2.generated.h"

class UStaticMeshComponent;
class URotatingMovementComponent;
class USphereComponent;
class UNiagaraSystem;
class USoundBase;

UCLASS()
class MIRCO_GAME_SHATTER_API APowerUpT2 : public AActor
{

	GENERATED_BODY()



public:
	// Sets default values for this actor's properties
	APowerUpT2();

	UFUNCTION()
	void OnBeginOverlapComponentEvent(
		UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult
	);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Coin Pickup Tutorial")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Coin Pickup Tutorial")
	TObjectPtr<URotatingMovementComponent> RotatingMovementComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Coin Pickup Tutorial")
	TObjectPtr<USphereComponent> ColliderComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Coin Pickup Tutorial")
	TObjectPtr<UNiagaraSystem> OnPickupEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Coin Pickup Tutorial")
	TObjectPtr<USoundBase> PickSound;

	UPROPERTY(EditDefaultsOnly, Category = "Coin Pickup Tutorial")
	float VolumeMultiplier{ 0.5 };

	UPROPERTY(EditDefaultsOnly, Category = "Coin Pickup Tutorial")
	float PickEffectSpawnOffset{ 90 };

};
