#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtSurfaceMagnetismComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UUxtSurfaceMagnetismComponent;
class UStaticMeshComponent;
class UTextRenderComponent;
class UMaterialInterface;
#include "BP_SurfaceMagnetism__pf297391046.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/SurfaceMagnetism/Blueprints/BP_SurfaceMagnetism.BP_SurfaceMagnetism_C", OverrideNativeName="BP_SurfaceMagnetism_C"))
class ABP_SurfaceMagnetism_C__pf297391046 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="UxtOnMagnetismStarted__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__UxtOnMagnetismStarted__DelegateSignature__SC_0, UUxtSurfaceMagnetismComponent* , bpp__SurfaceMagnetism__pf);
	UDELEGATE(meta=(OverrideNativeName="UxtOnMagnetismEnded__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__UxtOnMagnetismEnded__DelegateSignature__SC_1, UUxtSurfaceMagnetismComponent* , bpp__SurfaceMagnetism__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtSurfaceMagnetism"))
	UUxtSurfaceMagnetismComponent* bpv__UxtSurfaceMagnetism__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cube"))
	UStaticMeshComponent* bpv__Cube__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender"))
	UTextRenderComponent* bpv__TextRender__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Plane"))
	UStaticMeshComponent* bpv__Plane__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Material", Category="Default", MultiLine="true", OverrideNativeName="BaseMaterial"))
	UMaterialInterface* bpv__BaseMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Highlight Material", Category="Default", MultiLine="true", OverrideNativeName="HighlightMaterial"))
	UMaterialInterface* bpv__HighlightMaterial__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SurfaceMagnetism"))
	UUxtSurfaceMagnetismComponent* b0l__K2Node_CustomEvent_SurfaceMagnetism__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtOnMagnetismStarted__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__UxtOnMagnetismEnded__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SurfaceMagnetism_1"))
	UUxtSurfaceMagnetismComponent* b0l__K2Node_CustomEvent_SurfaceMagnetism_1__pf;
	ABP_SurfaceMagnetism_C__pf297391046(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_SurfaceMagnetism__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SurfaceMagnetism__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_SurfaceMagnetism__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SurfaceMagnetismEnded"))
	virtual void bpf__SurfaceMagnetismEnded__pf(UUxtSurfaceMagnetismComponent* bpp__SurfaceMagnetism__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SurfaceMagnetismStarted"))
	virtual void bpf__SurfaceMagnetismStarted__pf(UUxtSurfaceMagnetismComponent* bpp__SurfaceMagnetism__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
