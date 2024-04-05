// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MRGameModeSurfaceMagnetism__pf297391046.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRGameModeSurfaceMagnetism__pf297391046() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameMode_C__pf2645888192();
// End Cross Module References
	DEFINE_FUNCTION(AMRGameModeSurfaceMagnetism_C__pf297391046::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AMRGameModeSurfaceMagnetism_C__pf297391046::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf),NULL);
	}
	void AMRGameModeSurfaceMagnetism_C__pf297391046::StaticRegisterNativesAMRGameModeSurfaceMagnetism_C__pf297391046()
	{
		UClass* Class = AMRGameModeSurfaceMagnetism_C__pf297391046::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &AMRGameModeSurfaceMagnetism_C__pf297391046::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/MRGameModeSurfaceMagnetism__pf297391046.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_NoRegister()
	{
		return AMRGameModeSurfaceMagnetism_C__pf297391046::StaticClass();
	}
	struct Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMRGameMode_C__pf2645888192,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRGameModeSurfaceMagnetism_C__pf297391046_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2326925736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MRGameModeSurfaceMagnetism__pf297391046.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRGameModeSurfaceMagnetism__pf297391046.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MRGameModeSurfaceMagnetism_C" },
		{ "ReplaceConverted", "/UXToolsExamples/SurfaceMagnetism/Blueprints/MRGameModeSurfaceMagnetism.MRGameModeSurfaceMagnetism_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRGameModeSurfaceMagnetism_C__pf297391046>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::ClassParams = {
		&AMRGameModeSurfaceMagnetism_C__pf297391046::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/SurfaceMagnetism/Blueprints/MRGameModeSurfaceMagnetism"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MRGameModeSurfaceMagnetism_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMRGameModeSurfaceMagnetism_C__pf297391046, TEXT("MRGameModeSurfaceMagnetism_C"), 2372057760);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMRGameModeSurfaceMagnetism_C__pf297391046>()
	{
		return AMRGameModeSurfaceMagnetism_C__pf297391046::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046(Z_Construct_UClass_AMRGameModeSurfaceMagnetism_C__pf297391046, &AMRGameModeSurfaceMagnetism_C__pf297391046::StaticClass, TEXT("/UXToolsExamples/SurfaceMagnetism/Blueprints/MRGameModeSurfaceMagnetism"), TEXT("MRGameModeSurfaceMagnetism_C"), true, TEXT("/UXToolsExamples/SurfaceMagnetism/Blueprints/MRGameModeSurfaceMagnetism"), TEXT("/UXToolsExamples/SurfaceMagnetism/Blueprints/MRGameModeSurfaceMagnetism.MRGameModeSurfaceMagnetism_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRGameModeSurfaceMagnetism_C__pf297391046);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
