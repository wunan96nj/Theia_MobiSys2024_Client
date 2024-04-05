// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraSystemInactiveMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraSystemInactiveMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraSystemInactiveMode__pf();
// End Cross Module References
	static UEnum* E__ENiagaraSystemInactiveMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraSystemInactiveMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraSystemInactiveMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraSystemInactiveMode__pf, EnumPackage, TEXT("ENiagaraSystemInactiveMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraSystemInactiveMode__pf>()
	{
		return E__ENiagaraSystemInactiveMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraSystemInactiveMode__pf(E__ENiagaraSystemInactiveMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraSystemInactiveMode"), TEXT("ENiagaraSystemInactiveMode"), true, TEXT("/Niagara/Enums/ENiagaraSystemInactiveMode"), TEXT("/Niagara/Enums/ENiagaraSystemInactiveMode.ENiagaraSystemInactiveMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraSystemInactiveMode__pf_Hash() { return 1826881832U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraSystemInactiveMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraSystemInactiveMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSystemInactiveMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraSystemInactiveMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSystemInactiveMode::NewEnumerator0", (int64)E__ENiagaraSystemInactiveMode__pf::NewEnumerator0 },
				{ "ENiagaraSystemInactiveMode::NewEnumerator1", (int64)E__ENiagaraSystemInactiveMode__pf::NewEnumerator1 },
				{ "ENiagaraSystemInactiveMode::ENiagaraSystemInactiveMode_MAX", (int64)E__ENiagaraSystemInactiveMode__pf::E__ENiagaraSystemInactiveMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraSystemInactiveMode__pf_MAX.Name", "E__ENiagaraSystemInactiveMode__pf::E__ENiagaraSystemInactiveMode__pf_MAX" },
				{ "E__ENiagaraSystemInactiveMode__pf_MAX.OverrideName", "ENiagaraSystemInactiveMode::ENiagaraSystemInactiveMode_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraSystemInactiveMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraSystemInactiveMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraSystemInactiveMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraSystemInactiveMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraSystemInactiveMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraSystemInactiveMode::NewEnumerator1" },
				{ "OverrideNativeName", "ENiagaraSystemInactiveMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraSystemInactiveMode.ENiagaraSystemInactiveMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraSystemInactiveMode")); },
				E__ENiagaraSystemInactiveMode__pf__GetUserFriendlyName,
				"ENiagaraSystemInactiveMode",
				"E__ENiagaraSystemInactiveMode__pf",
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
