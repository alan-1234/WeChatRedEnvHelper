//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString, WepkgPatchDownloadInfo;

@interface WepkgDownloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int downloadNetworkType; // @dynamic downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) WepkgPatchDownloadInfo *patchInfo; // @dynamic patchInfo;
@property(nonatomic) unsigned int sizeInBytes; // @dynamic sizeInBytes;

@end

