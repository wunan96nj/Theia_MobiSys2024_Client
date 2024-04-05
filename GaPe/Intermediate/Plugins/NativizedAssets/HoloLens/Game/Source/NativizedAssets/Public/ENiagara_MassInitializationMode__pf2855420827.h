#pragma once
#include "ENiagara_MassInitializationMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagara_MassInitializationMode.ENiagara_MassInitializationMode", OverrideNativeName="ENiagara_MassInitializationMode", EnumDisplayNameFn="E__ENiagara_MassInitializationMode__pf__GetUserFriendlyName") )
enum class E__ENiagara_MassInitializationMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagara_MassInitializationMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENiagara_MassInitializationMode::NewEnumerator1"),
	NewEnumerator3 = 2 UMETA(OverrideName = "ENiagara_MassInitializationMode::NewEnumerator3"),
	E__ENiagara_MassInitializationMode__pf_MAX = 3 UMETA(OverrideName = "ENiagara_MassInitializationMode::ENiagara_MAX"),
};
FText E__ENiagara_MassInitializationMode__pf__GetUserFriendlyName(int32 InValue);
