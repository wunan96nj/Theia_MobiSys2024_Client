#pragma once
#include "ENiagaraExecutionStateManagement__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraExecutionStateManagement.ENiagaraExecutionStateManagement", OverrideNativeName="ENiagaraExecutionStateManagement", EnumDisplayNameFn="E__ENiagaraExecutionStateManagement__pf__GetUserFriendlyName") )
enum class E__ENiagaraExecutionStateManagement__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraExecutionStateManagement::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraExecutionStateManagement::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENiagaraExecutionStateManagement::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "ENiagaraExecutionStateManagement::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "ENiagaraExecutionStateManagement::NewEnumerator4"),
	E__ENiagaraExecutionStateManagement__pf_MAX = 5 UMETA(OverrideName = "ENiagaraExecutionStateManagement::ENiagaraExecutionStateManagement_MAX"),
};
FText E__ENiagaraExecutionStateManagement__pf__GetUserFriendlyName(int32 InValue);
