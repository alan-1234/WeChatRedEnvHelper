//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, WCAdFullCardGestureInfo;

@interface WCAdFullCardInfo : NSObject <NSCoding>
{
    unsigned int _displayType;
    unsigned int _markMaxAlpha;
    unsigned int _titlePosition;
    NSString *_title;
    NSString *_descriptionText;
    WCAdFullCardGestureInfo *_adGestureInfo;
}

@property(retain, nonatomic) WCAdFullCardGestureInfo *adGestureInfo; // @synthesize adGestureInfo=_adGestureInfo;
@property(nonatomic) unsigned int titlePosition; // @synthesize titlePosition=_titlePosition;
@property(nonatomic) unsigned int markMaxAlpha; // @synthesize markMaxAlpha=_markMaxAlpha;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int displayType; // @synthesize displayType=_displayType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

