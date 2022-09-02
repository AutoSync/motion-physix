// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionPhysix/Public/MotionPhysixVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionPhysixVehicle() {}
// Cross Module References
	MOTIONPHYSIX_API UClass* Z_Construct_UClass_AMotionPhysixVehicle_NoRegister();
	MOTIONPHYSIX_API UClass* Z_Construct_UClass_AMotionPhysixVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MotionPhysix();
// End Cross Module References
	void AMotionPhysixVehicle::StaticRegisterNativesAMotionPhysixVehicle()
	{
	}
	UClass* Z_Construct_UClass_AMotionPhysixVehicle_NoRegister()
	{
		return AMotionPhysixVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMotionPhysixVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionPhysixVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPhysix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionPhysixVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MotionPhysixVehicle.h" },
		{ "ModuleRelativePath", "Public/MotionPhysixVehicle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionPhysixVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionPhysixVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionPhysixVehicle_Statics::ClassParams = {
		&AMotionPhysixVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotionPhysixVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionPhysixVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionPhysixVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionPhysixVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotionPhysixVehicle, 2150542039);
	template<> MOTIONPHYSIX_API UClass* StaticClass<AMotionPhysixVehicle>()
	{
		return AMotionPhysixVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionPhysixVehicle(Z_Construct_UClass_AMotionPhysixVehicle, &AMotionPhysixVehicle::StaticClass, TEXT("/Script/MotionPhysix"), TEXT("AMotionPhysixVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionPhysixVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
