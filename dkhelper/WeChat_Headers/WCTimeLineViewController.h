//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IMMFacebookMgrExt-Protocol.h"
#import "IMMGrowTextViewExt-Protocol.h"
#import "INewMsgNotifyExt-Protocol.h"
#import "ITranslateSnsMgrExt-Protocol.h"
#import "IWCStoryEntranceVMExt-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMExposeViewControllerDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMNavBarInteractiveDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCAdvertiseActionFloatForABTestDelegate-Protocol.h"
#import "WCAdvertiseActionFloatViewDelegate-Protocol.h"
#import "WCBarMessageWindowDelegate-Protocol.h"
#import "WCChatRoomStoryDataVMExt-Protocol.h"
#import "WCCommentDetailViewControllerFBDelegate-Protocol.h"
#import "WCCommentStrangerViewControllerDelegate-Protocol.h"
#import "WCCommitViewAnimationDelegate-Protocol.h"
#import "WCContentItemViewExt-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCImageFullScreeViewMgrExt-Protocol.h"
#import "WCListHeaderViewDelegate-Protocol.h"
#import "WCPlainTextTipFullScreenViewDelegate-Protocol.h"
#import "WCSetPermissionsViewControllerDelegate-Protocol.h"
#import "WCSightViewExt-Protocol.h"
#import "WCSnsABTestMgrExt-Protocol.h"
#import "WCStoryFriendsCollectionViewControllerDelegate-Protocol.h"
#import "WCTimeLineCellViewDelegate-Protocol.h"
#import "WCTimeLineCommentCellViewDelegate-Protocol.h"
#import "WCTimeLineContactSelectViewControllerDelegate-Protocol.h"
#import "WCTimelineCellABTestTipExt-Protocol.h"
#import "scrollViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CContact, EmoticonBoardView, MMGrowTextView, MMHeadImageView, MMTableView, MMTipsViewController, MMUIButton, MMUIImageView, MMUILabel, MMURLHandler, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIButton, UIImageView, UIView, WCADPageWrap, WCAdvertiseActionFloatForABTest, WCAdvertiseActionFloatView, WCBarMessageWindow, WCDataItem, WCInputController, WCListHeaderView, WCOperateFloatView, WCPasteTextLengthLogic, WCPlainTextTipFullScreenView, WCStoryEntranceVM, WCStoryReportUtil, WCTimeLineFooterView, WCTimeLineHeaderView, WCUserComment, WeishiReportItem;
@protocol UIViewControllerPreviewing, WCTimeLineViewControllerDelegate;

