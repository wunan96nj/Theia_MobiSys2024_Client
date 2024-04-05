#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPinchSliderActor.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class AUxtPinchSliderActor;
class UUxtPinchSliderComponent;
class UMaterialInstanceDynamic;
#include "BP_Platonic__pf1924036036.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/Assets/PlatonicSolid/BP_Platonic.BP_Platonic_C", OverrideNativeName="BP_Platonic_C"))
class ABP_Platonic_C__pf1924036036 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="/** Delegate for subscribing to slider value updated events in slider actors. */", ToolTip="Delegate for subscribing to slider value updated events in slider actors.", OverrideNativeName="UxtPinchSliderValueUpdatedDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__UxtPinchSliderValueUpdatedDelegate__DelegateSignature__SC_0, AUxtPinchSliderActor* , bpp__Slider__pf, float , bpp__NewValue__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Platonic"))
	UStaticMeshComponent* bpv__SM_Platonic__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider Red", Category="Default", MultiLine="true", OverrideNativeName="Slider_Red"))
	AUxtPinchSliderActor* bpv__Slider_Red__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slider Comp Ref", Category="Default", MultiLine="true", OverrideNativeName="SliderCompRef"))
	UUxtPinchSliderComponent* bpv__SliderCompRef__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider Green", Category="Default", MultiLine="true", OverrideNativeName="Slider_Green"))
	AUxtPinchSliderActor* bpv__Slider_Green__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider Blue", Category="Default", MultiLine="true", OverrideNativeName="Slider_Blue"))
	AUxtPinchSliderActor* bpv__Slider_Blue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Platonic Dynamic Material", Category="Default", MultiLine="true", OverrideNativeName="PlatonicDynamicMaterial"))
	UMaterialInstanceDynamic* bpv__PlatonicDynamicMaterial__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtPinchSliderValueUpdatedDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Slider"))
	AUxtPinchSliderActor* b0l__K2Node_CustomEvent_Slider__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewValue"))
	float b0l__K2Node_CustomEvent_NewValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<AUxtPinchSliderActor*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AUxtPinchSliderActor* b0l__CallFunc_Array_Get_Item__pf;
	ABP_Platonic_C__pf1924036036(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Platonic__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Platonic__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSliderValueUpdated"))
	virtual void bpf__OnSliderValueUpdated__pf(AUxtPinchSliderActor* bpp__Slider__pf, float bpp__NewValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateColor"))
	virtual void bpf__UpdateColor__pf();
public:
};
