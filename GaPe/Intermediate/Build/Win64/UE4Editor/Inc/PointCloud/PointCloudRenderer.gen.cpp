// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/PointCloudRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudRenderer() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_APointCloudRenderer_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_APointCloudRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APointCloudRenderer::StaticRegisterNativesAPointCloudRenderer()
	{
	}
	UClass* Z_Construct_UClass_APointCloudRenderer_NoRegister()
	{
		return APointCloudRenderer::StaticClass();
	}
	struct Z_Construct_UClass_APointCloudRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointCloudRenderer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pointCloudRenderer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointCloudRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloudRenderer.h" },
		{ "ModuleRelativePath", "PointCloudRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_pointCloudRenderer_MetaData[] = {
		{ "Category", "FX" },
		{ "Comment", "// The niagara system which should be used for rendering:\n" },
		{ "ModuleRelativePath", "PointCloudRenderer.h" },
		{ "ToolTip", "The niagara system which should be used for rendering:" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_pointCloudRenderer = { "pointCloudRenderer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudRenderer, pointCloudRenderer), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_pointCloudRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_pointCloudRenderer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PointCloudRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudRenderer, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointCloudRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_pointCloudRenderer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudRenderer_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointCloudRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointCloudRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APointCloudRenderer_Statics::ClassParams = {
		&APointCloudRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointCloudRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudRenderer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointCloudRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointCloudRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APointCloudRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APointCloudRenderer, 3864270331);
	template<> POINTCLOUD_API UClass* StaticClass<APointCloudRenderer>()
	{
		return APointCloudRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APointCloudRenderer(Z_Construct_UClass_APointCloudRenderer, &APointCloudRenderer::StaticClass, TEXT("/Script/PointCloud"), TEXT("APointCloudRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointCloudRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
