//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameCenterIntroductionInfo : MMObject <PBCoding>
{
    NSString *title;
    NSString *desc;
    NSArray *mediaList;
}

+ (void)initialize;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_title;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

