// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtUIElementComponent;
class USoundWave;
class UUxtToggleStateComponent;
#ifdef NATIVIZEDASSETS_BP_TabMusic__pf3087176809_generated_h
#error "BP_TabMusic__pf3087176809.generated.h already included, missing '#pragma once' in BP_TabMusic__pf3087176809.h"
#endif
#define NATIVIZEDASSETS_BP_TabMusic__pf3087176809_generated_h

#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_27_DELEGATE \
struct BP_TabMusic_C__pf3087176809_event__UxtUIElementHideDelegate__DelegateSignature__SC_3_Parms \
{ \
	UUxtUIElementComponent* bpp__UIElement__pf; \
	bool bpp__bShouldAffectLayout__pf; \
}; \
static inline void F__UxtUIElementHideDelegate__DelegateSignature__SC_3_DelegateWrapper(const FScriptDelegate& __UxtUIElementHideDelegate__DelegateSignature__SC_3, UUxtUIElementComponent* bpp__UIElement__pf, bool bpp__bShouldAffectLayout__pf) \
{ \
	BP_TabMusic_C__pf3087176809_event__UxtUIElementHideDelegate__DelegateSignature__SC_3_Parms Parms; \
	Parms.bpp__UIElement__pf=bpp__UIElement__pf; \
	Parms.bpp__bShouldAffectLayout__pf=bpp__bShouldAffectLayout__pf ? true : false; \
	__UxtUIElementHideDelegate__DelegateSignature__SC_3.ProcessDelegate<UObject>(&Parms); \
}


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_25_DELEGATE \
struct BP_TabMusic_C__pf3087176809_event__OnAudioPlaybackPercent__DelegateSignature__SC_2_Parms \
{ \
	const USoundWave* bpp__PlayingSoundWave__pf; \
	float bpp__PlaybackPercent__pf; \
}; \
static inline void F__OnAudioPlaybackPercent__DelegateSignature__SC_2_DelegateWrapper(const FScriptDelegate& __OnAudioPlaybackPercent__DelegateSignature__SC_2, const USoundWave* bpp__PlayingSoundWave__pf, const float bpp__PlaybackPercent__pf) \
{ \
	BP_TabMusic_C__pf3087176809_event__OnAudioPlaybackPercent__DelegateSignature__SC_2_Parms Parms; \
	Parms.bpp__PlayingSoundWave__pf=bpp__PlayingSoundWave__pf; \
	Parms.bpp__PlaybackPercent__pf=bpp__PlaybackPercent__pf; \
	__OnAudioPlaybackPercent__DelegateSignature__SC_2.ProcessDelegate<UObject>(&Parms); \
}


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_23_DELEGATE \
struct BP_TabMusic_C__pf3087176809_event__UxtToggledDelegate__DelegateSignature__SC_1_Parms \
{ \
	UUxtToggleStateComponent* bpp__ToggleState__pf; \
}; \
static inline void F__UxtToggledDelegate__DelegateSignature__SC_1_DelegateWrapper(const FScriptDelegate& __UxtToggledDelegate__DelegateSignature__SC_1, UUxtToggleStateComponent* bpp__ToggleState__pf) \
{ \
	BP_TabMusic_C__pf3087176809_event__UxtToggledDelegate__DelegateSignature__SC_1_Parms Parms; \
	Parms.bpp__ToggleState__pf=bpp__ToggleState__pf; \
	__UxtToggledDelegate__DelegateSignature__SC_1.ProcessDelegate<UObject>(&Parms); \
}


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_21_DELEGATE \
static inline void F__OnAudioFinished__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __OnAudioFinished__DelegateSignature__SC_0) \
{ \
	__OnAudioFinished__DelegateSignature__SC_0.ProcessDelegate<UObject>(NULL); \
}


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_SPARSE_DATA
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UpdateSlider__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__OnPlayPauseToggled__pf); \
	DECLARE_FUNCTION(execbpf__OnAudioFinished__pf); \
	DECLARE_FUNCTION(execbpf__OnUIElementHide__pf); \
	DECLARE_FUNCTION(execbpf__OnAudioPlayback__pf);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UpdateSlider__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__OnPlayPauseToggled__pf); \
	DECLARE_FUNCTION(execbpf__OnAudioFinished__pf); \
	DECLARE_FUNCTION(execbpf__OnUIElementHide__pf); \
	DECLARE_FUNCTION(execbpf__OnAudioPlayback__pf);


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_EVENT_PARMS
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_TabMusic_C__pf3087176809(); \
	friend struct Z_Construct_UClass_ABP_TabMusic_C__pf3087176809_Statics; \
public: \
	DECLARE_CLASS(ABP_TabMusic_C__pf3087176809, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/UXToolsExamples/Button/Blueprints/BP_TabMusic"), NO_API) \
	DECLARE_SERIALIZER(ABP_TabMusic_C__pf3087176809)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABP_TabMusic_C__pf3087176809(); \
	friend struct Z_Construct_UClass_ABP_TabMusic_C__pf3087176809_Statics; \
public: \
	DECLARE_CLASS(ABP_TabMusic_C__pf3087176809, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/UXToolsExamples/Button/Blueprints/BP_TabMusic"), NO_API) \
	DECLARE_SERIALIZER(ABP_TabMusic_C__pf3087176809)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_TabMusic_C__pf3087176809(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_TabMusic_C__pf3087176809) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_TabMusic_C__pf3087176809); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_TabMusic_C__pf3087176809); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_TabMusic_C__pf3087176809(ABP_TabMusic_C__pf3087176809&&); \
	NO_API ABP_TabMusic_C__pf3087176809(const ABP_TabMusic_C__pf3087176809&); \
public:


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_TabMusic_C__pf3087176809(ABP_TabMusic_C__pf3087176809&&); \
	NO_API ABP_TabMusic_C__pf3087176809(const ABP_TabMusic_C__pf3087176809&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_TabMusic_C__pf3087176809); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_TabMusic_C__pf3087176809); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_TabMusic_C__pf3087176809)


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_PRIVATE_PROPERTY_OFFSET
#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_15_PROLOG \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_EVENT_PARMS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_RPC_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_INCLASS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_PRIVATE_PROPERTY_OFFSET \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_SPARSE_DATA \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_CALLBACK_WRAPPERS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_INCLASS_NO_PURE_DECLS \
	GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_TabMusic_C__pf3087176809>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GaPe_Intermediate_Plugins_NativizedAssets_HoloLens_Game_Source_NativizedAssets_Public_BP_TabMusic__pf3087176809_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
