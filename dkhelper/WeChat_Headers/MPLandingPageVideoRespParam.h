//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MPLandingVideoErrorInfo, NSMutableArray, NSString;

@interface MPLandingPageVideoRespParam : MMObject
{
    unsigned int _playFlag;
    NSString *_videoId;
    NSMutableArray *_videoInfoArr;
    MPLandingVideoErrorInfo *_videoErroInfo;
}

@property(retain, nonatomic) MPLandingVideoErrorInfo *videoErroInfo; // @synthesize videoErroInfo=_videoErroInfo;
@property(retain, nonatomic) NSMutableArray *videoInfoArr; // @synthesize videoInfoArr=_videoInfoArr;
@property(nonatomic) unsigned int playFlag; // @synthesize playFlag=_playFlag;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)description;

@end

