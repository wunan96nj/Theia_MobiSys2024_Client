// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagara_SizeScaleMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagara_SizeScaleMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagara_SizeScaleMode__pf();
// End Cross Module References
	static UEnum* E__ENiagara_SizeScaleMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_SizeScaleMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagara_SizeScaleMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagara_SizeScaleMode__pf, EnumPackage, TEXT("ENiagara_SizeScaleMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagara_SizeScaleMode__pf>()
	{
		return E__ENiagara_SizeScaleMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagara_SizeScaleMode__pf(E__ENiagara_SizeScaleMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagara_SizeScaleMode"), TEXT("ENiagara_SizeScaleMode"), true, TEXT("/Niagara/Enums/ENiagara_SizeScaleMode"), TEXT("/Niagara/Enums/ENiagara_SizeScaleMode.ENiagara_SizeScaleMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagara_SizeScaleMode__pf_Hash() { return 1038388315U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagara_SizeScaleMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_SizeScaleMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagara_SizeScaleMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagara_SizeScaleMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagara_SizeScaleMode::NewEnumerator0", (int64)E__ENiagara_SizeScaleMode__pf::NewEnumerator0 },
				{ "ENiagara_SizeScaleMode::NewEnumerator3", (int64)E__ENiagara_SizeScaleMode__pf::NewEnumerator3 },
				{ "ENiagara_SizeScaleMode::NewEnumerator1", (int64)E__ENiagara_SizeScaleMode__pf::NewEnumerator1 },
				{ "ENiagara_SizeScaleMode::NewEnumerator4", (int64)E__ENiagara_SizeScaleMode__pf::NewEnumerator4 },
				{ "ENiagara_SizeScaleMode::NewEnumerator2", (int64)E__ENiagara_SizeScaleMode__pf::NewEnumerator2 },
				{ "ENiagara_SizeScaleMode::ENiagara_MAX", (int64)E__ENiagara_SizeScaleMode__pf::E__ENiagara_SizeScaleMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagara_SizeScaleMode__pf_MAX.Name", "E__ENiagara_SizeScaleMode__pf::E__ENiagara_SizeScaleMode__pf_MAX" },
				{ "E__ENiagara_SizeScaleMode__pf_MAX.OverrideName", "ENiagara_SizeScaleMode::ENiagara_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagara_SizeScaleMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagara_SizeScaleMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagara_SizeScaleMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagara_SizeScaleMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagara_SizeScaleMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagara_SizeScaleMode::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagara_SizeScaleMode__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagara_SizeScaleMode::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__ENiagara_SizeScaleMode__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "ENiagara_SizeScaleMode::NewEnumerator3" },
				{ "NewEnumerator4.Name", "E__ENiagara_SizeScaleMode__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "ENiagara_SizeScaleMode::NewEnumerator4" },
				{ "OverrideNativeName", "ENiagara_SizeScaleMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagara_SizeScaleMode.ENiagara_SizeScaleMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_SizeScaleMode")); },
				E__ENiagara_SizeScaleMode__pf__GetUserFriendlyName,
				"ENiagara_SizeScaleMode",
				"E__ENiagara_SizeScaleMode__pf",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::Dynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
