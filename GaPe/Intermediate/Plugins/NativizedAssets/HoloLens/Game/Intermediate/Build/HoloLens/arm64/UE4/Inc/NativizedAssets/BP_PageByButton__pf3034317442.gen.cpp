// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_PageByButton__pf3034317442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PageByButton__pf3034317442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PageByButton_C__pf3034317442();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ABP_PageByButton_C__pf3034317442::execbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_bpp__Button__pf);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_bpp__Pointer__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf(Z_Param_bpp__Button__pf,Z_Param_bpp__Pointer__pf);
		P_NATIVE_END;
	}
	void ABP_PageByButton_C__pf3034317442::StaticRegisterNativesABP_PageByButton_C__pf3034317442()
	{
		UClass* Class = ABP_PageByButton_C__pf3034317442::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature", &ABP_PageByButton_C__pf3034317442::execbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics
	{
		struct BP_PageByButton_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Parms
		{
			UUxtPressableButtonComponent* bpp__Button__pf;
			UUxtPointerComponent* bpp__Pointer__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Pointer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Pointer__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf = { "bpp__Button__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PageByButton_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Parms, bpp__Button__pf), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf = { "bpp__Pointer__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PageByButton_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Parms, bpp__Pointer__pf), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "OverrideNativeName", "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PageByButton_C__pf3034317442, nullptr, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature", nullptr, nullptr, sizeof(BP_PageByButton_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PageByButton_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_NoRegister()
	{
		return ABP_PageByButton_C__pf3034317442::StaticClass();
	}
	struct Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PageBy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PageBy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScrollingObjectCollection__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScrollingObjectCollection__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimatexToxPage__pfTT_MetaData[];
#endif
		static void NewProp_bpv__AnimatexToxPage__pfTT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__AnimatexToxPage__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_delegate_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__Temp_delegate_Variable__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableButtonActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_PageByButton_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature" }, // 3815497108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_PageByButton__pf3034317442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_PageByButton_C" },
		{ "ReplaceConverted", "/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_PageByButton.BP_PageByButton_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__PageBy__pf_MetaData[] = {
		{ "Category", "Button" },
		{ "DisplayName", "Page By" },
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PageBy" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__PageBy__pf = { "PageBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PageByButton_C__pf3034317442, bpv__PageBy__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__PageBy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__PageBy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf_MetaData[] = {
		{ "Category", "Button" },
		{ "DisplayName", "Scrolling Object Collection" },
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ScrollingObjectCollection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf = { "ScrollingObjectCollection", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PageByButton_C__pf3034317442, bpv__ScrollingObjectCollection__pf), Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__AnimatexToxPage__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Animate to Page" },
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Animate To Page" },
	};
#endif
	void Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__AnimatexToxPage__pfTT_SetBit(void* Obj)
	{
		((ABP_PageByButton_C__pf3034317442*)Obj)->bpv__AnimatexToxPage__pfTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__AnimatexToxPage__pfTT = { "Animate To Page", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_PageByButton_C__pf3034317442), &Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__AnimatexToxPage__pfTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__AnimatexToxPage__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__AnimatexToxPage__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf = { "K2Node_ComponentBoundEvent_Button", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PageByButton_C__pf3034317442, b0l__K2Node_ComponentBoundEvent_Button__pf), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf = { "K2Node_ComponentBoundEvent_Pointer", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PageByButton_C__pf3034317442, b0l__K2Node_ComponentBoundEvent_Pointer__pf), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__Temp_delegate_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PageByButton__pf3034317442.h" },
		{ "OverrideNativeName", "Temp_delegate_Variable" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__Temp_delegate_Variable__pf = { "Temp_delegate_Variable", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PageByButton_C__pf3034317442, b0l__Temp_delegate_Variable__pf), Z_Construct_UDelegateFunction_UXTools_UxtScrollingObjectCollectionOnPaginationEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__Temp_delegate_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__Temp_delegate_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__PageBy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_bpv__AnimatexToxPage__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::NewProp_b0l__Temp_delegate_Variable__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PageByButton_C__pf3034317442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::ClassParams = {
		&ABP_PageByButton_C__pf3034317442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_PageByButton_C__pf3034317442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_PageByButton"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_PageByButton_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_PageByButton_C__pf3034317442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_PageByButton_C__pf3034317442, TEXT("BP_PageByButton_C"), 447317420);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_PageByButton_C__pf3034317442>()
	{
		return ABP_PageByButton_C__pf3034317442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_PageByButton_C__pf3034317442(Z_Construct_UClass_ABP_PageByButton_C__pf3034317442, &ABP_PageByButton_C__pf3034317442::StaticClass, TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_PageByButton"), TEXT("BP_PageByButton_C"), true, TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_PageByButton"), TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_PageByButton.BP_PageByButton_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PageByButton_C__pf3034317442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
