#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleStateComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTargetComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtFaceUserConstraint;
class UUxtGenericManipulatorComponent;
class UUxtFollowComponent;
class UStaticMeshComponent;
class UUxtBackPlateComponent;
class USceneComponent;
class UUxtPressableButtonComponent;
class UUxtToggleStateComponent;
class UUxtGrabTargetComponent;
class UMaterialInstanceDynamic;
#include "BP_NearMenuBase__pf3547134495.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/ToggleFeaturesPanel/BP_NearMenuBase.BP_NearMenuBase_C", OverrideNativeName="BP_NearMenuBase_C"))
class ABP_NearMenuBase_C__pf3547134495 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="//// Delegates", ToolTip="Delegates", OverrideNativeName="UxtToggledDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__UxtToggledDelegate__DelegateSignature__SC_0, UUxtToggleStateComponent* , bpp__ToggleState__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtFaceUserConstraint"))
	UUxtFaceUserConstraint* bpv__UxtFaceUserConstraint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtGenericManipulator"))
	UUxtGenericManipulatorComponent* bpv__UxtGenericManipulator__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtFollow"))
	UUxtFollowComponent* bpv__UxtFollow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabDots_Bottom"))
	UStaticMeshComponent* bpv__GrabDots_Bottom__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabDots_Top"))
	UStaticMeshComponent* bpv__GrabDots_Top__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabDots_Right"))
	UStaticMeshComponent* bpv__GrabDots_Right__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabDots_Left"))
	UStaticMeshComponent* bpv__GrabDots_Left__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBackPlate"))
	UUxtBackPlateComponent* bpv__UxtBackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BackPlate"))
	USceneComponent* bpv__BackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Should Auto Follow", Category="NearMenu", MultiLine="true", OverrideNativeName="ShouldAutoFollow"))
	bool bpv__ShouldAutoFollow__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Auto Follow Radius", Category="NearMenu", MultiLine="true", tooltip="Should the near menu start to follow once a certain distance away.", OverrideNativeName="AutoFollowRadius"))
	float bpv__AutoFollowRadius__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pin Button", Category="Default", MultiLine="true", OverrideNativeName="PinButton"))
	UUxtPressableButtonComponent* bpv__PinButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pin Button State", Category="Default", MultiLine="true", OverrideNativeName="PinButtonState"))
	UUxtToggleStateComponent* bpv__PinButtonState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Horizontal Grab Dots Count", Category="NearMenu", MultiLine="true", OverrideNativeName="HorizontalGrabDotsCount"))
	float bpv__HorizontalGrabDotsCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vertical Grab Dots Count", Category="NearMenu", MultiLine="true", OverrideNativeName="VerticalGrabDotsCount"))
	float bpv__VerticalGrabDotsCount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ToggleState"))
	UUxtToggleStateComponent* b0l__K2Node_CustomEvent_ToggleState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ShouldStartAutoFollow_ShouldStartFollow"))
	bool b0l__CallFunc_ShouldStartAutoFollow_ShouldStartFollow__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtToggledDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable_1"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer_1"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Grabbable"))
	UUxtGrabTargetComponent* b0l__K2Node_ComponentBoundEvent_Grabbable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_GrabPointer"))
	FUxtGrabPointerData b0l__K2Node_ComponentBoundEvent_GrabPointer__pf;
	ABP_NearMenuBase_C__pf3547134495(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_NearMenuBase__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_NearMenuBase__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_NearMenuBase__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_NearMenuBase__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_NearMenuBase__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Event PinToggled"))
	virtual void bpf__EventxPinToggled__pfT(UUxtToggleStateComponent* bpp__ToggleState__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="CreateGrabMaterial"))
	virtual void bpf__CreateGrabMaterial__pf(float bpp__U__pf, float bpp__V__pf, /*out*/ UMaterialInstanceDynamic*& bpp__Material__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="ShouldStartAutoFollow"))
	virtual void bpf__ShouldStartAutoFollow__pf(/*out*/ bool& bpp__ShouldStartFollow__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBeginGrab"))
	virtual void bpf__OnBeginGrab__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnEndGrab"))
	virtual void bpf__OnEndGrab__pf();
public:
};
