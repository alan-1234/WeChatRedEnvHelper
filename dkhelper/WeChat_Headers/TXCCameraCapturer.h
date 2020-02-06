//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "TXCCapturer-Protocol.h"

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSObject, NSString;
@protocol OS_dispatch_queue, TXICameraCapturerDelegate, TXINotifyDelegate;

@interface TXCCameraCapturer : TXCModule <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, TXCCapturer>
{
    unsigned long long _lastCalculateTS;
    unsigned long long _lastCaptureFrameCount;
    unsigned long long _captureFrameCount;
    _Bool _front;
    double _presetWidth;
    double _presetHeight;
    long long _resolution;
    unsigned long long _lastDetectedTimeStame;
    _Bool _supportsFaceDetection;
    long long _angelAdjustion;
    _Bool _faceDetect;
    _Bool _mirror;
    _Bool _enableGSensor;
    int _frameRate;
    int _outputRotation;
    int _streamType;
    id <TXICameraCapturerDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    double _zoomScale;
    long long _homeOrientation;
    long long _rotation;
    long long _renderMirrorMode;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureConnection *_videoConnection;
    NSObject<OS_dispatch_queue> *_cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *_faceDetectQueue;
    long long _position;
    AVCaptureVideoPreviewLayer *_prevLayer;
    long long _interfaceOritation;
    AVCaptureMetadataOutput *_metaOutput;
    struct CGSize _videoSize;
}

+ (_Bool)isFrontFacingCameraPresent;
+ (_Bool)isBackFacingCameraPresent;
+ (void)requestForAccess:(CDUnknownBlockType)arg1;
+ (_Bool)requestForAccess;
@property(retain) AVCaptureMetadataOutput *metaOutput; // @synthesize metaOutput=_metaOutput;
@property long long interfaceOritation; // @synthesize interfaceOritation=_interfaceOritation;
@property(retain) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain) NSObject<OS_dispatch_queue> *faceDetectQueue; // @synthesize faceDetectQueue=_faceDetectQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraProcessingQueue; // @synthesize cameraProcessingQueue=_cameraProcessingQueue;
@property(retain) AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(retain) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(retain) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool enableGSensor; // @synthesize enableGSensor=_enableGSensor;
@property(nonatomic) long long renderMirrorMode; // @synthesize renderMirrorMode=_renderMirrorMode;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) int outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) _Bool faceDetect; // @synthesize faceDetect=_faceDetect;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXICameraCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isCameraAutoFocusFaceModeSupported;
- (_Bool)isCameraTorchSupported;
- (_Bool)isCameraFocusPositionInPreviewSupported;
- (_Bool)isCameraZoomSupported;
@property(readonly, getter=isFrontFacingCameraPresent) _Bool frontFacingCameraPresent;
@property(readonly, getter=isBackFacingCameraPresent) _Bool backFacingCameraPresent;
- (id)genVFrame:(struct opaqueCMSampleBuffer *)arg1;
- (long long)calcMakeupRenderRotation:(long long)arg1 interfaceOritation:(long long)arg2;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (_Bool)setSessionPreset:(id)arg1;
- (_Bool)setResolution:(long long)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)handleCaptureSessionInterruptionEnded:(id)arg1;
- (struct CGPoint)devicePointForPoint:(struct CGPoint)arg1;
- (void)resetInterestPoint:(struct CGPoint)arg1 monitorSubjectAreaChange:(_Bool)arg2;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)stop;
- (void)start;
- (_Bool)flashEnable;
- (_Bool)setFlashEnable:(_Bool)arg1;
@property int frameRate; // @synthesize frameRate=_frameRate;
- (_Bool)supportsVideoFrameRate:(long long)arg1;
- (id)cameraWithPosition:(long long)arg1;
- (void)rotateCamera;
@property(nonatomic) _Bool front;
- (void)initCameraCapture;
- (id)init;
- (void)runTXCAsynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runTXCSynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)sendNotifyEvent:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

