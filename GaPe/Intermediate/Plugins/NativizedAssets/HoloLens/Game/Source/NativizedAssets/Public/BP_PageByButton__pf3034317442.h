#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtScrollingObjectCollection.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
class ABP_ScrollingObjectCollection_C__pf3034317442;
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
#include "BP_PageByButton__pf3034317442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_PageByButton.BP_PageByButton_C", OverrideNativeName="BP_PageByButton_C"))
class ABP_PageByButton_C__pf3034317442 : public AUxtPressableButtonActor
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Page By", Category="Button", MultiLine="true", OverrideNativeName="PageBy"))
	int32 bpv__PageBy__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Scrolling Object Collection", Category="Button", MultiLine="true", OverrideNativeName="ScrollingObjectCollection"))
	ABP_ScrollingObjectCollection_C__pf3034317442* bpv__ScrollingObjectCollection__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animate to Page", Category="Default", MultiLine="true", OverrideNativeName="Animate To Page"))
	bool bpv__AnimatexToxPage__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pointer"))
	UUxtPointerComponent* b0l__K2Node_ComponentBoundEvent_Pointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_delegate_Variable"))
	FUxtScrollingObjectCollectionOnPaginationEnd b0l__Temp_delegate_Variable__pf;
	ABP_PageByButton_C__pf3034317442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_PageByButton__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonPressedDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
public:
};
