//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MSEIDKeyReportItem : NSObject <PBCoding>
{
    _Bool isKeyLog;
    unsigned int ID;
    unsigned int key;
    unsigned int value;
}

+ (void)initialize;
+ (void)PBArrayAdd_isKeyLog;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_ID;
@property(nonatomic) _Bool isKeyLog; // @synthesize isKeyLog;
@property(nonatomic) unsigned int value; // @synthesize value;
@property(nonatomic) unsigned int key; // @synthesize key;
@property(nonatomic) unsigned int ID; // @synthesize ID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

