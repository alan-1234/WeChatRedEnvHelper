//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCCpuStackFrame : NSObject
{
    unsigned int _cpu_thread;
    float _cpu_value;
}

@property(nonatomic) float cpu_value; // @synthesize cpu_value=_cpu_value;
@property(nonatomic) unsigned int cpu_thread; // @synthesize cpu_thread=_cpu_thread;
- (id)initWithThraed:(unsigned int)arg1 andCpuValue:(float)arg2;

@end

