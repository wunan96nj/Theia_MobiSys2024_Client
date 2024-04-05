#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPinchSliderActor.h"
#include "BP_HandMenuSlider__pf1172471173.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/HandMenu/Blueprints/BP_HandMenuSlider.BP_HandMenuSlider_C", OverrideNativeName="BP_HandMenuSlider_C"))
class ABP_HandMenuSlider_C__pf1172471173 : public AUxtPinchSliderActor
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Nativize Me", Category="Default", MultiLine="true", tooltip="Workaround for UE-44213", OverrideNativeName="NativizeMe"))
	bool bpv__NativizeMe__pf;
	ABP_HandMenuSlider_C__pf1172471173(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
