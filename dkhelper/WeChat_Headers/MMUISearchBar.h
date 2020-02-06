//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@class NSNumber, UIImageView, UILabel, UIView;

@interface MMUISearchBar : UISearchBar
{
    _Bool m_bForceAdjustFrame;
    _Bool m_bNonControllerBind;
    _Bool m_bForbidCenterPlaceLabel;
    UIView *_innerCursor;
    UIView *_bottomLine;
    NSNumber *_oIconDefaultWidth;
    struct CGSize _iconDefaultSize;
    _Bool _bForbidAdjustIconSize;
    _Bool _bForbidAdjustCursor;
    unsigned long long _bottomLineStyle;
    unsigned long long _eControlState;
    UILabel *_tipsLabel;
    UIImageView *_rightLoadingView;
}

@property(retain, nonatomic) UIImageView *rightLoadingView; // @synthesize rightLoadingView=_rightLoadingView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) _Bool bForbidAdjustCursor; // @synthesize bForbidAdjustCursor=_bForbidAdjustCursor;
@property(nonatomic) unsigned long long eControlState; // @synthesize eControlState=_eControlState;
@property(nonatomic) unsigned long long bottomLineStyle; // @synthesize bottomLineStyle=_bottomLineStyle;
@property(nonatomic) _Bool bForbidAdjustIconSize; // @synthesize bForbidAdjustIconSize=_bForbidAdjustIconSize;
@property(nonatomic) _Bool m_bForbidCenterPlaceLabel; // @synthesize m_bForbidCenterPlaceLabel;
@property(nonatomic) _Bool m_bNonControllerBind; // @synthesize m_bNonControllerBind;
@property(nonatomic) _Bool m_bForceAdjustFrame; // @synthesize m_bForceAdjustFrame;
- (void).cxx_destruct;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)cacheCursorAddress;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)fixIOS13Issue;
- (void)fixPlaceHolderColor;
- (void)fixTextField;
- (void)updateBottomLineStyle;
- (void)fixCursorUIDismissBug;
- (void)fixSearchBarBackgroundWhenActive;
- (void)fixPlaceLabelCenterAlign;
- (void)fixTipsLeftAlign;
- (void)fixTipsCenterAlign;
- (void)setPlaceholder:(id)arg1;
- (void)fixOrientationBug;
- (void)fixLayoutOnActiveSearch;
- (void)fixSearchIconSize;
- (id)recursiveFindCancelButton:(id)arg1;
- (id)findCancelButton;
- (id)internalFindPlaceHolderIcon;
- (id)findPlaceHolderIcon:(id)arg1;
- (id)findUISearchBarImage:(id)arg1;
- (id)findUISearchBarTextFieldLabel:(id)arg1;
- (_Bool)isViewOfUISearchController:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)handleCursorObserveForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFakeCursor;
- (id)genFakeCursor;
- (void)animateFakeCursor;
- (void)layoutTagView;
- (void)removeTextLoadingView;
- (void)showTextLoadingView;
- (void)resetAttributes;
- (void)resetTextAttributes;
- (id)getTextField;
- (void)textFieldAddSubView:(id)arg1;
- (void)setTagAttributeText:(id)arg1;
- (void)setCustomTipsLabelHidden:(_Bool)arg1;
- (void)setTipsLabelText:(id)arg1;
- (void)internalInitTipsLabel;

@end

