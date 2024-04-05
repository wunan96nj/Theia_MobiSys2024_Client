#pragma once
#include "ENiagaraSystemInactiveMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraSystemInactiveMode.ENiagaraSystemInactiveMode", OverrideNativeName="ENiagaraSystemInactiveMode", EnumDisplayNameFn="E__ENiagaraSystemInactiveMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraSystemInactiveMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraSystemInactiveMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraSystemInactiveMode::NewEnumerator1"),
	E__ENiagaraSystemInactiveMode__pf_MAX = 2 UMETA(OverrideName = "ENiagaraSystemInactiveMode::ENiagaraSystemInactiveMode_MAX"),
};
FText E__ENiagaraSystemInactiveMode__pf__GetUserFriendlyName(int32 InValue);
