//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface TBRoadEventCity : NSObject <NSCoding>
{
    int _cityId;
    int _version;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

