#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtScrollingObjectCollection.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtBackPlateComponent;
class UUxtScrollingObjectCollection;
class UTextRenderComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class AActor;
#include "BP_ScrollingObjectCollection_SortByButtonLabel__pf3034317442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_ScrollingObjectCollection_SortByButtonLabel.BP_ScrollingObjectCollection_SortByButtonLabel_C", OverrideNativeName="BP_ScrollingObjectCollection_SortByButtonLabel_C"))
class ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBackPlate"))
	UUxtBackPlateComponent* bpv__UxtBackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtScrollingObjectCollection"))
	UUxtScrollingObjectCollection* bpv__UxtScrollingObjectCollection__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Icons", Category="Default", MultiLine="true", OverrideNativeName="Icons"))
	TArray<UTextRenderComponent*> bpv__Icons__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Labels", Category="Default", MultiLine="true", OverrideNativeName="Labels"))
	TArray<UTextRenderComponent*> bpv__Labels__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Frontpanels", Category="Default", MultiLine="true", OverrideNativeName="Frontpanels"))
	TArray<UStaticMeshComponent*> bpv__Frontpanels__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Icon MIDs", Category="Default", MultiLine="true", OverrideNativeName="IconMIDs"))
	TArray<UMaterialInstanceDynamic*> bpv__IconMIDs__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Label MIDs", Category="Default", MultiLine="true", OverrideNativeName="LabelMIDs"))
	TArray<UMaterialInstanceDynamic*> bpv__LabelMIDs__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Frontpanel MIDs", Category="Default", MultiLine="true", OverrideNativeName="FrontpanelMIDs"))
	TArray<UMaterialInstanceDynamic*> bpv__FrontpanelMIDs__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Menu Bounds", Category="Default", MultiLine="true", OverrideNativeName="MenuBounds"))
	FLinearColor bpv__MenuBounds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Properties"))
	FScrollingCollectionProperties b0l__K2Node_ComponentBoundEvent_Properties__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_1"))
	float b0l__CallFunc_BreakVector_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_1"))
	float b0l__CallFunc_BreakVector_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_1"))
	float b0l__CallFunc_BreakVector_Z_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature"))
	virtual void bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf(FScrollingCollectionProperties const& bpp__Properties__pf__const);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(CallInEditor="true", Category, OverrideNativeName="CompareActorPairByLabel"))
	virtual bool  bpf__CompareActorPairByLabel__pf(const AActor* bpp__LHS__pf__const, const AActor* bpp__RHS__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Button Mask"))
	virtual void bpf__SetxButtonxMask__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update Button Mask"))
	virtual void bpf__UpdatexButtonxMask__pfTT();
public:
};
