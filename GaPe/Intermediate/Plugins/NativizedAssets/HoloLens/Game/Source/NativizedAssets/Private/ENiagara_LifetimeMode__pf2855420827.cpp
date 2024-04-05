#include "NativizedAssets.h"
#include "ENiagara_LifetimeMode__pf2855420827.h"
FText E__ENiagara_LifetimeMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_LifetimeMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_LifetimeMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[397E84D845B04C9B4DAE8D9BA292C609]\", \"54C531A24ACB18D297A6A59381C07DEB\", \"Direct Set\")"), Text); break;
		case E__ENiagara_LifetimeMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[397E84D845B04C9B4DAE8D9BA292C609]\", \"DD53D82140C6FF8BB6C2609B3431D345\", \"Random\")"), Text); break;
		case E__ENiagara_LifetimeMode__pf::E__ENiagara_LifetimeMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
