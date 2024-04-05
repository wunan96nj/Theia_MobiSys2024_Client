// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraEmitterScalabilityMode_Limited__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraEmitterScalabilityMode_Limited__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterScalabilityMode_Limited__pf();
// End Cross Module References
	static UEnum* E__ENiagaraEmitterScalabilityMode_Limited__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraEmitterScalabilityMode_Limited"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraEmitterScalabilityMode_Limited")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterScalabilityMode_Limited__pf, EnumPackage, TEXT("ENiagaraEmitterScalabilityMode_Limited"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraEmitterScalabilityMode_Limited__pf>()
	{
		return E__ENiagaraEmitterScalabilityMode_Limited__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraEmitterScalabilityMode_Limited__pf(E__ENiagaraEmitterScalabilityMode_Limited__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraEmitterScalabilityMode_Limited"), TEXT("ENiagaraEmitterScalabilityMode_Limited"), true, TEXT("/Niagara/Enums/ENiagaraEmitterScalabilityMode_Limited"), TEXT("/Niagara/Enums/ENiagaraEmitterScalabilityMode_Limited.ENiagaraEmitterScalabilityMode_Limited"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterScalabilityMode_Limited__pf_Hash() { return 925818534U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterScalabilityMode_Limited__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraEmitterScalabilityMode_Limited"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraEmitterScalabilityMode_Limited"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterScalabilityMode_Limited__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraEmitterScalabilityMode_Limited::NewEnumerator0", (int64)E__ENiagaraEmitterScalabilityMode_Limited__pf::NewEnumerator0 },
				{ "ENiagaraEmitterScalabilityMode_Limited::NewEnumerator1", (int64)E__ENiagaraEmitterScalabilityMode_Limited__pf::NewEnumerator1 },
				{ "ENiagaraEmitterScalabilityMode_Limited::ENiagaraEmitterScalabilityMode_MAX", (int64)E__ENiagaraEmitterScalabilityMode_Limited__pf::E__ENiagaraEmitterScalabilityMode_Limited__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraEmitterScalabilityMode_Limited__pf_MAX.Name", "E__ENiagaraEmitterScalabilityMode_Limited__pf::E__ENiagaraEmitterScalabilityMode_Limited__pf_MAX" },
				{ "E__ENiagaraEmitterScalabilityMode_Limited__pf_MAX.OverrideName", "ENiagaraEmitterScalabilityMode_Limited::ENiagaraEmitterScalabilityMode_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraEmitterScalabilityMode_Limited__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraEmitterScalabilityMode_Limited__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraEmitterScalabilityMode_Limited__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraEmitterScalabilityMode_Limited::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraEmitterScalabilityMode_Limited__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraEmitterScalabilityMode_Limited::NewEnumerator1" },
				{ "OverrideNativeName", "ENiagaraEmitterScalabilityMode_Limited" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraEmitterScalabilityMode_Limited.ENiagaraEmitterScalabilityMode_Limited" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraEmitterScalabilityMode_Limited")); },
				E__ENiagaraEmitterScalabilityMode_Limited__pf__GetUserFriendlyName,
				"ENiagaraEmitterScalabilityMode_Limited",
				"E__ENiagaraEmitterScalabilityMode_Limited__pf",
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
