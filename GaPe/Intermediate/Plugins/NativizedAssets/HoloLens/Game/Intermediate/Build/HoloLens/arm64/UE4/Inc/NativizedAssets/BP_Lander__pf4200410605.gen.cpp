// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Lander__pf4200410605.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Lander__pf4200410605() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Lander_C__pf4200410605_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Lander_C__pf4200410605();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPinchSliderActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Lander_C__pf4200410605::execbpf__UpdateLandingGear__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateLandingGear__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Lander_C__pf4200410605::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Lander_C__pf4200410605::execbpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf)
	{
		P_GET_OBJECT(AUxtPinchSliderActor,Z_Param_bpp__Slider__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__NewValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf(Z_Param_bpp__Slider__pf,Z_Param_bpp__NewValue__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_Lander_C__pf4200410605::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ABP_Lander_C__pf4200410605::StaticRegisterNativesABP_Lander_C__pf4200410605()
	{
		UClass* Class = ABP_Lander_C__pf4200410605::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature", &ABP_Lander_C__pf4200410605::execbpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf },
			{ "ReceiveBeginPlay", &ABP_Lander_C__pf4200410605::execbpf__ReceiveBeginPlay__pf },
			{ "UpdateLandingGear", &ABP_Lander_C__pf4200410605::execbpf__UpdateLandingGear__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics
	{
		struct BP_Lander_C__pf4200410605_eventbpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Parms
		{
			AUxtPinchSliderActor* bpp__Slider__pf;
			float bpp__NewValue__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Slider__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__NewValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Slider__pf = { "bpp__Slider__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Lander_C__pf4200410605_eventbpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Parms, bpp__Slider__pf), Z_Construct_UClass_AUxtPinchSliderActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__NewValue__pf = { "bpp__NewValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Lander_C__pf4200410605_eventbpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Parms, bpp__NewValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Slider__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__NewValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Lander_C__pf4200410605, nullptr, "BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(BP_Lander_C__pf4200410605_eventbpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Lander_C__pf4200410605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Lander_C__pf4200410605, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Lander_C__pf4200410605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "UpdateLandingGear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Lander_C__pf4200410605, nullptr, "UpdateLandingGear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Lander_C__pf4200410605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateLandingGear" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Lander_C__pf4200410605_NoRegister()
	{
		return ABP_Lander_C__pf4200410605::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lander_Arm2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Lander_Arm2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lander_Arm1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Lander_Arm1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lander_Arm__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Lander_Arm__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arm2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arm2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arm1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arm1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arm__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arm__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lander_Leg2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Lander_Leg2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lander_Leg1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Lander_Leg1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lander_Leg__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Lander_Leg__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lander_Chasis__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Lander_Chasis__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SliderActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SliderActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewVar_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__NewVar_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SliderCompRef__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SliderCompRef__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Slider__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Slider__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_NewValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_NewValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf, "BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature" }, // 276762842
		{ &Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 740321386
		{ &Z_Construct_UFunction_ABP_Lander_C__pf4200410605_bpf__UpdateLandingGear__pf, "UpdateLandingGear" }, // 704606503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Lander__pf4200410605.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Lander_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Common/Assets/Lander/BP_Lander.BP_Lander_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Lander_Arm2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm2__pf = { "Lander_Arm2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Lander_Arm2__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Lander_Arm1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm1__pf = { "Lander_Arm1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Lander_Arm1__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Lander_Arm" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm__pf = { "Lander_Arm", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Lander_Arm__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Arm2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm2__pf = { "Arm2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Arm2__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Arm1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm1__pf = { "Arm1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Arm1__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Arm" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm__pf = { "Arm", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Arm__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Lander_Leg2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg2__pf = { "Lander_Leg2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Lander_Leg2__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Lander_Leg1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg1__pf = { "Lander_Leg1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Lander_Leg1__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Lander_Leg" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg__pf = { "Lander_Leg", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Lander_Leg__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Chasis__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Lander_Chasis" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Chasis__pf = { "Lander_Chasis", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Lander_Chasis__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Chasis__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Chasis__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Scene__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Scene__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderActor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slider Actor" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SliderActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderActor__pf = { "SliderActor", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__SliderActor__pf), Z_Construct_UClass_AUxtPinchSliderActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__NewVar_0__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Var 0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewVar_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__NewVar_0__pf = { "NewVar_0", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__NewVar_0__pf), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__NewVar_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__NewVar_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderCompRef__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slider Comp Ref" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SliderCompRef" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderCompRef__pf = { "SliderCompRef", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, bpv__SliderCompRef__pf), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderCompRef__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderCompRef__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Slider__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Slider" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Slider__pf = { "K2Node_ComponentBoundEvent_Slider", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, b0l__K2Node_ComponentBoundEvent_Slider__pf), Z_Construct_UClass_AUxtPinchSliderActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Slider__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Slider__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NewValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Lander__pf4200410605.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_NewValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NewValue__pf = { "K2Node_ComponentBoundEvent_NewValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Lander_C__pf4200410605, b0l__K2Node_ComponentBoundEvent_NewValue__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NewValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NewValue__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Arm__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Arm__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Leg__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Lander_Chasis__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__Scene__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__NewVar_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_bpv__SliderCompRef__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Slider__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NewValue__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Lander_C__pf4200410605>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::ClassParams = {
		&ABP_Lander_C__pf4200410605::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Lander_C__pf4200410605()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Common/Assets/Lander/BP_Lander"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Lander_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Lander_C__pf4200410605_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Lander_C__pf4200410605, TEXT("BP_Lander_C"), 1213366419);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Lander_C__pf4200410605>()
	{
		return ABP_Lander_C__pf4200410605::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Lander_C__pf4200410605(Z_Construct_UClass_ABP_Lander_C__pf4200410605, &ABP_Lander_C__pf4200410605::StaticClass, TEXT("/UXToolsExamples/Common/Assets/Lander/BP_Lander"), TEXT("BP_Lander_C"), true, TEXT("/UXToolsExamples/Common/Assets/Lander/BP_Lander"), TEXT("/UXToolsExamples/Common/Assets/Lander/BP_Lander.BP_Lander_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Lander_C__pf4200410605);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
