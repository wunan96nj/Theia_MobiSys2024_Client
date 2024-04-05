// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MRGameModeTapToPlace__pf3452490149.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRGameModeTapToPlace__pf3452490149() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameMode_C__pf2645888192();
// End Cross Module References
	DEFINE_FUNCTION(AMRGameModeTapToPlace_C__pf3452490149::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AMRGameModeTapToPlace_C__pf3452490149::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf),NULL);
	}
	void AMRGameModeTapToPlace_C__pf3452490149::StaticRegisterNativesAMRGameModeTapToPlace_C__pf3452490149()
	{
		UClass* Class = AMRGameModeTapToPlace_C__pf3452490149::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &AMRGameModeTapToPlace_C__pf3452490149::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/MRGameModeTapToPlace__pf3452490149.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_NoRegister()
	{
		return AMRGameModeTapToPlace_C__pf3452490149::StaticClass();
	}
	struct Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMRGameMode_C__pf2645888192,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRGameModeTapToPlace_C__pf3452490149_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 4239473767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MRGameModeTapToPlace__pf3452490149.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRGameModeTapToPlace__pf3452490149.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MRGameModeTapToPlace_C" },
		{ "ReplaceConverted", "/UXToolsExamples/TapToPlace/Blueprints/MRGameModeTapToPlace.MRGameModeTapToPlace_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRGameModeTapToPlace_C__pf3452490149>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::ClassParams = {
		&AMRGameModeTapToPlace_C__pf3452490149::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/TapToPlace/Blueprints/MRGameModeTapToPlace"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MRGameModeTapToPlace_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMRGameModeTapToPlace_C__pf3452490149, TEXT("MRGameModeTapToPlace_C"), 316830674);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMRGameModeTapToPlace_C__pf3452490149>()
	{
		return AMRGameModeTapToPlace_C__pf3452490149::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRGameModeTapToPlace_C__pf3452490149(Z_Construct_UClass_AMRGameModeTapToPlace_C__pf3452490149, &AMRGameModeTapToPlace_C__pf3452490149::StaticClass, TEXT("/UXToolsExamples/TapToPlace/Blueprints/MRGameModeTapToPlace"), TEXT("MRGameModeTapToPlace_C"), true, TEXT("/UXToolsExamples/TapToPlace/Blueprints/MRGameModeTapToPlace"), TEXT("/UXToolsExamples/TapToPlace/Blueprints/MRGameModeTapToPlace.MRGameModeTapToPlace_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRGameModeTapToPlace_C__pf3452490149);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
