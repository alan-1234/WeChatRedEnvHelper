//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QLogoSource : NSObject
{
    int _priority;
    long long _rule;
    NSString *_frontierName;
    NSString *_logoName;
    NSString *_logoURL;
    NSString *_logoNightURL;
}

@property(copy, nonatomic) NSString *logoNightURL; // @synthesize logoNightURL=_logoNightURL;
@property(copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(copy, nonatomic) NSString *logoName; // @synthesize logoName=_logoName;
@property(copy, nonatomic) NSString *frontierName; // @synthesize frontierName=_frontierName;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) long long rule; // @synthesize rule=_rule;
- (void).cxx_destruct;

@end

