//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface PhoneNumberFormatInfo : MMObject
{
    NSString *leadingDigitsRegex;
    NSString *pattern;
    NSString *formatRegex;
}

@property(retain, nonatomic) NSString *formatRegex; // @synthesize formatRegex;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern;
@property(retain, nonatomic) NSString *leadingDigitsRegex; // @synthesize leadingDigitsRegex;
- (void).cxx_destruct;
- (id)init;

@end

