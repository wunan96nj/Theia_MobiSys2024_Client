#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtUIElementComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleStateComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UChildActorComponent;
class UAudioComponent;
class UUxtUIElementComponent;
class USoundWave;
class UUxtToggleStateComponent;
#include "BP_TabMusic__pf3087176809.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Button/Blueprints/BP_TabMusic.BP_TabMusic_C", OverrideNativeName="BP_TabMusic_C"))
class ABP_TabMusic_C__pf3087176809 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */", ToolTip="called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early", OverrideNativeName="OnAudioFinished__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__OnAudioFinished__DelegateSignature__SC_0);
	UDELEGATE(meta=(Comment="//// Delegates", ToolTip="Delegates", OverrideNativeName="UxtToggledDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__UxtToggledDelegate__DelegateSignature__SC_1, UUxtToggleStateComponent* , bpp__ToggleState__pf);
	UDELEGATE(meta=(Comment="/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.* Computed as samples played divided by total samples, taking into account pitch.* Not currently implemented on all platforms.*/", ToolTip="Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.Computed as samples played divided by total samples, taking into account pitch.Not currently implemented on all platforms.", OverrideNativeName="OnAudioPlaybackPercent__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__OnAudioPlaybackPercent__DelegateSignature__SC_2, const USoundWave* , bpp__PlayingSoundWave__pf, const float , bpp__PlaybackPercent__pf);
	UDELEGATE(meta=(OverrideNativeName="UxtUIElementHideDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__UxtUIElementHideDelegate__DelegateSignature__SC_3, UUxtUIElementComponent* , bpp__UIElement__pf, bool , bpp__bShouldAffectLayout__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh_Thumb"))
	UStaticMeshComponent* bpv__StaticMesh_Thumb__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Max"))
	USceneComponent* bpv__Max__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Min"))
	USceneComponent* bpv__Min__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh_Slider"))
	UStaticMeshComponent* bpv__StaticMesh_Slider__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Text_ElapsedTime"))
	UChildActorComponent* bpv__ChildActor_Text_ElapsedTime__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Check_Heart"))
	UChildActorComponent* bpv__ChildActor_Check_Heart__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Check_PlayPause"))
	UChildActorComponent* bpv__ChildActor_Check_PlayPause__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Audio"))
	UAudioComponent* bpv__Audio__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Text_Header"))
	UChildActorComponent* bpv__ChildActor_Text_Header__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Text_Artist"))
	UChildActorComponent* bpv__ChildActor_Text_Artist__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Text_Title"))
	UChildActorComponent* bpv__ChildActor_Text_Title__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh_Artwork"))
	UStaticMeshComponent* bpv__StaticMesh_Artwork__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtUIElement_Tab"))
	UUxtUIElementComponent* bpv__UxtUIElement_Tab__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PlayingSoundWave"))
	USoundWave* b0l__K2Node_CustomEvent_PlayingSoundWave__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PlaybackPercent"))
	float b0l__K2Node_CustomEvent_PlaybackPercent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnAudioFinished__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__UxtUIElementHideDelegate__DelegateSignature__SC_3 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnAudioPlaybackPercent__DelegateSignature__SC_2 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ToggleState"))
	UUxtToggleStateComponent* b0l__K2Node_CustomEvent_ToggleState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_UIElement"))
	UUxtUIElementComponent* b0l__K2Node_CustomEvent_UIElement__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_bShouldAffectLayout"))
	bool b0l__K2Node_CustomEvent_bShouldAffectLayout__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__UxtToggledDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	ABP_TabMusic_C__pf3087176809(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_TabMusic__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TabMusic__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TabMusic__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TabMusic__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnAudioPlayback"))
	virtual void bpf__OnAudioPlayback__pf(const USoundWave* bpp__PlayingSoundWave__pf__const, const float bpp__PlaybackPercent__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnUIElementHide"))
	virtual void bpf__OnUIElementHide__pf(UUxtUIElementComponent* bpp__UIElement__pf, bool bpp__bShouldAffectLayout__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnAudioFinished"))
	virtual void bpf__OnAudioFinished__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnPlayPauseToggled"))
	virtual void bpf__OnPlayPauseToggled__pf(UUxtToggleStateComponent* bpp__ToggleState__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateSlider"))
	virtual void bpf__UpdateSlider__pf(float bpp__Duration__pf, float bpp__Percent__pf);
public:
};
