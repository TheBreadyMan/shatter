
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUp.generated.h"

class UStaticMeshComponent;
class URotatingMovementComponent;
class USphereComponent;
class UNiagaraSystem;
class USoundBase;

UCLASS()
class MIRCO_GAME_SHATTER_API APowerUp : public AActor
{

	GENERATED_BODY()



public:
	// Sets default values for this actor's properties
	APowerUp();

	UFUNCTION()
	void OnBeginOverlapComponentEvent(
		UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult
	);

protected:
	UPROPERTY(EditDefaultsOnly, Category = " Pickup Tutorial")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = " Pickup Tutorial")
	TObjectPtr<URotatingMovementComponent> RotatingMovementComponent;

	UPROPERTY(EditDefaultsOnly, Category = " Pickup Tutorial")
	TObjectPtr<USphereComponent> ColliderComponent;

	UPROPERTY(EditDefaultsOnly, Category = " Pickup Tutorial")
	TObjectPtr<UNiagaraSystem> OnPickupEffect;

	UPROPERTY(EditDefaultsOnly, Category = " Pickup Tutorial")
	TObjectPtr<USoundBase> PickSound;

	UPROPERTY(EditDefaultsOnly, Category = " Pickup Tutorial")
	float VolumeMultiplier{ 0.5 };

	UPROPERTY(EditDefaultsOnly, Category = " Pickup Tutorial")
	float PickEffectSpawnOffset{ 90 };

};

