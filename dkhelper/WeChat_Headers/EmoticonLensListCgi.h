//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSData, NSString;
@protocol EmoticonLensListCgiDelegate;

@interface EmoticonLensListCgi : StoreEmotionBaseCgi
{
    NSString *_username;
    id <EmoticonLensListCgiDelegate> _delegate;
    NSData *_pageBuff;
}

@property(retain, nonatomic) NSData *pageBuff; // @synthesize pageBuff=_pageBuff;
@property(nonatomic) __weak id <EmoticonLensListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (void)handleErrorReturn;
- (void)startRequestWithPageBuffer:(id)arg1 username:(id)arg2;
- (_Bool)hasNextPage;
- (void)startRequestNextPage;
- (void)startRequestFirstPage;
- (id)initWithDelegate:(id)arg1;

@end
