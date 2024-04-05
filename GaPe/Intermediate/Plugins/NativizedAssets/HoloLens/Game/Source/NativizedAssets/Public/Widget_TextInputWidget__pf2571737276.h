#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UEditableTextBox;
class UTextBlock;
#include "Widget_TextInputWidget__pf2571737276.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Widget/Blueprints/Widget_TextInputWidget.Widget_TextInputWidget_C", OverrideNativeName="Widget_TextInputWidget_C"))
class UWidget_TextInputWidget_C__pf2571737276 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_68", Category="Widget_TextInputWidget", OverrideNativeName="Button_68"))
	UButton* bpv__Button_68__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EditableTextBox_126", Category="Widget_TextInputWidget", OverrideNativeName="EditableTextBox_126"))
	UEditableTextBox* bpv__EditableTextBox_126__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_101", OverrideNativeName="TextBlock_101"))
	UTextBlock* bpv__TextBlock_101__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text Value", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="TextValue"))
	FText bpv__TextValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Submitted Text", Category="Default", MultiLine="true", OverrideNativeName="Submitted text"))
	FText bpv__Submittedxtext__pfT;
	UWidget_TextInputWidget_C__pf2571737276(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Widget_TextInputWidget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_TextInputWidget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_TextInputWidget__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_68_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_68_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_68_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_68_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_68_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_68_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual FText  bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ClearSubmittedText"))
	virtual void bpf__ClearSubmittedText__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
