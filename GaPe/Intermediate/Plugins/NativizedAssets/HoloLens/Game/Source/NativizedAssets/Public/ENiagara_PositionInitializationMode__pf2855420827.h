#pragma once
#include "ENiagara_PositionInitializationMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagara_PositionInitializationMode.ENiagara_PositionInitializationMode", OverrideNativeName="ENiagara_PositionInitializationMode", EnumDisplayNameFn="E__ENiagara_PositionInitializationMode__pf__GetUserFriendlyName") )
enum class E__ENiagara_PositionInitializationMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagara_PositionInitializationMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagara_PositionInitializationMode::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENiagara_PositionInitializationMode::NewEnumerator2"),
	E__ENiagara_PositionInitializationMode__pf_MAX = 3 UMETA(OverrideName = "ENiagara_PositionInitializationMode::ENiagara_MAX"),
};
FText E__ENiagara_PositionInitializationMode__pf__GetUserFriendlyName(int32 InValue);
