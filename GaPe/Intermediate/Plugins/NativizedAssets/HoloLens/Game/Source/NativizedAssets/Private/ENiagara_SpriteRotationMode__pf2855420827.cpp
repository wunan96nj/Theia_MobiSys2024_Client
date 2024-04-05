#include "NativizedAssets.h"
#include "ENiagara_SpriteRotationMode__pf2855420827.h"
FText E__ENiagara_SpriteRotationMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_SpriteRotationMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_SpriteRotationMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B8145661477567FC023CB9958A4B718F]\", \"1DF3924145282F38CB1AFB80AE90043B\", \"Unset\")"), Text); break;
		case E__ENiagara_SpriteRotationMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B8145661477567FC023CB9958A4B718F]\", \"C4DCCCE64E36953D88954698F18EACA8\", \"Random\")"), Text); break;
		case E__ENiagara_SpriteRotationMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B8145661477567FC023CB9958A4B718F]\", \"D58F1F0D46BC9B6CB18060B446F72DA7\", \"Direct Angle (Degrees)\")"), Text); break;
		case E__ENiagara_SpriteRotationMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B8145661477567FC023CB9958A4B718F]\", \"D406A5694BAA31E2BC32B9986BE954A8\", \"Direct Normalized Angle (0-1)\")"), Text); break;
		case E__ENiagara_SpriteRotationMode__pf::E__ENiagara_SpriteRotationMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
