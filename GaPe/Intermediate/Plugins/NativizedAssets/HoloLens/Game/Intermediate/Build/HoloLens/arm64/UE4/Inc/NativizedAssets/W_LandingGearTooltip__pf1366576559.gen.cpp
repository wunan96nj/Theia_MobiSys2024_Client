// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/W_LandingGearTooltip__pf1366576559.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_LandingGearTooltip__pf1366576559() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void UW_LandingGearTooltip_C__pf1366576559::StaticRegisterNativesUW_LandingGearTooltip_C__pf1366576559()
	{
	}
	UClass* Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_NoRegister()
	{
		return UW_LandingGearTooltip_C__pf1366576559::StaticClass();
	}
	struct Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "W_LandingGearTooltip__pf1366576559.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/W_LandingGearTooltip__pf1366576559.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "W_LandingGearTooltip_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Tooltip/Widgets/W_LandingGearTooltip.W_LandingGearTooltip_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_LandingGearTooltip_C__pf1366576559>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics::ClassParams = {
		&UW_LandingGearTooltip_C__pf1366576559::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Tooltip/Widgets/W_LandingGearTooltip"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("W_LandingGearTooltip_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UW_LandingGearTooltip_C__pf1366576559, TEXT("W_LandingGearTooltip_C"), 1567804820);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UW_LandingGearTooltip_C__pf1366576559>()
	{
		return UW_LandingGearTooltip_C__pf1366576559::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_LandingGearTooltip_C__pf1366576559(Z_Construct_UClass_UW_LandingGearTooltip_C__pf1366576559, &UW_LandingGearTooltip_C__pf1366576559::StaticClass, TEXT("/UXToolsExamples/Tooltip/Widgets/W_LandingGearTooltip"), TEXT("W_LandingGearTooltip_C"), true, TEXT("/UXToolsExamples/Tooltip/Widgets/W_LandingGearTooltip"), TEXT("/UXToolsExamples/Tooltip/Widgets/W_LandingGearTooltip.W_LandingGearTooltip_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_LandingGearTooltip_C__pf1366576559);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
