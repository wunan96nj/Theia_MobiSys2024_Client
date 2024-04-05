#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UTextRenderComponent;
#include "BP_DescriptionText__pf2124240069.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/BoundsControl/Blueprints/BP_DescriptionText.BP_DescriptionText_C", OverrideNativeName="BP_DescriptionText_C"))
class ABP_DescriptionText_C__pf2124240069 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender1"))
	UTextRenderComponent* bpv__TextRender1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender"))
	UTextRenderComponent* bpv__TextRender__pf;
	ABP_DescriptionText_C__pf2124240069(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
