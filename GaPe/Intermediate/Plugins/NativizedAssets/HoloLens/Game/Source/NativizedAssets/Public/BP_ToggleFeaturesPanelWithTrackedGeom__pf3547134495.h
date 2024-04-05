#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleStateComponent.h"
#include "BP_ToggleFeaturesPanel__pf3547134495.h"
class UARTrackableNotifyComponent;
class UChildActorComponent;
class UUxtToggleStateComponent;
class UARTrackedGeometry;
#include "BP_ToggleFeaturesPanelWithTrackedGeom__pf3547134495.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/ToggleFeaturesPanel/BP_ToggleFeaturesPanelWithTrackedGeom.BP_ToggleFeaturesPanelWithTrackedGeom_C", OverrideNativeName="BP_ToggleFeaturesPanelWithTrackedGeom_C"))
class ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495 : public ABP_ToggleFeaturesPanel_C__pf3547134495
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="//// Delegates", ToolTip="Delegates", OverrideNativeName="UxtToggledDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__UxtToggledDelegate__DelegateSignature__SC_0, UUxtToggleStateComponent* , bpp__ToggleState__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ARTrackableNotify"))
	UARTrackableNotifyComponent* bpv__ARTrackableNotify__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_SurfaceMesh"))
	UChildActorComponent* bpv__Button_SurfaceMesh__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ToggleState"))
	UUxtToggleStateComponent* b2l__K2Node_CustomEvent_ToggleState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtToggledDelegate__DelegateSignature__SC_0 b2l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSurfaceVizToggleState_ToggleStateComponent"))
	UUxtToggleStateComponent* b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_TrackedGeometry"))
	UARTrackedGeometry* b2l__K2Node_ComponentBoundEvent_TrackedGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_1"))
	UUxtToggleStateComponent* b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_2"))
	UUxtToggleStateComponent* b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_2__pf;
	ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_2(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveBeginPlay__pf() override;
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ARTrackableNotify_K2Node_ComponentBoundEvent_0_TrackableDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ARTrackableNotify_K2Node_ComponentBoundEvent_0_TrackableDelegate__DelegateSignature__pf(UARTrackedGeometry* bpp__TrackedGeometry__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SurfaceMeshToggleEvent"))
	virtual void bpf__SurfaceMeshToggleEvent__pf(UUxtToggleStateComponent* bpp__ToggleState__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetAllSurfacesVisible"))
	virtual void bpf__SetAllSurfacesVisible__pf(bool bpp__Visible__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetSurfaceVizToggleState"))
	virtual void bpf__GetSurfaceVizToggleState__pf(/*out*/ UUxtToggleStateComponent*& bpp__ToggleStateComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSurfacesVisible"))
	virtual void bpf__SetSurfacesVisible__pf(bool bpp__bVisible__pf, /*out*/ TArray<UARTrackedGeometry*>& bpp__Geometries__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSurfaceVisible"))
	virtual void bpf__SetSurfaceVisible__pf(bool bpp__bVisible__pf, UARTrackedGeometry* bpp__Geometries__pf);
public:
};
