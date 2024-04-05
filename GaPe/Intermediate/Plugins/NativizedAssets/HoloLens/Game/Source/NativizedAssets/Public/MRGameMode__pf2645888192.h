#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class USceneComponent;
class UARSessionConfig;
#include "MRGameMode__pf2645888192.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Common/GameMode/MRGameMode.MRGameMode_C", OverrideNativeName="MRGameMode_C"))
class AMRGameMode_C__pf2645888192 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enable Spatial Mapping", Category="Default", MultiLine="true", OverrideNativeName="bEnableSpatialMapping"))
	bool bpv__bEnableSpatialMapping__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Capture Toggle Attempts", Category="Default", MultiLine="true", ClampMin="0", OverrideNativeName="MaxCaptureToggleAttempts"))
	int32 bpv__MaxCaptureToggleAttempts__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Capture Toggle Wait Time", Category="Default", MultiLine="true", ClampMin="0.0", OverrideNativeName="CaptureToggleWaitTime"))
	float bpv__CaptureToggleWaitTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Remaining Capture Toggle Attempts", Category="Default", MultiLine="true", OverrideNativeName="RemainingCaptureToggleAttempts"))
	int32 bpv__RemainingCaptureToggleAttempts__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	UARSessionConfig* b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_1"))
	UARSessionConfig* b0l__Temp_object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ToggleARCapture_ReturnValue"))
	bool b0l__CallFunc_ToggleARCapture_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_EndPlayReason"))
	TEnumAsByte<EEndPlayReason::Type> b0l__K2Node_Event_EndPlayReason__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	UARSessionConfig* b0l__K2Node_Select_Default__pf;
	AMRGameMode_C__pf2645888192(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MRGameMode__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MRGameMode__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RetryToggleARCapture"))
	virtual void bpf__RetryToggleARCapture__pf();
	UFUNCTION(meta=(Comment="/** Event to notify blueprints this actor is being deleted or removed from a level. */", DisplayName="End Play", Keywords="delete", ToolTip="Event to notify blueprints this actor is being deleted or removed from a level.", CppFromBpEvent, OverrideNativeName="ReceiveEndPlay"))
	virtual void bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
