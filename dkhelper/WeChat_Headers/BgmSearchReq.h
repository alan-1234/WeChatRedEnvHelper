//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface BgmSearchReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned long long relatedRecId; // @dynamic relatedRecId;
@property(nonatomic) unsigned int reqNum; // @dynamic reqNum;
@property(nonatomic) unsigned long long reqUin; // @dynamic reqUin;
@property(nonatomic) unsigned long long searchReqId; // @dynamic searchReqId;

@end

