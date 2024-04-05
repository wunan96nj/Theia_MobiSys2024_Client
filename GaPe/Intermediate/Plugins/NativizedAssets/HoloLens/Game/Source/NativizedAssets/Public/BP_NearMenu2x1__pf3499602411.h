#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_NearMenuBase__pf3547134495.h"
class UChildActorComponent;
class USceneComponent;
#include "BP_NearMenu2x1__pf3499602411.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/NearMenu/Blueprints/BP_NearMenu2x1.BP_NearMenu2x1_C", OverrideNativeName="BP_NearMenu2x1_C"))
class ABP_NearMenu2x1_C__pf3499602411 : public ABP_NearMenuBase_C__pf3547134495
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_Pin"))
	UChildActorComponent* bpv__Button_Pin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_02"))
	UChildActorComponent* bpv__Button_02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button_01"))
	UChildActorComponent* bpv__Button_01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Buttons"))
	USceneComponent* bpv__Buttons__pf;
	ABP_NearMenu2x1_C__pf3499602411(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__UserConstructionScript__pf() override;
public:
};
