//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAdCardBtnInfo : NSObject <NSCoding>
{
    _Bool _bInternalJumpAppStore;
    int _clickActionType;
    unsigned int _weappVersion;
    NSString *_btnTitle;
    NSString *_btnFontColor;
    NSString *_btnBgColor;
    NSString *_clickActionLink;
    NSString *_weappUserName;
    NSString *_weappPath;
    NSString *_appJumpUrl;
    NSString *_openSdkAppId;
    NSString *_appPageUrl;
    NSString *_cardTpId;
    NSString *_cardExt;
}

@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
@property(nonatomic) _Bool bInternalJumpAppStore; // @synthesize bInternalJumpAppStore=_bInternalJumpAppStore;
@property(retain, nonatomic) NSString *appPageUrl; // @synthesize appPageUrl=_appPageUrl;
@property(retain, nonatomic) NSString *openSdkAppId; // @synthesize openSdkAppId=_openSdkAppId;
@property(retain, nonatomic) NSString *appJumpUrl; // @synthesize appJumpUrl=_appJumpUrl;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *weappPath; // @synthesize weappPath=_weappPath;
@property(retain, nonatomic) NSString *weappUserName; // @synthesize weappUserName=_weappUserName;
@property(retain, nonatomic) NSString *clickActionLink; // @synthesize clickActionLink=_clickActionLink;
@property(nonatomic) int clickActionType; // @synthesize clickActionType=_clickActionType;
@property(retain, nonatomic) NSString *btnBgColor; // @synthesize btnBgColor=_btnBgColor;
@property(retain, nonatomic) NSString *btnFontColor; // @synthesize btnFontColor=_btnFontColor;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
- (void).cxx_destruct;
- (_Bool)isValidForJumpToWeApp;
- (id)fetchAdClickActionLink;
- (unsigned int)fetchAdClickActionType;
- (_Bool)isValidForShowActionBtn;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

