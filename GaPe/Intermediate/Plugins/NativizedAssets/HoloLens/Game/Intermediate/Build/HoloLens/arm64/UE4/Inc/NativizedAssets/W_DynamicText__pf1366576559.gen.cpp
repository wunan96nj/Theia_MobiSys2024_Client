// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/W_DynamicText__pf1366576559.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_DynamicText__pf1366576559() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UW_DynamicText_C__pf1366576559_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UW_DynamicText_C__pf1366576559();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UW_DynamicText_C__pf1366576559::execbpf__GetText_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__GetText_0__pf();
		P_NATIVE_END;
	}
	void UW_DynamicText_C__pf1366576559::StaticRegisterNativesUW_DynamicText_C__pf1366576559()
	{
		UClass* Class = UW_DynamicText_C__pf1366576559::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText_0", &UW_DynamicText_C__pf1366576559::execbpf__GetText_0__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics
	{
		struct W_DynamicText_C__pf1366576559_eventbpf__GetText_0__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(W_DynamicText_C__pf1366576559_eventbpf__GetText_0__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/W_DynamicText__pf1366576559.h" },
		{ "OverrideNativeName", "GetText_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_DynamicText_C__pf1366576559, nullptr, "GetText_0", nullptr, nullptr, sizeof(W_DynamicText_C__pf1366576559_eventbpf__GetText_0__pf_Parms), Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_UW_DynamicText_C__pf1366576559();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetText_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UW_DynamicText_C__pf1366576559_NoRegister()
	{
		return UW_DynamicText_C__pf1366576559::StaticClass();
	}
	struct Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_180__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_180__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_DynamicText_C__pf1366576559_bpf__GetText_0__pf, "GetText_0" }, // 2196004958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "W_DynamicText__pf1366576559.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/W_DynamicText__pf1366576559.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "W_DynamicText_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Tooltip/Widgets/W_DynamicText.W_DynamicText_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::NewProp_bpv__TextBlock_180__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_180" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_DynamicText__pf1366576559.h" },
		{ "OverrideNativeName", "TextBlock_180" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::NewProp_bpv__TextBlock_180__pf = { "TextBlock_180", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_DynamicText_C__pf1366576559, bpv__TextBlock_180__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::NewProp_bpv__TextBlock_180__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::NewProp_bpv__TextBlock_180__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::NewProp_bpv__TextBlock_180__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_DynamicText_C__pf1366576559>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::ClassParams = {
		&UW_DynamicText_C__pf1366576559::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_DynamicText_C__pf1366576559()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Tooltip/Widgets/W_DynamicText"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("W_DynamicText_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_DynamicText_C__pf1366576559_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UW_DynamicText_C__pf1366576559, TEXT("W_DynamicText_C"), 860096061);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UW_DynamicText_C__pf1366576559>()
	{
		return UW_DynamicText_C__pf1366576559::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_DynamicText_C__pf1366576559(Z_Construct_UClass_UW_DynamicText_C__pf1366576559, &UW_DynamicText_C__pf1366576559::StaticClass, TEXT("/UXToolsExamples/Tooltip/Widgets/W_DynamicText"), TEXT("W_DynamicText_C"), true, TEXT("/UXToolsExamples/Tooltip/Widgets/W_DynamicText"), TEXT("/UXToolsExamples/Tooltip/Widgets/W_DynamicText.W_DynamicText_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_DynamicText_C__pf1366576559);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
