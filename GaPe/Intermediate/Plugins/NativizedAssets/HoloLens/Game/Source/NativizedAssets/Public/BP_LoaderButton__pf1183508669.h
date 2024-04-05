#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
#include "BP_LoaderButton__pf1183508669.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Loader/Blueprints/BP_LoaderButton.BP_LoaderButton_C", OverrideNativeName="BP_LoaderButton_C"))
class ABP_LoaderButton_C__pf1183508669 : public AUxtPressableButtonActor
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Level Name", Category="Default", MultiLine="true", OverrideNativeName="LevelName"))
	FName bpv__LevelName__pf;
	ABP_LoaderButton_C__pf1183508669(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
