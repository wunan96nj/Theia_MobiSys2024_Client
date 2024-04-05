#include "NativizedAssets.h"
#include "ENiagaraEmitterLifeCycleMode__pf2855420827.h"
FText E__ENiagaraEmitterLifeCycleMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraEmitterLifeCycleMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraEmitterLifeCycleMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1457A1AB4997CF508B3BC2BDADA6D961]\", \"EE33CB3345D717571B02C2BF29DE9BF2\", \"System\")"), Text); break;
		case E__ENiagaraEmitterLifeCycleMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1457A1AB4997CF508B3BC2BDADA6D961]\", \"FA4C280448F071BEC2E7DCBB93AAD39C\", \"Self\")"), Text); break;
		case E__ENiagaraEmitterLifeCycleMode__pf::E__ENiagaraEmitterLifeCycleMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Emitter Life Cycle Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
