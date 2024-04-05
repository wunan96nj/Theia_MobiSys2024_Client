// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/HandAnimBlueprint__pf1627489016.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandAnimBlueprint__pf1627489016() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseByName();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__AnimGraph__pf)
	{
		P_GET_STRUCT_REF(FPoseLink,Z_Param_Out_bpp__AnimGraph__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AnimGraph__pf(Z_Param_Out_bpp__AnimGraph__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__GetTargetHandPose__pf)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_bpp__TargetPose__pf);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_bpp__TargetTransform__pf);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__bAnimateTransform__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetTargetHandPose__pf(Z_Param_Out_bpp__TargetPose__pf,Z_Param_Out_bpp__TargetTransform__pf,Z_Param_Out_bpp__bAnimateTransform__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__InitHand__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InitHand__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__UpdateTargetPose__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateTargetPose__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__IncrementBlendAlpha__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__IncrementBlendAlpha__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__SetTargetPose__pf)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bpp__Name__pf);
		P_GET_UBOOL(Z_Param_bpp__AnimatedTransform__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetTargetPose__pf(Z_Param_bpp__Name__pf,Z_Param_bpp__AnimatedTransform__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__BlueprintUpdateAnimation__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaTimeX__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BlueprintUpdateAnimation__pf(Z_Param_bpp__DeltaTimeX__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHandAnimBlueprint_C__pf1627489016::execbpf__BlueprintBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BlueprintBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf = FName(TEXT("BlueprintBeginPlay"));
	void UHandAnimBlueprint_C__pf1627489016::eventbpf__BlueprintBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf),NULL);
	}
	static FName NAME_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf = FName(TEXT("BlueprintUpdateAnimation"));
	void UHandAnimBlueprint_C__pf1627489016::eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
	{
		HandAnimBlueprint_C__pf1627489016_eventbpf__BlueprintUpdateAnimation__pf_Parms Parms;
		Parms.bpp__DeltaTimeX__pf=bpp__DeltaTimeX__pf;
		ProcessEvent(FindFunctionChecked(NAME_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf),&Parms);
	}
	void UHandAnimBlueprint_C__pf1627489016::StaticRegisterNativesUHandAnimBlueprint_C__pf1627489016()
	{
		UClass* Class = UHandAnimBlueprint_C__pf1627489016::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimGraph", &UHandAnimBlueprint_C__pf1627489016::execbpf__AnimGraph__pf },
			{ "BlueprintBeginPlay", &UHandAnimBlueprint_C__pf1627489016::execbpf__BlueprintBeginPlay__pf },
			{ "BlueprintUpdateAnimation", &UHandAnimBlueprint_C__pf1627489016::execbpf__BlueprintUpdateAnimation__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA", &UHandAnimBlueprint_C__pf1627489016::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186", &UHandAnimBlueprint_C__pf1627489016::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf },
			{ "GetTargetHandPose", &UHandAnimBlueprint_C__pf1627489016::execbpf__GetTargetHandPose__pf },
			{ "IncrementBlendAlpha", &UHandAnimBlueprint_C__pf1627489016::execbpf__IncrementBlendAlpha__pf },
			{ "InitHand", &UHandAnimBlueprint_C__pf1627489016::execbpf__InitHand__pf },
			{ "SetTargetPose", &UHandAnimBlueprint_C__pf1627489016::execbpf__SetTargetPose__pf },
			{ "UpdateTargetPose", &UHandAnimBlueprint_C__pf1627489016::execbpf__UpdateTargetPose__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics
	{
		struct HandAnimBlueprint_C__pf1627489016_eventbpf__AnimGraph__pf_Parms
		{
			FPoseLink bpp__AnimGraph__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__AnimGraph__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf = { "bpp__AnimGraph__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HandAnimBlueprint_C__pf1627489016_eventbpf__AnimGraph__pf_Parms, bpp__AnimGraph__pf), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::Function_MetaDataParams[] = {
		{ "AnimBlueprintFunction", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "AnimGraph" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "AnimGraph", nullptr, nullptr, sizeof(HandAnimBlueprint_C__pf1627489016_eventbpf__AnimGraph__pf_Parms), Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AnimGraph" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when begin play is called on the owning component */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "BlueprintBeginPlay" },
		{ "ToolTip", "Executed when begin play is called on the owning component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "BlueprintBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BlueprintBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf = { "bpp__DeltaTimeX__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HandAnimBlueprint_C__pf1627489016_eventbpf__BlueprintUpdateAnimation__pf_Parms, bpp__DeltaTimeX__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "BlueprintUpdateAnimation" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(HandAnimBlueprint_C__pf1627489016_eventbpf__BlueprintUpdateAnimation__pf_Parms), Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BlueprintUpdateAnimation" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics
	{
		struct HandAnimBlueprint_C__pf1627489016_eventbpf__GetTargetHandPose__pf_Parms
		{
			FName bpp__TargetPose__pf;
			FTransform bpp__TargetTransform__pf;
			bool bpp__bAnimateTransform__pf;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpp__TargetPose__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__TargetTransform__pf;
		static void NewProp_bpp__bAnimateTransform__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bAnimateTransform__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__TargetPose__pf = { "bpp__TargetPose__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HandAnimBlueprint_C__pf1627489016_eventbpf__GetTargetHandPose__pf_Parms, bpp__TargetPose__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__TargetTransform__pf = { "bpp__TargetTransform__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HandAnimBlueprint_C__pf1627489016_eventbpf__GetTargetHandPose__pf_Parms, bpp__TargetTransform__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__bAnimateTransform__pf_SetBit(void* Obj)
	{
		((HandAnimBlueprint_C__pf1627489016_eventbpf__GetTargetHandPose__pf_Parms*)Obj)->bpp__bAnimateTransform__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__bAnimateTransform__pf = { "bpp__bAnimateTransform__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(HandAnimBlueprint_C__pf1627489016_eventbpf__GetTargetHandPose__pf_Parms), &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__bAnimateTransform__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__TargetPose__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__TargetTransform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::NewProp_bpp__bAnimateTransform__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "GetTargetHandPose" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "GetTargetHandPose", nullptr, nullptr, sizeof(HandAnimBlueprint_C__pf1627489016_eventbpf__GetTargetHandPose__pf_Parms), Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetTargetHandPose" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics
	{
		struct HandAnimBlueprint_C__pf1627489016_eventbpf__IncrementBlendAlpha__pf_Parms
		{
			float bpp__DeltaSeconds__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HandAnimBlueprint_C__pf1627489016_eventbpf__IncrementBlendAlpha__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "IncrementBlendAlpha" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "IncrementBlendAlpha", nullptr, nullptr, sizeof(HandAnimBlueprint_C__pf1627489016_eventbpf__IncrementBlendAlpha__pf_Parms), Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "IncrementBlendAlpha" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "InitHand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "InitHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InitHand" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics
	{
		struct HandAnimBlueprint_C__pf1627489016_eventbpf__SetTargetPose__pf_Parms
		{
			FName bpp__Name__pf;
			bool bpp__AnimatedTransform__pf;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpp__Name__pf;
		static void NewProp_bpp__AnimatedTransform__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__AnimatedTransform__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::NewProp_bpp__Name__pf = { "bpp__Name__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HandAnimBlueprint_C__pf1627489016_eventbpf__SetTargetPose__pf_Parms, bpp__Name__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::NewProp_bpp__AnimatedTransform__pf_SetBit(void* Obj)
	{
		((HandAnimBlueprint_C__pf1627489016_eventbpf__SetTargetPose__pf_Parms*)Obj)->bpp__AnimatedTransform__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::NewProp_bpp__AnimatedTransform__pf = { "bpp__AnimatedTransform__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(HandAnimBlueprint_C__pf1627489016_eventbpf__SetTargetPose__pf_Parms), &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::NewProp_bpp__AnimatedTransform__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::NewProp_bpp__Name__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::NewProp_bpp__AnimatedTransform__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "SetTargetPose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "SetTargetPose", nullptr, nullptr, sizeof(HandAnimBlueprint_C__pf1627489016_eventbpf__SetTargetPose__pf_Parms), Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetTargetPose" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "UpdateTargetPose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, nullptr, "UpdateTargetPose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateTargetPose" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_NoRegister()
	{
		return UHandAnimBlueprint_C__pf1627489016::StaticClass();
	}
	struct Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_Root__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_Root__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_TwoWayBlend__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_TwoWayBlend__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_PoseSnapshot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_PoseSnapshot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_PoseByName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_PoseByName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BlendTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BlendTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BlendAlpha__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BlendAlpha__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TargetPose__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__TargetPose__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Hand__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Hand__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__Hand__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bIsAnimatedTransform__pf_MetaData[];
#endif
		static void NewProp_bpv__bIsAnimatedTransform__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bIsAnimatedTransform__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InitialTransform__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__InitialTransform__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TransformBlendAlpha__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TransformBlendAlpha__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__AnimGraph__pf, "AnimGraph" }, // 1479114758
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintBeginPlay__pf, "BlueprintBeginPlay" }, // 508606790
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__BlueprintUpdateAnimation__pf, "BlueprintUpdateAnimation" }, // 1386564345
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA" }, // 2736081925
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186" }, // 3456919366
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__GetTargetHandPose__pf, "GetTargetHandPose" }, // 2734389838
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__IncrementBlendAlpha__pf, "IncrementBlendAlpha" }, // 899896649
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__InitHand__pf, "InitHand" }, // 1857171338
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__SetTargetPose__pf, "SetTargetPose" }, // 2027786244
		{ &Z_Construct_UFunction_UHandAnimBlueprint_C__pf1627489016_bpf__UpdateTargetPose__pf, "UpdateTargetPose" }, // 2837631159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HandAnimBlueprint__pf1627489016.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "HandAnimBlueprint_C" },
		{ "ReplaceConverted", "/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "AnimGraphNode_Root" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_Root__pf = { "AnimGraphNode_Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__AnimGraphNode_Root__pf), Z_Construct_UScriptStruct_FAnimNode_Root, METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_TwoWayBlend__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "AnimGraphNode_TwoWayBlend" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_TwoWayBlend__pf = { "AnimGraphNode_TwoWayBlend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__AnimGraphNode_TwoWayBlend__pf), Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend, METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_TwoWayBlend__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_TwoWayBlend__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseSnapshot__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "AnimGraphNode_PoseSnapshot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseSnapshot__pf = { "AnimGraphNode_PoseSnapshot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__AnimGraphNode_PoseSnapshot__pf), Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot, METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseSnapshot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseSnapshot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseByName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "AnimGraphNode_PoseByName" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseByName__pf = { "AnimGraphNode_PoseByName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__AnimGraphNode_PoseByName__pf), Z_Construct_UScriptStruct_FAnimNode_PoseByName, METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseByName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseByName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendTime__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Blend Time" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "BlendTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendTime__pf = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__BlendTime__pf), METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendAlpha__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Blend Alpha" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "BlendAlpha" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendAlpha__pf = { "BlendAlpha", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__BlendAlpha__pf), METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendAlpha__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendAlpha__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TargetPose__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Target Pose" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TargetPose" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TargetPose__pf = { "TargetPose", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__TargetPose__pf), METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TargetPose__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TargetPose__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__Hand__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__Hand__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hand" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Hand" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__Hand__pf = { "Hand", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__Hand__pf), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__Hand__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__Hand__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__bIsAnimatedTransform__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Animated Transform" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bIsAnimatedTransform" },
	};
#endif
	void Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__bIsAnimatedTransform__pf_SetBit(void* Obj)
	{
		((UHandAnimBlueprint_C__pf1627489016*)Obj)->bpv__bIsAnimatedTransform__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__bIsAnimatedTransform__pf = { "bIsAnimatedTransform", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHandAnimBlueprint_C__pf1627489016), &Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__bIsAnimatedTransform__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__bIsAnimatedTransform__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__bIsAnimatedTransform__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__InitialTransform__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Initial Transform" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "InitialTransform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__InitialTransform__pf = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__InitialTransform__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__InitialTransform__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__InitialTransform__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TransformBlendAlpha__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Transform Blend Alpha" },
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TransformBlendAlpha" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TransformBlendAlpha__pf = { "TransformBlendAlpha", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, bpv__TransformBlendAlpha__pf), METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TransformBlendAlpha__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TransformBlendAlpha__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HandAnimBlueprint__pf1627489016.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaTimeX" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf = { "K2Node_Event_DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHandAnimBlueprint_C__pf1627489016, b0l__K2Node_Event_DeltaTimeX__pf), METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_Root__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_TwoWayBlend__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseSnapshot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__AnimGraphNode_PoseByName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__BlendAlpha__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TargetPose__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__Hand__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__Hand__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__bIsAnimatedTransform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__InitialTransform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_bpv__TransformBlendAlpha__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandAnimBlueprint_C__pf1627489016>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::ClassParams = {
		&UHandAnimBlueprint_C__pf1627489016::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXTools/XRSimulation/HandAnimBlueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("HandAnimBlueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UHandAnimBlueprint_C__pf1627489016, TEXT("HandAnimBlueprint_C"), 709470081);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UHandAnimBlueprint_C__pf1627489016>()
	{
		return UHandAnimBlueprint_C__pf1627489016::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHandAnimBlueprint_C__pf1627489016(Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016, &UHandAnimBlueprint_C__pf1627489016::StaticClass, TEXT("/UXTools/XRSimulation/HandAnimBlueprint"), TEXT("HandAnimBlueprint_C"), true, TEXT("/UXTools/XRSimulation/HandAnimBlueprint"), TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandAnimBlueprint_C__pf1627489016);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
