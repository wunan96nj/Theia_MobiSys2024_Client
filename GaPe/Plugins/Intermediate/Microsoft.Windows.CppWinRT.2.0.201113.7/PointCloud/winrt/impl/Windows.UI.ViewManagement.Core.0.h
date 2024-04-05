// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201113.7

#ifndef WINRT_Windows_UI_ViewManagement_Core_0_H
#define WINRT_Windows_UI_ViewManagement_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct UIContext;
}
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core
{
    enum class CoreInputViewKind : int32_t
    {
        Default = 0,
        Keyboard = 1,
        Handwriting = 2,
        Emoji = 3,
    };
    enum class CoreInputViewOcclusionKind : int32_t
    {
        Docked = 0,
        Floating = 1,
        Overlay = 2,
    };
    enum class CoreInputViewXYFocusTransferDirection : int32_t
    {
        Up = 0,
        Right = 1,
        Down = 2,
        Left = 3,
    };
    struct ICoreInputView;
    struct ICoreInputView2;
    struct ICoreInputView3;
    struct ICoreInputViewOcclusion;
    struct ICoreInputViewOcclusionsChangedEventArgs;
    struct ICoreInputViewStatics;
    struct ICoreInputViewStatics2;
    struct ICoreInputViewTransferringXYFocusEventArgs;
    struct CoreInputView;
    struct CoreInputViewOcclusion;
    struct CoreInputViewOcclusionsChangedEventArgs;
    struct CoreInputViewTransferringXYFocusEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView2>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView3>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputView>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputView> = L"Windows.UI.ViewManagement.Core.CoreInputView";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusion";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> = L"Windows.UI.ViewManagement.Core.CoreInputViewTransferringXYFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewKind> = L"Windows.UI.ViewManagement.Core.CoreInputViewKind";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind> = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionKind";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection> = L"Windows.UI.ViewManagement.Core.CoreInputViewXYFocusTransferDirection";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputView> = L"Windows.UI.ViewManagement.Core.ICoreInputView";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputView2> = L"Windows.UI.ViewManagement.Core.ICoreInputView2";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputView3> = L"Windows.UI.ViewManagement.Core.ICoreInputView3";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics> = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2> = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs> = L"Windows.UI.ViewManagement.Core.ICoreInputViewTransferringXYFocusEventArgs";
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputView>{ 0xC770CD7A,0x7001,0x4C32,{ 0xBF,0x94,0x25,0xC1,0xF5,0x54,0xCB,0xF1 } }; // C770CD7A-7001-4C32-BF94-25C1F554CBF1
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputView2>{ 0x0ED726C1,0xE09A,0x4AE8,{ 0xAE,0xDF,0xDF,0xA4,0x85,0x7D,0x1A,0x01 } }; // 0ED726C1-E09A-4AE8-AEDF-DFA4857D1A01
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputView3>{ 0xBC941653,0x3AB9,0x4849,{ 0x8F,0x58,0x46,0xE7,0xF0,0x35,0x3C,0xFC } }; // BC941653-3AB9-4849-8F58-46E7F0353CFC
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ 0xCC36CE06,0x3865,0x4177,{ 0xB5,0xF5,0x8B,0x65,0xE0,0xB9,0xCE,0x84 } }; // CC36CE06-3865-4177-B5F5-8B65E0B9CE84
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ 0xBE1027E8,0xB3EE,0x4DF7,{ 0x95,0x54,0x89,0xCD,0xC6,0x60,0x82,0xC2 } }; // BE1027E8-B3EE-4DF7-9554-89CDC66082C2
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ 0x7D9B97CD,0xEDBE,0x49CF,{ 0xA5,0x4F,0x33,0x7D,0xE0,0x52,0x90,0x7F } }; // 7D9B97CD-EDBE-49CF-A54F-337DE052907F
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>{ 0x7EBC0862,0xD049,0x4E52,{ 0x87,0xB0,0x1E,0x90,0xE9,0x8C,0x49,0xED } }; // 7EBC0862-D049-4E52-87B0-1E90E98C49ED
    template <> inline constexpr guid guid_v<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ 0x04DE169F,0xBA02,0x4850,{ 0x8B,0x55,0xD8,0x2D,0x03,0xBA,0x6D,0x7F } }; // 04DE169F-BA02-4850-8B55-D82D03BA6D7F
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputView>{ using type = Windows::UI::ViewManagement::Core::ICoreInputView; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs; };
    template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs; };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OcclusionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OcclusionsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetCoreInputViewOcclusions(void**) noexcept = 0;
            virtual int32_t __stdcall TryShowPrimaryView(bool*) noexcept = 0;
            virtual int32_t __stdcall TryHidePrimaryView(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_XYFocusTransferringFromPrimaryView(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_XYFocusTransferringFromPrimaryView(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_XYFocusTransferredToPrimaryView(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_XYFocusTransferredToPrimaryView(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect, int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryShow(bool*) noexcept = 0;
            virtual int32_t __stdcall TryShowWithKind(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall TryHide(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OccludingRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_OcclusionKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Occlusions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Origin(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TransferHandled(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransferHandled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeepPrimaryViewVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeepPrimaryViewVisible(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView
    {
        WINRT_IMPL_AUTO(winrt::event_token) OcclusionsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
        using OcclusionsChanged_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView>::remove_OcclusionsChanged>;
        [[nodiscard]] OcclusionsChanged_revoker OcclusionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) OcclusionsChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>) GetCoreInputViewOcclusions() const;
        WINRT_IMPL_AUTO(bool) TryShowPrimaryView() const;
        WINRT_IMPL_AUTO(bool) TryHidePrimaryView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView2
    {
        WINRT_IMPL_AUTO(winrt::event_token) XYFocusTransferringFromPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
        using XYFocusTransferringFromPrimaryView_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferringFromPrimaryView>;
        [[nodiscard]] XYFocusTransferringFromPrimaryView_revoker XYFocusTransferringFromPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) XYFocusTransferringFromPrimaryView(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) XYFocusTransferredToPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const;
        using XYFocusTransferredToPrimaryView_revoker = impl::event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2, &impl::abi_t<Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferredToPrimaryView>;
        [[nodiscard]] XYFocusTransferredToPrimaryView_revoker XYFocusTransferredToPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) XYFocusTransferredToPrimaryView(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(bool) TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect const& origin, Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection const& direction) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView3
    {
        WINRT_IMPL_AUTO(bool) TryShow() const;
        WINRT_IMPL_AUTO(bool) TryShow(Windows::UI::ViewManagement::Core::CoreInputViewKind const& type) const;
        WINRT_IMPL_AUTO(bool) TryHide() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView3>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) OccludingRect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind) OcclusionKind() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>) Occlusions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::ViewManagement::Core::CoreInputView) GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics2
    {
        WINRT_IMPL_AUTO(Windows::UI::ViewManagement::Core::CoreInputView) GetForUIContext(Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) Origin() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection) Direction() const;
        WINRT_IMPL_AUTO(void) TransferHandled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) TransferHandled() const;
        WINRT_IMPL_AUTO(void) KeepPrimaryViewVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) KeepPrimaryViewVisible() const;
    };
    template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>;
    };
}
#endif
