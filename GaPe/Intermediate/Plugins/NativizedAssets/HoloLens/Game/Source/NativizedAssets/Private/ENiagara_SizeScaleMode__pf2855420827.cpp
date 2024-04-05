#include "NativizedAssets.h"
#include "ENiagara_SizeScaleMode__pf2855420827.h"
FText E__ENiagara_SizeScaleMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_SizeScaleMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_SizeScaleMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E1BF3CA34D0594E1AA3AA082EA9F1C47]\", \"FAB1E9FF402FCE059EFCAF88A404CC93\", \"Unset\")"), Text); break;
		case E__ENiagara_SizeScaleMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E1BF3CA34D0594E1AA3AA082EA9F1C47]\", \"E3C93E4649FB17CBBBA0F6A38F8E36A8\", \"Uniform\")"), Text); break;
		case E__ENiagara_SizeScaleMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E1BF3CA34D0594E1AA3AA082EA9F1C47]\", \"2A3F7EA541F135C5682C81B198A8C199\", \"Random Uniform\")"), Text); break;
		case E__ENiagara_SizeScaleMode__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E1BF3CA34D0594E1AA3AA082EA9F1C47]\", \"19EAB0B1480517C0B790398338B4C0D7\", \"Non-Uniform\")"), Text); break;
		case E__ENiagara_SizeScaleMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E1BF3CA34D0594E1AA3AA082EA9F1C47]\", \"7D8684474147AF5D378281902B5E38AA\", \"Random Non-Uniform\")"), Text); break;
		case E__ENiagara_SizeScaleMode__pf::E__ENiagara_SizeScaleMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
