#include "NativizedAssets.h"
#include "ENiagara_InfiniteLoopDuration__pf2855420827.h"
FText E__ENiagara_InfiniteLoopDuration__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_InfiniteLoopDuration__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_InfiniteLoopDuration__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D2E92CFB4CAE60A0F5345A9E66A0DAC6]\", \"A30E092241F0992AFAFAED9B8BC9C652\", \"Fixed\")"), Text); break;
		case E__ENiagara_InfiniteLoopDuration__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D2E92CFB4CAE60A0F5345A9E66A0DAC6]\", \"56E0AA8B46C852157AE694A845C48CEC\", \"Infinite\")"), Text); break;
		case E__ENiagara_InfiniteLoopDuration__pf::E__ENiagara_InfiniteLoopDuration__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
