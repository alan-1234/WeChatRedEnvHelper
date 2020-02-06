//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MonoServiceMsgDelegate-Protocol.h"
#import "MonoServiceMsgLogicDelegate-Protocol.h"
#import "VoIPPushKitExt-Protocol.h"
#import "VoipGetRoomInfoCgiDelegate-Protocol.h"

@class NSString, VoipGetRoomInfoCgi;

@interface VOIPMessageMgr : MMService <MonoServiceMsgDelegate, MonoServiceMsgLogicDelegate, VoipGetRoomInfoCgiDelegate, MMService, IMsgExt, VoIPPushKitExt>
{
    VoipGetRoomInfoCgi *m_getRoomInfoCgi;
}

+ (_Bool)openVoipViewByVoipMonoMsg:(id)arg1 haveAnswered:(_Bool)arg2;
+ (_Bool)startVoipViewByVoipMonoMsg:(id)arg1;
+ (void)handleVoipLocalBusy:(id)arg1;
+ (id)genMessageForBusyVoip:(id)arg1 RoomId:(int)arg2 RoomKey:(long long)arg3 InviteType:(unsigned int)arg4 CreateTime:(unsigned int)arg5;
+ (id)genInviteMessageFromVoipMonoMsg:(id)arg1;
+ (id)genMessageForCancelVoip:(id)arg1 RoomId:(int)arg2 RoomKey:(long long)arg3 InviteType:(unsigned int)arg4 CreateTime:(unsigned int)arg5;
+ (void)reportAckWithCallResult:(int)arg1 ByVoipMsg:(id)arg2;
@property(retain, nonatomic) VoipGetRoomInfoCgi *m_getRoomInfoCgi; // @synthesize m_getRoomInfoCgi;
- (void).cxx_destruct;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)handleVoipBusy:(id)arg1 MsgWrap:(id)arg2;
- (void)handleVoipInvite:(id)arg1 withMessageWrap:(id)arg2;
- (void)handleVoipRemind:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveInviteFromSync:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveCancelMsgFromSync:(id)arg1 MsgWrap:(id)arg2;
- (void)receiveAnsweredFromNotify:(id)arg1;
- (void)receiveCancelFromNotify:(id)arg1;
- (void)receiveInviteFromNotify:(id)arg1;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)onVoipGetRoomInfoCgiOk:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiRespNull:(id)arg1;
- (void)onVoipGetRoomInfoCgiConnectFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiCreateFailed:(id)arg1;
- (void)onVoipGetRoomInfoCgiParaError:(id)arg1;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (_Bool)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

