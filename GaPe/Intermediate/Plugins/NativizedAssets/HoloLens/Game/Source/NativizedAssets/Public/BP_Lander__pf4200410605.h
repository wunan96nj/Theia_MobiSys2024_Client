#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class AUxtPinchSliderActor;
class UUxtPinchSliderComponent;
#include "BP_Lander__pf4200410605.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/Assets/Lander/BP_Lander.BP_Lander_C", OverrideNativeName="BP_Lander_C"))
class ABP_Lander_C__pf4200410605 : public AActor
{
public:
	GENERATED_BODY()
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
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider Actor", Category="Default", MultiLine="true", OverrideNativeName="SliderActor"))
	AUxtPinchSliderActor* bpv__SliderActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	UUxtPinchSliderComponent* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slider Comp Ref", Category="Default", MultiLine="true", OverrideNativeName="SliderCompRef"))
	UUxtPinchSliderComponent* bpv__SliderCompRef__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Slider"))
	AUxtPinchSliderActor* b0l__K2Node_ComponentBoundEvent_Slider__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NewValue"))
	float b0l__K2Node_ComponentBoundEvent_NewValue__pf;
	ABP_Lander_C__pf4200410605(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Lander__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Lander__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__SliderActor_K2Node_ComponentBoundEvent_2_UxtPinchSliderValueUpdatedDelegate__DelegateSignature__pf(AUxtPinchSliderActor* bpp__Slider__pf, float bpp__NewValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateLandingGear"))
	virtual void bpf__UpdateLandingGear__pf();
public:
};
