#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarHandler.h"
class UUxtFarPointerComponent;
class ABP_FollowComponentDemoActor_C__pf192799414;
class UPrimitiveComponent;
#include "ComponentWorkaround__pf192799414.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Follow/Blueprints/ComponentWorkaround.ComponentWorkaround_C", OverrideNativeName="ComponentWorkaround_C"))
class UComponentWorkaround_C__pf192799414 : public UStaticMeshComponent, public IUxtFarTarget, public IUxtFarHandler
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_5"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_4"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_3"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_2"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Follow_Component_Demo_Actor"))
	ABP_FollowComponentDemoActor_C__pf192799414* b0l__K2Node_DynamicCast_AsBP_Follow_Component_Demo_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Follow_Component_Demo_Actor_1"))
	ABP_FollowComponentDemoActor_C__pf192799414* b0l__K2Node_DynamicCast_AsBP_Follow_Component_Demo_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_1"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_1__pf;
	UComponentWorkaround_C__pf192799414(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ComponentWorkaround__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ComponentWorkaround__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ComponentWorkaround__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ComponentWorkaround__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ComponentWorkaround__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ComponentWorkaround__pf_5(int32 bpp__EntryPoint__pf);
	virtual void OnFarReleased_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	virtual void OnFarPressed_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	virtual void OnUpdatedFarFocus_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	virtual void OnFarDragged_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	virtual void OnExitFarFocus_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	virtual void OnEnterFarFocus_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	virtual bool  IsFarFocusable_Implementation(const UPrimitiveComponent* bpp__Primitive__pf__const) const override;
	bool  bpf__IsFarFocusable__pf_Inner_0(const UPrimitiveComponent* bpp__Primitive__pf__const);
	virtual bool  CanHandleFar_Implementation(UPrimitiveComponent* bpp__Primitive__pf) const override;
	bool  bpf__CanHandleFar__pf_Inner_0(UPrimitiveComponent* bpp__Primitive__pf);
public:
};
