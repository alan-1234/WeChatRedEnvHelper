//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CameraScannerViewDelegate-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;
@protocol NewQRCodeScannerDelegate;

@interface NewQRCodeScanner : MMUIView <UINavigationControllerDelegate, CameraScannerViewDelegate, IUiUtilExt>
{
    _Bool oneDMode;
    _Bool decoding;
    _Bool hasInit;
    _Bool _rotateImage;
    struct CGRect cropRect;
    NSString *_resultData;
    NSString *_resultType;
    char *_sendImage;
    basic_string_90719d97 _decodeData;
    basic_string_90719d97 _decodeType;
    basic_string_90719d97 _decodeCharset;
    struct QBAR_REPORT_MSG _reportMsg;
    struct QBar *_qbar;
    struct timeval _startTime;
    unsigned long long _matchNeedConfirmPrefixTimes;
    _Bool _isLowDevice;
    int scanCodeType;
    unsigned int _totalFrames;
    unsigned int _totalCostTime;
    unsigned int _succCostTime;
    unsigned int _retryTimes;
    unsigned int _decodeStat;
    unsigned int _dataLength;
    unsigned int _qrCodeVersion;
    unsigned int _pyramidLv;
    unsigned int _isSupportWXCode;
    unsigned int _resultCount;
    unsigned int _possibleResultCount;
    unsigned int _decodeScale;
    unsigned int _detectTime;
    unsigned int _srTime;
    unsigned int _wxPreferCodeCount;
    unsigned int _wxConfirmCodeCount;
    id <NewQRCodeScannerDelegate> _delegate;
    NSString *_fileScanDebugString;
    NSString *_resolutionRatio;
    NSString *_typeName;
    NSString *_charSet;
    NSString *_binarizerMethod;
    NSString *_qBarVersion;
    NSString *_possibleProbs;
    NSString *_scaleList;
}

@property(readonly, nonatomic) unsigned int wxConfirmCodeCount; // @synthesize wxConfirmCodeCount=_wxConfirmCodeCount;
@property(readonly, nonatomic) unsigned int wxPreferCodeCount; // @synthesize wxPreferCodeCount=_wxPreferCodeCount;
@property(readonly, nonatomic) unsigned int srTime; // @synthesize srTime=_srTime;
@property(readonly, nonatomic) unsigned int detectTime; // @synthesize detectTime=_detectTime;
@property(readonly, nonatomic) unsigned int decodeScale; // @synthesize decodeScale=_decodeScale;
@property(readonly, copy, nonatomic) NSString *scaleList; // @synthesize scaleList=_scaleList;
@property(readonly, copy, nonatomic) NSString *possibleProbs; // @synthesize possibleProbs=_possibleProbs;
@property(readonly, nonatomic) unsigned int possibleResultCount; // @synthesize possibleResultCount=_possibleResultCount;
@property(readonly, nonatomic) unsigned int resultCount; // @synthesize resultCount=_resultCount;
@property(readonly, copy, nonatomic) NSString *qBarVersion; // @synthesize qBarVersion=_qBarVersion;
@property(readonly, nonatomic) unsigned int isSupportWXCode; // @synthesize isSupportWXCode=_isSupportWXCode;
@property(readonly, nonatomic) NSString *binarizerMethod; // @synthesize binarizerMethod=_binarizerMethod;
@property(readonly, nonatomic) unsigned int pyramidLv; // @synthesize pyramidLv=_pyramidLv;
@property(readonly, nonatomic) unsigned int qrCodeVersion; // @synthesize qrCodeVersion=_qrCodeVersion;
@property(readonly, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(readonly, nonatomic) unsigned int dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, nonatomic) unsigned int decodeStat; // @synthesize decodeStat=_decodeStat;
@property(readonly, nonatomic) unsigned int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(readonly, nonatomic) NSString *resolutionRatio; // @synthesize resolutionRatio=_resolutionRatio;
@property(readonly, nonatomic) unsigned int succCostTime; // @synthesize succCostTime=_succCostTime;
@property(readonly, nonatomic) unsigned int totalCostTime; // @synthesize totalCostTime=_totalCostTime;
@property(readonly, nonatomic) unsigned int totalFrames; // @synthesize totalFrames=_totalFrames;
@property(copy, nonatomic) NSString *fileScanDebugString; // @synthesize fileScanDebugString=_fileScanDebugString;
@property(nonatomic) __weak id <NewQRCodeScannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int scanCodeType; // @synthesize scanCodeType;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *resultData; // @synthesize resultData=_resultData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopCapture;
- (void)startCapture;
- (void)showScanResult;
- (_Bool)tryScanOnePicture:(id)arg1 context:(id)arg2;
- (_Bool)tryScanOnePicture:(id)arg1;
- (_Bool)scanOnePicture:(id)arg1 context:(id)arg2;
- (_Bool)scanOnePicture:(id)arg1;
- (void)notifyResult:(id)arg1 type:(id)arg2 version:(int)arg3 rawData:(id)arg4;
- (void)notifyGotBarcode:(id)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (void)calScanResultReportDetailData:(vector_09f8cb62)arg1;
- (void)genReportDetailForFileOriginalResults:(vector_09f8cb62)arg1 touchContext:(id)arg2;
- (_Bool)doScanCode:(char *)arg1 Width:(int)arg2 Height:(int)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)isWeAppCodeType:(id)arg1;
- (_Bool)isQRCodeType:(id)arg1;
- (void)notifyDelegate:(id)arg1 type:(id)arg2 version:(int)arg3 rawData:(id)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 CodeType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

