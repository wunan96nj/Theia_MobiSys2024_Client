#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_TwoWayBlend.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseSnapshot.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseByName.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "HandAnimBlueprint__pf1627489016.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C", OverrideNativeName="HandAnimBlueprint_C"))
class UHandAnimBlueprint_C__pf1627489016 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TwoWayBlend"))
	FAnimNode_TwoWayBlend bpv__AnimGraphNode_TwoWayBlend__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_PoseSnapshot"))
	FAnimNode_PoseSnapshot bpv__AnimGraphNode_PoseSnapshot__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_PoseByName"))
	FAnimNode_PoseByName bpv__AnimGraphNode_PoseByName__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Blend Time", Category="Default", MultiLine="true", OverrideNativeName="BlendTime"))
	float bpv__BlendTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Blend Alpha", Category="Default", MultiLine="true", OverrideNativeName="BlendAlpha"))
	float bpv__BlendAlpha__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Pose", Category="Default", MultiLine="true", OverrideNativeName="TargetPose"))
	FName bpv__TargetPose__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hand", Category="Default", MultiLine="true", OverrideNativeName="Hand"))
	EControllerHand bpv__Hand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Animated Transform", Category="Default", MultiLine="true", OverrideNativeName="bIsAnimatedTransform"))
	bool bpv__bIsAnimatedTransform__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Initial Transform", Category="Default", MultiLine="true", OverrideNativeName="InitialTransform"))
	FTransform bpv__InitialTransform__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Transform Blend Alpha", Category="Default", MultiLine="true", OverrideNativeName="TransformBlendAlpha"))
	float bpv__TransformBlendAlpha__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UHandAnimBlueprint_C__pf1627489016(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TwoWayBlend();
	void __InitAnimNode__AnimGraphNode_PoseSnapshot();
	void __InitAnimNode__AnimGraphNode_PoseByName();
	void bpf__ExecuteUbergraph_HandAnimBlueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HandAnimBlueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HandAnimBlueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_HandAnimBlueprint__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when begin play is called on the owning component */", ToolTip="Executed when begin play is called on the owning component", CppFromBpEvent, OverrideNativeName="BlueprintBeginPlay"))
	virtual void bpf__BlueprintBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetTargetPose"))
	virtual void bpf__SetTargetPose__pf(FName bpp__Name__pf, bool bpp__AnimatedTransform__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IncrementBlendAlpha"))
	virtual void bpf__IncrementBlendAlpha__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateTargetPose"))
	virtual void bpf__UpdateTargetPose__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InitHand"))
	virtual void bpf__InitHand__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetTargetHandPose"))
	virtual void bpf__GetTargetHandPose__pf(/*out*/ FName& bpp__TargetPose__pf, /*out*/ FTransform& bpp__TargetTransform__pf, /*out*/ bool& bpp__bAnimateTransform__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
