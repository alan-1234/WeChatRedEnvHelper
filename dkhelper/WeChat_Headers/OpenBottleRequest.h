//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, ContentInfo, NSString;

@interface OpenBottleRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) ContentInfo *bigContentInfo; // @dynamic bigContentInfo;
@property(retain, nonatomic) NSString *bottleInfo; // @dynamic bottleInfo;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(retain, nonatomic) ContentInfo *smallContentInfo; // @dynamic smallContentInfo;

@end

