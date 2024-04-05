#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTargetComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtGenericManipulatorComponent;
class UUxtTextRenderComponent;
class UStaticMeshComponent;
class USceneComponent;
class UUxtGrabTargetComponent;
#include "BP_CheeseManipulator__pf3384542095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Manipulator/Blueprints/BP_CheeseManipulator.BP_CheeseManipulator_C", OverrideNativeName="BP_CheeseManipulator_C"))
class ABP_CheeseManipulator_C__pf3384542095 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtGenericManipulator"))
	UUxtGenericManipulatorComponent* bpv__UxtGenericManipulator__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtTextRender"))
	UUxtTextRenderComponent* bpv__UxtTextRender__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cheese"))
	UStaticMeshComponent* bpv__Cheese__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable_1"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer_1"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer_1__pf;
	ABP_CheeseManipulator_C__pf3384542095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_CheeseManipulator__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CheeseManipulator__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
public:
};
