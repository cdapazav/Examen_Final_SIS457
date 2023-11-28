// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/EstrategiaMovimientoZigZag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMovimientoZigZag() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategiaMovimientoZigZag_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategiaMovimientoZigZag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategiaMovimiento_NoRegister();
// End Cross Module References
	void AEstrategiaMovimientoZigZag::StaticRegisterNativesAEstrategiaMovimientoZigZag()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaMovimientoZigZag_NoRegister()
	{
		return AEstrategiaMovimientoZigZag::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaMovimientoZigZag.h" },
		{ "ModuleRelativePath", "EstrategiaMovimientoZigZag.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiaMovimiento_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaMovimientoZigZag, IEstrategiaMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaMovimientoZigZag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::ClassParams = {
		&AEstrategiaMovimientoZigZag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaMovimientoZigZag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaMovimientoZigZag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaMovimientoZigZag, 3472514778);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AEstrategiaMovimientoZigZag>()
	{
		return AEstrategiaMovimientoZigZag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaMovimientoZigZag(Z_Construct_UClass_AEstrategiaMovimientoZigZag, &AEstrategiaMovimientoZigZag::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AEstrategiaMovimientoZigZag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaMovimientoZigZag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
