//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface AppMsgCommentExposureReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int enterId; // @dynamic enterId;
@property(retain, nonatomic) NSMutableArray *exposure; // @dynamic exposure;
@property(nonatomic) unsigned int itemShowType; // @dynamic itemShowType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

