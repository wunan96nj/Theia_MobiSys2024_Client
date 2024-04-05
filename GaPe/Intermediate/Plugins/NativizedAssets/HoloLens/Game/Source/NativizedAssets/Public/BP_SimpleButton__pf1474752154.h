#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBasePressableButtonActor.h"
class UStaticMeshComponent;
class USoundBase;
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
#include "BP_SimpleButton__pf1474752154.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXTools/Buttons/Simple/BP_SimpleButton.BP_SimpleButton_C", OverrideNativeName="BP_SimpleButton_C"))
class ABP_SimpleButton_C__pf1474752154 : public AUxtBasePressableButtonActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MovingVisuals"))
	UStaticMeshComponent* bpv__MovingVisuals__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Base"))
	UStaticMeshComponent* bpv__Base__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Color", Category="Default", MultiLine="true", OverrideNativeName="BaseColor"))
	FLinearColor bpv__BaseColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pressed Sound", Category="Button", MultiLine="true", OverrideNativeName="PressedSound"))
	USoundBase* bpv__PressedSound__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Released Sound", Category="Button", MultiLine="true", OverrideNativeName="ReleasedSound"))
	USoundBase* bpv__ReleasedSound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button_5"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pointer_3"))
	UUxtPointerComponent* b0l__K2Node_ComponentBoundEvent_Pointer_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button_4"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pointer_2"))
	UUxtPointerComponent* b0l__K2Node_ComponentBoundEvent_Pointer_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button_3"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pointer_1"))
	UUxtPointerComponent* b0l__K2Node_ComponentBoundEvent_Pointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bWasAlreadyFocused"))
	bool b0l__K2Node_ComponentBoundEvent_bWasAlreadyFocused__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button_2"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pointer"))
	UUxtPointerComponent* b0l__K2Node_ComponentBoundEvent_Pointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsStillFocused"))
	bool b0l__K2Node_ComponentBoundEvent_bIsStillFocused__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button_1"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button_1__pf;
	ABP_SimpleButton_C__pf1474752154(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_SimpleButton__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SimpleButton__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SimpleButton__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SimpleButton__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SimpleButton__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SimpleButton__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SimpleButton__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_5_UxtButtonDisabledDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_5_UxtButtonDisabledDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_4_UxtButtonEnabledDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_4_UxtButtonEnabledDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_3_UxtButtonEndFocusDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_3_UxtButtonEndFocusDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf, bool bpp__bIsStillFocused__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_2_UxtButtonBeginFocusDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_2_UxtButtonBeginFocusDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf, bool bpp__bWasAlreadyFocused__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonReleasedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonReleasedDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateButtonColor"))
	virtual void bpf__UpdateButtonColor__pf();
public:
};
