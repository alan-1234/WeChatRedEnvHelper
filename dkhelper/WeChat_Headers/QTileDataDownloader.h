//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QTileDataDownloader : NSObject
{
    NSMutableDictionary *_downloadList;
}

@property(retain, nonatomic) NSMutableDictionary *downloadList; // @synthesize downloadList=_downloadList;
- (void).cxx_destruct;
- (void)cancelDownloadTile:(id)arg1;
- (void)downloadTile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)statisticsParameters;
- (id)channelIdentifier;
- (void)dealloc;
- (id)init;

@end

