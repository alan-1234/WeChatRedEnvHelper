//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface BizOcrImageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *imgData; // @dynamic imgData;
@property(nonatomic) unsigned int ocrType; // @dynamic ocrType;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(retain, nonatomic) NSString *sessionKey; // @dynamic sessionKey;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

