#include "NativizedAssets.h"
#include "ENiagara_PositionInitializationMode__pf2855420827.h"
FText E__ENiagara_PositionInitializationMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_PositionInitializationMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_PositionInitializationMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[85C9AC10450489F7A2C62487D25111CF]\", \"8F0AA8F9457CA359822F1D9EA707FF30\", \"Unset\")"), Text); break;
		case E__ENiagara_PositionInitializationMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[85C9AC10450489F7A2C62487D25111CF]\", \"A2AEF63942FBDD799D9A6891B290AC0A\", \"Direct Set\")"), Text); break;
		case E__ENiagara_PositionInitializationMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[85C9AC10450489F7A2C62487D25111CF]\", \"55FE0AFC4E754FBADBC32AB1FF0934FA\", \"Simulation Position\")"), Text); break;
		case E__ENiagara_PositionInitializationMode__pf::E__ENiagara_PositionInitializationMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
