//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ClickStatSwizzleExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCSCheckBehaviorMgr : MMService <MMService, ClickStatSwizzleExt>
{
    NSMutableDictionary *_dicTextFieldCheck;
    _Bool _bEnableEventMonitor;
    struct shared_ptr<__WCSN::__WCSTECP> _TECInstance;
    map_e6c8849e techeckts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSendEvent:(id)arg1;
- (id)convertScenes:(unsigned int)arg1;
- (void)endRecord:(unsigned int)arg1;
- (id)getRecord:(unsigned int)arg1;
- (_Bool)startRecord:(unsigned int)arg1;
- (void)recordEvent:(id)arg1;
- (id)getTextFieldCheckData:(unsigned int)arg1;
- (void)removeTextFieldCheck:(unsigned int)arg1;
- (void)pauseTextFieldCheck:(unsigned int)arg1;
- (void)startTextFieldCheck:(unsigned int)arg1;
- (void)dealloc;
- (_Bool)getTECEnable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

