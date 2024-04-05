// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_LoaderButton__pf1183508669.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_LoaderButton__pf1183508669() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor();
// End Cross Module References
	void ABP_LoaderButton_C__pf1183508669::StaticRegisterNativesABP_LoaderButton_C__pf1183508669()
	{
	}
	UClass* Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_NoRegister()
	{
		return ABP_LoaderButton_C__pf1183508669::StaticClass();
	}
	struct Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LevelName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__LevelName__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableButtonActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_LoaderButton__pf1183508669.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_LoaderButton__pf1183508669.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_LoaderButton_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Loader/Blueprints/BP_LoaderButton.BP_LoaderButton_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::NewProp_bpv__LevelName__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Level Name" },
		{ "ModuleRelativePath", "Public/BP_LoaderButton__pf1183508669.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LevelName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::NewProp_bpv__LevelName__pf = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_LoaderButton_C__pf1183508669, bpv__LevelName__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::NewProp_bpv__LevelName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::NewProp_bpv__LevelName__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::NewProp_bpv__LevelName__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_LoaderButton_C__pf1183508669>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::ClassParams = {
		&ABP_LoaderButton_C__pf1183508669::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Loader/Blueprints/BP_LoaderButton"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_LoaderButton_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_LoaderButton_C__pf1183508669, TEXT("BP_LoaderButton_C"), 1817180334);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_LoaderButton_C__pf1183508669>()
	{
		return ABP_LoaderButton_C__pf1183508669::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_LoaderButton_C__pf1183508669(Z_Construct_UClass_ABP_LoaderButton_C__pf1183508669, &ABP_LoaderButton_C__pf1183508669::StaticClass, TEXT("/UXToolsExamples/Loader/Blueprints/BP_LoaderButton"), TEXT("BP_LoaderButton_C"), true, TEXT("/UXToolsExamples/Loader/Blueprints/BP_LoaderButton"), TEXT("/UXToolsExamples/Loader/Blueprints/BP_LoaderButton.BP_LoaderButton_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_LoaderButton_C__pf1183508669);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
