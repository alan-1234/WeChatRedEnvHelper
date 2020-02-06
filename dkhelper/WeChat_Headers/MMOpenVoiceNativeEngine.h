//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMOpenVoiceNativeEngine : NSObject
{
}

+ (int)uninit;
+ (int)exitRoom:(int)arg1;
+ (void)onNetworkChanged:(int)arg1;
+ (int)setCmdData:(int)arg1 dataPtr:(char *)arg2 dataLen:(int)arg3;
+ (int)setCmdData:(int)arg1 data:(id)arg2;
+ (int)getVoiceActivity:(int)arg1;
+ (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
+ (int)getAudioData:(char *)arg1 dataLength:(int)arg2;
+ (int)sendAudioData:(id)arg1 delay:(int)arg2;
+ (int)joinRoom:(long long)arg1 roomType:(int)arg2 networkType:(int)arg3;
+ (int)updateSessionKey:(id)arg1;
+ (id)generateInitInfo:(id)arg1 subAppId:(id)arg2 sessionKey:(id)arg3 audioType:(int)arg4 maxWidth:(int)arg5 maxHeight:(int)arg6;
+ (int)GetCPUCapacity;
+ (int)initEngine:(id)arg1 subAppId:(id)arg2 sessionKey:(id)arg3 audioType:(int)arg4 maxWidth:(int)arg5 maxHeight:(int)arg6 nCallback:(struct IWXConfCallback *)arg7;
+ (struct IWXConfService *)getConfInst;

@end