@interface WCTimeLineViewController : MMUIViewController <tableViewDelegate, BaseEmoticonViewDelegate, WCSnsABTestMgrExt, WCCommitViewAnimationDelegate, ITranslateSnsMgrExt, INewMsgNotifyExt, MMExposeViewControllerDelegate, MMSightCameraViewControllerDelegate, WCAdvertiseActionFloatViewDelegate, MMNavBarInteractiveDelegate, IMMGrowTextViewExt, WCChatRoomStoryDataVMExt, IWCStoryEntranceVMExt, WCStoryFriendsCollectionViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, WCListHeaderViewDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, IMMFacebookMgrExt, MMImagePickerManagerDelegate, WCPlainTextTipFullScreenViewDelegate, WCSightViewExt, WCContentItemViewExt, WCImageFullScreeViewMgrExt, WCBarMessageWindowDelegate, WCTimelineCellABTestTipExt, UIAlertViewDelegate, WCAdvertiseActionFloatForABTestDelegate, WCTimeLineContactSelectViewControllerDelegate>
{
    NSMutableDictionary *m_cellHeightCache;
    NSMutableDictionary *m_cellShowItemCache;
    NSMutableDictionary *m_hasPredownload;
    struct map<long, TimeLineSectionType, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, TimeLineSectionType>>> m_sectionIndexToType;
    MMTableView *m_tableView;
    WCTimeLineHeaderView *m_headRefreshView;
    WCTimeLineFooterView *m_footerView;
    WCListHeaderView *m_headerView;
    MMTipsViewController *m_introView;
    UIButton *m_messageTipView;
    MMHeadImageView *m_messageHeaderView;
    UIView *m_blackView;
    UIImageView *m_animationView;
    WCInputController *_inputController;
    WCOperateFloatView *m_floatOperateView;
    WCAdvertiseActionFloatView *m_advertiseActionFloatView;
    WCAdvertiseActionFloatForABTest *m_advertiseFloadForABTest;
    UIButton *m_advertiseActionBtn;
    WCPlainTextTipFullScreenView *m_plainTextFullScreenView;
    _Bool m_hasRefrashHead;
    _Bool m_isReflashingHead;
    _Bool m_isNoMoreData;
    _Bool m_isDelayStopFooterLoading;
    _Bool m_bTapHeaderView;
    _Bool m_bLongPressRightButton;
    _Bool m_hasSpeedyLoadView;
    _Bool m_shouldReloadData;
    _Bool m_shouldForbidRealodData;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    WCDataItem *_inputDataItem;
    WCUserComment *_inputRefComment;
    _Bool _isActionAtAd;
    int scrollCount;
    float m_fLastY;
    WCDataItem *_cacheDateItem;
    UIView *_animationView;
    NSArray *m_arrUploadFailItems;
    NSArray *m_arrCommentFailItems;
    NSArray *m_arrLikeFailItems;
    WCDataItem *m_SightFoldItem;
    WCDataItem *m_ImageFoldItem;
    NSString *m_userName;
    id <WCTimeLineViewControllerDelegate> m_delegate;
    _Bool m_hasBeginTimeline;
    double m_preContentOffset;
    WCBarMessageWindow *m_barMessageWindow;
    _Bool m_forbidShowTip;
    _Bool m_needSetToTopCell;
    WCADPageWrap *_floatViewPageWrap;
    WCADPageWrap *_abTestPageWrap;
    _Bool _isReloadingData;
    NSMutableArray *_adReloadIndexPaths;
    NSMutableArray *_adInitIndexPaths;
    int m_commentWordLimit;
    NSMutableDictionary *_needReportViewId2AdInfo;
    NSMutableArray *m_arrWaitHateItemId;
    NSMutableArray *m_arrHiddenDataItem;
    NSMutableArray *m_arrWaitHiddenTipDataItem;
    _Bool m_hasNewPhotoWhenEnter;
    _Bool m_canLogAdContext;
    _Bool m_canLogDataList;
    double m_lastScreenShotContentOffset;
    UIButton *_atButton;
    MMGrowTextView *_growTextView;
    CContact *_atContact;
    double m_lastWCCanvasContentHeight;
    unsigned int _startTime;
    id <UIViewControllerPreviewing> _previewingContext;
    _Bool _canReload;
    _Bool _startReload;
    NSMutableDictionary *m_mediaCellViewCache;
    WeishiReportItem *weishiReportItem;
    WCPasteTextLengthLogic *pastelogic;
    _Bool m_hasDataSourceChanged;
    _Bool _isStayInPage;
    _Bool _hasOpenedWebViewUseFastLoad;
    _Bool _hasInvokeFastLoadPVBiz;
    NSMutableSet *_setFastLoadTemplateType;
    _Bool _storyEntranceIsVisiable;
    _Bool _isViewDidAppear;
    MMURLHandler *m_urlHandler;
    MMUIButton *_storyHeaderButton;
    MMUIImageView *_arrowImageView;
    MMUILabel *_countLabel;
    MMUILabel *_unreadTotalCountLabel;
    WCStoryEntranceVM *_entranceVM;
    NSMutableArray *_storyHeadImageViewArray;
    WCStoryReportUtil *_storyReportUtil;
    NSNumber *_storyEntranceSwitch;
    NSString *_latestAutoplayVideoTid;
    unsigned long long _unreadRelatedCommentCount;
    NSMutableArray *_storyEntranceArray;
}

