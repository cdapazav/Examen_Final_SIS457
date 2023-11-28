// Fill out your copyright notice in the Description page of Project Settings.


#include "Lanzaguisantes.h"

ALanzaguisantes::ALanzaguisantes()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	PlantMeshComponent->SetRelativeScale3D(FVector(0.7f, 0.7f, 0.7f));

	Tags.Add(TEXT("Lanzaguisantes"));
}
