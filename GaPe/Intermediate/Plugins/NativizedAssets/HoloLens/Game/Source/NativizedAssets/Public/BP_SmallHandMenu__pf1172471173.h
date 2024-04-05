#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtBackPlateComponent;
class UChildActorComponent;
class UUxtPalmUpConstraintComponent;
class UUxtUIElementComponent;
#include "BP_SmallHandMenu__pf1172471173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/HandMenu/Blueprints/BP_SmallHandMenu.BP_SmallHandMenu_C", OverrideNativeName="BP_SmallHandMenu_C"))
class ABP_SmallHandMenu_C__pf1172471173 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBackPlate"))
	UUxtBackPlateComponent* bpv__UxtBackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_3"))
	UChildActorComponent* bpv__Button_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_2"))
	UChildActorComponent* bpv__Button_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_1"))
	UChildActorComponent* bpv__Button_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtPalmUpConstraint"))
	UUxtPalmUpConstraintComponent* bpv__UxtPalmUpConstraint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtUIElement"))
	UUxtUIElementComponent* bpv__UxtUIElement__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Active", Category="Hand Menu", MultiLine="true", tooltip="When active, the menu will appear when user\'s palm is up", OverrideNativeName="IsActive"))
	bool bpv__IsActive__pf;
	ABP_SmallHandMenu_C__pf1172471173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_SmallHandMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SmallHandMenu__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_1_UxtHandConstraintDeactivatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_1_UxtHandConstraintDeactivatedDelegate__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_0_UxtHandConstraintActivatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_0_UxtHandConstraintActivatedDelegate__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Example Scene", OverrideNativeName="SetActive"))
	virtual void bpf__SetActive__pf(bool bpp__NewActive__pf);
public:
};
