// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201113.7

#ifndef WINRT_Windows_Media_Capture_2_H
#define WINRT_Windows_Media_Capture_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    struct MediaCaptureFailedEventHandler : Windows::Foundation::IUnknown
    {
        MediaCaptureFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        MediaCaptureFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> MediaCaptureFailedEventHandler(L lambda);
        template <typename F> MediaCaptureFailedEventHandler(F* function);
        template <typename O, typename M> MediaCaptureFailedEventHandler(O* object, M method);
        template <typename O, typename M> MediaCaptureFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> MediaCaptureFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Capture::MediaCapture const& sender, Windows::Media::Capture::MediaCaptureFailedEventArgs const& errorEventArgs) const;
    };
    struct RecordLimitationExceededEventHandler : Windows::Foundation::IUnknown
    {
        RecordLimitationExceededEventHandler(std::nullptr_t = nullptr) noexcept {}
        RecordLimitationExceededEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RecordLimitationExceededEventHandler(L lambda);
        template <typename F> RecordLimitationExceededEventHandler(F* function);
        template <typename O, typename M> RecordLimitationExceededEventHandler(O* object, M method);
        template <typename O, typename M> RecordLimitationExceededEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RecordLimitationExceededEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Media::Capture::MediaCapture const& sender) const;
    };
    struct WhiteBalanceGain
    {
        double R;
        double G;
        double B;
    };
    inline bool operator==(WhiteBalanceGain const& left, WhiteBalanceGain const& right) noexcept
    {
        return left.R == right.R && left.G == right.G && left.B == right.B;
    }
    inline bool operator!=(WhiteBalanceGain const& left, WhiteBalanceGain const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AdvancedCapturedPhoto : Windows::Media::Capture::IAdvancedCapturedPhoto,
        impl::require<AdvancedCapturedPhoto, Windows::Media::Capture::IAdvancedCapturedPhoto2>
    {
        AdvancedCapturedPhoto(std::nullptr_t) noexcept {}
        AdvancedCapturedPhoto(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAdvancedCapturedPhoto(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdvancedPhotoCapture : Windows::Media::Capture::IAdvancedPhotoCapture
    {
        AdvancedPhotoCapture(std::nullptr_t) noexcept {}
        AdvancedPhotoCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAdvancedPhotoCapture(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppCapture : Windows::Media::Capture::IAppCapture
    {
        AppCapture(std::nullptr_t) noexcept {}
        AppCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IAppCapture(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto SetAllowedAsync(bool allowed);
    };
    struct __declspec(empty_bases) CameraCaptureUI : Windows::Media::Capture::ICameraCaptureUI
    {
        CameraCaptureUI(std::nullptr_t) noexcept {}
        CameraCaptureUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICameraCaptureUI(ptr, take_ownership_from_abi) {}
        CameraCaptureUI();
    };
    struct __declspec(empty_bases) CameraCaptureUIPhotoCaptureSettings : Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings
    {
        CameraCaptureUIPhotoCaptureSettings(std::nullptr_t) noexcept {}
        CameraCaptureUIPhotoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CameraCaptureUIVideoCaptureSettings : Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings
    {
        CameraCaptureUIVideoCaptureSettings(std::nullptr_t) noexcept {}
        CameraCaptureUIVideoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CapturedFrame : Windows::Media::Capture::ICapturedFrame,
        impl::require<CapturedFrame, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap, Windows::Media::Capture::ICapturedFrame2>
    {
        CapturedFrame(std::nullptr_t) noexcept {}
        CapturedFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICapturedFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CapturedFrameControlValues : Windows::Media::Capture::ICapturedFrameControlValues,
        impl::require<CapturedFrameControlValues, Windows::Media::Capture::ICapturedFrameControlValues2>
    {
        CapturedFrameControlValues(std::nullptr_t) noexcept {}
        CapturedFrameControlValues(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICapturedFrameControlValues(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CapturedPhoto : Windows::Media::Capture::ICapturedPhoto
    {
        CapturedPhoto(std::nullptr_t) noexcept {}
        CapturedPhoto(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ICapturedPhoto(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagMediaRecording : Windows::Media::Capture::ILowLagMediaRecording,
        impl::require<LowLagMediaRecording, Windows::Media::Capture::ILowLagMediaRecording2, Windows::Media::Capture::ILowLagMediaRecording3>
    {
        LowLagMediaRecording(std::nullptr_t) noexcept {}
        LowLagMediaRecording(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ILowLagMediaRecording(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoCapture : Windows::Media::Capture::ILowLagPhotoCapture
    {
        LowLagPhotoCapture(std::nullptr_t) noexcept {}
        LowLagPhotoCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ILowLagPhotoCapture(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LowLagPhotoSequenceCapture : Windows::Media::Capture::ILowLagPhotoSequenceCapture
    {
        LowLagPhotoSequenceCapture(std::nullptr_t) noexcept {}
        LowLagPhotoSequenceCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::ILowLagPhotoSequenceCapture(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCapture : Windows::Media::Capture::IMediaCapture,
        impl::require<MediaCapture, Windows::Media::Capture::IMediaCaptureVideoPreview, Windows::Media::Capture::IMediaCapture2, Windows::Foundation::IClosable, Windows::Media::Capture::IMediaCapture3, Windows::Media::Capture::IMediaCapture4, Windows::Media::Capture::IMediaCapture5, Windows::Media::Capture::IMediaCapture6>
    {
        MediaCapture(std::nullptr_t) noexcept {}
        MediaCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCapture(ptr, take_ownership_from_abi) {}
        MediaCapture();
        static auto IsVideoProfileSupported(param::hstring const& videoDeviceId);
        static auto FindAllVideoProfiles(param::hstring const& videoDeviceId);
        static auto FindConcurrentProfiles(param::hstring const& videoDeviceId);
        static auto FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name);
    };
    struct __declspec(empty_bases) MediaCaptureDeviceExclusiveControlStatusChangedEventArgs : Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
    {
        MediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t) noexcept {}
        MediaCaptureDeviceExclusiveControlStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureFailedEventArgs : Windows::Media::Capture::IMediaCaptureFailedEventArgs
    {
        MediaCaptureFailedEventArgs(std::nullptr_t) noexcept {}
        MediaCaptureFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureFocusChangedEventArgs : Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs
    {
        MediaCaptureFocusChangedEventArgs(std::nullptr_t) noexcept {}
        MediaCaptureFocusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureInitializationSettings : Windows::Media::Capture::IMediaCaptureInitializationSettings,
        impl::require<MediaCaptureInitializationSettings, Windows::Media::Capture::IMediaCaptureInitializationSettings2, Windows::Media::Capture::IMediaCaptureInitializationSettings3, Windows::Media::Capture::IMediaCaptureInitializationSettings4, Windows::Media::Capture::IMediaCaptureInitializationSettings5, Windows::Media::Capture::IMediaCaptureInitializationSettings6>
    {
        MediaCaptureInitializationSettings(std::nullptr_t) noexcept {}
        MediaCaptureInitializationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureInitializationSettings(ptr, take_ownership_from_abi) {}
        MediaCaptureInitializationSettings();
    };
    struct __declspec(empty_bases) MediaCapturePauseResult : Windows::Media::Capture::IMediaCapturePauseResult,
        impl::require<MediaCapturePauseResult, Windows::Foundation::IClosable>
    {
        MediaCapturePauseResult(std::nullptr_t) noexcept {}
        MediaCapturePauseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCapturePauseResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureSettings : Windows::Media::Capture::IMediaCaptureSettings,
        impl::require<MediaCaptureSettings, Windows::Media::Capture::IMediaCaptureSettings2, Windows::Media::Capture::IMediaCaptureSettings3>
    {
        MediaCaptureSettings(std::nullptr_t) noexcept {}
        MediaCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureStopResult : Windows::Media::Capture::IMediaCaptureStopResult,
        impl::require<MediaCaptureStopResult, Windows::Foundation::IClosable>
    {
        MediaCaptureStopResult(std::nullptr_t) noexcept {}
        MediaCaptureStopResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureStopResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureVideoProfile : Windows::Media::Capture::IMediaCaptureVideoProfile,
        impl::require<MediaCaptureVideoProfile, Windows::Media::Capture::IMediaCaptureVideoProfile2>
    {
        MediaCaptureVideoProfile(std::nullptr_t) noexcept {}
        MediaCaptureVideoProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureVideoProfile(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaCaptureVideoProfileMediaDescription : Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription,
        impl::require<MediaCaptureVideoProfileMediaDescription, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
    {
        MediaCaptureVideoProfileMediaDescription(std::nullptr_t) noexcept {}
        MediaCaptureVideoProfileMediaDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OptionalReferencePhotoCapturedEventArgs : Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs
    {
        OptionalReferencePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
        OptionalReferencePhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoCapturedEventArgs : Windows::Media::Capture::IPhotoCapturedEventArgs
    {
        PhotoCapturedEventArgs(std::nullptr_t) noexcept {}
        PhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IPhotoCapturedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PhotoConfirmationCapturedEventArgs : Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs
    {
        PhotoConfirmationCapturedEventArgs(std::nullptr_t) noexcept {}
        PhotoConfirmationCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoStreamConfiguration : Windows::Media::Capture::IVideoStreamConfiguration
    {
        VideoStreamConfiguration(std::nullptr_t) noexcept {}
        VideoStreamConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Capture::IVideoStreamConfiguration(ptr, take_ownership_from_abi) {}
    };
}
#endif
