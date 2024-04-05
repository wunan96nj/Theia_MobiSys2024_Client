#include "NativizedAssets.h"
#include "ENiagaraRandomnessEvaluation__pf2855420827.h"
FText E__ENiagaraRandomnessEvaluation__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraRandomnessEvaluation__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraRandomnessEvaluation__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9F2B5CD04DB2E4D2903E52AFB7585AAD]\", \"A18CF9DA4BFB3A2244B978A992D6EB5A\", \"Spawn Only\")"), Text); break;
		case E__ENiagaraRandomnessEvaluation__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9F2B5CD04DB2E4D2903E52AFB7585AAD]\", \"20843AF24DED2633BC873683D32B31D6\", \"Every Frame\")"), Text); break;
		case E__ENiagaraRandomnessEvaluation__pf::E__ENiagaraRandomnessEvaluation__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Randomness Evaluation MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
