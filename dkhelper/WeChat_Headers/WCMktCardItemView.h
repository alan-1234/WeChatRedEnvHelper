//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol WCMktCardItemViewDelegate;

@interface WCMktCardItemView : UIView
{
    id <WCMktCardItemViewDelegate> _delegate;
    NSArray *_couponList;
}

@property(retain, nonatomic) NSArray *couponList; // @synthesize couponList=_couponList;
@property(nonatomic) __weak id <WCMktCardItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cardBtnClick:(id)arg1;
- (void)handleTagBtnClick:(id)arg1;
- (void)clickGeneralCardTagListBtn:(id)arg1;
- (void)clickGeneralCouponTagListBtn:(id)arg1;
- (id)genTagButtonWithTagData:(id)arg1;
- (id)genGeneralCardView:(id)arg1 index:(long long)arg2;
- (id)genGeneralCouponsView:(id)arg1 index:(long long)arg2;
- (void)setupContentView:(unsigned int)arg1;
- (void)updateCardItemViewWithCouponListData:(id)arg1 displayCount:(unsigned int)arg2;

@end

