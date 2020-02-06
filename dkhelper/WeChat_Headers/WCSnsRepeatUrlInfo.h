//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, WCSnsMenuItem;

@interface WCSnsRepeatUrlInfo : MMObject <PBCoding>
{
    _Bool isShowMenuItem;
    _Bool isMpUrl;
    unsigned int invalidTime;
    NSString *layerId;
    NSString *expId;
    WCSnsMenuItem *menuItem;
    NSString *docId;
    NSString *extData;
}

+ (void)initialize;
+ (void)PBArrayAdd_isMpUrl;
+ (void)PBArrayAdd_invalidTime;
+ (void)PBArrayAdd_isShowMenuItem;
+ (void)PBArrayAdd_extData;
+ (void)PBArrayAdd_docId;
+ (void)PBArrayAdd_menuItem;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
@property(nonatomic) _Bool isMpUrl; // @synthesize isMpUrl;
@property(nonatomic) unsigned int invalidTime; // @synthesize invalidTime;
@property(nonatomic) _Bool isShowMenuItem; // @synthesize isShowMenuItem;
@property(retain, nonatomic) NSString *extData; // @synthesize extData;
@property(retain, nonatomic) NSString *docId; // @synthesize docId;
@property(retain, nonatomic) WCSnsMenuItem *menuItem; // @synthesize menuItem;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId;
- (void).cxx_destruct;
- (_Bool)shouldClientHideUrlAfterConfirm;
- (_Bool)parseRepeatUrlInfo:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

