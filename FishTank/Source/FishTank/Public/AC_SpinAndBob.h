// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_SpinAndBob.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FISHTANK_API UAC_SpinAndBob : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_SpinAndBob();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FRotator Spin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FVector Bob;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float BobSpeedMultiplier;

private:
	FVector startLocation;
};
