//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class LbsLocationNew, NSMutableArray, NSString;

@interface WebRecommendRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int channelId; // @dynamic channelId;
@property(retain, nonatomic) NSMutableArray *checkDocidList; // @dynamic checkDocidList;
@property(nonatomic) unsigned int displayPattern; // @dynamic displayPattern;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(nonatomic) unsigned int fromPreTabChannelId; // @dynamic fromPreTabChannelId;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(nonatomic) unsigned int isHomePage; // @dynamic isHomePage;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSString *navigationId; // @dynamic navigationId;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int pos; // @dynamic pos;
@property(retain, nonatomic) NSString *redPointMsgId; // @dynamic redPointMsgId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sceneActionType; // @dynamic sceneActionType;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

