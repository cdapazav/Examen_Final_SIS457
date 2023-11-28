// Fill out your copyright notice in the Description page of Project Settings.


#include "PublicadorZombie.h"
#include "Zombie.h"
//#include "Kismet/GameplayStatics.h"


APublicadorZombie::APublicadorZombie()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APublicadorZombie::BeginPlay()
{
	Super::BeginPlay();
}

void APublicadorZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APublicadorZombie::DetectarZombies()
{
	
	TArray<AActor*> ArraySuscriptoresLocal = GetArraySuscriptores();
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), AZombie::StaticClass(), ArraySuscriptores);
	
	for (AActor* Zombie : ArraySuscriptoresLocal)
	{
		AZombie* ZombieCast = Cast<AZombie>(Zombie);
		if (ZombieCast)
		{
			FVector ZombieLocation = ZombieCast->GetActorLocation();

			// Define un rango en el eje Y para la detección
			float Rango1 = -1500.0f;
			float Rango2 = -1350.0f;
			float Rango3 = -1200.0f;
			float Rango4 = -1050.0f;
			float Rango5 = -900.0f;

			//if (ZombieLocation.X == RangoMiniRango1moY && ZombieLocation.Y <= RangoMaximoY)
			//{
			//	// El zombie está dentro del rango en el eje Y
			//	// Realiza la lógica necesaria aquí
			//}
		}
	}
}
