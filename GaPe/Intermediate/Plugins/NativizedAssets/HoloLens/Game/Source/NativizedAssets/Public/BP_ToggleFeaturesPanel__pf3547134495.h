#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "BP_NearMenuBase__pf3547134495.h"
class UChildActorComponent;
class USceneComponent;
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
class AUxtPressableToggleButtonActor;
class AUxtPressableButtonActor;
#include "BP_ToggleFeaturesPanel__pf3547134495.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/ToggleFeaturesPanel/BP_ToggleFeaturesPanel.BP_ToggleFeaturesPanel_C", OverrideNativeName="BP_ToggleFeaturesPanel_C"))
class ABP_ToggleFeaturesPanel_C__pf3547134495 : public ABP_NearMenuBase_C__pf3547134495
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="UxtButtonReleasedDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__UxtButtonReleasedDelegate__DelegateSignature__SC_0, UUxtPressableButtonComponent* , bpp__Button__pf, UUxtPointerComponent* , bpp__Pointer__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_Pin"))
	UChildActorComponent* bpv__Button_Pin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_Reposition"))
	UChildActorComponent* bpv__Button_Reposition__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_Home"))
	UChildActorComponent* bpv__Button_Home__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_Stats"))
	UChildActorComponent* bpv__Button_Stats__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Buttons"))
	USceneComponent* bpv__Buttons__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtButtonReleasedDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__UxtButtonReleasedDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Button_2"))
	UUxtPressableButtonComponent* b1l__K2Node_CustomEvent_Button_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Pointer_2"))
	UUxtPointerComponent* b1l__K2Node_CustomEvent_Pointer_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor"))
	AUxtPressableToggleButtonActor* b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Button_1"))
	UUxtPressableButtonComponent* b1l__K2Node_CustomEvent_Button_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Pointer_1"))
	UUxtPointerComponent* b1l__K2Node_CustomEvent_Pointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUxt_Pressable_Button_Actor"))
	AUxtPressableButtonActor* b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Button"))
	UUxtPressableButtonComponent* b1l__K2Node_CustomEvent_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Pointer"))
	UUxtPointerComponent* b1l__K2Node_CustomEvent_Pointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__UxtButtonReleasedDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_EndPlayReason"))
	TEnumAsByte<EEndPlayReason::Type> b1l__K2Node_Event_EndPlayReason__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1"))
	AUxtPressableButtonActor* b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor_1"))
	AUxtPressableToggleButtonActor* b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	ABP_ToggleFeaturesPanel_C__pf3547134495(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_ToggleFeaturesPanel_3"))
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event to notify blueprints this actor is being deleted or removed from a level. */", DisplayName="End Play", Keywords="delete", ToolTip="Event to notify blueprints this actor is being deleted or removed from a level.", CppFromBpEvent, OverrideNativeName="ReceiveEndPlay"))
	virtual void bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Event Reposition"))
	virtual void bpf__EventxReposition__pfT(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Event HomeReleased"))
	virtual void bpf__EventxHomeReleased__pfT(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Event ToggleStats"))
	virtual void bpf__EventxToggleStats__pfT(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
	virtual void bpf__ReceiveBeginPlay__pf() override;
	virtual void bpf__UserConstructionScript__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RepositionLevel"))
	virtual void bpf__RepositionLevel__pf();
public:
};
