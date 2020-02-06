//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRefreshTableFooterView.h"

@class NSString, UIActivityIndicatorView, UIColor, UIFont, UILabel, UIView;

@interface WCStoryRefreshFooterView : MMRefreshTableFooterView
{
    _Bool _centerAlignLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIView *_endView;
    double _lineViewWidth;
    double _lineViewHeight;
    NSString *_normalText;
    NSString *_loadingText;
    UIColor *_textColor;
    UIFont *_textFont;
}

@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(copy, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(nonatomic) double lineViewHeight; // @synthesize lineViewHeight=_lineViewHeight;
@property(nonatomic) double lineViewWidth; // @synthesize lineViewWidth=_lineViewWidth;
@property(retain, nonatomic) UIView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool centerAlignLabel; // @synthesize centerAlignLabel=_centerAlignLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (int)getStatus;
- (void)resetStatus:(int)arg1;
- (void)fitIPadClassicStyle;
- (void)useMMSettingStyle;
- (id)initWhiteLoadingWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 whiteLoading:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
