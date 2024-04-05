#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UChildActorComponent;
class UUxtUIElementComponent;
class USceneComponent;
#include "BP_TabNumpad__pf3087176809.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Button/Blueprints/BP_TabNumpad.BP_TabNumpad_C", OverrideNativeName="BP_TabNumpad_C"))
class ABP_TabNumpad_C__pf3087176809 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_."))
	UChildActorComponent* bpv__ChildActor_Button_x__pfF;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_0"))
	UChildActorComponent* bpv__ChildActor_Button_0__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_+/-"))
	UChildActorComponent* bpv__ChildActor_Button_xxx__pfIEG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_1"))
	UChildActorComponent* bpv__ChildActor_Button_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_2"))
	UChildActorComponent* bpv__ChildActor_Button_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_3"))
	UChildActorComponent* bpv__ChildActor_Button_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_6"))
	UChildActorComponent* bpv__ChildActor_Button_6__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_5"))
	UChildActorComponent* bpv__ChildActor_Button_5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_4"))
	UChildActorComponent* bpv__ChildActor_Button_4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_9"))
	UChildActorComponent* bpv__ChildActor_Button_9__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_8"))
	UChildActorComponent* bpv__ChildActor_Button_8__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Button_7"))
	UChildActorComponent* bpv__ChildActor_Button_7__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtUIElement_Tab"))
	UUxtUIElementComponent* bpv__UxtUIElement_Tab__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	ABP_TabNumpad_C__pf3087176809(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
