#include "NativizedAssets.h"
#include "ENiagaraChannelCorrelation__pf2855420827.h"
FText E__ENiagaraChannelCorrelation__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraChannelCorrelation__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraChannelCorrelation__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7F8234034126541F4BB632A24E7BA9AB]\", \"18F6784344BB124AB9D906994025F8E2\", \"Link RGBA\")"), Text); break;
		case E__ENiagaraChannelCorrelation__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7F8234034126541F4BB632A24E7BA9AB]\", \"D66A1558402A624F734D048629820C39\", \"Link RGB / Link A\")"), Text); break;
		case E__ENiagaraChannelCorrelation__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7F8234034126541F4BB632A24E7BA9AB]\", \"12B134DE41AD8E96A53C04A5CFFA002B\", \"Random Individual Channels\")"), Text); break;
		case E__ENiagaraChannelCorrelation__pf::E__ENiagaraChannelCorrelation__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Channel Correlation MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
