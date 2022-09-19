// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
<<<<<<< HEAD
class USpringArmComponent;
class USInteractionComponent;
class UAnimMontage;
=======
class USpringArmComponent; 

>>>>>>> parent of 15d2770 (Updated to lesson 12)

UCLASS()
class ACTIONROGUE_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

<<<<<<< HEAD
protected:
	//MagicProjectile
	UPROPERTY(EditAnywhere, Category = "Attack")
		TSubclassOf<AActor> ProjectileClass;

	//attack animation
	UPROPERTY(EditAnywhere, Category = "Attack")
		UAnimMontage* PrimaryAttackAnim;

	//Timer for controlling delay
	FTimerHandle PrimaryAttack_TimeHandle;


=======
>>>>>>> parent of 15d2770 (Updated to lesson 12)
public:
	// Sets default values for this character's properties
	ASCharacter();

protected:
	// First two components
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//moving function
	void MoveForward(float Value);

<<<<<<< HEAD
	void MoveRight(float Value);

	void Dash();

	//AttackAction
	void PrimaryAttack();

	//AttackSpawn
	void PrimaryAttackSpawn();

	//Interaction
	void PrimaryInteract();

=======
>>>>>>> parent of 15d2770 (Updated to lesson 12)
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