@property(retain, nonatomic) NSMutableArray *storyEntranceArray; // @synthesize storyEntranceArray=_storyEntranceArray;
@property(nonatomic) unsigned long long unreadRelatedCommentCount; // @synthesize unreadRelatedCommentCount=_unreadRelatedCommentCount;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(nonatomic) NSNumber *storyEntranceSwitch; // @synthesize storyEntranceSwitch=_storyEntranceSwitch;
@property(nonatomic) _Bool storyEntranceIsVisiable; // @synthesize storyEntranceIsVisiable=_storyEntranceIsVisiable;
@property(retain, nonatomic) WCStoryReportUtil *storyReportUtil; // @synthesize storyReportUtil=_storyReportUtil;
@property(retain, nonatomic) NSMutableArray *storyHeadImageViewArray; // @synthesize storyHeadImageViewArray=_storyHeadImageViewArray;
@property(retain, nonatomic) WCStoryEntranceVM *entranceVM; // @synthesize entranceVM=_entranceVM;
@property(retain, nonatomic) MMUILabel *unreadTotalCountLabel; // @synthesize unreadTotalCountLabel=_unreadTotalCountLabel;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIButton *storyHeaderButton; // @synthesize storyHeaderButton=_storyHeaderButton;
@property(nonatomic) _Bool m_hasNewPhotoWhenEnter; // @synthesize m_hasNewPhotoWhenEnter;
@property(nonatomic) _Bool m_hasRefrashHead; // @synthesize m_hasRefrashHead;
@property(nonatomic) __weak id <WCTimeLineViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldUseBlackStatusBar:(id)arg1;
- (void)showMultiContactPreviewViewController:(id)arg1 dismissVC:(id)arg2;
- (void)storyEntranceNeedReload;
- (void)unifiedEntranceNeedUpdate;
- (void)reloadStoryVMData;
- (void)reloadContactHasUnreadStory;
- (void)reloadStoryConfigure;
- (void)tryToResumeInputDataInfo;
- (void)tryToCacheInputDataInfo;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)abTestViewHiddenWrap;
- (void)onExposeCancel;
- (void)onExposeComplete;
- (void)floatViewHiddenWrap;
- (void)calADCellYVisible:(_Bool *)arg1 centerVisible:(_Bool *)arg2 bottomVisible:(_Bool *)arg3 forRowAtIndexPath:(id)arg4;
- (void)recordStoryEntranceInfo;
- (void)recordADCommentEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)handleABTestTipClickEvent:(id)arg1 actionItem:(id)arg2 dataItem:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showABTestAlert:(id)arg1 dataItem:(id)arg2;
- (void)tryLogABTestResult:(id)arg1;
- (void)refreshCacheForABTestTip:(id)arg1;
- (void)tryReportAdCell:(id)arg1;
- (void)onPlayNewMsgNotify;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (_Bool)shouldInteractivePop;
- (void)updateNetworkStatus;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3 extraInfo:(id)arg4;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4 clickSource:(int)arg5 originView:(id)arg6;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4 clickSource:(int)arg5 originView:(id)arg6;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 userData:(id)arg4;
- (id)getAppIdFromUrl:(id)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onDismissViewController:(id)arg1 userName:(id)arg2;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onWCTimeLineCommentCellDeleteComment:(unsigned long long)arg1 ofDataItem:(id)arg2;
- (void)onWCTimeLineCommentCellOpenFullText:(id)arg1 ofDataItem:(id)arg2;
- (void)onRestoreTimeLineCellView:(id)arg1;
- (void)cleanCellHeightCache:(id)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(id)arg1;
- (void)onEditBlackList:(id)arg1;
- (id)getView;
- (void)onActionLocation:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1 forScene:(unsigned int)arg2;
- (void)onTimeLineCellMoreMenu:(id)arg1;
- (void)onShowDetailViewForDataItem:(id)arg1;
- (void)onShowDetailChanged:(id)arg1 bShowDetailBeforeChange:(_Bool)arg2;
- (void)onUpdateDataItem:(id)arg1 oldHeight:(double)arg2 newHeight:(double)arg3;
- (void)onCommentDataItem:(id)arg1 point:(struct CGPoint)arg2;
- (void)onAdvertiseAction:(id)arg1 point:(struct CGPoint)arg2;
- (void)onActionFloatView:(id)arg1 didSelectFeedbackItem:(id)arg2;
- (void)onActionFloatView:(id)arg1 didSelectReason:(id)arg2;
- (void)onRemoveAd;
- (void)onAdActoin:(id)arg1;
- (void)onWCTimeLineCellViewShowGroup:(id)arg1;
- (void)onWCTimeLineCellViewShowProfile:(id)arg1;
- (void)onWCTimeLineCellViewDeletePhotoClick:(id)arg1;
- (void)onWCTimeLineCellViewActionJump:(id)arg1;
- (void)onWCTimeLineCellViewActionMusic:(id)arg1;
- (void)onWCTimeLineCellViewActionAdPOI:(id)arg1;
- (void)onWCTimeLineCellViewActionAdChainStrengthen:(id)arg1;
- (void)onDontLikeWithChoose:(id)arg1;
- (void)onDontLikeWithOtherReason:(id)arg1 QuestionExp:(id)arg2;
- (void)onClickTipBtn:(id)arg1;
- (void)onHideAdvertise:(id)arg1;
- (void)onViewAnimationDidHiden;
- (void)onViewAnimationWillHide;
- (void)onIKnowItBtnClicked;
- (void)onTouchDownLikeBtnOnFloatView;
- (void)onClickCommentBtnOnFloatView;
- (id)getCachedMediaCellViewForData:(id)arg1;
- (void)cacheMediaCellView:(id)arg1 forData:(id)arg2;
- (void)onActionAtAd:(id)arg1;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3 isActionAtAd:(_Bool)arg4;
- (double)totalHeightFromTopToSection:(unsigned long long)arg1;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (id)visibleTimeLineCellViewWithTid:(id)arg1;
- (void)showContactInfo;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)checkNewMessage;
- (void)updateUnreadStoryHeadImageView:(id)arg1;
- (id)genHeadImageDataFromUnreadStoryData:(id)arg1;
- (void)updateUnreadTotalCommentCountLabel;
- (void)openStoryNewEntrance;
- (id)createUnreadStoryHeadImageView;
- (void)setupStoryReportUtil;
- (void)setupStoryHeaderView;
- (_Bool)shouldShowStoryCell;
- (_Bool)hasUnReadMessage;
- (void)shouldUpdateMessageButton:(id)arg1;
- (void)resetHeaderView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)showUploadOption:(id)arg1;
- (void)showPhotoAlert:(id)arg1;
- (void)reportLastDraft;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)onSightCameraCancel;
- (id)getViewController;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)editShield:(id)arg1 forScene:(int)arg2;
- (void)editShield:(id)arg1;
- (void)editBlackList:(id)arg1 forSource:(int)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)openCommitViewControllerWithSightDraft:(id)arg1;
- (void)openCommitViewController:(_Bool)arg1 arrImage:(id)arg2;
- (id)visibleDataItemList;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)onBarTipClicked;
- (void)scrollToTop;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (_Bool)isStoryEntranceVisiable;
- (void)refreshHeadOnScrolltoTop;
- (void)refreshHeadForShowTip;
- (void)autoPauseLatestAutoplayVideo;
- (void)autoplayVideoProcess;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hideMenu;
- (void)logUserOpInfoAsScreenShot;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)stopRefreshHeaderView;
- (void)refreshHead:(unsigned long long)arg1;
- (void)shouldCurrentAdSphereCardStartMonitoring:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onNoMoreTimelineData;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onCommentReturn:(id)arg1;
- (void)onTimelineVideoAutoPlayCfgChange;
- (void)onLoadMore;
- (void)initData;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)touchesCancelled_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)tryResumeStatus;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showDetailView:(id)arg1;
- (void)showFoldedImageDetailView:(id)arg1;
- (void)showFoldedSightDetailView:(id)arg1;
- (void)showDetailViewForFoldedImage:(id)arg1;
- (void)showDetailViewForFoldedSight:(id)arg1;
- (void)showDetailViewForFailedCommentItem:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1;
- (void)onDeleteData;
- (void)onRestartUpload;
- (void)showMessageList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tryToStartAdSphereViewMonitoringWithDelay:(_Bool)arg1;
- (void)tryToStopSphereMonitoringWithReset:(_Bool)arg1;
- (void)tryToStopSphereMonitoringFor:(id)arg1 reset:(_Bool)arg2;
- (void)tryLogThumbImageLoadedEffiency:(id)arg1;
- (void)genStoryHeaderCell:(id)arg1 indexPath:(id)arg2;
- (void)genRedHeartCell:(id)arg1 indexPath:(id)arg2;
- (void)genUploadFailCell:(id)arg1 indexPath:(id)arg2;
- (void)genFoldMessageCell:(id)arg1 indexPath:(id)arg2;
- (void)genABTestTipCell:(id)arg1 indexPath:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)GetIsLastCommentOrLikeCell:(id)arg1 RowIndex:(long long)arg2;
- (_Bool)GetIsCommentCellRow:(id)arg1 RowIndex:(long long)arg2;
- (void)hideAlbumListLineViewInCell:(id)arg1;
- (void)resetAlbumListLineViewsFrameInCell:(id)arg1 indexPath:(id)arg2;
- (id)getUploadFailItemsFroView;
- (double)getCellLineContentMarginCurOri;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideFloatView;
- (long long)calcDataItemIndex:(long long)arg1;
- (long long)getFirstNormalItemIndex;
- (void)willDisshow;
- (void)onNetworkActivityStatusChanged;
- (void)willShow;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)delayReload;
- (void)startAdResumeAppear;
- (void)startAdDisappear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panned:(id)arg1;
- (void)viewDidLoad;
- (void)resetRightBarItem;
- (void)viewDidLayoutSubviews;
- (void)adjustViewAndNavBarRect;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (void)resetStatus:(_Bool)arg1;
- (void)asyncLogUnreadMsgCount;
- (void)startLogBrowseInfo:(_Bool)arg1;
- (void)onTimeLineViewReturn;
- (void)handleLongPressEx:(id)arg1;
- (void)openWriteTextViewController;
- (void)OnFinishComment:(_Bool)arg1;
- (void)resetRightButtonStatus;
- (void)handleAfterReloadTableView;
- (void)p_reloadTableViewContent;
- (void)scrollEndReloadTableView;
- (void)reloadTableView;
- (void)didDisshow;
- (void)setToTopCell;
- (void)cacheInputText;
- (void)clearWCCache;
- (void)reloadDataWrap;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
@property(readonly, nonatomic) MMURLHandler *m_urlHandler; // @synthesize m_urlHandler;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)subAtContactString:(id)arg1;
- (_Bool)hasAtFriend:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)updateWordCnt:(int)arg1;
- (void)onHideKeyboard;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillHide;
- (void)updateContentOffset;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onAtableAdClicked:(id)arg1;
- (void)setInputToolView:(_Bool)arg1;
- (void)ensureInitInputView;
- (void)initEmoticonView;
- (void)initInputToolView;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)onTranslateSnsChangedFromPhotoContent:(id)arg1;
- (_Bool)shouldAddShadowView;
- (void)onHideUrlFeedComfirmSuccess:(id)arg1;
- (void)onHideUrlFeedComfirmFail:(id)arg1;
- (void)onHideUrlFeedComfirmBegin:(id)arg1;
- (void)onViewSightOutFullScreen;
- (void)onViewSightInFullScreen;
- (void)refreshWholeView;
- (void)refreshWholeViewWithFixedDataItem:(id)arg1;
- (void)onWCCanvasContentItemViewOutFullScreen:(id)arg1;
- (void)onWCCanvasContentItemViewInFullScreen:(id)arg1;
- (void)onWCContentItemViewOutFullScreen;
- (void)onWCContentItemViewInFullScreen;
- (void)onWCContentItemViewOpenedWebViewUseFastLoad:(id)arg1;
- (void)onWCContentItemViewExposeMenu:(id)arg1 scene:(int)arg2;
- (void)onWCContentItemViewMoreMenu:(id)arg1 sender:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)commitAnimationWillStart:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)scrollTableViewToShowDataItem:(id)arg1;
- (void)showAnimationToImageView;
- (void)setAnimatedImageHidden:(_Bool)arg1 withTimeLineCellView:(id)arg2;
- (void)setAnimatedImageHidden:(_Bool)arg1;
- (void)clearAnimationPropertiesProtection;
- (void)clearAnimationProperties;
- (void)preDownloadPageDataForVisibleCells;
- (void)dataItemOpenedWebViewUseFastLoad:(id)arg1;
- (void)reportAllAppmsgExposureInfoForVisibleCells;
- (void)reportAppmsgExposureInfoForDataItem:(id)arg1;
- (void)recordAllAppmsgExposureInfoForVisibleCells;
- (_Bool)isAppmsgSupportExposure:(id)arg1;
- (_Bool)isForwardAppmsg:(id)arg1;
- (void)doResetAppMsgExposureParameter;
- (_Bool)isDataItemValidAfterCheckForwardAndUrlDomain:(id)arg1 needCheckItemShowType:(_Bool)arg2;
- (void)doPreCreateWebViewAndUpdateTemplateAndBatchReport:(id)arg1;
- (long long)currPageAppmsgReportScene;
- (long long)currPageAppmsgEnterType;
- (void)handleAppmsgWhenInPage;
- (void)handleAppmsgWhenDidExitPage;
- (void)handleAppmsgWhenWillExitPage;
- (void)handleAppmsgWhenEnterPage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

