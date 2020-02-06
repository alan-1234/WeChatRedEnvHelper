//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "FTSWebSearchDataSource-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"
#import "WSJSEventHandleDelegate-Protocol.h"

@class FTSWebSearchMgr, MMUIViewController, NSMutableArray, NSString, UIButton, UIImageView, UIView, WCDataSearcher, WSJSEventHandler, WSResultViewLogic;

@interface MMEmotionStoreNewSearchController : MMObject <WCSearchDelegate, WCDataSearchDelegate, UISearchBarDelegate, MMUIViewControllerDelegate, WSJSEventHandleDelegate, FTSWebSearchDataSource, MMWebViewDelegate>
{
    WCDataSearcher *_searcher;
    _Bool m_canSearchAfterInit;
    MMUIViewController *m_searchViewController;
    UIView *m_searchResultContainerView;
    FTSWebSearchMgr *_webSearchMgr;
    NSMutableArray *_arrResultViews;
    WSResultViewLogic *_resultViewLogic;
    WSJSEventHandler *_jsEventHandler;
    unsigned long long _detailSearchType;
    NSString *_searchID;
    NSString *_localSessionId;
    UIButton *_euSearchBarHitBtn;
    _Bool _isMoving;
    unsigned int _enterScene;
    unsigned long long _searchScene;
    UIButton *_detailBackButton;
    double _moveStartOffset;
    double _moveCurOffset;
    UIImageView *_bottomViewShadow;
}

@property(retain, nonatomic) UIImageView *bottomViewShadow; // @synthesize bottomViewShadow=_bottomViewShadow;
@property(nonatomic) double moveCurOffset; // @synthesize moveCurOffset=_moveCurOffset;
@property(nonatomic) double moveStartOffset; // @synthesize moveStartOffset=_moveStartOffset;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) UIButton *detailBackButton; // @synthesize detailBackButton=_detailBackButton;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
- (void).cxx_destruct;
- (void)onEuSearchBarHitBtnClick:(id)arg1;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onRemoveDetailView;
- (void)popFromDetailSearch;
- (void)onClickDetailBack:(id)arg1;
- (void)updateMovingDetailView;
- (void)moveDetailViewToRight;
- (void)cancelMoveDetailView;
- (void)handlePanGestureForDetailView:(id)arg1;
- (id)makeNewDetailView:(id)arg1;
- (void)loadLocalHtmlForDetailPage:(id)arg1 andParams:(id)arg2;
- (id)findSearchTextField;
- (void)onSearchInputChanged:(id)arg1;
- (void)willBeginDetailSearch:(id)arg1 context:(int)arg2 andParams:(id)arg3;
- (void)onLaunchDetailPage:(id)arg1;
- (void)initWebSearchMgr;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)asyncSearch:(id)arg1;
- (void)hideKeyboard;
- (void)enableButton:(id)arg1;
- (void)reportClickSearch:(id)arg1;
- (void)onClickSearchButton:(id)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)loadH5ForMainView;
- (id)secondLastResultView;
- (id)currentResultView;
- (id)viewStacks;
- (unsigned long long)businessType;
- (id)query;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)wcsUpdateSearchContainer:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarBookmarkButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (id)getViewController;
- (int)getCgiSearchScene;
- (void)hideSearchBarResultView;
- (void)fixSearchBarSuperviewHeight;
- (void)fixSearchBarSuperviewHeightWhenActive;
- (void)fixSearchBarMaskBug;
- (void)tryInitViewOfSearchController;
- (void)clearArrResultWebviews;
- (void)dealloc;
- (id)initWithContentsViewController:(id)arg1 AndSearchBarDisplayController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

