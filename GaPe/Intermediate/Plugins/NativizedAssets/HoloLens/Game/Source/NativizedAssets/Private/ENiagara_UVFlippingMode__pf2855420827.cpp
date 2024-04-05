#include "NativizedAssets.h"
#include "ENiagara_UVFlippingMode__pf2855420827.h"
FText E__ENiagara_UVFlippingMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_UVFlippingMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_UVFlippingMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A197E9F147BAA28C61A38CB121871E63]\", \"4DA9120145B7503DCDC30E8170F60CA3\", \"Unset\")"), Text); break;
		case E__ENiagara_UVFlippingMode__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A197E9F147BAA28C61A38CB121871E63]\", \"6EA182664C63BDB8CA957981D2A4611A\", \"Random X\")"), Text); break;
		case E__ENiagara_UVFlippingMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A197E9F147BAA28C61A38CB121871E63]\", \"AF35264544FDF2BBEE5D3887B0514AB0\", \"Random Y\")"), Text); break;
		case E__ENiagara_UVFlippingMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A197E9F147BAA28C61A38CB121871E63]\", \"FA0E147F43AAF2CC4C26E79183E4ACC4\", \"Random X / Y\")"), Text); break;
		case E__ENiagara_UVFlippingMode__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A197E9F147BAA28C61A38CB121871E63]\", \"B0F6E10E4DF5E9E98E822782F9E24FC1\", \"Custom\")"), Text); break;
		case E__ENiagara_UVFlippingMode__pf::E__ENiagara_UVFlippingMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
