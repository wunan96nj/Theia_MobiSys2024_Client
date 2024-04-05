// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoseLink;
struct FTransform;
#ifdef NATIVIZEDASSETS_HandAnimBlueprint__pf1627489016_generated_h
#error "HandAnimBlueprint__pf1627489016.generated.h already included, missing '#pragma once' in HandAnimBlueprint__pf1627489016.h"
#endif
#define NATIVIZEDASSETS_HandAnimBlueprint__pf1627489016_generated_h

#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_SPARSE_DATA
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__AnimGraph__pf); \
	DECLARE_FUNCTION(execbpf__GetTargetHandPose__pf); \
	DECLARE_FUNCTION(execbpf__InitHand__pf); \
	DECLARE_FUNCTION(execbpf__UpdateTargetPose__pf); \
	DECLARE_FUNCTION(execbpf__IncrementBlendAlpha__pf); \
	DECLARE_FUNCTION(execbpf__SetTargetPose__pf); \
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf); \
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf); \
	DECLARE_FUNCTION(execbpf__BlueprintUpdateAnimation__pf); \
	DECLARE_FUNCTION(execbpf__BlueprintBeginPlay__pf);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__AnimGraph__pf); \
	DECLARE_FUNCTION(execbpf__GetTargetHandPose__pf); \
	DECLARE_FUNCTION(execbpf__InitHand__pf); \
	DECLARE_FUNCTION(execbpf__UpdateTargetPose__pf); \
	DECLARE_FUNCTION(execbpf__IncrementBlendAlpha__pf); \
	DECLARE_FUNCTION(execbpf__SetTargetPose__pf); \
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf); \
	DECLARE_FUNCTION(execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf); \
	DECLARE_FUNCTION(execbpf__BlueprintUpdateAnimation__pf); \
	DECLARE_FUNCTION(execbpf__BlueprintBeginPlay__pf);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_EVENT_PARMS \
	struct HandAnimBlueprint_C__pf1627489016_eventbpf__BlueprintUpdateAnimation__pf_Parms \
	{ \
		float bpp__DeltaTimeX__pf; \
	};


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_CALLBACK_WRAPPERS \
	void eventbpf__BlueprintBeginPlay__pf(); \
 \
	void eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf); \



#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandAnimBlueprint_C__pf1627489016(); \
	friend struct Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics; \
public: \
	DECLARE_CLASS(UHandAnimBlueprint_C__pf1627489016, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/UXTools/XRSimulation/HandAnimBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UHandAnimBlueprint_C__pf1627489016) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHandAnimBlueprint_C__pf1627489016(); \
	friend struct Z_Construct_UClass_UHandAnimBlueprint_C__pf1627489016_Statics; \
public: \
	DECLARE_CLASS(UHandAnimBlueprint_C__pf1627489016, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/UXTools/XRSimulation/HandAnimBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UHandAnimBlueprint_C__pf1627489016) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandAnimBlueprint_C__pf1627489016(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandAnimBlueprint_C__pf1627489016) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandAnimBlueprint_C__pf1627489016); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandAnimBlueprint_C__pf1627489016); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandAnimBlueprint_C__pf1627489016(UHandAnimBlueprint_C__pf1627489016&&); \
	NO_API UHandAnimBlueprint_C__pf1627489016(const UHandAnimBlueprint_C__pf1627489016&); \
public:


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandAnimBlueprint_C__pf1627489016(UHandAnimBlueprint_C__pf1627489016&&); \
	NO_API UHandAnimBlueprint_C__pf1627489016(const UHandAnimBlueprint_C__pf1627489016&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandAnimBlueprint_C__pf1627489016); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandAnimBlueprint_C__pf1627489016); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandAnimBlueprint_C__pf1627489016)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_PRIVATE_PROPERTY_OFFSET
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_13_PROLOG \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_EVENT_PARMS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_RPC_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_INCLASS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_INCLASS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UHandAnimBlueprint_C__pf1627489016>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_HandAnimBlueprint__pf1627489016_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
