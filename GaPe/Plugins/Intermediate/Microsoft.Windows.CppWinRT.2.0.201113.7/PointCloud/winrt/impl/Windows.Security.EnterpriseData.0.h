// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201113.7

#ifndef WINRT_Windows_Security_EnterpriseData_0_H
#define WINRT_Windows_Security_EnterpriseData_0_H
WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData
{
    enum class ProtectionPolicyEvaluationResult : int32_t
    {
        Allowed = 0,
        Blocked = 1,
        ConsentRequired = 2,
    };
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> = L"Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult";
}
#endif