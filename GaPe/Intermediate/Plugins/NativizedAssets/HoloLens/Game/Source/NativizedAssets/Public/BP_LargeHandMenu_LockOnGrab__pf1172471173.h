#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTargetComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtFaceUserConstraint;
class UUxtGenericManipulatorComponent;
class UUxtBackPlateComponent;
class UTextRenderComponent;
class UStaticMeshComponent;
class UChildActorComponent;
class UUxtPalmUpConstraintComponent;
class UUxtUIElementComponent;
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
class AUxtPressableButtonActor;
class UUxtGrabTargetComponent;
#include "BP_LargeHandMenu_LockOnGrab__pf1172471173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/HandMenu/Blueprints/BP_LargeHandMenu_LockOnGrab.BP_LargeHandMenu_LockOnGrab_C", OverrideNativeName="BP_LargeHandMenu_LockOnGrab_C"))
class ABP_LargeHandMenu_LockOnGrab_C__pf1172471173 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="UxtButtonPressedDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__UxtButtonPressedDelegate__DelegateSignature__SC_0, UUxtPressableButtonComponent* , bpp__Button__pf, UUxtPointerComponent* , bpp__Pointer__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtFaceUserConstraint"))
	UUxtFaceUserConstraint* bpv__UxtFaceUserConstraint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtGenericManipulator"))
	UUxtGenericManipulatorComponent* bpv__UxtGenericManipulator__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBackPlate"))
	UUxtBackPlateComponent* bpv__UxtBackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Title"))
	UTextRenderComponent* bpv__Title__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Dots_2"))
	UStaticMeshComponent* bpv__Dots_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Dots_1"))
	UStaticMeshComponent* bpv__Dots_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CloseButton"))
	UChildActorComponent* bpv__CloseButton__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Slider_2"))
	UChildActorComponent* bpv__Slider_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Slider_1"))
	UChildActorComponent* bpv__Slider_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_6"))
	UChildActorComponent* bpv__Button_6__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_5"))
	UChildActorComponent* bpv__Button_5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_4"))
	UChildActorComponent* bpv__Button_4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_3"))
	UChildActorComponent* bpv__Button_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_2"))
	UChildActorComponent* bpv__Button_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_1"))
	UChildActorComponent* bpv__Button_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtPalmUpConstraint"))
	UUxtPalmUpConstraintComponent* bpv__UxtPalmUpConstraint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtUIElement"))
	UUxtUIElementComponent* bpv__UxtUIElement__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Active", Category="Hand Menu", MultiLine="true", tooltip="When active, the menu will appear when user\'s palm is up", OverrideNativeName="IsActive"))
	bool bpv__IsActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is World Locked", Category="Hand Menu", MultiLine="true", OverrideNativeName="IsWorldLocked"))
	bool bpv__IsWorldLocked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Grabbed", Category="Hand Menu", MultiLine="true", OverrideNativeName="IsGrabbed"))
	bool bpv__IsGrabbed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtButtonPressedDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Button"))
	UUxtPressableButtonComponent* b0l__K2Node_CustomEvent_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Pointer"))
	UUxtPointerComponent* b0l__K2Node_CustomEvent_Pointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUxt_Pressable_Button_Actor"))
	AUxtPressableButtonActor* b0l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable_1"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer_1"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer__pf;
	ABP_LargeHandMenu_LockOnGrab_C__pf1172471173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_LargeHandMenu_LockOnGrab__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_LargeHandMenu_LockOnGrab__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_LargeHandMenu_LockOnGrab__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_LargeHandMenu_LockOnGrab__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_LargeHandMenu_LockOnGrab__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_LargeHandMenu_LockOnGrab__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_3_UxtEndGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_3_UxtEndGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_2_UxtBeginGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_2_UxtBeginGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On Close Button Released"))
	virtual void bpf__OnxClosexButtonxReleased__pfTTT(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_1_UxtHandConstraintDeactivatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_1_UxtHandConstraintDeactivatedDelegate__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_0_UxtHandConstraintActivatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_0_UxtHandConstraintActivatedDelegate__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Hand Menu", OverrideNativeName="SetWorldLocked"))
	virtual void bpf__SetWorldLocked__pf(bool bpp__NewWorldLocked__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Example Scene", OverrideNativeName="SetActive"))
	virtual void bpf__SetActive__pf(bool bpp__NewActive__pf);
public:
};
