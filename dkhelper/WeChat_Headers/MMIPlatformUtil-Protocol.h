//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMVoidStringCallback, NSData, NSString;

@protocol MMIPlatformUtil <NSObject>
- (NSString *)getMemoryKVString:(NSString *)arg1;
- (void)setIdleTimerDisable:(_Bool)arg1;
- (void)makesureLonglink;
- (void)setScreenBrightness:(float)arg1;
- (float)getScreenBrightness;
- (void)playVibration;
- (float)getPadSplitHeight;
- (float)getPadSplitWidth;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRedDotStatus:(NSString *)arg1 value:(_Bool)arg2;
- (NSString *)getRedDotWording:(NSString *)arg1;
- (_Bool)getRedDotStatus:(NSString *)arg1;
- (NSString *)base64Encode:(NSData *)arg1;
- (NSData *)base64Decode:(NSString *)arg1;
- (NSString *)genUUID;
- (NSString *)md5:(NSString *)arg1;
- (_Bool)isNetworkConnected;
- (_Bool)isPad;
- (NSString *)getPlatformString:(NSString *)arg1;
- (_Bool)getExptBoolValue:(NSString *)arg1;
- (float)getBottomSafeAreaHeight;
- (float)getNavigationBarHeight;
- (float)getStatusBarHeight;
- (float)getLoigcalResolutionHeight;
- (float)getLoigcalResolutionWidth;
- (float)getPx:(float)arg1;
- (long long)iOSDevice;
- (long long)androidDpiLevel;
- (NSString *)iOSVersion;
- (int)androidAPILevel;
- (void)setLanguageChangeCallbackImpl:(MMVoidStringCallback *)arg1;
- (NSString *)currentLanguageCode;
- (long long)currentPlatform;
@end

