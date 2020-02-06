//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IGameCenterExt-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class FMSearchBar, GameCenterSearcher, GameSearchRecommendList, MMUIViewController, NSMutableArray, NSString, UITableView;
@protocol GameCenterSearchLogicControllerDelegate;

@interface GameCenterSearchLogicController : MMObject <WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, IGameCenterExt>
{
    _Bool _isHeaderView;
    NSMutableArray *_resultGroupList;
    MMUIViewController *_parentViewController;
    UITableView *_recommendTableView;
    unsigned int _searchScene;
    GameSearchRecommendList *_smartBoxData;
    GameSearchRecommendList *_rcmData;
    int _resultType;
    unsigned int _webResultActicleType;
    int _sourceScene;
    GameCenterSearcher *_searcher;
    _Bool _isNoResult;
    int _searchStatus;
    FMSearchBar *_searchBar;
    id <GameCenterSearchLogicControllerDelegate> _delegate;
    NSString *_searchKeyword;
    long long _returnKeyType;
    NSString *_searchPlaceholder;
}

@property(nonatomic) _Bool isNoResult; // @synthesize isNoResult=_isNoResult;
@property(retain, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder=_searchPlaceholder;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(nonatomic) int searchStatus; // @synthesize searchStatus=_searchStatus;
@property(nonatomic) __weak id <GameCenterSearchLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onGameSearchSmartBox:(id)arg1 recommendList:(id)arg2 error:(long long)arg3;
- (void)onGameSearchFinishedWithResultGroups:(id)arg1 searchWithText:(id)arg2 error:(long long)arg3;
- (void)setWebResultArticleType:(id)arg1;
- (void)cancelSearch;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)resetRecommendGamesAndShowRecommendTableView;
- (void)popupSearchBar;
- (void)layoutRecommendView;
- (void)finishSearch;
- (void)removeNoResultLabelWhenSearching;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sessionHeaderViewForSearchResult:(id)arg1;
- (id)sessionHeaderViewForSmartBox:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)onClassifyBtnClicked:(id)arg1;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 searchWord:(id)arg2 sourceScene:(int)arg3;
- (void)handleShowMore:(id)arg1;
- (void)handleSearchWebResultItem:(id)arg1;
- (int)handleSearchGameResultItem:(id)arg1 searchWord:(id)arg2 sourceScene:(int)arg3;
- (void)loadSubviewsForSearchCell:(id)arg1 similarResultItem:(id)arg2 separatorX:(double)arg3;
- (void)loadSubviewsForSearchCell:(id)arg1 webResultItem:(id)arg2 separatorX:(double)arg3;
- (void)loadSubviewsForSearchCell:(id)arg1 gameResultItem:(id)arg2 separatorX:(double)arg3;
- (void)loadSubviewsForSearchCell:(id)arg1 showMore:(id)arg2;
- (void)loadSubviewsForSearchCell:(id)arg1 resultTips:(id)arg2;
- (void)loadSubviewsForSearchCell:(id)arg1 separatorColor:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellForSmartBoxResult:(id)arg1 IndexPath:(id)arg2;
- (id)cellForSmartBox:(id)arg1 IndexPath:(id)arg2;
- (id)cellForSearchResult:(id)arg1 IndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)keyboardWillShow;
- (void)dealloc;
- (void)resetStatusBarColor;
- (void)relayoutSubviews;
@property(readonly, nonatomic) FMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (id)initWithContentsController:(id)arg1 isHeaderView:(_Bool)arg2 sourceScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

