// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201113.7

#ifndef WINRT_Windows_Media_Capture_1_H
#define WINRT_Windows_Media_Capture_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.Capture.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    struct __declspec(empty_bases) IAdvancedCapturedPhoto :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdvancedCapturedPhoto>
    {
        IAdvancedCapturedPhoto(std::nullptr_t = nullptr) noexcept {}
        IAdvancedCapturedPhoto(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdvancedCapturedPhoto2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdvancedCapturedPhoto2>
    {
        IAdvancedCapturedPhoto2(std::nullptr_t = nullptr) noexcept {}
        IAdvancedCapturedPhoto2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdvancedPhotoCapture :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdvancedPhotoCapture>
    {
        IAdvancedPhotoCapture(std::nullptr_t = nullptr) noexcept {}
        IAdvancedPhotoCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppCapture :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapture>
    {
        IAppCapture(std::nullptr_t = nullptr) noexcept {}
        IAppCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppCaptureStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppCaptureStatics>
    {
        IAppCaptureStatics(std::nullptr_t = nullptr) noexcept {}
        IAppCaptureStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppCaptureStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppCaptureStatics2>
    {
        IAppCaptureStatics2(std::nullptr_t = nullptr) noexcept {}
        IAppCaptureStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICameraCaptureUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICameraCaptureUI>
    {
        ICameraCaptureUI(std::nullptr_t = nullptr) noexcept {}
        ICameraCaptureUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICameraCaptureUIPhotoCaptureSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICameraCaptureUIPhotoCaptureSettings>
    {
        ICameraCaptureUIPhotoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
        ICameraCaptureUIPhotoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICameraCaptureUIVideoCaptureSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICameraCaptureUIVideoCaptureSettings>
    {
        ICameraCaptureUIVideoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
        ICameraCaptureUIVideoCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICapturedFrame :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICapturedFrame>,
        impl::require<Windows::Media::Capture::ICapturedFrame, Windows::Foundation::IClosable, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
    {
        ICapturedFrame(std::nullptr_t = nullptr) noexcept {}
        ICapturedFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICapturedFrame2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICapturedFrame2>
    {
        ICapturedFrame2(std::nullptr_t = nullptr) noexcept {}
        ICapturedFrame2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICapturedFrameControlValues :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICapturedFrameControlValues>
    {
        ICapturedFrameControlValues(std::nullptr_t = nullptr) noexcept {}
        ICapturedFrameControlValues(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICapturedFrameControlValues2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICapturedFrameControlValues2>
    {
        ICapturedFrameControlValues2(std::nullptr_t = nullptr) noexcept {}
        ICapturedFrameControlValues2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICapturedFrameWithSoftwareBitmap :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICapturedFrameWithSoftwareBitmap>
    {
        ICapturedFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        ICapturedFrameWithSoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICapturedPhoto :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICapturedPhoto>
    {
        ICapturedPhoto(std::nullptr_t = nullptr) noexcept {}
        ICapturedPhoto(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLagMediaRecording :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLagMediaRecording>
    {
        ILowLagMediaRecording(std::nullptr_t = nullptr) noexcept {}
        ILowLagMediaRecording(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLagMediaRecording2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLagMediaRecording2>
    {
        ILowLagMediaRecording2(std::nullptr_t = nullptr) noexcept {}
        ILowLagMediaRecording2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLagMediaRecording3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLagMediaRecording3>
    {
        ILowLagMediaRecording3(std::nullptr_t = nullptr) noexcept {}
        ILowLagMediaRecording3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLagPhotoCapture :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLagPhotoCapture>
    {
        ILowLagPhotoCapture(std::nullptr_t = nullptr) noexcept {}
        ILowLagPhotoCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILowLagPhotoSequenceCapture :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILowLagPhotoSequenceCapture>
    {
        ILowLagPhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
        ILowLagPhotoSequenceCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCapture :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCapture>
    {
        IMediaCapture(std::nullptr_t = nullptr) noexcept {}
        IMediaCapture(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCapture2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCapture2>
    {
        IMediaCapture2(std::nullptr_t = nullptr) noexcept {}
        IMediaCapture2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCapture3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCapture3>
    {
        IMediaCapture3(std::nullptr_t = nullptr) noexcept {}
        IMediaCapture3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCapture4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCapture4>
    {
        IMediaCapture4(std::nullptr_t = nullptr) noexcept {}
        IMediaCapture4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCapture5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCapture5>
    {
        IMediaCapture5(std::nullptr_t = nullptr) noexcept {}
        IMediaCapture5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCapture6 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCapture6>
    {
        IMediaCapture6(std::nullptr_t = nullptr) noexcept {}
        IMediaCapture6(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureFailedEventArgs>
    {
        IMediaCaptureFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureFocusChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureFocusChangedEventArgs>
    {
        IMediaCaptureFocusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureFocusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureInitializationSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureInitializationSettings>
    {
        IMediaCaptureInitializationSettings(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureInitializationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureInitializationSettings2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureInitializationSettings2>
    {
        IMediaCaptureInitializationSettings2(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureInitializationSettings2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureInitializationSettings3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureInitializationSettings3>
    {
        IMediaCaptureInitializationSettings3(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureInitializationSettings3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureInitializationSettings4 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureInitializationSettings4>
    {
        IMediaCaptureInitializationSettings4(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureInitializationSettings4(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureInitializationSettings5 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureInitializationSettings5>
    {
        IMediaCaptureInitializationSettings5(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureInitializationSettings5(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureInitializationSettings6 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureInitializationSettings6>
    {
        IMediaCaptureInitializationSettings6(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureInitializationSettings6(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCapturePauseResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCapturePauseResult>
    {
        IMediaCapturePauseResult(std::nullptr_t = nullptr) noexcept {}
        IMediaCapturePauseResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureSettings>
    {
        IMediaCaptureSettings(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureSettings2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureSettings2>
    {
        IMediaCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureSettings2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureSettings3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureSettings3>
    {
        IMediaCaptureSettings3(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureSettings3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureStatics>
    {
        IMediaCaptureStatics(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureStopResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureStopResult>
    {
        IMediaCaptureStopResult(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureStopResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureVideoPreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureVideoPreview>
    {
        IMediaCaptureVideoPreview(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureVideoPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureVideoProfile :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureVideoProfile>
    {
        IMediaCaptureVideoProfile(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureVideoProfile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureVideoProfile2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureVideoProfile2>
    {
        IMediaCaptureVideoProfile2(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureVideoProfile2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureVideoProfileMediaDescription :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureVideoProfileMediaDescription>
    {
        IMediaCaptureVideoProfileMediaDescription(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureVideoProfileMediaDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMediaCaptureVideoProfileMediaDescription2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaCaptureVideoProfileMediaDescription2>
    {
        IMediaCaptureVideoProfileMediaDescription2(std::nullptr_t = nullptr) noexcept {}
        IMediaCaptureVideoProfileMediaDescription2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IOptionalReferencePhotoCapturedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IOptionalReferencePhotoCapturedEventArgs>
    {
        IOptionalReferencePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IOptionalReferencePhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoCapturedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoCapturedEventArgs>
    {
        IPhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPhotoCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhotoConfirmationCapturedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPhotoConfirmationCapturedEventArgs>
    {
        IPhotoConfirmationCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPhotoConfirmationCapturedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVideoStreamConfiguration :
        Windows::Foundation::IInspectable,
        impl::consume_t<IVideoStreamConfiguration>
    {
        IVideoStreamConfiguration(std::nullptr_t = nullptr) noexcept {}
        IVideoStreamConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
