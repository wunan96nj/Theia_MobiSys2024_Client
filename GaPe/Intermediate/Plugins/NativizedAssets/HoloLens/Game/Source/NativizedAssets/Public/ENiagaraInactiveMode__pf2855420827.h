#pragma once
#include "ENiagaraInactiveMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagaraInactiveMode.ENiagaraInactiveMode", OverrideNativeName="ENiagaraInactiveMode", EnumDisplayNameFn="E__ENiagaraInactiveMode__pf__GetUserFriendlyName") )
enum class E__ENiagaraInactiveMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagaraInactiveMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagaraInactiveMode::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENiagaraInactiveMode::NewEnumerator2"),
	E__ENiagaraInactiveMode__pf_MAX = 3 UMETA(OverrideName = "ENiagaraInactiveMode::ENiagaraInactiveMode_MAX"),
};
FText E__ENiagaraInactiveMode__pf__GetUserFriendlyName(int32 InValue);
