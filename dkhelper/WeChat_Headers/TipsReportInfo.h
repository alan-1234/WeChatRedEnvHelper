//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface TipsReportInfo : NSObject <PBCoding>
{
    unsigned long long filteredType;
    unsigned long long disposeWay;
    unsigned long long reportStayTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_reportStayTime;
+ (void)PBArrayAdd_disposeWay;
+ (void)PBArrayAdd_filteredType;
@property(nonatomic) unsigned long long reportStayTime; // @synthesize reportStayTime;
@property(nonatomic) unsigned long long disposeWay; // @synthesize disposeWay;
@property(nonatomic) unsigned long long filteredType; // @synthesize filteredType;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

