// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_ScrollingObjectCollection__pf3034317442.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_ScrollingObjectCollection__pf3034317442() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FScrollingCollectionProperties();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtScrollingObjectCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__UpdateButtonMask__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateButtonMask__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__SetButtonMask__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetButtonMask__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf)
	{
		P_GET_STRUCT_REF(FScrollingCollectionProperties,Z_Param_Out_bpp__Properties__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf(Z_Param_Out_bpp__Properties__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_ScrollingObjectCollection_C__pf3034317442::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_ScrollingObjectCollection_C__pf3034317442::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_ScrollingObjectCollection_C__pf3034317442_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_ScrollingObjectCollection_C__pf3034317442::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_ScrollingObjectCollection_C__pf3034317442::StaticRegisterNativesABP_ScrollingObjectCollection_C__pf3034317442()
	{
		UClass* Class = ABP_ScrollingObjectCollection_C__pf3034317442::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature", &ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf },
			{ "ReceiveBeginPlay", &ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__ReceiveTick__pf },
			{ "SetButtonMask", &ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__SetButtonMask__pf },
			{ "UpdateButtonMask", &ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__UpdateButtonMask__pf },
			{ "UserConstructionScript", &ABP_ScrollingObjectCollection_C__pf3034317442::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics
	{
		struct FScrollingCollectionProperties
		{
			FVector Center;
			float Width;
			float Height;
		};

		struct BP_ScrollingObjectCollection_C__pf3034317442_eventbpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Parms
		{
			FScrollingCollectionProperties bpp__Properties__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Properties__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Properties__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::NewProp_bpp__Properties__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::NewProp_bpp__Properties__pf__const = { "bpp__Properties__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_ScrollingObjectCollection_C__pf3034317442_eventbpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Parms, bpp__Properties__pf__const), Z_Construct_UScriptStruct_FScrollingCollectionProperties, METADATA_PARAMS(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::NewProp_bpp__Properties__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::NewProp_bpp__Properties__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::NewProp_bpp__Properties__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442, nullptr, "BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature", nullptr, nullptr, sizeof(BP_ScrollingObjectCollection_C__pf3034317442_eventbpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_ScrollingObjectCollection_C__pf3034317442_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_ScrollingObjectCollection_C__pf3034317442_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "SetButtonMask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442, nullptr, "SetButtonMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetButtonMask" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "UpdateButtonMask" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442, nullptr, "UpdateButtonMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateButtonMask" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_NoRegister()
	{
		return ABP_ScrollingObjectCollection_C__pf3034317442::StaticClass();
	}
	struct Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UxtBackPlate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__UxtBackPlate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UxtScrollingObjectCollection__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__UxtScrollingObjectCollection__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Icons__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Icons__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Icons__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Labels__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Labels__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Labels__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Frontpanels__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Frontpanels__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Frontpanels__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__IconMIDs__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IconMIDs__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__IconMIDs__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LabelMIDs__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LabelMIDs__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__LabelMIDs__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FrontpanelMIDs__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FrontpanelMIDs__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__FrontpanelMIDs__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MenuBounds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__MenuBounds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Properties__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Properties__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf, "BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature" }, // 1902718743
		{ &Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3888560539
		{ &Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3043206455
		{ &Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__SetButtonMask__pf, "SetButtonMask" }, // 2071359986
		{ &Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UpdateButtonMask__pf, "UpdateButtonMask" }, // 4199102297
		{ &Z_Construct_UFunction_ABP_ScrollingObjectCollection_C__pf3034317442_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 4117686998
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_ScrollingObjectCollection_C" },
		{ "ReplaceConverted", "/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_ScrollingObjectCollection.BP_ScrollingObjectCollection_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtBackPlate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "UxtBackPlate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtBackPlate__pf = { "UxtBackPlate", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__UxtBackPlate__pf), Z_Construct_UClass_UUxtBackPlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtBackPlate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtBackPlate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtScrollingObjectCollection__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "UxtScrollingObjectCollection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtScrollingObjectCollection__pf = { "UxtScrollingObjectCollection", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__UxtScrollingObjectCollection__pf), Z_Construct_UClass_UUxtScrollingObjectCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtScrollingObjectCollection__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtScrollingObjectCollection__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Icons__pf_Inner = { "bpv__Icons__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Icons__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Icons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Icons" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Icons__pf = { "Icons", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__Icons__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Icons__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Icons__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Labels__pf_Inner = { "bpv__Labels__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Labels__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Labels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Labels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Labels__pf = { "Labels", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__Labels__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Labels__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Labels__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Frontpanels__pf_Inner = { "bpv__Frontpanels__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Frontpanels__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Frontpanels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Frontpanels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Frontpanels__pf = { "Frontpanels", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__Frontpanels__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Frontpanels__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Frontpanels__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__IconMIDs__pf_Inner = { "bpv__IconMIDs__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__IconMIDs__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Icon MIDs" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "IconMIDs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__IconMIDs__pf = { "IconMIDs", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__IconMIDs__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__IconMIDs__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__IconMIDs__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__LabelMIDs__pf_Inner = { "bpv__LabelMIDs__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__LabelMIDs__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Label MIDs" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LabelMIDs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__LabelMIDs__pf = { "LabelMIDs", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__LabelMIDs__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__LabelMIDs__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__LabelMIDs__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__FrontpanelMIDs__pf_Inner = { "bpv__FrontpanelMIDs__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__FrontpanelMIDs__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Frontpanel MIDs" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FrontpanelMIDs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__FrontpanelMIDs__pf = { "FrontpanelMIDs", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__FrontpanelMIDs__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__FrontpanelMIDs__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__FrontpanelMIDs__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__MenuBounds__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Menu Bounds" },
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MenuBounds" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__MenuBounds__pf = { "MenuBounds", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, bpv__MenuBounds__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__MenuBounds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__MenuBounds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Properties__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Properties" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Properties__pf = { "K2Node_ComponentBoundEvent_Properties", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__K2Node_ComponentBoundEvent_Properties__pf), Z_Construct_UScriptStruct_FScrollingCollectionProperties, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Properties__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Properties__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf = { "CallFunc_BreakVector_X_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__CallFunc_BreakVector_X_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf = { "CallFunc_BreakVector_Y_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__CallFunc_BreakVector_Y_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf = { "CallFunc_BreakVector_Z_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__CallFunc_BreakVector_Z_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_ScrollingObjectCollection__pf3034317442.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_ScrollingObjectCollection_C__pf3034317442, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtBackPlate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__UxtScrollingObjectCollection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Icons__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Icons__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Labels__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Labels__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Frontpanels__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__Frontpanels__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__IconMIDs__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__IconMIDs__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__LabelMIDs__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__LabelMIDs__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__FrontpanelMIDs__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__FrontpanelMIDs__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_bpv__MenuBounds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Properties__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_ScrollingObjectCollection_C__pf3034317442>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::ClassParams = {
		&ABP_ScrollingObjectCollection_C__pf3034317442::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_ScrollingObjectCollection"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_ScrollingObjectCollection_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_ScrollingObjectCollection_C__pf3034317442, TEXT("BP_ScrollingObjectCollection_C"), 1121765214);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_ScrollingObjectCollection_C__pf3034317442>()
	{
		return ABP_ScrollingObjectCollection_C__pf3034317442::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_ScrollingObjectCollection_C__pf3034317442(Z_Construct_UClass_ABP_ScrollingObjectCollection_C__pf3034317442, &ABP_ScrollingObjectCollection_C__pf3034317442::StaticClass, TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_ScrollingObjectCollection"), TEXT("BP_ScrollingObjectCollection_C"), true, TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_ScrollingObjectCollection"), TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_ScrollingObjectCollection.BP_ScrollingObjectCollection_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_ScrollingObjectCollection_C__pf3034317442);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
