#include "NativizedAssets.h"
#include "ENiagaraSystemInactiveMode__pf2855420827.h"
FText E__ENiagaraSystemInactiveMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraSystemInactiveMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraSystemInactiveMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[F915F41B4AC194C35F5CA5B7E1A2FCA1]\", \"64707B4B47CCAFCCDBDA079C9A4F564A\", \"Complete (Let Emitters Finish then Kill The System)\")"), Text); break;
		case E__ENiagaraSystemInactiveMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[F915F41B4AC194C35F5CA5B7E1A2FCA1]\", \"42F22BC54CC1B2AC9C8882A5D4872C6A\", \"Kill (System and Emitters Die Immediately)\")"), Text); break;
		case E__ENiagaraSystemInactiveMode__pf::E__ENiagaraSystemInactiveMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara System Inactive Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
