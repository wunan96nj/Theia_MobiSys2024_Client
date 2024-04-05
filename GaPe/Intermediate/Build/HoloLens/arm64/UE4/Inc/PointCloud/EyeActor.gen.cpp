// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/EyeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEyeActor() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_AEyeActor_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_AEyeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	void AEyeActor::StaticRegisterNativesAEyeActor()
	{
	}
	UClass* Z_Construct_UClass_AEyeActor_NoRegister()
	{
		return AEyeActor::StaticClass();
	}
	struct Z_Construct_UClass_AEyeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEyeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEyeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EyeActor.h" },
		{ "ModuleRelativePath", "EyeActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEyeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEyeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEyeActor_Statics::ClassParams = {
		&AEyeActor::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AEyeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEyeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEyeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEyeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEyeActor, 1556944525);
	template<> POINTCLOUD_API UClass* StaticClass<AEyeActor>()
	{
		return AEyeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEyeActor(Z_Construct_UClass_AEyeActor, &AEyeActor::StaticClass, TEXT("/Script/PointCloud"), TEXT("AEyeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEyeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
