// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraRandomnessEvaluation__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraRandomnessEvaluation__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessEvaluation__pf();
// End Cross Module References
	static UEnum* E__ENiagaraRandomnessEvaluation__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraRandomnessEvaluation"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraRandomnessEvaluation")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessEvaluation__pf, EnumPackage, TEXT("ENiagaraRandomnessEvaluation"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraRandomnessEvaluation__pf>()
	{
		return E__ENiagaraRandomnessEvaluation__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraRandomnessEvaluation__pf(E__ENiagaraRandomnessEvaluation__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraRandomnessEvaluation"), TEXT("ENiagaraRandomnessEvaluation"), true, TEXT("/Niagara/Enums/ENiagaraRandomnessEvaluation"), TEXT("/Niagara/Enums/ENiagaraRandomnessEvaluation.ENiagaraRandomnessEvaluation"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessEvaluation__pf_Hash() { return 4042006759U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessEvaluation__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraRandomnessEvaluation"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRandomnessEvaluation"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraRandomnessEvaluation__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRandomnessEvaluation::NewEnumerator0", (int64)E__ENiagaraRandomnessEvaluation__pf::NewEnumerator0 },
				{ "ENiagaraRandomnessEvaluation::NewEnumerator1", (int64)E__ENiagaraRandomnessEvaluation__pf::NewEnumerator1 },
				{ "ENiagaraRandomnessEvaluation::ENiagaraRandomnessEvaluation_MAX", (int64)E__ENiagaraRandomnessEvaluation__pf::E__ENiagaraRandomnessEvaluation__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraRandomnessEvaluation__pf_MAX.Name", "E__ENiagaraRandomnessEvaluation__pf::E__ENiagaraRandomnessEvaluation__pf_MAX" },
				{ "E__ENiagaraRandomnessEvaluation__pf_MAX.OverrideName", "ENiagaraRandomnessEvaluation::ENiagaraRandomnessEvaluation_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraRandomnessEvaluation__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraRandomnessEvaluation__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraRandomnessEvaluation__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraRandomnessEvaluation::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraRandomnessEvaluation__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraRandomnessEvaluation::NewEnumerator1" },
				{ "OverrideNativeName", "ENiagaraRandomnessEvaluation" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraRandomnessEvaluation.ENiagaraRandomnessEvaluation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraRandomnessEvaluation")); },
				E__ENiagaraRandomnessEvaluation__pf__GetUserFriendlyName,
				"ENiagaraRandomnessEvaluation",
				"E__ENiagaraRandomnessEvaluation__pf",
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
