// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagara_PositionInitializationMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagara_PositionInitializationMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagara_PositionInitializationMode__pf();
// End Cross Module References
	static UEnum* E__ENiagara_PositionInitializationMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_PositionInitializationMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagara_PositionInitializationMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagara_PositionInitializationMode__pf, EnumPackage, TEXT("ENiagara_PositionInitializationMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagara_PositionInitializationMode__pf>()
	{
		return E__ENiagara_PositionInitializationMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagara_PositionInitializationMode__pf(E__ENiagara_PositionInitializationMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagara_PositionInitializationMode"), TEXT("ENiagara_PositionInitializationMode"), true, TEXT("/Niagara/Enums/ENiagara_PositionInitializationMode"), TEXT("/Niagara/Enums/ENiagara_PositionInitializationMode.ENiagara_PositionInitializationMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagara_PositionInitializationMode__pf_Hash() { return 679104009U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagara_PositionInitializationMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_PositionInitializationMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagara_PositionInitializationMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagara_PositionInitializationMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagara_PositionInitializationMode::NewEnumerator0", (int64)E__ENiagara_PositionInitializationMode__pf::NewEnumerator0 },
				{ "ENiagara_PositionInitializationMode::NewEnumerator1", (int64)E__ENiagara_PositionInitializationMode__pf::NewEnumerator1 },
				{ "ENiagara_PositionInitializationMode::NewEnumerator2", (int64)E__ENiagara_PositionInitializationMode__pf::NewEnumerator2 },
				{ "ENiagara_PositionInitializationMode::ENiagara_MAX", (int64)E__ENiagara_PositionInitializationMode__pf::E__ENiagara_PositionInitializationMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagara_PositionInitializationMode__pf_MAX.Name", "E__ENiagara_PositionInitializationMode__pf::E__ENiagara_PositionInitializationMode__pf_MAX" },
				{ "E__ENiagara_PositionInitializationMode__pf_MAX.OverrideName", "ENiagara_PositionInitializationMode::ENiagara_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagara_PositionInitializationMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagara_PositionInitializationMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagara_PositionInitializationMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagara_PositionInitializationMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagara_PositionInitializationMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagara_PositionInitializationMode::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagara_PositionInitializationMode__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagara_PositionInitializationMode::NewEnumerator2" },
				{ "OverrideNativeName", "ENiagara_PositionInitializationMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagara_PositionInitializationMode.ENiagara_PositionInitializationMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_PositionInitializationMode")); },
				E__ENiagara_PositionInitializationMode__pf__GetUserFriendlyName,
				"ENiagara_PositionInitializationMode",
				"E__ENiagara_PositionInitializationMode__pf",
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
