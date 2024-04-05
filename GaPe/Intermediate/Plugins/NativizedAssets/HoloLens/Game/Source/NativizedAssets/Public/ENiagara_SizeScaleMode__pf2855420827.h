#pragma once
#include "ENiagara_SizeScaleMode__pf2855420827.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Niagara/Enums/ENiagara_SizeScaleMode.ENiagara_SizeScaleMode", OverrideNativeName="ENiagara_SizeScaleMode", EnumDisplayNameFn="E__ENiagara_SizeScaleMode__pf__GetUserFriendlyName") )
enum class E__ENiagara_SizeScaleMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENiagara_SizeScaleMode::NewEnumerator0"),
	NewEnumerator3 = 1 UMETA(OverrideName = "ENiagara_SizeScaleMode::NewEnumerator3"),
	NewEnumerator1 = 2 UMETA(OverrideName = "ENiagara_SizeScaleMode::NewEnumerator1"),
	NewEnumerator4 = 3 UMETA(OverrideName = "ENiagara_SizeScaleMode::NewEnumerator4"),
	NewEnumerator2 = 4 UMETA(OverrideName = "ENiagara_SizeScaleMode::NewEnumerator2"),
	E__ENiagara_SizeScaleMode__pf_MAX = 5 UMETA(OverrideName = "ENiagara_SizeScaleMode::ENiagara_MAX"),
};
FText E__ENiagara_SizeScaleMode__pf__GetUserFriendlyName(int32 InValue);
