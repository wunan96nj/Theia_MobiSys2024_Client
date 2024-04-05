// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Capture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapture() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_ACapture_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_ACapture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	void ACapture::StaticRegisterNativesACapture()
	{
	}
	UClass* Z_Construct_UClass_ACapture_NoRegister()
	{
		return ACapture::StaticClass();
	}
	struct Z_Construct_UClass_ACapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Capture.h" },
		{ "ModuleRelativePath", "Capture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapture_Statics::NewProp_CaptureInterval_MetaData[] = {
		{ "Category", "Frame Capture" },
		{ "Comment", "// The interval between captures (in seconds)\n" },
		{ "ModuleRelativePath", "Capture.h" },
		{ "ToolTip", "The interval between captures (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapture_Statics::NewProp_CaptureInterval = { "CaptureInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapture, CaptureInterval), METADATA_PARAMS(Z_Construct_UClass_ACapture_Statics::NewProp_CaptureInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapture_Statics::NewProp_CaptureInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapture_Statics::NewProp_CaptureInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapture_Statics::ClassParams = {
		&ACapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapture, 563332886);
	template<> POINTCLOUD_API UClass* StaticClass<ACapture>()
	{
		return ACapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapture(Z_Construct_UClass_ACapture, &ACapture::StaticClass, TEXT("/Script/PointCloud"), TEXT("ACapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
