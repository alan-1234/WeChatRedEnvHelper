//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString;

@interface ResourceMeta : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSMutableArray *eccmd5SignatureList; // @dynamic eccmd5SignatureList;
@property(nonatomic) unsigned int fileFlag; // @dynamic fileFlag;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *originalMd5; // @dynamic originalMd5;
@property(nonatomic) unsigned int resVersion; // @dynamic resVersion;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end
