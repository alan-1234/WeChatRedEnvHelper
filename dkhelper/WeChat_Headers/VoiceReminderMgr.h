//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface VoiceReminderMgr : MMService <MMService, PBMessageObserverDelegate, IMsgExt>
{
    NSMutableDictionary *_dicRemindId;
}

- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)deleteRemindMsgs:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)shouldNotifyRemindMsg:(id)arg1;
- (void)doRemindMsgsOp:(unsigned int)arg1 arrRemindId:(id)arg2;
- (void)onRemindMsgsOpReturn:(id)arg1 Event:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

