#pragma once
#include "ENiagaraEmitterLifeCycleMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraEmitterLifeCycleMode.ENiagaraEmitterLifeCycleMode", OverrideNativeName="ENiagaraEmitterLifeCycleMode", EnumDisplayNameFn="E__ENiagaraEmitterLifeCycleMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraEmitterLifeCycleMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraEmitterLifeCycleMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraEmitterLifeCycleMode::NewEnumerator1"),
	E__ENiagaraEmitterLifeCycleMode__pf_MAX = 2 UMETA(OverrideName = "ENiagaraEmitterLifeCycleMode::ENiagaraEmitterLifeCycleMode_MAX"),
};
FText E__ENiagaraEmitterLifeCycleMode__pf__GetUserFriendlyName(int32 InValue);
