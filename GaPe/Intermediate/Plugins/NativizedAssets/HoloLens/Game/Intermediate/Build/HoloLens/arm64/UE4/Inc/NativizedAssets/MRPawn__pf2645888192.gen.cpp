// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MRPawn__pf2645888192.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRPawn__pf2645888192() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRPawn_C__pf2645888192_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRPawn_C__pf2645888192();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
// End Cross Module References
	DEFINE_FUNCTION(AMRPawn_C__pf2645888192::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AMRPawn_C__pf2645888192::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AMRPawn_C__pf2645888192::StaticRegisterNativesAMRPawn_C__pf2645888192()
	{
		UClass* Class = AMRPawn_C__pf2645888192::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AMRPawn_C__pf2645888192::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/MRPawn__pf2645888192.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRPawn_C__pf2645888192, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMRPawn_C__pf2645888192();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMRPawn_C__pf2645888192_NoRegister()
	{
		return AMRPawn_C__pf2645888192::StaticClass();
	}
	struct Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRPawn_C__pf2645888192_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3038347105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MRPawn__pf2645888192.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRPawn__pf2645888192.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MRPawn_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Common/GameMode/MRPawn.MRPawn_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRPawn_C__pf2645888192>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::ClassParams = {
		&AMRPawn_C__pf2645888192::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRPawn_C__pf2645888192()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Common/GameMode/MRPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MRPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRPawn_C__pf2645888192_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMRPawn_C__pf2645888192, TEXT("MRPawn_C"), 1008066618);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMRPawn_C__pf2645888192>()
	{
		return AMRPawn_C__pf2645888192::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRPawn_C__pf2645888192(Z_Construct_UClass_AMRPawn_C__pf2645888192, &AMRPawn_C__pf2645888192::StaticClass, TEXT("/UXToolsExamples/Common/GameMode/MRPawn"), TEXT("MRPawn_C"), true, TEXT("/UXToolsExamples/Common/GameMode/MRPawn"), TEXT("/UXToolsExamples/Common/GameMode/MRPawn.MRPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRPawn_C__pf2645888192);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
