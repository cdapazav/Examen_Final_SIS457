// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMovimientoZigZag.h"
#include "Zombie.h"

// Sets default values
AEstrategiaMovimientoZigZag::AEstrategiaMovimientoZigZag()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaMovimientoZigZag::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaMovimientoZigZag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaMovimientoZigZag::moverseEstrategia(AZombie* _zombieActual, FVector _ubicacionDestino)
{

	//AZombie* zombie1 = _zombieActual;

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("mensaje dentro de moverseEstrategia zigzag"));

	//FVector LocationActual = zombie1->GetActorLocation();

	//// Genera un número al azar entre 1 y 2 (inclusive)
	//int32 NumeroAlAzar = FMath::RandRange(1, 2);

	//if (NumeroAlAzar == 1)
	//{
	//		LocationActual.Y -= zombie1->ZigzagSpeed * GetWorld()->DeltaTimeSeconds;
	//		LocationActual.X += zombie1->ZigzagSpeed * GetWorld()->DeltaTimeSeconds;

	//		zombie1->SetActorLocation(LocationActual);

	//		if (LocationActual.X == zombie1->LocationInicial.X + 150.0f)
	//		{
	//			zombie1->LocationInicial = LocationActual;

	//		}
	//}
	//if(NumeroAlAzar == 2)
	//{
	//		LocationActual.Y -= zombie1->ZigzagSpeed * GetWorld()->DeltaTimeSeconds;
	//		LocationActual.X -= zombie1->ZigzagSpeed * GetWorld()->DeltaTimeSeconds;

	//		zombie1->SetActorLocation(LocationActual);

	//		if (LocationActual.X == zombie1->LocationInicial.X - 150.0f)
	//		{
	//			zombie1->LocationInicial = LocationActual;

	//		}
	//}
	
	/*zombie1->SetActorLocation(LocationActual);

	if (LocationActual.X == zombie1->LocationInicial.X + 150.0f		||		LocationActual.X == zombie1->LocationInicial.X - 150.0f)
	{
		zombie1->LocationInicial = LocationActual;

	}*/



	//---------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------


	//AZombie* zombie1 = _zombieActual;

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("mensaje dentro de moverseEstrategia zigzag"));

	//FVector Location = zombie1->GetActorLocation();
	//Location.Y -= zombie1->ZigzagSpeed * GetWorld()->DeltaTimeSeconds;

	//// Avanza en zigzag alternando la dirección
	//Location.X += zombie1->ZigzagCounter * zombie1->ZigzagAmplitude * zombie1->ZigzagDirection;

	//zombie1->SetActorLocation(Location);

	//// Incrementa el contador
	//zombie1->ZigzagCounter+=GetWorld()->DeltaTimeSeconds;

	//// Cambia la dirección cuando alcanza los límites (ajusta según la velocidad de zigzag deseada)
	//if (zombie1->ZigzagCounter > 5 || zombie1->ZigzagCounter < -5)
	//{
	//	zombie1->ZigzagDirection *= -1;
	//}


	//---------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------
	//ESTE ES EL QUE FUNCIONA 

	AZombie* zombie1 = _zombieActual;
	
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("mensaje dentro de moverseEstrategia zigzag"));
	
	FVector Location = zombie1->GetActorLocation();

	Location.Y -= zombie1->ZigzagSpeed * GetWorld()->DeltaTimeSeconds;	/*GetWorld()->TimeSeconds;*/

	Location.X += FMath::Sin(zombie1->CurrentTime) * zombie1->ZigzagAmplitude;	/*1.150f;*/

	zombie1->SetActorLocation(Location);
	
	zombie1->CurrentTime += GetWorld()->DeltaTimeSeconds;	/*GetWorld()->TimeSeconds;*/


	//---------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------


	//// Variables miembro del zombie (_ubicacionDestino y _zombieActual)	

	//// Lógica para zigzag
	//float DeltaMove = _zombieActual->MovementSpeed * GetWorld()->DeltaTimeSeconds;

	//// Define la distancia que el zombie se moverá en cada eje en el zigzag
	//float ZigzagDistance = 100.0f;

	//// Calcula la dirección normalizada hacia el destino
	//FVector Direction = (_ubicacionDestino - _zombieActual->GetActorLocation()).GetSafeNormal();

	//// Calcula el desplazamiento en este frame
	//FVector ZigzagMove = FVector(DeltaMove, DeltaMove, 0.0f);  // Mueve en ambas direcciones

	//// Alterna la dirección en cada frame para crear el zigzag
	//Direction *= FMath::Sign(FMath::Sin(GetWorld()->GetTimeSeconds()));

	//// Mueve el zombie en la dirección calculada
	//_zombieActual->AddActorWorldOffset(Direction * ZigzagMove);

	//---------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------
	/*GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Dentro de moverseEstrategia zigzag"));

	_ubicacionDestino = GetActorLocation();*/
	//TimeElapsed = 0.f;

	 //Aquí es donde puedes implementar el movimiento en zigzag
	//_TimeElapsed += DeltaTime;

	 //Parámetros del zigzag
	//float Amplitude = 100.f;  // Ajusta según sea necesario
	//float Frequency = 0.5f;   // Ajusta según sea necesario

	//// Calcula la nueva posición en zigzag
	//float NewX = _ubicacionDestino.X + Amplitude * FMath::Sin(Frequency * GetWorld()->DeltaTimeSeconds);
	//float NewY = _ubicacionDestino.Y;
	//float NewZ = _ubicacionDestino.Z;

	//SetActorLocation(FVector(NewX, NewY, NewZ));

	//---------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------
	
	////UE_LOG(LogTemp, Warning, TEXT("Dentro de MoverseZigZag"));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Dentro de MoverseZigZag"));

	//	
	//FVector Direction = _ubicacionDestino - FVector(-800.0f, 400.0f, 160.0f);
	//float DistanceToTarget = FVector::Dist(_ubicacionDestino, FVector(-800.0f, 400.0f, 160.0f));

	//// Calcula el desplazamiento en este frame
	//float DeltaMove = _zombieActual->MovementSpeed * GetWorld()->DeltaTimeSeconds;

	//if (DeltaMove > DistanceToTarget)
	//{
	//	// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
	//	_zombieActual->SetActorLocation(_ubicacionDestino);

	//}
	//else
	//{
	//	// Mueve el objeto en la direcci�n calculada
	//	_zombieActual->AddActorWorldOffset(Direction * DeltaMove);
	//}

	//---------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------
	
}

//void AEstrategiaMovimientoZigZag::PrecesarDeltaTimer(float DeltaTime)
//{
//	
//}

