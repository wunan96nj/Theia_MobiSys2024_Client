#include "NativizedAssets.h"
#include "ENiagaraEmitterScalabilityMode_Limited__pf2855420827.h"
FText E__ENiagaraEmitterScalabilityMode_Limited__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraEmitterScalabilityMode_Limited__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraEmitterScalabilityMode_Limited__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[65538B9A4F91BBBB61622094DA8BCDE5]\", \"DBFC7C2543EAAE282C2AA388B0D9902C\", \"System\")"), Text); break;
		case E__ENiagaraEmitterScalabilityMode_Limited__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[65538B9A4F91BBBB61622094DA8BCDE5]\", \"409D1C8F4A4B65DA008B19AF49C22061\", \"Self\")"), Text); break;
		case E__ENiagaraEmitterScalabilityMode_Limited__pf::E__ENiagaraEmitterScalabilityMode_Limited__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Emitter Scalability Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
