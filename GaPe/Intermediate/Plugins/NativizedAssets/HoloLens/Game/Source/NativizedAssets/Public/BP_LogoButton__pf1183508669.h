#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
class ABP_DescriptionPanel_C__pf3670844252;
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
#include "BP_LogoButton__pf1183508669.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Loader/Blueprints/BP_LogoButton.BP_LogoButton_C", OverrideNativeName="BP_LogoButton_C"))
class ABP_LogoButton_C__pf1183508669 : public AUxtPressableButtonActor
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABP_DescriptionPanel_C__pf3670844252*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_DescriptionPanel_C__pf3670844252* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Button"))
	UUxtPressableButtonComponent* b0l__K2Node_ComponentBoundEvent_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pointer"))
	UUxtPointerComponent* b0l__K2Node_ComponentBoundEvent_Pointer__pf;
	ABP_LogoButton_C__pf1183508669(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_LogoButton__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonReleasedDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf);
public:
};
