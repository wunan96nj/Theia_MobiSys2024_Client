// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_SelectorButton__pf1172471173.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_SelectorButton__pf1172471173() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTextRenderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_SelectorButton_C__pf1172471173::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_SelectorButton_C__pf1172471173::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_SelectorButton_C__pf1172471173::StaticRegisterNativesABP_SelectorButton_C__pf1172471173()
	{
		UClass* Class = ABP_SelectorButton_C__pf1172471173::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ABP_SelectorButton_C__pf1172471173::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_SelectorButton__pf1172471173.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_NoRegister()
	{
		return ABP_SelectorButton_C__pf1172471173::StaticClass();
	}
	struct Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DescriptionComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DescriptionComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DescriptionText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__DescriptionText__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableToggleButtonActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_SelectorButton_C__pf1172471173_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1577481407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_SelectorButton__pf1172471173.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_SelectorButton__pf1172471173.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_SelectorButton_C" },
		{ "ReplaceConverted", "/UXToolsExamples/HandMenu/Blueprints/BP_SelectorButton.BP_SelectorButton_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionComponent__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_SelectorButton__pf1172471173.h" },
		{ "OverrideNativeName", "DescriptionComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionComponent__pf = { "DescriptionComponent", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_SelectorButton_C__pf1172471173, bpv__DescriptionComponent__pf), Z_Construct_UClass_UUxtTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionText__pf_MetaData[] = {
		{ "Category", "Button" },
		{ "DisplayName", "Description Text" },
		{ "ModuleRelativePath", "Public/BP_SelectorButton__pf1172471173.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "DescriptionText" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionText__pf = { "DescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_SelectorButton_C__pf1172471173, bpv__DescriptionText__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionText__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::NewProp_bpv__DescriptionText__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_SelectorButton_C__pf1172471173>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::ClassParams = {
		&ABP_SelectorButton_C__pf1172471173::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/HandMenu/Blueprints/BP_SelectorButton"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_SelectorButton_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_SelectorButton_C__pf1172471173, TEXT("BP_SelectorButton_C"), 672499478);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_SelectorButton_C__pf1172471173>()
	{
		return ABP_SelectorButton_C__pf1172471173::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_SelectorButton_C__pf1172471173(Z_Construct_UClass_ABP_SelectorButton_C__pf1172471173, &ABP_SelectorButton_C__pf1172471173::StaticClass, TEXT("/UXToolsExamples/HandMenu/Blueprints/BP_SelectorButton"), TEXT("BP_SelectorButton_C"), true, TEXT("/UXToolsExamples/HandMenu/Blueprints/BP_SelectorButton"), TEXT("/UXToolsExamples/HandMenu/Blueprints/BP_SelectorButton.BP_SelectorButton_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_SelectorButton_C__pf1172471173);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
