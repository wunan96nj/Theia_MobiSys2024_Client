#include "NativizedAssets.h"
#include "ENiagaraExecutionStateManagement__pf2855420827.h"
FText E__ENiagaraExecutionStateManagement__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraExecutionStateManagement__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraExecutionStateManagement__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E19043B64A5466E63C72B297D815B792]\", \"A6B43934449ABCA898417CA82E6476F1\", \"Awaken\")"), Text); break;
		case E__ENiagaraExecutionStateManagement__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E19043B64A5466E63C72B297D815B792]\", \"78795E614B9045AEF773069D69855B3F\", \"Sleep and Let Particles Finish\")"), Text); break;
		case E__ENiagaraExecutionStateManagement__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E19043B64A5466E63C72B297D815B792]\", \"8FF043824B6AE85784AE2E9194350C50\", \"Sleep and Clear Particles\")"), Text); break;
		case E__ENiagaraExecutionStateManagement__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E19043B64A5466E63C72B297D815B792]\", \"4F4FFE46460AF7AF1676F4B759D3AC22\", \"Kill Immediately\")"), Text); break;
		case E__ENiagaraExecutionStateManagement__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E19043B64A5466E63C72B297D815B792]\", \"7100C8A241DD77067F083E824104EA93\", \"Kill After Particles Finish\")"), Text); break;
		case E__ENiagaraExecutionStateManagement__pf::E__ENiagaraExecutionStateManagement__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Execution State Management MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
