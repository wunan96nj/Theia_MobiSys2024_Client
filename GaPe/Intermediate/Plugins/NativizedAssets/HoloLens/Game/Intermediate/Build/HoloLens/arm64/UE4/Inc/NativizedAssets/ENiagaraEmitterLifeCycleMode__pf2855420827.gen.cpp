// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraEmitterLifeCycleMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraEmitterLifeCycleMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterLifeCycleMode__pf();
// End Cross Module References
	static UEnum* E__ENiagaraEmitterLifeCycleMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraEmitterLifeCycleMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraEmitterLifeCycleMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterLifeCycleMode__pf, EnumPackage, TEXT("ENiagaraEmitterLifeCycleMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraEmitterLifeCycleMode__pf>()
	{
		return E__ENiagaraEmitterLifeCycleMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraEmitterLifeCycleMode__pf(E__ENiagaraEmitterLifeCycleMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraEmitterLifeCycleMode"), TEXT("ENiagaraEmitterLifeCycleMode"), true, TEXT("/Niagara/Enums/ENiagaraEmitterLifeCycleMode"), TEXT("/Niagara/Enums/ENiagaraEmitterLifeCycleMode.ENiagaraEmitterLifeCycleMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterLifeCycleMode__pf_Hash() { return 3314314715U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterLifeCycleMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraEmitterLifeCycleMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraEmitterLifeCycleMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraEmitterLifeCycleMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraEmitterLifeCycleMode::NewEnumerator0", (int64)E__ENiagaraEmitterLifeCycleMode__pf::NewEnumerator0 },
				{ "ENiagaraEmitterLifeCycleMode::NewEnumerator1", (int64)E__ENiagaraEmitterLifeCycleMode__pf::NewEnumerator1 },
				{ "ENiagaraEmitterLifeCycleMode::ENiagaraEmitterLifeCycleMode_MAX", (int64)E__ENiagaraEmitterLifeCycleMode__pf::E__ENiagaraEmitterLifeCycleMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraEmitterLifeCycleMode__pf_MAX.Name", "E__ENiagaraEmitterLifeCycleMode__pf::E__ENiagaraEmitterLifeCycleMode__pf_MAX" },
				{ "E__ENiagaraEmitterLifeCycleMode__pf_MAX.OverrideName", "ENiagaraEmitterLifeCycleMode::ENiagaraEmitterLifeCycleMode_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraEmitterLifeCycleMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraEmitterLifeCycleMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraEmitterLifeCycleMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraEmitterLifeCycleMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraEmitterLifeCycleMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraEmitterLifeCycleMode::NewEnumerator1" },
				{ "OverrideNativeName", "ENiagaraEmitterLifeCycleMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraEmitterLifeCycleMode.ENiagaraEmitterLifeCycleMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraEmitterLifeCycleMode")); },
				E__ENiagaraEmitterLifeCycleMode__pf__GetUserFriendlyName,
				"ENiagaraEmitterLifeCycleMode",
				"E__ENiagaraEmitterLifeCycleMode__pf",
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
