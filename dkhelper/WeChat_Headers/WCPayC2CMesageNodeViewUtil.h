//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCPayC2CMesageNodeViewUtil : NSObject
{
}

+ (id)getReceiverIconImgNameWithReceiverState:(unsigned long long)arg1;
+ (id)getPayerIconImgNameWithPayerState:(unsigned long long)arg1;
+ (unsigned long long)getPayerBubbleTypeWithPayerState:(unsigned long long)arg1;
+ (unsigned long long)getReceiverBubbleTypeWithReceiveState:(unsigned long long)arg1;
+ (id)getReceiverTitleWithReceiverState:(unsigned long long)arg1 unpayMmeber:(unsigned long long)arg2;
+ (id)getPayerTitleWithPayerState:(unsigned long long)arg1 payerAmount:(double)arg2;
+ (id)getActivityAAMsgDescWithMsgWrap:(id)arg1;
+ (id)getCommonAASelectMemberMsgDescWithMsgWrap:(id)arg1;
+ (_Bool)isNeedShowMentionedMeMsg:(id)arg1;
+ (id)getAAC2CMessageDescDict:(id)arg1;

@end

