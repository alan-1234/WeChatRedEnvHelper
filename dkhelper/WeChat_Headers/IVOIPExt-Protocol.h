//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CContact, NSString;

@protocol IVOIPExt

@optional
- (void)OnMicStartFailed;
- (void)OnSelectDecView:(int)arg1;
- (void)onGetNewVideoScoreIntervalDay:(unsigned int)arg1 andScoreTitle:(NSString *)arg2;
- (void)OnStopPlaySound;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)OnCallOverLoad:(CContact *)arg1 errNo:(int)arg2 errMsg:(NSString *)arg3;
- (void)OnCallBanned:(CContact *)arg1 errNo:(int)arg2 errMsg:(NSString *)arg3;
- (void)OnAutoHangUp:(CContact *)arg1;
- (void)OnCallInterrupt:(CContact *)arg1;
- (void)OnLightInterrupt:(_Bool)arg1;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)OnMonitorWithSendRecvInfo:(int)arg1 andSendFPS:(int)arg2 andRecvFPS:(int)arg3 andSendKbps:(int)arg4 andRecvKbps:(int)arg5 andP2SInfo:(NSString *)arg6 andSpeed:(int *)arg7;
- (void)OnMonitorWithSendFPS:(int)arg1 andRecvFPS:(int)arg2;
- (void)OnMonitorChannelInfo:(unsigned int)arg1 andChannelType:(int)arg2 andConnStrategy:(int)arg3 debugString:(basic_string_90719d97)arg4;
- (void)OnTalkBrokenError:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnNetWorkError:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnError:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnTimeOut:(CContact *)arg1;
- (void)OnInterrupt:(CContact *)arg1;
- (void)OnBeginTalk:(CContact *)arg1;
- (void)OnBeginConnect:(CContact *)arg1;
- (void)OnBeHanguped:(CContact *)arg1;
- (void)OnBeRejected:(CContact *)arg1;
- (void)OnPreConnect:(CContact *)arg1;
- (void)OnBeAccepted:(CContact *)arg1;
- (void)OnNoAnswer:(CContact *)arg1;
- (void)OnAccept:(CContact *)arg1 ErrNo:(int)arg2;
- (void)OnCall:(CContact *)arg1 ErrNo:(int)arg2;
@end

