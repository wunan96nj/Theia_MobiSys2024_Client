// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraInactiveMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraInactiveMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraInactiveMode__pf();
// End Cross Module References
	static UEnum* E__ENiagaraInactiveMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraInactiveMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraInactiveMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraInactiveMode__pf, EnumPackage, TEXT("ENiagaraInactiveMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraInactiveMode__pf>()
	{
		return E__ENiagaraInactiveMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraInactiveMode__pf(E__ENiagaraInactiveMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraInactiveMode"), TEXT("ENiagaraInactiveMode"), true, TEXT("/Niagara/Enums/ENiagaraInactiveMode"), TEXT("/Niagara/Enums/ENiagaraInactiveMode.ENiagaraInactiveMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraInactiveMode__pf_Hash() { return 647329650U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraInactiveMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraInactiveMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraInactiveMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraInactiveMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraInactiveMode::NewEnumerator0", (int64)E__ENiagaraInactiveMode__pf::NewEnumerator0 },
				{ "ENiagaraInactiveMode::NewEnumerator1", (int64)E__ENiagaraInactiveMode__pf::NewEnumerator1 },
				{ "ENiagaraInactiveMode::NewEnumerator2", (int64)E__ENiagaraInactiveMode__pf::NewEnumerator2 },
				{ "ENiagaraInactiveMode::ENiagaraInactiveMode_MAX", (int64)E__ENiagaraInactiveMode__pf::E__ENiagaraInactiveMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraInactiveMode__pf_MAX.Name", "E__ENiagaraInactiveMode__pf::E__ENiagaraInactiveMode__pf_MAX" },
				{ "E__ENiagaraInactiveMode__pf_MAX.OverrideName", "ENiagaraInactiveMode::ENiagaraInactiveMode_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraInactiveMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraInactiveMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraInactiveMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraInactiveMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraInactiveMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraInactiveMode::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraInactiveMode__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraInactiveMode::NewEnumerator2" },
				{ "OverrideNativeName", "ENiagaraInactiveMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraInactiveMode.ENiagaraInactiveMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraInactiveMode")); },
				E__ENiagaraInactiveMode__pf__GetUserFriendlyName,
				"ENiagaraInactiveMode",
				"E__ENiagaraInactiveMode__pf",
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
