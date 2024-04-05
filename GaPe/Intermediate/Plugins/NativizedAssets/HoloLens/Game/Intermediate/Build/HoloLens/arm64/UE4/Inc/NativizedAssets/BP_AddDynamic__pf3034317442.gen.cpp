// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_AddDynamic__pf3034317442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_AddDynamic__pf3034317442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_AddDynamic_C__pf3034317442::execbpf__MoveButton__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Time__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__ActorToMove__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MoveButton__pf(Z_Param_bpp__Time__pf,Z_Param_bpp__ActorToMove__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_AddDynamic_C__pf3034317442::execbpf__AddToCollection__pf)
	{
		P_GET_OBJECT_REF(AUxtPressableButtonActor,Z_Param_Out_bpp__ActorToAdd__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddToCollection__pf(Z_Param_Out_bpp__ActorToAdd__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_AddDynamic_C__pf3034317442::execbpf__DoTransition__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Time__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DoTransition__pf(Z_Param_bpp__Time__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_AddDynamic_C__pf3034317442::execbpf__Timeline_0__FinishedFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_0__FinishedFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_AddDynamic_C__pf3034317442::execbpf__Timeline_0__UpdateFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Timeline_0__UpdateFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_AddDynamic_C__pf3034317442::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_AddDynamic_C__pf3034317442::execbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf)
	{
		P_GET_OBJECT(UUxtPressableButtonComponent,Z_Param_bpp__Button__pf);
		P_GET_OBJECT(UUxtPointerComponent,Z_Param_bpp__Pointer__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf(Z_Param_bpp__Button__pf,Z_Param_bpp__Pointer__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_AddDynamic_C__pf3034317442::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ABP_AddDynamic_C__pf3034317442::StaticRegisterNativesABP_AddDynamic_C__pf3034317442()
	{
		UClass* Class = ABP_AddDynamic_C__pf3034317442::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToCollection", &ABP_AddDynamic_C__pf3034317442::execbpf__AddToCollection__pf },
			{ "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature", &ABP_AddDynamic_C__pf3034317442::execbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf },
			{ "DoTransition", &ABP_AddDynamic_C__pf3034317442::execbpf__DoTransition__pf },
			{ "MoveButton", &ABP_AddDynamic_C__pf3034317442::execbpf__MoveButton__pf },
			{ "ReceiveBeginPlay", &ABP_AddDynamic_C__pf3034317442::execbpf__ReceiveBeginPlay__pf },
			{ "Timeline_0__FinishedFunc", &ABP_AddDynamic_C__pf3034317442::execbpf__Timeline_0__FinishedFunc__pf },
			{ "Timeline_0__UpdateFunc", &ABP_AddDynamic_C__pf3034317442::execbpf__Timeline_0__UpdateFunc__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics
	{
		struct BP_AddDynamic_C__pf3034317442_eventbpf__AddToCollection__pf_Parms
		{
			const AUxtPressableButtonActor* bpp__ActorToAdd__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__ActorToAdd__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__ActorToAdd__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::NewProp_bpp__ActorToAdd__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::NewProp_bpp__ActorToAdd__pf__const = { "bpp__ActorToAdd__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_AddDynamic_C__pf3034317442_eventbpf__AddToCollection__pf_Parms, bpp__ActorToAdd__pf__const), Z_Construct_UClass_AUxtPressableButtonActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::NewProp_bpp__ActorToAdd__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::NewProp_bpp__ActorToAdd__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::NewProp_bpp__ActorToAdd__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "AddToCollection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, nullptr, "AddToCollection", nullptr, nullptr, sizeof(BP_AddDynamic_C__pf3034317442_eventbpf__AddToCollection__pf_Parms), Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddToCollection" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics
	{
		struct BP_AddDynamic_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf = { "bpp__Button__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_AddDynamic_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Parms, bpp__Button__pf), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf = { "bpp__Pointer__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_AddDynamic_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Parms, bpp__Pointer__pf), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::NewProp_bpp__Pointer__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, nullptr, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature", nullptr, nullptr, sizeof(BP_AddDynamic_C__pf3034317442_eventbpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics
	{
		struct BP_AddDynamic_C__pf3034317442_eventbpf__DoTransition__pf_Parms
		{
			float bpp__Time__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Time__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::NewProp_bpp__Time__pf = { "bpp__Time__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_AddDynamic_C__pf3034317442_eventbpf__DoTransition__pf_Parms, bpp__Time__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::NewProp_bpp__Time__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "DoTransition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, nullptr, "DoTransition", nullptr, nullptr, sizeof(BP_AddDynamic_C__pf3034317442_eventbpf__DoTransition__pf_Parms), Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "DoTransition" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics
	{
		struct BP_AddDynamic_C__pf3034317442_eventbpf__MoveButton__pf_Parms
		{
			float bpp__Time__pf;
			AActor* bpp__ActorToMove__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Time__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__ActorToMove__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::NewProp_bpp__Time__pf = { "bpp__Time__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_AddDynamic_C__pf3034317442_eventbpf__MoveButton__pf_Parms, bpp__Time__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::NewProp_bpp__ActorToMove__pf = { "bpp__ActorToMove__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_AddDynamic_C__pf3034317442_eventbpf__MoveButton__pf_Parms, bpp__ActorToMove__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::NewProp_bpp__Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::NewProp_bpp__ActorToMove__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "MoveButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, nullptr, "MoveButton", nullptr, nullptr, sizeof(BP_AddDynamic_C__pf3034317442_eventbpf__MoveButton__pf_Parms), Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MoveButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Timeline_0__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, nullptr, "Timeline_0__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_0__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Timeline_0__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, nullptr, "Timeline_0__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Timeline_0__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_NoRegister()
	{
		return ABP_AddDynamic_C__pf3034317442::StaticClass();
	}
	struct Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Spline__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Spline__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timeline_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Timeline_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScrollingObjectCollection__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScrollingObjectCollection__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Buttons__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Buttons__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Buttons__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableButtonActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__AddToCollection__pf, "AddToCollection" }, // 2283060577
		{ &Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf, "BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature" }, // 2464391877
		{ &Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__DoTransition__pf, "DoTransition" }, // 1271908670
		{ &Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__MoveButton__pf, "MoveButton" }, // 3378586137
		{ &Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2914488495
		{ &Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__FinishedFunc__pf, "Timeline_0__FinishedFunc" }, // 782194544
		{ &Z_Construct_UFunction_ABP_AddDynamic_C__pf3034317442_bpf__Timeline_0__UpdateFunc__pf, "Timeline_0__UpdateFunc" }, // 3244040171
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_AddDynamic__pf3034317442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_AddDynamic_C" },
		{ "ReplaceConverted", "/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_AddDynamic.BP_AddDynamic_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Spline__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Spline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Spline__pf = { "Spline", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, bpv__Spline__pf), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Spline__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Spline__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf = { "Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf = { "Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__pf_MetaData[] = {
		{ "Category", "BP_AddDynamic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Timeline_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__pf = { "Timeline_0", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, bpv__Timeline_0__pf), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Scrolling Object Collection" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ScrollingObjectCollection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf = { "ScrollingObjectCollection", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, bpv__ScrollingObjectCollection__pf), Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Buttons__pf_Inner = { "bpv__Buttons__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AUxtPressableButtonActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Buttons__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Buttons" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Buttons" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Buttons__pf = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, bpv__Buttons__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Buttons__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Buttons__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf = { "K2Node_ComponentBoundEvent_Button", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, b0l__K2Node_ComponentBoundEvent_Button__pf), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf = { "K2Node_ComponentBoundEvent_Pointer", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, b0l__K2Node_ComponentBoundEvent_Pointer__pf), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((ABP_AddDynamic_C__pf3034317442*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_AddDynamic_C__pf3034317442), &Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_AddDynamic_C__pf3034317442, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_AddDynamic__pf3034317442.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((ABP_AddDynamic_C__pf3034317442*)Obj)->b0l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_AddDynamic_C__pf3034317442), &Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Spline__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Timeline_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__ScrollingObjectCollection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Buttons__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_bpv__Buttons__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Pointer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_AddDynamic_C__pf3034317442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::ClassParams = {
		&ABP_AddDynamic_C__pf3034317442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_AddDynamic"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_AddDynamic_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_AddDynamic_C__pf3034317442, TEXT("BP_AddDynamic_C"), 871783942);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_AddDynamic_C__pf3034317442>()
	{
		return ABP_AddDynamic_C__pf3034317442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_AddDynamic_C__pf3034317442(Z_Construct_UClass_ABP_AddDynamic_C__pf3034317442, &ABP_AddDynamic_C__pf3034317442::StaticClass, TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_AddDynamic"), TEXT("BP_AddDynamic_C"), true, TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_AddDynamic"), TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_AddDynamic.BP_AddDynamic_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_AddDynamic_C__pf3034317442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
