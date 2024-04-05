// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagara_MassInitializationMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagara_MassInitializationMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagara_MassInitializationMode__pf();
// End Cross Module References
	static UEnum* E__ENiagara_MassInitializationMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_MassInitializationMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagara_MassInitializationMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagara_MassInitializationMode__pf, EnumPackage, TEXT("ENiagara_MassInitializationMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagara_MassInitializationMode__pf>()
	{
		return E__ENiagara_MassInitializationMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagara_MassInitializationMode__pf(E__ENiagara_MassInitializationMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagara_MassInitializationMode"), TEXT("ENiagara_MassInitializationMode"), true, TEXT("/Niagara/Enums/ENiagara_MassInitializationMode"), TEXT("/Niagara/Enums/ENiagara_MassInitializationMode.ENiagara_MassInitializationMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagara_MassInitializationMode__pf_Hash() { return 1147237855U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagara_MassInitializationMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_MassInitializationMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagara_MassInitializationMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagara_MassInitializationMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagara_MassInitializationMode::NewEnumerator0", (int64)E__ENiagara_MassInitializationMode__pf::NewEnumerator0 },
				{ "ENiagara_MassInitializationMode::NewEnumerator1", (int64)E__ENiagara_MassInitializationMode__pf::NewEnumerator1 },
				{ "ENiagara_MassInitializationMode::NewEnumerator3", (int64)E__ENiagara_MassInitializationMode__pf::NewEnumerator3 },
				{ "ENiagara_MassInitializationMode::ENiagara_MAX", (int64)E__ENiagara_MassInitializationMode__pf::E__ENiagara_MassInitializationMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagara_MassInitializationMode__pf_MAX.Name", "E__ENiagara_MassInitializationMode__pf::E__ENiagara_MassInitializationMode__pf_MAX" },
				{ "E__ENiagara_MassInitializationMode__pf_MAX.OverrideName", "ENiagara_MassInitializationMode::ENiagara_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagara_MassInitializationMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagara_MassInitializationMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagara_MassInitializationMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagara_MassInitializationMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagara_MassInitializationMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagara_MassInitializationMode::NewEnumerator1" },
				{ "NewEnumerator3.Name", "E__ENiagara_MassInitializationMode__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "ENiagara_MassInitializationMode::NewEnumerator3" },
				{ "OverrideNativeName", "ENiagara_MassInitializationMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagara_MassInitializationMode.ENiagara_MassInitializationMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagara_MassInitializationMode")); },
				E__ENiagara_MassInitializationMode__pf__GetUserFriendlyName,
				"ENiagara_MassInitializationMode",
				"E__ENiagara_MassInitializationMode__pf",
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
