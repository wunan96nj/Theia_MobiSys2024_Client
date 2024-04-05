#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTargetComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTarget.h"
class UUxtGenericManipulatorComponent;
class USceneComponent;
class UStaticMeshComponent;
class AActor;
class AUxtTooltipActor;
class UUxtGrabTargetComponent;
class UPrimitiveComponent;
#include "BP_EarthCore__pf793232900.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/Assets/EarthCore/BP_EarthCore.BP_EarthCore_C", OverrideNativeName="BP_EarthCore_C"))
class ABP_EarthCore_C__pf793232900 : public AActor, public IUxtGrabTarget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtGenericManipulator"))
	UUxtGenericManipulatorComponent* bpv__UxtGenericManipulator__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="OuterCoreTooltipAnchor"))
	USceneComponent* bpv__OuterCoreTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="InnerCoreTooltipAnchor"))
	USceneComponent* bpv__InnerCoreTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MantleTooltipAnchor"))
	USceneComponent* bpv__MantleTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CrustTooltipAnchor"))
	USceneComponent* bpv__CrustTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="EarthCore"))
	UStaticMeshComponent* bpv__EarthCore__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAttachedActors_OutActors"))
	TArray<AActor*> b0l__CallFunc_GetAttachedActors_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AActor* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUxt_Tooltip_Actor"))
	AUxtTooltipActor* b0l__K2Node_DynamicCast_AsUxt_Tooltip_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUxt_Tooltip_Actor_1"))
	AUxtTooltipActor* b0l__K2Node_DynamicCast_AsUxt_Tooltip_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable_1"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer_1"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer__pf;
	ABP_EarthCore_C__pf793232900(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_EarthCore__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EarthCore__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	virtual bool  IsGrabFocusable_Implementation(const UPrimitiveComponent* bpp__Primitive__pf__const) const override;
	bool  bpf__IsGrabFocusable__pf_Inner_0(const UPrimitiveComponent* bpp__Primitive__pf__const);
public:
};
