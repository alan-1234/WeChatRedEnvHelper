//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

@class UIImageView, UILabel, UIView;

@interface WCCanvasLocationComponent : WCCanvasComponent
{
    UIImageView *_m_lbsIcon;
    UIImageView *_m_rightIcon;
    UILabel *_m_poiNameLabel;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UILabel *m_poiNameLabel; // @synthesize m_poiNameLabel=_m_poiNameLabel;
@property(retain, nonatomic) UIImageView *m_rightIcon; // @synthesize m_rightIcon=_m_rightIcon;
@property(retain, nonatomic) UIImageView *m_lbsIcon; // @synthesize m_lbsIcon=_m_lbsIcon;
- (void).cxx_destruct;
- (void)updateFrame:(id)arg1;
- (void)configureLineView:(id)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

