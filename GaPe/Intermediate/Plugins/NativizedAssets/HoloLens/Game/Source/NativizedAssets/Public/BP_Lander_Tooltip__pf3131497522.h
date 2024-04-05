#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UStaticMeshComponent;
class AActor;
class UUxtPinchSliderComponent;
#include "BP_Lander_Tooltip__pf3131497522.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Tooltip/Blueprints/BP_Lander_Tooltip.BP_Lander_Tooltip_C", OverrideNativeName="BP_Lander_Tooltip_C"))
class ABP_Lander_Tooltip_C__pf3131497522 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UpperDockingTunnelTooltipAnchor"))
	USceneComponent* bpv__UpperDockingTunnelTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ForwardEntranceHatchTooltipAnchor"))
	USceneComponent* bpv__ForwardEntranceHatchTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ManipulatorTooltipAnchor"))
	USceneComponent* bpv__ManipulatorTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="EngineSkirtTooltipAnchor"))
	USceneComponent* bpv__EngineSkirtTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LandingGearTooltipAnchor"))
	USceneComponent* bpv__LandingGearTooltipAnchor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Lander_Arm2"))
	UStaticMeshComponent* bpv__Lander_Arm2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Lander_Arm1"))
	UStaticMeshComponent* bpv__Lander_Arm1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Lander_Arm"))
	UStaticMeshComponent* bpv__Lander_Arm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arm2"))
	USceneComponent* bpv__Arm2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arm1"))
	USceneComponent* bpv__Arm1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arm"))
	USceneComponent* bpv__Arm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Lander_Leg2"))
	UStaticMeshComponent* bpv__Lander_Leg2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Lander_Leg1"))
	UStaticMeshComponent* bpv__Lander_Leg1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Lander_Leg"))
	UStaticMeshComponent* bpv__Lander_Leg__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Lander_Chasis"))
	UStaticMeshComponent* bpv__Lander_Chasis__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider", Category="Default", MultiLine="true", OverrideNativeName="Slider"))
	AActor* bpv__Slider__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	UUxtPinchSliderComponent* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slider Comp Ref", Category="Default", MultiLine="true", OverrideNativeName="SliderCompRef"))
	UUxtPinchSliderComponent* bpv__SliderCompRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slider Value", Category="Default", MultiLine="true", OverrideNativeName="SliderValue"))
	float bpv__SliderValue__pf;
	ABP_Lander_Tooltip_C__pf3131497522(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
