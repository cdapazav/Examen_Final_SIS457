// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaMovimiento.h"
#include "EstrategiaMovimientoZigZag.generated.h"

class AZombie;

UCLASS()
class PVZ_USFX_LAB02_API AEstrategiaMovimientoZigZag : public AActor, public IEstrategiaMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaMovimientoZigZag();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void moverseEstrategia(AZombie* _zombieActual, FVector _ubicacionDestino) override;

};
