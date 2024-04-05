#include "NativizedAssets.h"
#include "ENiagara_MassInitializationMode__pf2855420827.h"
FText E__ENiagara_MassInitializationMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_MassInitializationMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_MassInitializationMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[78483FCA4F8AC595EEA2278200168596]\", \"8D76E77A428B0AA5915C31B4E8F9D0AB\", \"Unset / (Mass of 1)\")"), Text); break;
		case E__ENiagara_MassInitializationMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[78483FCA4F8AC595EEA2278200168596]\", \"598490EC47408A97B6178899A9905581\", \"Direct Set\")"), Text); break;
		case E__ENiagara_MassInitializationMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[78483FCA4F8AC595EEA2278200168596]\", \"A94325E74889A6DA8240639BB9BF678B\", \"Random\")"), Text); break;
		case E__ENiagara_MassInitializationMode__pf::E__ENiagara_MassInitializationMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
