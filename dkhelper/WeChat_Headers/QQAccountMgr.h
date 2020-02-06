//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface QQAccountMgr : MMService <MMService, PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBindQQ:(id)arg1 Event:(unsigned int)arg2;
- (void)handleUnBindQQ:(id)arg1 Event:(unsigned int)arg2;
- (void)localUnBindQQ;
- (void)unBindQQclearQQ;
- (_Bool)unBindQQ:(id)arg1;
- (_Bool)bindQQ:(id)arg1;
- (void)clearQQFlags;
- (void)uninstallQQPluginWithoutCGI;
- (void)clearQQData;
- (void)clearWBReader;
- (void)clearQQInvite;
- (void)clearQQFriend;
- (void)clearWBSX;
- (void)clearQQMail;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

