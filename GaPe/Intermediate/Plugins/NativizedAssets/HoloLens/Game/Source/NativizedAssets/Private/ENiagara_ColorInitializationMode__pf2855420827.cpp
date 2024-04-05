#include "NativizedAssets.h"
#include "ENiagara_ColorInitializationMode__pf2855420827.h"
FText E__ENiagara_ColorInitializationMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_ColorInitializationMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_ColorInitializationMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CC78DD2D4C0D7DF3E62477A0656BE4F9]\", \"CA202E56484936787214D58C7ED32F16\", \"Unset\")"), Text); break;
		case E__ENiagara_ColorInitializationMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CC78DD2D4C0D7DF3E62477A0656BE4F9]\", \"DF3A1A6E40C75C0EADD2B6915E17AD8D\", \"Direct Set\")"), Text); break;
		case E__ENiagara_ColorInitializationMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CC78DD2D4C0D7DF3E62477A0656BE4F9]\", \"F2621A0F48EB3C760C98CFB47564F4A6\", \"Random Range\")"), Text); break;
		case E__ENiagara_ColorInitializationMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CC78DD2D4C0D7DF3E62477A0656BE4F9]\", \"65239E684A4863CAB30083967D4806C0\", \"Random Hue/Saturation/Value\")"), Text); break;
		case E__ENiagara_ColorInitializationMode__pf::E__ENiagara_ColorInitializationMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
