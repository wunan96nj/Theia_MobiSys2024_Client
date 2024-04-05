// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201113.7

#ifndef WINRT_Microsoft_MixedReality_EyeTracking_H
#define WINRT_Microsoft_MixedReality_EyeTracking_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201113.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201113.7"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Microsoft.MixedReality.EyeTracking.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::IsRestrictedModeSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->get_IsRestrictedModeSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::OpenAsync(bool restrictedMode) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->OpenAsync(restrictedMode, &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::Close() const
    {
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->Close());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::TrackerSpaceLocatorNodeId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->get_TrackerSpaceLocatorNodeId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::IsVergenceDistanceSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->get_IsVergenceDistanceSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::IsEyeOpennessSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->get_IsEyeOpennessSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::AreLeftAndRightGazesSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->get_AreLeftAndRightGazesSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerFrameRate>) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::SupportedTargetFrameRates() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->get_SupportedTargetFrameRates(&value));
        return Windows::Foundation::Collections::IVectorView<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerFrameRate>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::SetTargetFrameRate(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerFrameRate const& newFramerate) const
    {
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->SetTargetFrameRate(*(void**)(&newFramerate)));
    }
    template <typename D> WINRT_IMPL_AUTO(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::TryGetReadingAtTimestamp(Windows::Foundation::DateTime const& timestamp) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->TryGetReadingAtTimestamp(impl::bind_in(timestamp), &result));
        return Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::TryGetReadingAtSystemRelativeTime(Windows::Foundation::TimeSpan const& time) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->TryGetReadingAtSystemRelativeTime(impl::bind_in(time), &result));
        return Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::TryGetReadingAfterTimestamp(Windows::Foundation::DateTime const& timestamp) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->TryGetReadingAfterTimestamp(impl::bind_in(timestamp), &result));
        return Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTracker<D>::TryGetReadingAfterSystemRelativeTime(Windows::Foundation::TimeSpan const& time) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTracker)->TryGetReadingAfterSystemRelativeTime(impl::bind_in(time), &result));
        return Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerFrameRate<D>::FramesPerSecond() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerFrameRate)->get_FramesPerSecond(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerRawValuesStatics<D>::IsSupported(Microsoft::MixedReality::EyeTracking::EyeGazeTracker const& tracker, winrt::guid const& valueKey) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics)->IsSupported(*(void**)(&tracker), impl::bind_in(valueKey), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerRawValuesStatics<D>::SendCommand(Microsoft::MixedReality::EyeTracking::EyeGazeTracker const& tracker, winrt::guid const& command, array_view<uint8_t const> inBuffer, array_view<uint8_t> outBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics)->SendCommand(*(void**)(&tracker), impl::bind_in(command), inBuffer.size(), get_abi(inBuffer), outBuffer.size(), put_abi(outBuffer)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerRawValuesStatics<D>::TryGetFloat(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, float& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics)->TryGetFloat(*(void**)(&reading), impl::bind_in(valueKey), &value, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerRawValuesStatics<D>::TryGetBool(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, bool& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics)->TryGetBool(*(void**)(&reading), impl::bind_in(valueKey), &value, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerRawValuesStatics<D>::TryGetInt(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, int32_t& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics)->TryGetInt(*(void**)(&reading), impl::bind_in(valueKey), &value, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerRawValuesStatics<D>::TryGetVector3(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, Windows::Foundation::Numerics::float3& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics)->TryGetVector3(*(void**)(&reading), impl::bind_in(valueKey), impl::bind_out(value), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::Timestamp() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->get_Timestamp(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::SystemRelativeTime() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->get_SystemRelativeTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::IsCalibrationValid() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->get_IsCalibrationValid(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::TryGetCombinedEyeGazeInTrackerSpace(Windows::Foundation::Numerics::float3& origin, Windows::Foundation::Numerics::float3& direction) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->TryGetCombinedEyeGazeInTrackerSpace(impl::bind_out(origin), impl::bind_out(direction), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::TryGetLeftEyeGazeInTrackerSpace(Windows::Foundation::Numerics::float3& origin, Windows::Foundation::Numerics::float3& direction) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->TryGetLeftEyeGazeInTrackerSpace(impl::bind_out(origin), impl::bind_out(direction), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::TryGetRightEyeGazeInTrackerSpace(Windows::Foundation::Numerics::float3& origin, Windows::Foundation::Numerics::float3& direction) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->TryGetRightEyeGazeInTrackerSpace(impl::bind_out(origin), impl::bind_out(direction), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::TryGetVergenceDistance(float& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->TryGetVergenceDistance(&value, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::TryGetLeftEyeOpenness(float& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->TryGetLeftEyeOpenness(&value, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerReading<D>::TryGetRightEyeOpenness(float& value) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading)->TryGetRightEyeOpenness(&value, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerAdded(Windows::Foundation::TypedEventHandler<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerWatcher, Microsoft::MixedReality::EyeTracking::EyeGazeTracker> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher)->add_EyeGazeTrackerAdded(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerAdded_revoker consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerWatcher, Microsoft::MixedReality::EyeTracking::EyeGazeTracker> const& handler) const
    {
        return impl::make_event_revoker<D, EyeGazeTrackerAdded_revoker>(this, EyeGazeTrackerAdded(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher)->remove_EyeGazeTrackerAdded(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerRemoved(Windows::Foundation::TypedEventHandler<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerWatcher, Microsoft::MixedReality::EyeTracking::EyeGazeTracker> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher)->add_EyeGazeTrackerRemoved(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerRemoved_revoker consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerWatcher, Microsoft::MixedReality::EyeTracking::EyeGazeTracker> const& handler) const
    {
        return impl::make_event_revoker<D, EyeGazeTrackerRemoved_revoker>(this, EyeGazeTrackerRemoved(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::EyeGazeTrackerRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher)->remove_EyeGazeTrackerRemoved(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::StartAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher)->StartAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_MixedReality_EyeTracking_IEyeGazeTrackerWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher)->Stop());
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTracker> : produce_base<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTracker>
    {
        int32_t __stdcall get_IsRestrictedModeSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRestrictedModeSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenAsync(bool restrictedMode, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().OpenAsync(restrictedMode));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Close() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrackerSpaceLocatorNodeId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TrackerSpaceLocatorNodeId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsVergenceDistanceSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVergenceDistanceSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsEyeOpennessSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEyeOpennessSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AreLeftAndRightGazesSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreLeftAndRightGazesSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedTargetFrameRates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerFrameRate>>(this->shim().SupportedTargetFrameRates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetTargetFrameRate(void* newFramerate) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTargetFrameRate(*reinterpret_cast<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerFrameRate const*>(&newFramerate));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetReadingAtTimestamp(int64_t timestamp, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading>(this->shim().TryGetReadingAtTimestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&timestamp)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetReadingAtSystemRelativeTime(int64_t time, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading>(this->shim().TryGetReadingAtSystemRelativeTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&time)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetReadingAfterTimestamp(int64_t timestamp, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading>(this->shim().TryGetReadingAfterTimestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&timestamp)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetReadingAfterSystemRelativeTime(int64_t time, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading>(this->shim().TryGetReadingAfterSystemRelativeTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&time)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerFrameRate> : produce_base<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerFrameRate>
    {
        int32_t __stdcall get_FramesPerSecond(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().FramesPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValues> : produce_base<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValues>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics> : produce_base<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics>
    {
        int32_t __stdcall IsSupported(void* tracker, winrt::guid valueKey, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported(*reinterpret_cast<Microsoft::MixedReality::EyeTracking::EyeGazeTracker const*>(&tracker), *reinterpret_cast<winrt::guid const*>(&valueKey)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendCommand(void* tracker, winrt::guid command, uint32_t __inBufferSize, uint8_t* inBuffer, uint32_t __outBufferSize, uint8_t* outBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendCommand(*reinterpret_cast<Microsoft::MixedReality::EyeTracking::EyeGazeTracker const*>(&tracker), *reinterpret_cast<winrt::guid const*>(&command), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(inBuffer), reinterpret_cast<uint8_t const *>(inBuffer) + __inBufferSize), array_view<uint8_t>(reinterpret_cast<uint8_t*>(outBuffer), reinterpret_cast<uint8_t*>(outBuffer) + __outBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetFloat(void* reading, winrt::guid valueKey, float* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetFloat(*reinterpret_cast<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const*>(&reading), *reinterpret_cast<winrt::guid const*>(&valueKey), *value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetBool(void* reading, winrt::guid valueKey, bool* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetBool(*reinterpret_cast<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const*>(&reading), *reinterpret_cast<winrt::guid const*>(&valueKey), *value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetInt(void* reading, winrt::guid valueKey, int32_t* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetInt(*reinterpret_cast<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const*>(&reading), *reinterpret_cast<winrt::guid const*>(&valueKey), *value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetVector3(void* reading, winrt::guid valueKey, Windows::Foundation::Numerics::float3* value, bool* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetVector3(*reinterpret_cast<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const*>(&reading), *reinterpret_cast<winrt::guid const*>(&valueKey), *reinterpret_cast<Windows::Foundation::Numerics::float3*>(value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading> : produce_base<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading>
    {
        int32_t __stdcall get_Timestamp(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemRelativeTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().SystemRelativeTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCalibrationValid(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCalibrationValid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetCombinedEyeGazeInTrackerSpace(Windows::Foundation::Numerics::float3* origin, Windows::Foundation::Numerics::float3* direction, bool* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(origin);
            zero_abi<Windows::Foundation::Numerics::float3>(direction);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetCombinedEyeGazeInTrackerSpace(*reinterpret_cast<Windows::Foundation::Numerics::float3*>(origin), *reinterpret_cast<Windows::Foundation::Numerics::float3*>(direction)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetLeftEyeGazeInTrackerSpace(Windows::Foundation::Numerics::float3* origin, Windows::Foundation::Numerics::float3* direction, bool* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(origin);
            zero_abi<Windows::Foundation::Numerics::float3>(direction);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetLeftEyeGazeInTrackerSpace(*reinterpret_cast<Windows::Foundation::Numerics::float3*>(origin), *reinterpret_cast<Windows::Foundation::Numerics::float3*>(direction)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetRightEyeGazeInTrackerSpace(Windows::Foundation::Numerics::float3* origin, Windows::Foundation::Numerics::float3* direction, bool* result) noexcept final try
        {
            zero_abi<Windows::Foundation::Numerics::float3>(origin);
            zero_abi<Windows::Foundation::Numerics::float3>(direction);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetRightEyeGazeInTrackerSpace(*reinterpret_cast<Windows::Foundation::Numerics::float3*>(origin), *reinterpret_cast<Windows::Foundation::Numerics::float3*>(direction)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetVergenceDistance(float* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetVergenceDistance(*value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetLeftEyeOpenness(float* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetLeftEyeOpenness(*value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetRightEyeOpenness(float* value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryGetRightEyeOpenness(*value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher> : produce_base<D, Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher>
    {
        int32_t __stdcall add_EyeGazeTrackerAdded(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EyeGazeTrackerAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerWatcher, Microsoft::MixedReality::EyeTracking::EyeGazeTracker> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EyeGazeTrackerAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EyeGazeTrackerAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EyeGazeTrackerRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EyeGazeTrackerRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Microsoft::MixedReality::EyeTracking::EyeGazeTrackerWatcher, Microsoft::MixedReality::EyeTracking::EyeGazeTracker> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EyeGazeTrackerRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EyeGazeTrackerRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall StartAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::MixedReality::EyeTracking
{
    inline auto EyeGazeTrackerRawValues::IsSupported(Microsoft::MixedReality::EyeTracking::EyeGazeTracker const& tracker, winrt::guid const& valueKey)
    {
        return impl::call_factory<EyeGazeTrackerRawValues, IEyeGazeTrackerRawValuesStatics>([&](IEyeGazeTrackerRawValuesStatics const& f) { return f.IsSupported(tracker, valueKey); });
    }
    inline auto EyeGazeTrackerRawValues::SendCommand(Microsoft::MixedReality::EyeTracking::EyeGazeTracker const& tracker, winrt::guid const& command, array_view<uint8_t const> inBuffer, array_view<uint8_t> outBuffer)
    {
        impl::call_factory<EyeGazeTrackerRawValues, IEyeGazeTrackerRawValuesStatics>([&](IEyeGazeTrackerRawValuesStatics const& f) { return f.SendCommand(tracker, command, inBuffer, outBuffer); });
    }
    inline auto EyeGazeTrackerRawValues::TryGetFloat(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, float& value)
    {
        return impl::call_factory<EyeGazeTrackerRawValues, IEyeGazeTrackerRawValuesStatics>([&](IEyeGazeTrackerRawValuesStatics const& f) { return f.TryGetFloat(reading, valueKey, value); });
    }
    inline auto EyeGazeTrackerRawValues::TryGetBool(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, bool& value)
    {
        return impl::call_factory<EyeGazeTrackerRawValues, IEyeGazeTrackerRawValuesStatics>([&](IEyeGazeTrackerRawValuesStatics const& f) { return f.TryGetBool(reading, valueKey, value); });
    }
    inline auto EyeGazeTrackerRawValues::TryGetInt(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, int32_t& value)
    {
        return impl::call_factory<EyeGazeTrackerRawValues, IEyeGazeTrackerRawValuesStatics>([&](IEyeGazeTrackerRawValuesStatics const& f) { return f.TryGetInt(reading, valueKey, value); });
    }
    inline auto EyeGazeTrackerRawValues::TryGetVector3(Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading const& reading, winrt::guid const& valueKey, Windows::Foundation::Numerics::float3& value)
    {
        return impl::call_factory<EyeGazeTrackerRawValues, IEyeGazeTrackerRawValuesStatics>([&](IEyeGazeTrackerRawValuesStatics const& f) { return f.TryGetVector3(reading, valueKey, value); });
    }
    inline EyeGazeTrackerWatcher::EyeGazeTrackerWatcher() :
        EyeGazeTrackerWatcher(impl::call_factory_cast<EyeGazeTrackerWatcher(*)(Windows::Foundation::IActivationFactory const&), EyeGazeTrackerWatcher>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<EyeGazeTrackerWatcher>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::IEyeGazeTracker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerFrameRate> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValues> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerRawValuesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerReading> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::IEyeGazeTrackerWatcher> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::EyeGazeTracker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::EyeGazeTrackerFrameRate> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::EyeGazeTrackerRawValues> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::EyeGazeTrackerReading> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::MixedReality::EyeTracking::EyeGazeTrackerWatcher> : winrt::impl::hash_base {};
#endif
}
#endif