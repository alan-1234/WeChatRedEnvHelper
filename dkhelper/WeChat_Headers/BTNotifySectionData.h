//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseSectionData.h"

@class CMessageWrap;

@interface BTNotifySectionData : BTBaseSectionData
{
    unsigned int _notifyCount;
    CMessageWrap *_latestMsgWrap;
}

@property(nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
@property(retain, nonatomic) CMessageWrap *latestMsgWrap; // @synthesize latestMsgWrap=_latestMsgWrap;
- (void).cxx_destruct;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;

@end

