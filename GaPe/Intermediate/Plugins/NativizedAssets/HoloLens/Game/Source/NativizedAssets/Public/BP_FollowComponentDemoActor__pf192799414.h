#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarHandler.h"
class UUxtTextRenderComponent;
class UStaticMeshComponent;
class UComponentWorkaround_C__pf192799414;
class UUxtFollowComponent;
class USceneComponent;
class USoundBase;
class UMaterialInterface;
class UUxtFarPointerComponent;
class UPrimitiveComponent;
#include "BP_FollowComponentDemoActor__pf192799414.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Follow/Blueprints/BP_FollowComponentDemoActor.BP_FollowComponentDemoActor_C", OverrideNativeName="BP_FollowComponentDemoActor_C"))
class ABP_FollowComponentDemoActor_C__pf192799414 : public AActor, public IUxtFarTarget, public IUxtFarHandler
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FollowStatusText"))
	UUxtTextRenderComponent* bpv__FollowStatusText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TitleText"))
	UUxtTextRenderComponent* bpv__TitleText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Logo"))
	UStaticMeshComponent* bpv__Logo__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BackPlate"))
	UComponentWorkaround_C__pf192799414* bpv__BackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtFollow"))
	UUxtFollowComponent* bpv__UxtFollow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Following Text", Category="Default", MultiLine="true", OverrideNativeName="FollowingText"))
	FText bpv__FollowingText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Not Following Text", Category="Default", MultiLine="true", OverrideNativeName="NotFollowingText"))
	FText bpv__NotFollowingText__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Pressed Sound", Category="Default", MultiLine="true", OverrideNativeName="PressedSound"))
	USoundBase* bpv__PressedSound__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Released Sound", Category="Default", MultiLine="true", OverrideNativeName="ReleasedSound"))
	USoundBase* bpv__ReleasedSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Material", Category="Default", MultiLine="true", OverrideNativeName="BaseMaterial"))
	UMaterialInterface* bpv__BaseMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Follow Material", Category="Default", MultiLine="true", OverrideNativeName="FollowMaterial"))
	UMaterialInterface* bpv__FollowMaterial__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_5"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_4"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_3"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_2"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer_1"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Pointer"))
	UUxtFarPointerComponent* b0l__K2Node_Event_Pointer__pf;
	ABP_FollowComponentDemoActor_C__pf192799414(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_FollowComponentDemoActor__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_FollowComponentDemoActor__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_FollowComponentDemoActor__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_FollowComponentDemoActor__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_FollowComponentDemoActor__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_FollowComponentDemoActor__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_FollowComponentDemoActor__pf_6(int32 bpp__EntryPoint__pf);
	virtual void OnFarReleased_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	virtual void OnFarPressed_Implementation(UUxtFarPointerComponent* bpp__Pointer__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Workaround_Released"))
	virtual void bpf__Workaround_Released__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Workaround_Pressed"))
	virtual void bpf__Workaround_Pressed__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
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
