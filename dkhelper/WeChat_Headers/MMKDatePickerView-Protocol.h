//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKView-Protocol.h"

@class MMKDatePickerViewOnSelectCallback, NSString;

@protocol MMKDatePickerView <MMKView>
- (void)setOnSelectCallback:(MMKDatePickerViewOnSelectCallback *)arg1;
- (NSString *)getValue;
- (void)setValue:(NSString *)arg1;
- (long long)getType;
- (void)setType:(long long)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setOriginDate:(int)arg1 month:(int)arg2 day:(int)arg3;
@end

