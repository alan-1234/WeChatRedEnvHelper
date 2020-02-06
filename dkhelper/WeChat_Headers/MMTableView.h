//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "MMDelegateCenterExt-Protocol.h"

@class MMDelegateProxy, MMTableViewGestureHelper, MMTableViewIndexView, NSString, UIColor, UIPanGestureRecognizer, UIView;
@protocol UITableViewDataSource, UITableViewDelegate, tableViewDelegate;

@interface MMTableView : UITableView <MMDelegateCenterExt>
{
    MMDelegateProxy<UITableViewDataSource> *dataSourceProxy;
    MMDelegateProxy<UITableViewDelegate> *delegateProxy;
    id <tableViewDelegate> m_delegateProxy;
    _Bool cancelButtonTouchsTrack;
    Class cancelTouchsTrackClass;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIColor *_tailColor;
    _Bool m_dontDrawFooterLine;
    MMTableViewIndexView *_indexView;
    struct CGPoint m_lastSetContentOffset;
    long long m_sectionNumber;
    MMTableViewGestureHelper *_gestureHelper;
    UIPanGestureRecognizer *_dragGesture;
    _Bool _bTriggerRecEnabled;
    struct CGPoint _beginRecOffset;
    _Bool _isMainView;
    _Bool _isHideExtraFooterLine;
    _Bool _bForceContentInsetAdjustAutomatic;
    _Bool _enableContentInsetForAdjustAutomatic;
    _Bool _isReloadingData;
    id <tableViewDelegate> m_delegate;
    double _topInsetUnderContentViewY;
    double _dragNotifyOffset;
}

+ (id)genPlainTableSectionHeaderView:(double)arg1 title:(id)arg2;
+ (double)heightForPlainTableSectionHeaderView;
@property(nonatomic) double dragNotifyOffset; // @synthesize dragNotifyOffset=_dragNotifyOffset;
@property(readonly, nonatomic) _Bool isReloadingData; // @synthesize isReloadingData=_isReloadingData;
@property(nonatomic) double topInsetUnderContentViewY; // @synthesize topInsetUnderContentViewY=_topInsetUnderContentViewY;
@property(nonatomic) _Bool enableContentInsetForAdjustAutomatic; // @synthesize enableContentInsetForAdjustAutomatic=_enableContentInsetForAdjustAutomatic;
@property(nonatomic) _Bool bForceContentInsetAdjustAutomatic; // @synthesize bForceContentInsetAdjustAutomatic=_bForceContentInsetAdjustAutomatic;
@property(nonatomic) _Bool isHideExtraFooterLine; // @synthesize isHideExtraFooterLine=_isHideExtraFooterLine;
@property(nonatomic) _Bool isMainView; // @synthesize isMainView=_isMainView;
@property(retain, nonatomic) UIColor *tailColor; // @synthesize tailColor=_tailColor;
@property(nonatomic) Class cancelTouchsTrackClass; // @synthesize cancelTouchsTrackClass;
@property(nonatomic) _Bool cancelButtonTouchsTrack; // @synthesize cancelButtonTouchsTrack;
- (void).cxx_destruct;
- (void)useMMTableViewIndexViewWithDelegate:(id)arg1;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (long long)numberOfSections;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawFooterLine:(_Bool)arg1;
- (struct UIEdgeInsets)scrollIndicatorInsets;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInsetTop:(double)arg1 andBottom:(double)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleDragGesture:(id)arg1;
- (void)initDragGesture;
- (void)removeDragGesture;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)reloadDataAnimated;
- (void)setContentSize:(struct CGSize)arg1;
- (long long)firstSectionIndex;
- (void)reloadHeaderView;
- (void)reloadIndexView;
- (void)reloadData;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClearMyDelegate:(id)arg1 forProtocols:(id)arg2;
@property(nonatomic) __weak id <tableViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

