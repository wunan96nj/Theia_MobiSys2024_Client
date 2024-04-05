#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtToggleGroupComponent;
class UChildActorComponent;
class UUxtUIElementComponent;
class USceneComponent;
#include "BP_TabCalender__pf3087176809.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Button/Blueprints/BP_TabCalender.BP_TabCalender_C", OverrideNativeName="BP_TabCalender_C"))
class ABP_TabCalender_C__pf3087176809 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtToggleGroup"))
	UUxtToggleGroupComponent* bpv__UxtToggleGroup__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Radio_Friday"))
	UChildActorComponent* bpv__ChildActor_Radio_Friday__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Radio_Thursday"))
	UChildActorComponent* bpv__ChildActor_Radio_Thursday__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Radio_Wednesday"))
	UChildActorComponent* bpv__ChildActor_Radio_Wednesday__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Radio_Tuesday"))
	UChildActorComponent* bpv__ChildActor_Radio_Tuesday__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Radio_Monday"))
	UChildActorComponent* bpv__ChildActor_Radio_Monday__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtUIElement_Tab"))
	UUxtUIElementComponent* bpv__UxtUIElement_Tab__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	ABP_TabCalender_C__pf3087176809(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
