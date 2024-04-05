// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/W_CrustTooltip__pf1366576559.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_CrustTooltip__pf1366576559() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void UW_CrustTooltip_C__pf1366576559::StaticRegisterNativesUW_CrustTooltip_C__pf1366576559()
	{
	}
	UClass* Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_NoRegister()
	{
		return UW_CrustTooltip_C__pf1366576559::StaticClass();
	}
	struct Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "W_CrustTooltip__pf1366576559.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/W_CrustTooltip__pf1366576559.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "W_CrustTooltip_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Tooltip/Widgets/W_CrustTooltip.W_CrustTooltip_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_CrustTooltip_C__pf1366576559>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics::ClassParams = {
		&UW_CrustTooltip_C__pf1366576559::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Tooltip/Widgets/W_CrustTooltip"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("W_CrustTooltip_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UW_CrustTooltip_C__pf1366576559, TEXT("W_CrustTooltip_C"), 3672675134);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UW_CrustTooltip_C__pf1366576559>()
	{
		return UW_CrustTooltip_C__pf1366576559::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_CrustTooltip_C__pf1366576559(Z_Construct_UClass_UW_CrustTooltip_C__pf1366576559, &UW_CrustTooltip_C__pf1366576559::StaticClass, TEXT("/UXToolsExamples/Tooltip/Widgets/W_CrustTooltip"), TEXT("W_CrustTooltip_C"), true, TEXT("/UXToolsExamples/Tooltip/Widgets/W_CrustTooltip"), TEXT("/UXToolsExamples/Tooltip/Widgets/W_CrustTooltip.W_CrustTooltip_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_CrustTooltip_C__pf1366576559);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
