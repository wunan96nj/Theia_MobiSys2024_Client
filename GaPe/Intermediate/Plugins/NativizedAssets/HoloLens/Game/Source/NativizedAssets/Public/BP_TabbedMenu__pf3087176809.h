#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleStateComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UChildActorComponent;
class UStaticMeshComponent;
class UUxtBackPlateComponent;
class UUxtUIElementComponent;
class UUxtToggleGroupComponent;
class USceneComponent;
class UUxtToggleStateComponent;
#include "BP_TabbedMenu__pf3087176809.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/UXToolsExamples/Button/Blueprints/BP_TabbedMenu.BP_TabbedMenu_C", OverrideNativeName="BP_TabbedMenu_C"))
class ABP_TabbedMenu_C__pf3087176809 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="//// Delegates", ToolTip="Delegates", OverrideNativeName="UxtToggledDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__UxtToggledDelegate__DelegateSignature__SC_0, UUxtToggleStateComponent* , bpp__ToggleState__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Tab_Checklist"))
	UChildActorComponent* bpv__ChildActor_Tab_Checklist__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Tab_Calendar"))
	UChildActorComponent* bpv__ChildActor_Tab_Calendar__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Tab_Music"))
	UChildActorComponent* bpv__ChildActor_Tab_Music__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Tab_Numpad"))
	UChildActorComponent* bpv__ChildActor_Tab_Numpad__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Toggle_Checklist"))
	UChildActorComponent* bpv__ChildActor_Toggle_Checklist__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Toggle_Calendar"))
	UChildActorComponent* bpv__ChildActor_Toggle_Calendar__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Toggle_Music"))
	UChildActorComponent* bpv__ChildActor_Toggle_Music__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor_Toggle_Numpad"))
	UChildActorComponent* bpv__ChildActor_Toggle_Numpad__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Divider"))
	UStaticMeshComponent* bpv__Divider__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtBackPlate"))
	UUxtBackPlateComponent* bpv__UxtBackPlate__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtUIElement_Menu"))
	UUxtUIElementComponent* bpv__UxtUIElement_Menu__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="UxtToggleGroup"))
	UUxtToggleGroupComponent* bpv__UxtToggleGroup__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__UxtToggledDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UChildActorComponent*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UChildActorComponent* b0l__CallFunc_Array_Get_Item__pf;
	ABP_TabbedMenu_C__pf3087176809(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_TabbedMenu__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On Tab Toggled"))
	virtual void bpf__OnxTabxToggled__pfTT(UUxtToggleStateComponent* bpp__ToggleState__pf);
public:
};
