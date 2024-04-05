#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableToggleButtonActor.h"
class UUxtTextRenderComponent;
#include "BP_SelectorButton__pf1172471173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/HandMenu/Blueprints/BP_SelectorButton.BP_SelectorButton_C", OverrideNativeName="BP_SelectorButton_C"))
class ABP_SelectorButton_C__pf1172471173 : public AUxtPressableToggleButtonActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DescriptionComponent"))
	UUxtTextRenderComponent* bpv__DescriptionComponent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description Text", Category="Button", MultiLine="true", OverrideNativeName="DescriptionText"))
	FText bpv__DescriptionText__pf;
	ABP_SelectorButton_C__pf1172471173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
