#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPinchSliderComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class AActor;
class UUxtPinchSliderComponent;
class UMaterialInstanceDynamic;
#include "BP_Icosahedron__pf2056527485.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/Assets/Icosahedron/BP_Icosahedron.BP_Icosahedron_C", OverrideNativeName="BP_Icosahedron_C"))
class ABP_Icosahedron_C__pf2056527485 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="UxtPinchSliderUpdateValueDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__UxtPinchSliderUpdateValueDelegate__DelegateSignature__SC_0, UUxtPinchSliderComponent* , bpp__Slider__pf, float , bpp__NewValue__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Icosahedron"))
	UStaticMeshComponent* bpv__SM_Icosahedron__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider Red", Category="Default", MultiLine="true", OverrideNativeName="Slider_Red"))
	AActor* bpv__Slider_Red__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slider Comp Ref", Category="Default", MultiLine="true", OverrideNativeName="SliderCompRef"))
	UUxtPinchSliderComponent* bpv__SliderCompRef__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider Green", Category="Default", MultiLine="true", OverrideNativeName="Slider_Green"))
	AActor* bpv__Slider_Green__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Slider Blue", Category="Default", MultiLine="true", OverrideNativeName="Slider_Blue"))
	AActor* bpv__Slider_Blue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Platonic Dynamic Material", Category="Default", MultiLine="true", OverrideNativeName="PlatonicDynamicMaterial"))
	UMaterialInstanceDynamic* bpv__PlatonicDynamicMaterial__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtPinchSliderUpdateValueDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__UxtPinchSliderUpdateValueDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetVectorParameterValue_ReturnValue"))
	FLinearColor b0l__CallFunc_K2_GetVectorParameterValue_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetVectorParameterValue_ReturnValue_1"))
	FLinearColor b0l__CallFunc_K2_GetVectorParameterValue_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetVectorParameterValue_ReturnValue_2"))
	FLinearColor b0l__CallFunc_K2_GetVectorParameterValue_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Slider_2"))
	UUxtPinchSliderComponent* b0l__K2Node_CustomEvent_Slider_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewValue_2"))
	float b0l__K2Node_CustomEvent_NewValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Slider_1"))
	UUxtPinchSliderComponent* b0l__K2Node_CustomEvent_Slider_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewValue_1"))
	float b0l__K2Node_CustomEvent_NewValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor_1"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Slider"))
	UUxtPinchSliderComponent* b0l__K2Node_CustomEvent_Slider__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewValue"))
	float b0l__K2Node_CustomEvent_NewValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor_2"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__UxtPinchSliderUpdateValueDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor_3"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor_3__pf;
	ABP_Icosahedron_C__pf2056527485(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Icosahedron__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Icosahedron__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Icosahedron__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Icosahedron__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateBlueValue"))
	virtual void bpf__UpdateBlueValue__pf(UUxtPinchSliderComponent* bpp__Slider__pf, float bpp__NewValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateGreenValue"))
	virtual void bpf__UpdateGreenValue__pf(UUxtPinchSliderComponent* bpp__Slider__pf, float bpp__NewValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateRedValue"))
	virtual void bpf__UpdateRedValue__pf(UUxtPinchSliderComponent* bpp__Slider__pf, float bpp__NewValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
