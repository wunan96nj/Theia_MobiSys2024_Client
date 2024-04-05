#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "MRGameMode__pf2645888192.h"
#include "MRGameModeTapToPlace__pf3452490149.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/TapToPlace/Blueprints/MRGameModeTapToPlace.MRGameModeTapToPlace_C", OverrideNativeName="MRGameModeTapToPlace_C"))
class AMRGameModeTapToPlace_C__pf3452490149 : public AMRGameMode_C__pf2645888192
{
public:
	GENERATED_BODY()
	AMRGameModeTapToPlace_C__pf3452490149(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
