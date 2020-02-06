//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface SREReportData : NSObject <PBCoding>
{
    unsigned int siriSessionId;
    unsigned int success;
    unsigned int siriOpCode;
    unsigned int receiverType;
    unsigned int matchStatus;
    unsigned int multiReceiverOpCode;
}

+ (void)initialize;
+ (void)PBArrayAdd_multiReceiverOpCode;
+ (void)PBArrayAdd_matchStatus;
+ (void)PBArrayAdd_receiverType;
+ (void)PBArrayAdd_siriOpCode;
+ (void)PBArrayAdd_success;
+ (void)PBArrayAdd_siriSessionId;
@property(nonatomic) unsigned int multiReceiverOpCode; // @synthesize multiReceiverOpCode;
@property(nonatomic) unsigned int matchStatus; // @synthesize matchStatus;
@property(nonatomic) unsigned int receiverType; // @synthesize receiverType;
@property(nonatomic) unsigned int siriOpCode; // @synthesize siriOpCode;
@property(nonatomic) unsigned int success; // @synthesize success;
@property(nonatomic) unsigned int siriSessionId; // @synthesize siriSessionId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

