//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class ContentId, NSString, VideoCdnInfo;

@interface VideoUrlInfo_VideoUrlInfoItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ContentId *contentId; // @dynamic contentId;
@property(nonatomic) _Bool valid; // @dynamic valid;
@property(retain, nonatomic) NSString *videoApi; // @dynamic videoApi;
@property(nonatomic) unsigned int videoApiExpireTime; // @dynamic videoApiExpireTime;
@property(retain, nonatomic) VideoCdnInfo *videoCdnInfo; // @dynamic videoCdnInfo;

@end

