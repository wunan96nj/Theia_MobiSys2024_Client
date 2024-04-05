// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraExecutionStateManagement__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraExecutionStateManagement__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraExecutionStateManagement__pf();
// End Cross Module References
	static UEnum* E__ENiagaraExecutionStateManagement__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraExecutionStateManagement"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraExecutionStateManagement")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraExecutionStateManagement__pf, EnumPackage, TEXT("ENiagaraExecutionStateManagement"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraExecutionStateManagement__pf>()
	{
		return E__ENiagaraExecutionStateManagement__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraExecutionStateManagement__pf(E__ENiagaraExecutionStateManagement__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraExecutionStateManagement"), TEXT("ENiagaraExecutionStateManagement"), true, TEXT("/Niagara/Enums/ENiagaraExecutionStateManagement"), TEXT("/Niagara/Enums/ENiagaraExecutionStateManagement.ENiagaraExecutionStateManagement"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraExecutionStateManagement__pf_Hash() { return 772427307U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraExecutionStateManagement__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraExecutionStateManagement"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraExecutionStateManagement"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraExecutionStateManagement__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraExecutionStateManagement::NewEnumerator0", (int64)E__ENiagaraExecutionStateManagement__pf::NewEnumerator0 },
				{ "ENiagaraExecutionStateManagement::NewEnumerator1", (int64)E__ENiagaraExecutionStateManagement__pf::NewEnumerator1 },
				{ "ENiagaraExecutionStateManagement::NewEnumerator2", (int64)E__ENiagaraExecutionStateManagement__pf::NewEnumerator2 },
				{ "ENiagaraExecutionStateManagement::NewEnumerator3", (int64)E__ENiagaraExecutionStateManagement__pf::NewEnumerator3 },
				{ "ENiagaraExecutionStateManagement::NewEnumerator4", (int64)E__ENiagaraExecutionStateManagement__pf::NewEnumerator4 },
				{ "ENiagaraExecutionStateManagement::ENiagaraExecutionStateManagement_MAX", (int64)E__ENiagaraExecutionStateManagement__pf::E__ENiagaraExecutionStateManagement__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraExecutionStateManagement__pf_MAX.Name", "E__ENiagaraExecutionStateManagement__pf::E__ENiagaraExecutionStateManagement__pf_MAX" },
				{ "E__ENiagaraExecutionStateManagement__pf_MAX.OverrideName", "ENiagaraExecutionStateManagement::ENiagaraExecutionStateManagement_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraExecutionStateManagement__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraExecutionStateManagement__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraExecutionStateManagement__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraExecutionStateManagement::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraExecutionStateManagement__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraExecutionStateManagement::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraExecutionStateManagement__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraExecutionStateManagement::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__ENiagaraExecutionStateManagement__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "ENiagaraExecutionStateManagement::NewEnumerator3" },
				{ "NewEnumerator4.Name", "E__ENiagaraExecutionStateManagement__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "ENiagaraExecutionStateManagement::NewEnumerator4" },
				{ "OverrideNativeName", "ENiagaraExecutionStateManagement" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraExecutionStateManagement.ENiagaraExecutionStateManagement" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraExecutionStateManagement")); },
				E__ENiagaraExecutionStateManagement__pf__GetUserFriendlyName,
				"ENiagaraExecutionStateManagement",
				"E__ENiagaraExecutionStateManagement__pf",
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
