#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleStateComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtBackPlateComponent;
class UChildActorComponent;
class UUxtToggleGroupComponent;
class USceneComponent;
class UUxtTextRenderComponent;
class ABP_SmallHandMenu_C__pf1172471173;
class ABP_MediumHandMenu_C__pf1172471173;
class ABP_LargeHandMenu_LockOnGrab_C__pf1172471173;
class ABP_LargeHandMenu_LockOnDrop_C__pf1172471173;
class UUxtToggleStateComponent;
#include "BP_SelectorMenu__pf1172471173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/HandMenu/Blueprints/BP_SelectorMenu.BP_SelectorMenu_C", OverrideNativeName="BP_SelectorMenu_C"))
class ABP_SelectorMenu_C__pf1172471173 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="//// Delegates", ToolTip="Delegates", OverrideNativeName="UxtToggledDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__UxtToggledDelegate__DelegateSignature__SC_0, UUxtToggleStateComponent* , bpp__ToggleState__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BackPlate"))
	UUxtBackPlateComponent* bpv__BackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_ToggleGaze"))
	UChildActorComponent* bpv__Button_ToggleGaze__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_ToggleFlatHand"))
	UChildActorComponent* bpv__Button_ToggleFlatHand__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_LargeMenu_LockOnDrop"))
	UChildActorComponent* bpv__Button_LargeMenu_LockOnDrop__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_LargeMenu_LockOnGrab"))
	UChildActorComponent* bpv__Button_LargeMenu_LockOnGrab__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_MediumMenu"))
	UChildActorComponent* bpv__Button_MediumMenu__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtToggleGroup"))
	UUxtToggleGroupComponent* bpv__UxtToggleGroup__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SceneRoot"))
	USceneComponent* bpv__SceneRoot__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_SmallMenu"))
	UChildActorComponent* bpv__Button_SmallMenu__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Title"))
	UUxtTextRenderComponent* bpv__Title__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Small Menu", Category="Hand Menu Actors", MultiLine="true", OverrideNativeName="SmallMenu"))
	ABP_SmallHandMenu_C__pf1172471173* bpv__SmallMenu__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Medium Menu", Category="Hand Menu Actors", MultiLine="true", OverrideNativeName="MediumMenu"))
	ABP_MediumHandMenu_C__pf1172471173* bpv__MediumMenu__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Large Menu Lock on Grab", Category="Hand Menu Actors", MultiLine="true", OverrideNativeName="LargeMenu_LockOnGrab"))
	ABP_LargeHandMenu_LockOnGrab_C__pf1172471173* bpv__LargeMenu_LockOnGrab__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Large Menu Lock on Drop", Category="Hand Menu Actors", MultiLine="true", OverrideNativeName="LargeMenu_LockOnDrop"))
	ABP_LargeHandMenu_LockOnDrop_C__pf1172471173* bpv__LargeMenu_LockOnDrop__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_ToggleGroup"))
	UUxtToggleGroupComponent* b0l__K2Node_ComponentBoundEvent_ToggleGroup__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtToggledDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ToggleState_1"))
	UUxtToggleStateComponent* b0l__K2Node_CustomEvent_ToggleState_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__UxtToggledDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ToggleState"))
	UUxtToggleStateComponent* b0l__K2Node_CustomEvent_ToggleState__pf;
	ABP_SelectorMenu_C__pf1172471173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_SelectorMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SelectorMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SelectorMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SelectorMenu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On Toggle Require Gaze"))
	virtual void bpf__OnxTogglexRequirexGaze__pfTTT(UUxtToggleStateComponent* bpp__ToggleState__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On Toggle Require Flat Hand"))
	virtual void bpf__OnxTogglexRequirexFlatxHand__pfTTTT(UUxtToggleStateComponent* bpp__ToggleState__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtToggleGroup_K2Node_ComponentBoundEvent_0_UxtToggleGroupSelectionChangedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtToggleGroup_K2Node_ComponentBoundEvent_0_UxtToggleGroupSelectionChangedDelegate__DelegateSignature__pf(UUxtToggleGroupComponent* bpp__ToggleGroup__pf);
public:
};
