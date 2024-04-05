// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_LogoButton__pf1183508669.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_LogoButton__pf1183508669() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_LogoButton_C__pf1183508669();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_DescriptionPanel_C__pf3670844252_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_LogoButton_C__pf1183508669::execbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_bpp__Button__pf);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_bpp__Pointer__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf(Z_Param_bpp__Button__pf,Z_Param_bpp__Pointer__pf);
		P_NATIVE_END;
	}
	void ABP_LogoButton_C__pf1183508669::StaticRegisterNativesABP_LogoButton_C__pf1183508669()
	{
		UClass* Class = ABP_LogoButton_C__pf1183508669::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature", &ABP_LogoButton_C__pf1183508669::execbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics
	{
		struct BP_LogoButton_C__pf1183508669_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf = { "bpp__Button__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_LogoButton_C__pf1183508669_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Parms, bpp__Button__pf), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf = { "bpp__Pointer__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_LogoButton_C__pf1183508669_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Parms, bpp__Pointer__pf), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "OverrideNativeName", "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_LogoButton_C__pf1183508669, nullptr, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature", nullptr, nullptr, sizeof(BP_LogoButton_C__pf1183508669_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_LogoButton_C__pf1183508669();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_NoRegister()
	{
		return ABP_LogoButton_C__pf1183508669::StaticClass();
	}
	struct Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableButtonActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_LogoButton_C__pf1183508669_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature" }, // 477304598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_LogoButton__pf1183508669.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_LogoButton_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Loader/Blueprints/BP_LogoButton.BP_LogoButton_C" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABP_DescriptionPanel_C__pf3670844252_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_LogoButton_C__pf1183508669, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_LogoButton_C__pf1183508669, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_LogoButton_C__pf1183508669, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_LogoButton_C__pf1183508669, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ABP_DescriptionPanel_C__pf3670844252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf = { "K2Node_ComponentBoundEvent_Button", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_LogoButton_C__pf1183508669, b0l__K2Node_ComponentBoundEvent_Button__pf), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_LogoButton__pf1183508669.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf = { "K2Node_ComponentBoundEvent_Pointer", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_LogoButton_C__pf1183508669, b0l__K2Node_ComponentBoundEvent_Pointer__pf), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_LogoButton_C__pf1183508669>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::ClassParams = {
		&ABP_LogoButton_C__pf1183508669::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_LogoButton_C__pf1183508669()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Loader/Blueprints/BP_LogoButton"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_LogoButton_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_LogoButton_C__pf1183508669_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_LogoButton_C__pf1183508669, TEXT("BP_LogoButton_C"), 3038152421);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_LogoButton_C__pf1183508669>()
	{
		return ABP_LogoButton_C__pf1183508669::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_LogoButton_C__pf1183508669(Z_Construct_UClass_ABP_LogoButton_C__pf1183508669, &ABP_LogoButton_C__pf1183508669::StaticClass, TEXT("/UXToolsExamples/Loader/Blueprints/BP_LogoButton"), TEXT("BP_LogoButton_C"), true, TEXT("/UXToolsExamples/Loader/Blueprints/BP_LogoButton"), TEXT("/UXToolsExamples/Loader/Blueprints/BP_LogoButton.BP_LogoButton_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_LogoButton_C__pf1183508669);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
