// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MRGameMode__pf2645888192.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRGameMode__pf2645888192() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameMode_C__pf2645888192_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMRGameMode_C__pf2645888192();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AMRGameMode_C__pf2645888192::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRGameMode_C__pf2645888192::execbpf__ReceiveEndPlay__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__EndPlayReason__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveEndPlay__pf(EEndPlayReason::Type(Z_Param_bpp__EndPlayReason__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMRGameMode_C__pf2645888192::execbpf__RetryToggleARCapture__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RetryToggleARCapture__pf();
		P_NATIVE_END;
	}
	static FName NAME_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AMRGameMode_C__pf2645888192::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf = FName(TEXT("ReceiveEndPlay"));
	void AMRGameMode_C__pf2645888192::eventbpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf)
	{
		MRGameMode_C__pf2645888192_eventbpf__ReceiveEndPlay__pf_Parms Parms;
		Parms.bpp__EndPlayReason__pf=bpp__EndPlayReason__pf;
		ProcessEvent(FindFunctionChecked(NAME_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf),&Parms);
	}
	void AMRGameMode_C__pf2645888192::StaticRegisterNativesAMRGameMode_C__pf2645888192()
	{
		UClass* Class = AMRGameMode_C__pf2645888192::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AMRGameMode_C__pf2645888192::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveEndPlay", &AMRGameMode_C__pf2645888192::execbpf__ReceiveEndPlay__pf },
			{ "RetryToggleARCapture", &AMRGameMode_C__pf2645888192::execbpf__RetryToggleARCapture__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRGameMode_C__pf2645888192, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMRGameMode_C__pf2645888192();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__EndPlayReason__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::NewProp_bpp__EndPlayReason__pf = { "bpp__EndPlayReason__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MRGameMode_C__pf2645888192_eventbpf__ReceiveEndPlay__pf_Parms, bpp__EndPlayReason__pf), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::NewProp_bpp__EndPlayReason__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event to notify blueprints this actor is being deleted or removed from a level. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "End Play" },
		{ "Keywords", "delete" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "ReceiveEndPlay" },
		{ "ToolTip", "Event to notify blueprints this actor is being deleted or removed from a level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRGameMode_C__pf2645888192, nullptr, "ReceiveEndPlay", nullptr, nullptr, sizeof(MRGameMode_C__pf2645888192_eventbpf__ReceiveEndPlay__pf_Parms), Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMRGameMode_C__pf2645888192();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveEndPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "RetryToggleARCapture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMRGameMode_C__pf2645888192, nullptr, "RetryToggleARCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMRGameMode_C__pf2645888192();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RetryToggleARCapture" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMRGameMode_C__pf2645888192_NoRegister()
	{
		return AMRGameMode_C__pf2645888192::StaticClass();
	}
	struct Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bEnableSpatialMapping__pf_MetaData[];
#endif
		static void NewProp_bpv__bEnableSpatialMapping__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bEnableSpatialMapping__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxCaptureToggleAttempts__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__MaxCaptureToggleAttempts__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CaptureToggleWaitTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__CaptureToggleWaitTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RemainingCaptureToggleAttempts__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__RemainingCaptureToggleAttempts__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_Event_EndPlayReason__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3973307295
		{ &Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__ReceiveEndPlay__pf, "ReceiveEndPlay" }, // 4215410220
		{ &Z_Construct_UFunction_AMRGameMode_C__pf2645888192_bpf__RetryToggleARCapture__pf, "RetryToggleARCapture" }, // 2022591116
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MRGameMode__pf2645888192.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MRGameMode_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Common/GameMode/MRGameMode.MRGameMode_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__bEnableSpatialMapping__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enable Spatial Mapping" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bEnableSpatialMapping" },
	};
#endif
	void Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__bEnableSpatialMapping__pf_SetBit(void* Obj)
	{
		((AMRGameMode_C__pf2645888192*)Obj)->bpv__bEnableSpatialMapping__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__bEnableSpatialMapping__pf = { "bEnableSpatialMapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMRGameMode_C__pf2645888192), &Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__bEnableSpatialMapping__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__bEnableSpatialMapping__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__bEnableSpatialMapping__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__MaxCaptureToggleAttempts__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max Capture Toggle Attempts" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MaxCaptureToggleAttempts" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__MaxCaptureToggleAttempts__pf = { "MaxCaptureToggleAttempts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, bpv__MaxCaptureToggleAttempts__pf), METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__MaxCaptureToggleAttempts__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__MaxCaptureToggleAttempts__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__CaptureToggleWaitTime__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Capture Toggle Wait Time" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CaptureToggleWaitTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__CaptureToggleWaitTime__pf = { "CaptureToggleWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, bpv__CaptureToggleWaitTime__pf), METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__CaptureToggleWaitTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__CaptureToggleWaitTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__RemainingCaptureToggleAttempts__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Remaining Capture Toggle Attempts" },
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RemainingCaptureToggleAttempts" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__RemainingCaptureToggleAttempts__pf = { "RemainingCaptureToggleAttempts", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, bpv__RemainingCaptureToggleAttempts__pf), METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__RemainingCaptureToggleAttempts__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__RemainingCaptureToggleAttempts__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((AMRGameMode_C__pf2645888192*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMRGameMode_C__pf2645888192), &Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "Temp_object_Variable" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable__pf = { "Temp_object_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, b0l__Temp_object_Variable__pf), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "Temp_object_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable_1__pf = { "Temp_object_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, b0l__Temp_object_Variable_1__pf), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, b0l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "CallFunc_ToggleARCapture_ReturnValue" },
	};
#endif
	void Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf_SetBit(void* Obj)
	{
		((AMRGameMode_C__pf2645888192*)Obj)->b0l__CallFunc_ToggleARCapture_ReturnValue__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf = { "CallFunc_ToggleARCapture_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMRGameMode_C__pf2645888192), &Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "K2Node_Event_EndPlayReason" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf = { "K2Node_Event_EndPlayReason", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, b0l__K2Node_Event_EndPlayReason__pf), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRGameMode__pf2645888192.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRGameMode_C__pf2645888192, b0l__K2Node_Select_Default__pf), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__bEnableSpatialMapping__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__MaxCaptureToggleAttempts__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__CaptureToggleWaitTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_bpv__RemainingCaptureToggleAttempts__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__Temp_object_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__CallFunc_ToggleARCapture_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::NewProp_b0l__K2Node_Select_Default__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRGameMode_C__pf2645888192>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::ClassParams = {
		&AMRGameMode_C__pf2645888192::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRGameMode_C__pf2645888192()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Common/GameMode/MRGameMode"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MRGameMode_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRGameMode_C__pf2645888192_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMRGameMode_C__pf2645888192, TEXT("MRGameMode_C"), 2305398592);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMRGameMode_C__pf2645888192>()
	{
		return AMRGameMode_C__pf2645888192::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRGameMode_C__pf2645888192(Z_Construct_UClass_AMRGameMode_C__pf2645888192, &AMRGameMode_C__pf2645888192::StaticClass, TEXT("/UXToolsExamples/Common/GameMode/MRGameMode"), TEXT("MRGameMode_C"), true, TEXT("/UXToolsExamples/Common/GameMode/MRGameMode"), TEXT("/UXToolsExamples/Common/GameMode/MRGameMode.MRGameMode_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRGameMode_C__pf2645888192);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
