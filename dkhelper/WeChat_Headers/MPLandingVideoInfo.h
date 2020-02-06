//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MPLandingVideoInfo : MMObject
{
    _Bool _isOverSize;
    unsigned int _formatId;
    unsigned int _durationMs;
    unsigned int _width;
    unsigned int _height;
    unsigned int _videoQualityLevel;
    NSString *_url;
    unsigned long long _fileSize;
    NSString *_videoQualityWording;
}

@property(copy, nonatomic) NSString *videoQualityWording; // @synthesize videoQualityWording=_videoQualityWording;
@property(nonatomic) unsigned int videoQualityLevel; // @synthesize videoQualityLevel=_videoQualityLevel;
@property(nonatomic) _Bool isOverSize; // @synthesize isOverSize=_isOverSize;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned int durationMs; // @synthesize durationMs=_durationMs;
@property(nonatomic) unsigned int formatId; // @synthesize formatId=_formatId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;

@end

