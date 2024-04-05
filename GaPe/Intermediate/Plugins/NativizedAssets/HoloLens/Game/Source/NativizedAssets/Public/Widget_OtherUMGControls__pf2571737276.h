#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UCheckBox;
class UComboBoxString;
class USlider;
class UTextBlock;
#include "Widget_OtherUMGControls__pf2571737276.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Widget/Blueprints/Widget_OtherUMGControls.Widget_OtherUMGControls_C", OverrideNativeName="Widget_OtherUMGControls_C"))
class UWidget_OtherUMGControls_C__pf2571737276 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_81", Category="Widget_OtherUMGControls", OverrideNativeName="Button_81"))
	UButton* bpv__Button_81__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_130", Category="Widget_OtherUMGControls", OverrideNativeName="CheckBox_130"))
	UCheckBox* bpv__CheckBox_130__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ComboBoxString_144", Category="Widget_OtherUMGControls", OverrideNativeName="ComboBoxString_144"))
	UComboBoxString* bpv__ComboBoxString_144__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_108", Category="Widget_OtherUMGControls", OverrideNativeName="Slider_108"))
	USlider* bpv__Slider_108__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_356", OverrideNativeName="TextBlock_356"))
	UTextBlock* bpv__TextBlock_356__pf;
	UWidget_OtherUMGControls_C__pf2571737276(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_81_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_81_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_108_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_108_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_108_K2Node_ComponentBoundEvent_6_OnControllerCaptureEndEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_6_OnControllerCaptureEndEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Slider_108_K2Node_ComponentBoundEvent_1_OnControllerCaptureBeginEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_1_OnControllerCaptureBeginEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetCheckBoxTextColor"))
	virtual FSlateColor  bpf__GetCheckBoxTextColor__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
