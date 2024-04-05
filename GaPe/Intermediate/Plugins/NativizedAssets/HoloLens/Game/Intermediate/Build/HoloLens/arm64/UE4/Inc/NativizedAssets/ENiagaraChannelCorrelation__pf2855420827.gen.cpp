// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraChannelCorrelation__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraChannelCorrelation__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraChannelCorrelation__pf();
// End Cross Module References
	static UEnum* E__ENiagaraChannelCorrelation__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraChannelCorrelation"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraChannelCorrelation")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraChannelCorrelation__pf, EnumPackage, TEXT("ENiagaraChannelCorrelation"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraChannelCorrelation__pf>()
	{
		return E__ENiagaraChannelCorrelation__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraChannelCorrelation__pf(E__ENiagaraChannelCorrelation__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraChannelCorrelation"), TEXT("ENiagaraChannelCorrelation"), true, TEXT("/Niagara/Enums/ENiagaraChannelCorrelation"), TEXT("/Niagara/Enums/ENiagaraChannelCorrelation.ENiagaraChannelCorrelation"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraChannelCorrelation__pf_Hash() { return 854079043U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraChannelCorrelation__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraChannelCorrelation"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraChannelCorrelation"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraChannelCorrelation__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraChannelCorrelation::NewEnumerator0", (int64)E__ENiagaraChannelCorrelation__pf::NewEnumerator0 },
				{ "ENiagaraChannelCorrelation::NewEnumerator1", (int64)E__ENiagaraChannelCorrelation__pf::NewEnumerator1 },
				{ "ENiagaraChannelCorrelation::NewEnumerator2", (int64)E__ENiagaraChannelCorrelation__pf::NewEnumerator2 },
				{ "ENiagaraChannelCorrelation::ENiagaraChannelCorrelation_MAX", (int64)E__ENiagaraChannelCorrelation__pf::E__ENiagaraChannelCorrelation__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraChannelCorrelation__pf_MAX.Name", "E__ENiagaraChannelCorrelation__pf::E__ENiagaraChannelCorrelation__pf_MAX" },
				{ "E__ENiagaraChannelCorrelation__pf_MAX.OverrideName", "ENiagaraChannelCorrelation::ENiagaraChannelCorrelation_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraChannelCorrelation__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraChannelCorrelation__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraChannelCorrelation__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraChannelCorrelation::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraChannelCorrelation__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraChannelCorrelation::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraChannelCorrelation__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraChannelCorrelation::NewEnumerator2" },
				{ "OverrideNativeName", "ENiagaraChannelCorrelation" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraChannelCorrelation.ENiagaraChannelCorrelation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraChannelCorrelation")); },
				E__ENiagaraChannelCorrelation__pf__GetUserFriendlyName,
				"ENiagaraChannelCorrelation",
				"E__ENiagaraChannelCorrelation__pf",
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
