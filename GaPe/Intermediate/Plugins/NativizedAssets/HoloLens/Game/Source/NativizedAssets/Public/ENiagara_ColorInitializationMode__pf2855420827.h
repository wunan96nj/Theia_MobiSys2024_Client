#pragma once
#include "ENiagara_ColorInitializationMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagara_ColorInitializationMode.ENiagara_ColorInitializationMode", OverrideNativeName="ENiagara_ColorInitializationMode", EnumDisplayNameFn="E__ENiagara_ColorInitializationMode__pf__GetUserFriendlyName") )
enum class E__ENiagara_ColorInitializationMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagara_ColorInitializationMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagara_ColorInitializationMode::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENiagara_ColorInitializationMode::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "ENiagara_ColorInitializationMode::NewEnumerator3"),
	E__ENiagara_ColorInitializationMode__pf_MAX = 4 UMETA(OverrideName = "ENiagara_ColorInitializationMode::ENiagara_MAX"),
};
FText E__ENiagara_ColorInitializationMode__pf__GetUserFriendlyName(int32 InValue);
