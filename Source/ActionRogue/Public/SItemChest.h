// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGamePlayInterface.h"

//generated h.file should always be the last included
#include "SItemChest.generated.h"


class UStaticMeshComponent;

UCLASS()
class ACTIONROGUE_API ASItemChest : public AActor, public ISGamePlayInterface
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	ASItemChest();

	//The rotation angle when opened
	UPROPERTY(EditAnywhere)
		float PitchAngle;

	void Interact_Implementation(APawn* InstigatorPawn);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* LidMesh;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
