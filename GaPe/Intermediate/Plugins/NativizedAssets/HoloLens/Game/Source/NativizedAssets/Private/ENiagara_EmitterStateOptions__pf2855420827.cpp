#include "NativizedAssets.h"
#include "ENiagara_EmitterStateOptions__pf2855420827.h"
FText E__ENiagara_EmitterStateOptions__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_EmitterStateOptions__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_EmitterStateOptions__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B0445FD5480567CC755E43ACB5A7B80E]\", \"64BA41D948A2ACE53757E8B36DDEF806\", \"Infinite\")"), Text); break;
		case E__ENiagara_EmitterStateOptions__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B0445FD5480567CC755E43ACB5A7B80E]\", \"12E2C6E8408AC97FCC70AAB7CF3C85C5\", \"Once\")"), Text); break;
		case E__ENiagara_EmitterStateOptions__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B0445FD5480567CC755E43ACB5A7B80E]\", \"DB83D48F47F0822270D43E8C6437265B\", \"Multiple\")"), Text); break;
		case E__ENiagara_EmitterStateOptions__pf::E__ENiagara_EmitterStateOptions__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
