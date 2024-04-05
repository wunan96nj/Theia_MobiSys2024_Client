#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBoundsControlConfig.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTargetComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtGenericManipulatorComponent;
class UUxtBackPlateComponent;
class UStaticMeshComponent;
class UUxtBoundsControlComponent;
class USceneComponent;
class USoundBase;
class UMaterialInterface;
class UUxtGrabTargetComponent;
#include "BP_Slate2D__pf2124240069.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/BoundsControl/Blueprints/BP_Slate2D.BP_Slate2D_C", OverrideNativeName="BP_Slate2D_C"))
class ABP_Slate2D_C__pf2124240069 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtGenericManipulator"))
	UUxtGenericManipulatorComponent* bpv__UxtGenericManipulator__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBackPlate"))
	UUxtBackPlateComponent* bpv__UxtBackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoundControl"))
	UStaticMeshComponent* bpv__BoundControl__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBoundsControl"))
	UUxtBoundsControlComponent* bpv__UxtBoundsControl__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Actor Transform", Category="Default", MultiLine="true", OverrideNativeName="DefaultActorTransform"))
	FTransform bpv__DefaultActorTransform__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Show Bound Control", Category="Default", MultiLine="true", OverrideNativeName="ShowBoundControl"))
	bool bpv__ShowBoundControl__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grabbed Sound", Category="Default", MultiLine="true", OverrideNativeName="GrabbedSound"))
	USoundBase* bpv__GrabbedSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Released Sound", Category="Default", MultiLine="true", OverrideNativeName="ReleasedSound"))
	USoundBase* bpv__ReleasedSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bounds Material", Category="Default", MultiLine="true", OverrideNativeName="BoundsMaterial"))
	UMaterialInterface* bpv__BoundsMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bounds Grabbed Material", Category="Default", MultiLine="true", OverrideNativeName="BoundsGrabbedMaterial"))
	UMaterialInterface* bpv__BoundsGrabbedMaterial__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Manipulator_1"))
	UUxtBoundsControlComponent* b0l__K2Node_ComponentBoundEvent_Manipulator_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_AffordanceInfo_1"))
	FUxtAffordanceConfig b0l__K2Node_ComponentBoundEvent_AffordanceInfo_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabbedComponent_1"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_GrabbedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Manipulator"))
	UUxtBoundsControlComponent* b0l__K2Node_ComponentBoundEvent_Manipulator__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_AffordanceInfo"))
	FUxtAffordanceConfig b0l__K2Node_ComponentBoundEvent_AffordanceInfo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabbedComponent"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_GrabbedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable_1"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer_1"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer__pf;
	ABP_Slate2D_C__pf2124240069(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Slate2D__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Slate2D__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Slate2D__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_3_UxtEndGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_3_UxtEndGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_2_UxtBeginGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_2_UxtBeginGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtBoundsControl_K2Node_ComponentBoundEvent_1_UxtBoundsControlManipulationEndedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtBoundsControl_K2Node_ComponentBoundEvent_1_UxtBoundsControlManipulationEndedDelegate__DelegateSignature__pf(UUxtBoundsControlComponent* bpp__Manipulator__pf, FUxtAffordanceConfig const& bpp__AffordanceInfo__pf__const, UUxtGrabTargetComponent* bpp__GrabbedComponent__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtBoundsControl_K2Node_ComponentBoundEvent_0_UxtBoundsControlManipulationStartedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtBoundsControl_K2Node_ComponentBoundEvent_0_UxtBoundsControlManipulationStartedDelegate__DelegateSignature__pf(UUxtBoundsControlComponent* bpp__Manipulator__pf, FUxtAffordanceConfig const& bpp__AffordanceInfo__pf__const, UUxtGrabTargetComponent* bpp__GrabbedComponent__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
