// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtToggleStateComponent;
class UMaterialInstanceDynamic;
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
#ifdef NATIVIZEDASSETS_BP_NearMenuBase__pf3547134495_generated_h
#error "BP_NearMenuBase__pf3547134495.generated.h already included, missing '#pragma once' in BP_NearMenuBase__pf3547134495.h"
#endif
#define NATIVIZEDASSETS_BP_NearMenuBase__pf3547134495_generated_h

#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_23_DELEGATE \
struct BP_NearMenuBase_C__pf3547134495_event__UxtToggledDelegate__DelegateSignature__SC_0_Parms \
{ \
	UUxtToggleStateComponent* bpp__ToggleState__pf; \
}; \
static inline void F__UxtToggledDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __UxtToggledDelegate__DelegateSignature__SC_0, UUxtToggleStateComponent* bpp__ToggleState__pf) \
{ \
	BP_NearMenuBase_C__pf3547134495_event__UxtToggledDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__ToggleState__pf=bpp__ToggleState__pf; \
	__UxtToggledDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_SPARSE_DATA
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__OnEndGrab__pf); \
	DECLARE_FUNCTION(execbpf__OnBeginGrab__pf); \
	DECLARE_FUNCTION(execbpf__ShouldStartAutoFollow__pf); \
	DECLARE_FUNCTION(execbpf__CreateGrabMaterial__pf); \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__EventxPinToggled__pfT); \
	DECLARE_FUNCTION(execbpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature__pf);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__OnEndGrab__pf); \
	DECLARE_FUNCTION(execbpf__OnBeginGrab__pf); \
	DECLARE_FUNCTION(execbpf__ShouldStartAutoFollow__pf); \
	DECLARE_FUNCTION(execbpf__CreateGrabMaterial__pf); \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__EventxPinToggled__pfT); \
	DECLARE_FUNCTION(execbpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature__pf);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_EVENT_PARMS \
	struct BP_NearMenuBase_C__pf3547134495_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_NearMenuBase_C__pf3547134495(); \
	friend struct Z_Construct_UClass_ABP_NearMenuBase_C__pf3547134495_Statics; \
public: \
	DECLARE_CLASS(ABP_NearMenuBase_C__pf3547134495, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/UXToolsExamples/Common/ToggleFeaturesPanel/BP_NearMenuBase"), NO_API) \
	DECLARE_SERIALIZER(ABP_NearMenuBase_C__pf3547134495)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABP_NearMenuBase_C__pf3547134495(); \
	friend struct Z_Construct_UClass_ABP_NearMenuBase_C__pf3547134495_Statics; \
public: \
	DECLARE_CLASS(ABP_NearMenuBase_C__pf3547134495, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/UXToolsExamples/Common/ToggleFeaturesPanel/BP_NearMenuBase"), NO_API) \
	DECLARE_SERIALIZER(ABP_NearMenuBase_C__pf3547134495)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_NearMenuBase_C__pf3547134495(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_NearMenuBase_C__pf3547134495) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_NearMenuBase_C__pf3547134495); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_NearMenuBase_C__pf3547134495); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_NearMenuBase_C__pf3547134495(ABP_NearMenuBase_C__pf3547134495&&); \
	NO_API ABP_NearMenuBase_C__pf3547134495(const ABP_NearMenuBase_C__pf3547134495&); \
public:


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_NearMenuBase_C__pf3547134495(ABP_NearMenuBase_C__pf3547134495&&); \
	NO_API ABP_NearMenuBase_C__pf3547134495(const ABP_NearMenuBase_C__pf3547134495&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_NearMenuBase_C__pf3547134495); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_NearMenuBase_C__pf3547134495); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_NearMenuBase_C__pf3547134495)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_PRIVATE_PROPERTY_OFFSET
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_17_PROLOG \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_EVENT_PARMS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_RPC_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_INCLASS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_INCLASS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_NearMenuBase_C__pf3547134495>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_NearMenuBase__pf3547134495_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
