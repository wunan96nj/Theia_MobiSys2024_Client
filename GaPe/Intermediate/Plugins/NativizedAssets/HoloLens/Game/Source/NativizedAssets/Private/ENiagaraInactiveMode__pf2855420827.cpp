#include "NativizedAssets.h"
#include "ENiagaraInactiveMode__pf2855420827.h"
FText E__ENiagaraInactiveMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraInactiveMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraInactiveMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FE355CE44B63425242B9BDA069DE85EF]\", \"5EBD08D148F241FF6864CB90C99B3926\", \"Complete (Let Particles Finish then Kill Emitter)\")"), Text); break;
		case E__ENiagaraInactiveMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FE355CE44B63425242B9BDA069DE85EF]\", \"3D6E42B442620BADAC1A11A4FD1C9D0C\", \"Kill (Emitter and Particles Die Immediately)\")"), Text); break;
		case E__ENiagaraInactiveMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FE355CE44B63425242B9BDA069DE85EF]\", \"05B6BB4F45E3E7F2B9FC7EB44EA372BD\", \"Continue (Emitter Deactivates But Doesn\\\'t Die Until System Does)\")"), Text); break;
		case E__ENiagaraInactiveMode__pf::E__ENiagaraInactiveMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Inactive Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
