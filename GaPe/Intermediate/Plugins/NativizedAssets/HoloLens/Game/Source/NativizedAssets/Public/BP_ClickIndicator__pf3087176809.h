#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UUxtTextRenderComponent;
class UMaterialInstance;
class AUxtBasePressableButtonActor;
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
#include "BP_ClickIndicator__pf3087176809.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Button/Blueprints/BP_ClickIndicator.BP_ClickIndicator_C", OverrideNativeName="BP_ClickIndicator_C"))
class ABP_ClickIndicator_C__pf3087176809 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="UxtButtonPressedDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(F__UxtButtonPressedDelegate__DelegateSignature__SC_0, UUxtPressableButtonComponent* , bpp__Button__pf, UUxtPointerComponent* , bpp__Pointer__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtTextRender"))
	UUxtTextRenderComponent* bpv__UxtTextRender__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Materials", Category="Default", MultiLine="true", OverrideNativeName="Materials"))
	TArray<UMaterialInstance*> bpv__Materials__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Material Index", Category="Default", MultiLine="true", OverrideNativeName="MaterialIndex"))
	int32 bpv__MaterialIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtButtonPressedDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AUxtBasePressableButtonActor*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AUxtBasePressableButtonActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Button"))
	UUxtPressableButtonComponent* b0l__K2Node_CustomEvent_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Pointer"))
	UUxtPointerComponent* b0l__K2Node_CustomEvent_Pointer__pf;
	ABP_ClickIndicator_C__pf3087176809(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_ClickIndicator__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ClickIndicator__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnButtonPressed"))
	virtual void bpf__OnButtonPressed__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnAnyButtonPressed"))
	virtual void bpf__OnAnyButtonPressed__pf();
public:
};
