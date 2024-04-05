#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UTextRenderComponent;
class UUxtBackPlateComponent;
class UStaticMeshComponent;
class USceneComponent;
#include "BP_DescriptionPanel__pf3670844252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/DescriptionPanel/BP_DescriptionPanel.BP_DescriptionPanel_C", OverrideNativeName="BP_DescriptionPanel_C"))
class ABP_DescriptionPanel_C__pf3670844252 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VersionText"))
	UTextRenderComponent* bpv__VersionText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WarningTitleText"))
	UTextRenderComponent* bpv__WarningTitleText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WarningBodyText"))
	UTextRenderComponent* bpv__WarningBodyText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBackPlate"))
	UUxtBackPlateComponent* bpv__UxtBackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BodyText"))
	UTextRenderComponent* bpv__BodyText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TitleText"))
	UTextRenderComponent* bpv__TitleText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Divider"))
	UStaticMeshComponent* bpv__Divider__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Logo"))
	UStaticMeshComponent* bpv__Logo__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Show Experimental Warning", Category="Description Panel", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="ShowExperimentalWarning"))
	bool bpv__ShowExperimentalWarning__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Version Text Format", Category="Default", MultiLine="true", OverrideNativeName="VersionTextFormat"))
	FText bpv__VersionTextFormat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	ABP_DescriptionPanel_C__pf3670844252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_DescriptionPanel__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_DescriptionPanel__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RepositionWord_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_RepositionWord_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowCommitSHA"))
	virtual void bpf__ShowCommitSHA__pf();
public:
};
