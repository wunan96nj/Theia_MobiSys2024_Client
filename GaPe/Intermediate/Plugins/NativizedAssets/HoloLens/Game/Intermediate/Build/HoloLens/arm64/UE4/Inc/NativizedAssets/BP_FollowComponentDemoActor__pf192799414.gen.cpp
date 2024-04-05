// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_FollowComponentDemoActor__pf192799414.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_FollowComponentDemoActor__pf192799414() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UComponentWorkaround_C__pf192799414_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFollowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_FollowComponentDemoActor_C__pf192799414::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_FollowComponentDemoActor_C__pf192799414::execbpf__Workaround_Pressed__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Workaround_Pressed__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_FollowComponentDemoActor_C__pf192799414::execbpf__Workaround_Released__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Workaround_Released__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_FollowComponentDemoActor_C__pf192799414::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ABP_FollowComponentDemoActor_C__pf192799414::StaticRegisterNativesABP_FollowComponentDemoActor_C__pf192799414()
	{
		UClass* Class = ABP_FollowComponentDemoActor_C__pf192799414::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &ABP_FollowComponentDemoActor_C__pf192799414::execbpf__ReceiveBeginPlay__pf },
			{ "Workaround_Pressed", &ABP_FollowComponentDemoActor_C__pf192799414::execbpf__Workaround_Pressed__pf },
			{ "Workaround_Released", &ABP_FollowComponentDemoActor_C__pf192799414::execbpf__Workaround_Released__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "Workaround_Pressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414, nullptr, "Workaround_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Workaround_Pressed" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "Workaround_Released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414, nullptr, "Workaround_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Workaround_Released" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_NoRegister()
	{
		return ABP_FollowComponentDemoActor_C__pf192799414::StaticClass();
	}
	struct Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FollowStatusText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FollowStatusText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TitleText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TitleText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Logo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Logo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BackPlate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BackPlate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UxtFollow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__UxtFollow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FollowingText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__FollowingText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NotFollowingText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__NotFollowingText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PressedSound__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PressedSound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ReleasedSound__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ReleasedSound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BaseMaterial__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BaseMaterial__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FollowMaterial__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FollowMaterial__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Pointer_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Pointer_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Pointer_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Pointer_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Pointer_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Pointer_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Pointer_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Pointer_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Pointer_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Pointer_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Pointer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Pointer__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 5835813
		{ &Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Pressed__pf, "Workaround_Pressed" }, // 581857311
		{ &Z_Construct_UFunction_ABP_FollowComponentDemoActor_C__pf192799414_bpf__Workaround_Released__pf, "Workaround_Released" }, // 306399694
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_FollowComponentDemoActor__pf192799414.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_FollowComponentDemoActor_C" },
		{ "ReplaceConverted", "/UXToolsExamples/Follow/Blueprints/BP_FollowComponentDemoActor.BP_FollowComponentDemoActor_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowStatusText__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "FollowStatusText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowStatusText__pf = { "FollowStatusText", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__FollowStatusText__pf), Z_Construct_UClass_UUxtTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowStatusText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowStatusText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__TitleText__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "TitleText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__TitleText__pf = { "TitleText", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__TitleText__pf), Z_Construct_UClass_UUxtTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__TitleText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__TitleText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__Logo__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "Logo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__Logo__pf = { "Logo", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__Logo__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__Logo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__Logo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BackPlate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "BackPlate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BackPlate__pf = { "BackPlate", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__BackPlate__pf), Z_Construct_UClass_UComponentWorkaround_C__pf192799414_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BackPlate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BackPlate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__UxtFollow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "UxtFollow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__UxtFollow__pf = { "UxtFollow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__UxtFollow__pf), Z_Construct_UClass_UUxtFollowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__UxtFollow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__UxtFollow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowingText__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Following Text" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FollowingText" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowingText__pf = { "FollowingText", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__FollowingText__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowingText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowingText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__NotFollowingText__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Not Following Text" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NotFollowingText" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__NotFollowingText__pf = { "NotFollowingText", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__NotFollowingText__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__NotFollowingText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__NotFollowingText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__PressedSound__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Pressed Sound" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PressedSound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__PressedSound__pf = { "PressedSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__PressedSound__pf), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__PressedSound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__PressedSound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__ReleasedSound__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Released Sound" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ReleasedSound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__ReleasedSound__pf = { "ReleasedSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__ReleasedSound__pf), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__ReleasedSound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__ReleasedSound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BaseMaterial__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Base Material" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "BaseMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BaseMaterial__pf = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__BaseMaterial__pf), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BaseMaterial__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BaseMaterial__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowMaterial__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Follow Material" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FollowMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowMaterial__pf = { "FollowMaterial", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, bpv__FollowMaterial__pf), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowMaterial__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowMaterial__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_5__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "K2Node_Event_Pointer_5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_5__pf = { "K2Node_Event_Pointer_5", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, b0l__K2Node_Event_Pointer_5__pf), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_4__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "K2Node_Event_Pointer_4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_4__pf = { "K2Node_Event_Pointer_4", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, b0l__K2Node_Event_Pointer_4__pf), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_3__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "K2Node_Event_Pointer_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_3__pf = { "K2Node_Event_Pointer_3", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, b0l__K2Node_Event_Pointer_3__pf), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_2__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "K2Node_Event_Pointer_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_2__pf = { "K2Node_Event_Pointer_2", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, b0l__K2Node_Event_Pointer_2__pf), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((ABP_FollowComponentDemoActor_C__pf192799414*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_FollowComponentDemoActor_C__pf192799414), &Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "K2Node_Event_Pointer_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_1__pf = { "K2Node_Event_Pointer_1", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, b0l__K2Node_Event_Pointer_1__pf), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_FollowComponentDemoActor__pf192799414.h" },
		{ "OverrideNativeName", "K2Node_Event_Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer__pf = { "K2Node_Event_Pointer", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, b0l__K2Node_Event_Pointer__pf), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowStatusText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__TitleText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__Logo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BackPlate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__UxtFollow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowingText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__NotFollowingText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__PressedSound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__ReleasedSound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__BaseMaterial__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_bpv__FollowMaterial__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::NewProp_b0l__K2Node_Event_Pointer__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, IUxtFarTarget), false },
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(ABP_FollowComponentDemoActor_C__pf192799414, IUxtFarHandler), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_FollowComponentDemoActor_C__pf192799414>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::ClassParams = {
		&ABP_FollowComponentDemoActor_C__pf192799414::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/UXToolsExamples/Follow/Blueprints/BP_FollowComponentDemoActor"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_FollowComponentDemoActor_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_FollowComponentDemoActor_C__pf192799414, TEXT("BP_FollowComponentDemoActor_C"), 4258403295);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_FollowComponentDemoActor_C__pf192799414>()
	{
		return ABP_FollowComponentDemoActor_C__pf192799414::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_FollowComponentDemoActor_C__pf192799414(Z_Construct_UClass_ABP_FollowComponentDemoActor_C__pf192799414, &ABP_FollowComponentDemoActor_C__pf192799414::StaticClass, TEXT("/UXToolsExamples/Follow/Blueprints/BP_FollowComponentDemoActor"), TEXT("BP_FollowComponentDemoActor_C"), true, TEXT("/UXToolsExamples/Follow/Blueprints/BP_FollowComponentDemoActor"), TEXT("/UXToolsExamples/Follow/Blueprints/BP_FollowComponentDemoActor.BP_FollowComponentDemoActor_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_FollowComponentDemoActor_C__pf192799414);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
