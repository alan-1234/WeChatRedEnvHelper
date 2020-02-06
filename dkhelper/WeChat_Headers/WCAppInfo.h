//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAppInfo : NSObject <NSCoding>
{
    NSString *appID;
    NSString *appName;
    NSString *version;
    NSString *installUrl;
    NSString *fromUrl;
    _Bool isForceUpdate;
    _Bool clickable;
}

@property(nonatomic) _Bool clickable; // @synthesize clickable;
@property(nonatomic) _Bool isForceUpdate; // @synthesize isForceUpdate;
@property(retain, nonatomic) NSString *fromUrl; // @synthesize fromUrl;
@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

