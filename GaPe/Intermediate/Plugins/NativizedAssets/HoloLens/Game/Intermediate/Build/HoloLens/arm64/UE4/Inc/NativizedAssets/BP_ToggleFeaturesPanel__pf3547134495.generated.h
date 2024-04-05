// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
#ifdef NATIVIZEDASSETS_BP_ToggleFeaturesPanel__pf3547134495_generated_h
#error "BP_ToggleFeaturesPanel__pf3547134495.generated.h already included, missing '#pragma once' in BP_ToggleFeaturesPanel__pf3547134495.h"
#endif
#define NATIVIZEDASSETS_BP_ToggleFeaturesPanel__pf3547134495_generated_h

#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_19_DELEGATE \
struct BP_ToggleFeaturesPanel_C__pf3547134495_event__UxtButtonReleasedDelegate__DelegateSignature__SC_0_Parms \
{ \
	UUxtPressableButtonComponent* bpp__Button__pf; \
	UUxtPointerComponent* bpp__Pointer__pf; \
}; \
static inline void F__UxtButtonReleasedDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __UxtButtonReleasedDelegate__DelegateSignature__SC_0, UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf) \
{ \
	BP_ToggleFeaturesPanel_C__pf3547134495_event__UxtButtonReleasedDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__Button__pf=bpp__Button__pf; \
	Parms.bpp__Pointer__pf=bpp__Pointer__pf; \
	__UxtButtonReleasedDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_SPARSE_DATA
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__RepositionLevel__pf); \
	DECLARE_FUNCTION(execbpf__EventxToggleStats__pfT); \
	DECLARE_FUNCTION(execbpf__EventxHomeReleased__pfT); \
	DECLARE_FUNCTION(execbpf__EventxReposition__pfT); \
	DECLARE_FUNCTION(execbpf__ReceiveEndPlay__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_3);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__RepositionLevel__pf); \
	DECLARE_FUNCTION(execbpf__EventxToggleStats__pfT); \
	DECLARE_FUNCTION(execbpf__EventxHomeReleased__pfT); \
	DECLARE_FUNCTION(execbpf__EventxReposition__pfT); \
	DECLARE_FUNCTION(execbpf__ReceiveEndPlay__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_3);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_EVENT_PARMS \
	struct BP_ToggleFeaturesPanel_C__pf3547134495_eventbpf__ReceiveEndPlay__pf_Parms \
	{ \
		TEnumAsByte<EEndPlayReason::Type> bpp__EndPlayReason__pf; \
	};


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf); \



#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_ToggleFeaturesPanel_C__pf3547134495(); \
	friend struct Z_Construct_UClass_ABP_ToggleFeaturesPanel_C__pf3547134495_Statics; \
public: \
	DECLARE_CLASS(ABP_ToggleFeaturesPanel_C__pf3547134495, ABP_NearMenuBase_C__pf3547134495, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/UXToolsExamples/Common/ToggleFeaturesPanel/BP_ToggleFeaturesPanel"), NO_API) \
	DECLARE_SERIALIZER(ABP_ToggleFeaturesPanel_C__pf3547134495)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABP_ToggleFeaturesPanel_C__pf3547134495(); \
	friend struct Z_Construct_UClass_ABP_ToggleFeaturesPanel_C__pf3547134495_Statics; \
public: \
	DECLARE_CLASS(ABP_ToggleFeaturesPanel_C__pf3547134495, ABP_NearMenuBase_C__pf3547134495, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/UXToolsExamples/Common/ToggleFeaturesPanel/BP_ToggleFeaturesPanel"), NO_API) \
	DECLARE_SERIALIZER(ABP_ToggleFeaturesPanel_C__pf3547134495)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_ToggleFeaturesPanel_C__pf3547134495(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_ToggleFeaturesPanel_C__pf3547134495) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_ToggleFeaturesPanel_C__pf3547134495); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_ToggleFeaturesPanel_C__pf3547134495); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_ToggleFeaturesPanel_C__pf3547134495(ABP_ToggleFeaturesPanel_C__pf3547134495&&); \
	NO_API ABP_ToggleFeaturesPanel_C__pf3547134495(const ABP_ToggleFeaturesPanel_C__pf3547134495&); \
public:


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_ToggleFeaturesPanel_C__pf3547134495(ABP_ToggleFeaturesPanel_C__pf3547134495&&); \
	NO_API ABP_ToggleFeaturesPanel_C__pf3547134495(const ABP_ToggleFeaturesPanel_C__pf3547134495&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_ToggleFeaturesPanel_C__pf3547134495); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_ToggleFeaturesPanel_C__pf3547134495); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_ToggleFeaturesPanel_C__pf3547134495)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_PRIVATE_PROPERTY_OFFSET
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_13_PROLOG \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_EVENT_PARMS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_RPC_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_INCLASS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_INCLASS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_ToggleFeaturesPanel_C__pf3547134495>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_ToggleFeaturesPanel__pf3547134495_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS