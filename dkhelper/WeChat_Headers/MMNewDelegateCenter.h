//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class DeleagateProxyCatchUnImplementMethod, NSMethodSignature, NSString;

@interface MMNewDelegateCenter : MMService <MMService>
{
    DeleagateProxyCatchUnImplementMethod *m_catchUnimplementMethodObj;
    NSMethodSignature *m_unImplementMethodSignature;
}

+ (_Bool)hasProtocol:(id)arg1 theProtocol:(id)arg2;
+ (id)generateProtocolsKey:(id)arg1;
- (void).cxx_destruct;
- (id)getCatchUmimplementMethodObj;
- (id)getUmimplementMethodSignature;
- (void *)registerDelegateOnOwner:(id)arg1 delegate:(id)arg2 forProtocols:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)setDelegateProxyOnDelegate:(id)arg1 delegate:(id)arg2;
- (id)getDelegateOnOnwer:(id)arg1 delegate:(id)arg2;
- (id)setDelegateOnOwner:(id)arg1 delegate:(id)arg2 protocols:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

