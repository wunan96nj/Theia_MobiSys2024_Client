#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_NearMenuBase__pf3547134495.h"
class UChildActorComponent;
class USceneComponent;
#include "BP_NearMenu4x2__pf3499602411.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/NearMenu/Blueprints/BP_NearMenu4x2.BP_NearMenu4x2_C", OverrideNativeName="BP_NearMenu4x2_C"))
class ABP_NearMenu4x2_C__pf3499602411 : public ABP_NearMenuBase_C__pf3547134495
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_08"))
	UChildActorComponent* bpv__Button_08__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_07"))
	UChildActorComponent* bpv__Button_07__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_06"))
	UChildActorComponent* bpv__Button_06__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_05"))
	UChildActorComponent* bpv__Button_05__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_04"))
	UChildActorComponent* bpv__Button_04__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_03"))
	UChildActorComponent* bpv__Button_03__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_Pin"))
	UChildActorComponent* bpv__Button_Pin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_02"))
	UChildActorComponent* bpv__Button_02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_01"))
	UChildActorComponent* bpv__Button_01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Buttons"))
	USceneComponent* bpv__Buttons__pf;
	ABP_NearMenu4x2_C__pf3499602411(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__UserConstructionScript__pf() override;
public:
};
