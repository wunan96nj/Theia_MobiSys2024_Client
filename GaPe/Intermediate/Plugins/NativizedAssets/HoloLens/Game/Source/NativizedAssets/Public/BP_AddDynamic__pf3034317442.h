#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
class USplineComponent;
class UTimelineComponent;
class ABP_ScrollingObjectCollection_C__pf3034317442;
class AUxtPressableButtonActor;
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
class AActor;
#include "BP_AddDynamic__pf3034317442.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_AddDynamic.BP_AddDynamic_C", OverrideNativeName="BP_AddDynamic_C"))
class ABP_AddDynamic_C__pf3034317442 : public AUxtPressableButtonActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Spline"))
	USplineComponent* bpv__Spline__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212"))
	float bpv__Timeline_0_NewTrack_0_DC30AA7C4DAD634AE7EF278E3F578212__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_DC30AA7C4DAD634AE7EF278E3F578212__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_AddDynamic", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Scrolling Object Collection", Category="Default", MultiLine="true", OverrideNativeName="ScrollingObjectCollection"))
	ABP_ScrollingObjectCollection_C__pf3034317442* bpv__ScrollingObjectCollection__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Buttons", Category="Default", MultiLine="true", OverrideNativeName="Buttons"))
	TArray<AUxtPressableButtonActor*> bpv__Buttons__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pointer"))
	UUxtPointerComponent* b0l__K2Node_ComponentBoundEvent_Pointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	ABP_AddDynamic_C__pf3034317442(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_AddDynamic__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AddDynamic__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AddDynamic__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AddDynamic__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DoTransition"))
	virtual void bpf__DoTransition__pf(float bpp__Time__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddToCollection"))
	virtual void bpf__AddToCollection__pf(AUxtPressableButtonActor* const& bpp__ActorToAdd__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveButton"))
	virtual void bpf__MoveButton__pf(float bpp__Time__pf, AActor* bpp__ActorToMove__pf);
public:
};
