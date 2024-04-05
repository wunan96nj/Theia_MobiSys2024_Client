#pragma once
#include "ENiagara_LifetimeMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagara_LifetimeMode.ENiagara_LifetimeMode", OverrideNativeName="ENiagara_LifetimeMode", EnumDisplayNameFn="E__ENiagara_LifetimeMode__pf__GetUserFriendlyName") )
enum class E__ENiagara_LifetimeMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagara_LifetimeMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagara_LifetimeMode::NewEnumerator1"),
	E__ENiagara_LifetimeMode__pf_MAX = 2 UMETA(OverrideName = "ENiagara_LifetimeMode::ENiagara_MAX"),
};
FText E__ENiagara_LifetimeMode__pf__GetUserFriendlyName(int32 InValue);
