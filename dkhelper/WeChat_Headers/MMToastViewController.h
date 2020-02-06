//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

@class UIImageView, UILabel, UIView;
@protocol MMToastViewControllerDelegate;

@interface MMToastViewController : MMWindowViewController
{
    double m_fShowDuration;
    UIView *m_bkgView;
    UIImageView *m_tipIconView;
    UILabel *m_label;
    id <MMToastViewControllerDelegate> _delegate;
    _Bool isSupportLandscape;
}

@property(nonatomic) double m_fShowDuration; // @synthesize m_fShowDuration;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)hideWithAnimated:(int)arg1;
- (void)viewDidLoad;
- (void)showFixedHeightText:(id)arg1 maxWidth:(double)arg2 margin:(double)arg3 andDelegate:(id)arg4;
- (void)showFixedHeightText:(id)arg1 maxWidth:(double)arg2 andDelegate:(id)arg3;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2 andDelegate:(id)arg3;
- (void)dealloc;
- (id)init;

@end

