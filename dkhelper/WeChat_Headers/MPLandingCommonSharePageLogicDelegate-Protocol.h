//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMWebViewController, MPLandingVideoDotAdWebViewPosInfo, NSDictionary, NSMutableArray, NSNumber, NSString, UIColor;

@protocol MPLandingCommonSharePageLogicDelegate <NSObject>
- (UIColor *)commonSharePageWebviewBackgroundColor;
- (UIColor *)commonSharePageBackgroundColor;

@optional
- (_Bool)isInChangeDefinitonProcess;
- (void)updateDotAdViewPosInfo:(MPLandingVideoDotAdWebViewPosInfo *)arg1;
- (void)updateSliderBarMarkArr:(NSMutableArray *)arg1;
- (void)closeDotAdView:(MMWebViewController *)arg1 isDotViewReady:(_Bool)arg2;
- (void)onDotAdViewNeedClose:(MMWebViewController *)arg1;
- (void)showDotAdView:(MMWebViewController *)arg1 posInfo:(MPLandingVideoDotAdWebViewPosInfo *)arg2;
- (void)onDotAdViewReady:(MMWebViewController *)arg1;
- (void)onDotAdViewLoadFinish:(MMWebViewController *)arg1;
- (void)addDotAdViewToBack:(MMWebViewController *)arg1;
- (void)onDotAdViewSetScripData:(NSMutableArray *)arg1;
- (double)dotAdViewMinShowHeight;
- (void)onAdViewNeedClose:(MMWebViewController *)arg1;
- (void)onAdViewLoadFinish:(MMWebViewController *)arg1;
- (void)onAdViewReady:(MMWebViewController *)arg1;
- (void)onAdViewCreated:(MMWebViewController *)arg1;
- (_Bool)canAdViewCreated:(NSString *)arg1 error:(id *)arg2;
- (struct CGRect)currentAdViewBounds;
- (void)onOpPlayer:(NSString *)arg1;
- (NSString *)onSwitchVideo:(NSString *)arg1 srcUserName:(NSString *)arg2 srcDisplayName:(NSString *)arg3 title:(NSString *)arg4 digest:(NSString *)arg5 cover:(NSString *)arg6 vid:(NSString *)arg7 pubTime:(unsigned int)arg8 duration:(unsigned int)arg9 videoWidth:(unsigned int)arg10 videoHeight:(unsigned int)arg11 scene:(unsigned int)arg12 subscene:(unsigned int)arg13;
- (NSDictionary *)MPPlayerVideoState;
- (NSNumber *)onCommonSharePageGetShareFuncFlag;
- (void)onCommonSharePageRecievedForceUrl:(NSString *)arg1;
- (void)onCommonSharePageLoadFail;
- (void)onCommonSharePageLoadFinish;
- (void)onCommonSharePageStartLoad;
- (void)onCommonSharePageDoShareAction;
- (void)onCommonSharePageHaokanStateChanged;
@end

