#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UChildActorComponent;
class UUxtUIElementComponent;
class USceneComponent;
#include "BP_TabChecklist__pf3087176809.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Button/Blueprints/BP_TabChecklist.BP_TabChecklist_C", OverrideNativeName="BP_TabChecklist_C"))
class ABP_TabChecklist_C__pf3087176809 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Check_ChocolateChips"))
	UChildActorComponent* bpv__ChildActor_Check_ChocolateChips__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Check_Butter"))
	UChildActorComponent* bpv__ChildActor_Check_Butter__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Check_Eggs"))
	UChildActorComponent* bpv__ChildActor_Check_Eggs__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Check_Sugar"))
	UChildActorComponent* bpv__ChildActor_Check_Sugar__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Check_Flour"))
	UChildActorComponent* bpv__ChildActor_Check_Flour__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtUIElement_Tab"))
	UUxtUIElementComponent* bpv__UxtUIElement_Tab__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	ABP_TabChecklist_C__pf3087176809(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
