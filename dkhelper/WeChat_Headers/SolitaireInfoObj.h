//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SolitaireInfoObj : NSObject
{
    _Bool _bHasHeader;
    _Bool _bFromXmlInfo;
    _Bool _bFromOriginEdit;
    unsigned int _localId;
    unsigned int _createTime;
    NSString *_nsKey;
    NSString *_chatName;
    NSString *_fromUserName;
    NSString *_activeUserName;
    NSString *_nsHeader;
    NSString *_nsTail;
    NSString *_nsExample;
    NSString *_nsSeparator;
    NSString *_nsContent;
    NSArray *_arrItems;
}

@property(retain, nonatomic) NSArray *arrItems; // @synthesize arrItems=_arrItems;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(retain, nonatomic) NSString *nsSeparator; // @synthesize nsSeparator=_nsSeparator;
@property(retain, nonatomic) NSString *nsExample; // @synthesize nsExample=_nsExample;
@property(retain, nonatomic) NSString *nsTail; // @synthesize nsTail=_nsTail;
@property(retain, nonatomic) NSString *nsHeader; // @synthesize nsHeader=_nsHeader;
@property(nonatomic) _Bool bFromOriginEdit; // @synthesize bFromOriginEdit=_bFromOriginEdit;
@property(retain, nonatomic) NSString *activeUserName; // @synthesize activeUserName=_activeUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) _Bool bFromXmlInfo; // @synthesize bFromXmlInfo=_bFromXmlInfo;
@property(retain, nonatomic) NSString *nsKey; // @synthesize nsKey=_nsKey;
@property(nonatomic) _Bool bHasHeader; // @synthesize bHasHeader=_bHasHeader;
- (void).cxx_destruct;
- (_Bool)isExceedItemsMaxCount;
- (_Bool)isHasKeyword;
- (id)getText;
- (id)createSolitaire;
- (void)fixHearInfo;
- (id)getSolitaireKey;

@end

