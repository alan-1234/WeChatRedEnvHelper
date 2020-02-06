//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonBoardCrossCollectionCameraEmoticonEntryPageDelegate-Protocol.h"
#import "EmoticonBoardCrossCollectionEmoticonPageDelegate-Protocol.h"
#import "EmoticonBoardCrossCollectionQQEmojiPageDelegate-Protocol.h"
#import "EmoticonBoardCrossCollectionRecommendPageDelegate-Protocol.h"
#import "EmoticonDescMgrExt-Protocol.h"
#import "ExpressionMgrExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class EmoticonBoardCrossSectionInfo, NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;
@protocol EmoticonBoardCrossCollectionControllerDelegate;

@interface EmoticonBoardCrossCollectionController : MMObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonDescMgrExt, ExpressionMgrExt, EmoticonBoardCrossCollectionQQEmojiPageDelegate, EmoticonBoardCrossCollectionEmoticonPageDelegate, EmoticonBoardCrossCollectionCameraEmoticonEntryPageDelegate, EmoticonBoardCrossCollectionRecommendPageDelegate>
{
    _Bool _darkMode;
    _Bool _shouldShowRecentUseEmoji;
    _Bool _emojiCanSend;
    id <EmoticonBoardCrossCollectionControllerDelegate> _delegate;
    UIView *_contentView;
    double _bottomInset;
    NSString *_emojiFinishButtonTitle;
    EmoticonBoardCrossSectionInfo *_currentSectionInfo;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    NSArray *_sectionInfoArray;
    unsigned long long _recentCheckSectionInfoIndex;
    NSMutableDictionary *_pidToSectionInfoDict;
}

@property(retain, nonatomic) NSMutableDictionary *pidToSectionInfoDict; // @synthesize pidToSectionInfoDict=_pidToSectionInfoDict;
@property(nonatomic) unsigned long long recentCheckSectionInfoIndex; // @synthesize recentCheckSectionInfoIndex=_recentCheckSectionInfoIndex;
@property(retain, nonatomic) NSArray *sectionInfoArray; // @synthesize sectionInfoArray=_sectionInfoArray;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) EmoticonBoardCrossSectionInfo *currentSectionInfo; // @synthesize currentSectionInfo=_currentSectionInfo;
@property(retain, nonatomic) NSString *emojiFinishButtonTitle; // @synthesize emojiFinishButtonTitle=_emojiFinishButtonTitle;
@property(nonatomic) _Bool emojiCanSend; // @synthesize emojiCanSend=_emojiCanSend;
@property(nonatomic) _Bool shouldShowRecentUseEmoji; // @synthesize shouldShowRecentUseEmoji=_shouldShowRecentUseEmoji;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRecommendPageCellTapRecommendViewWithPid:(id)arg1;
- (void)onCameraEmoticonEntryPageCellTapCreateButton;
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 frame:(struct CGRect)arg3;
- (void)onEmoticonPageCellTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 pid:(id)arg3 maxCountPerLine:(unsigned long long)arg4;
- (void)shouldHideQQEmojiPreview;
- (void)shouldShowQQEmojiPreviewForKey:(id)arg1 atCenterPoint:(struct CGPoint)arg2;
- (void)onQQEmojiPageCellTapDeleteButton;
- (void)onQQEmojiPageCellTapSendButton;
- (void)onQQEmojiPageCellTapQQEmojiWithCode:(id)arg1 isRecentUse:(_Bool)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
- (void)onPageCell:(id)arg1 didScrollToOffset:(struct CGPoint)arg2;
- (void)onEmojiBoardKeyListChanged;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)getVisibleQQEmojiPageCell;
- (id)getQQEmojiSectionInfo;
- (id)getQQEmojiDictionary;
- (id)sectionInfoForPid:(id)arg1;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;
- (void)stopCurrentPageScroll;
- (void)updateRecentUseEmojiNeedReload:(_Bool)arg1;
- (void)changePageToPid:(id)arg1 scrollToTop:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setEmoticonPageArray:(id)arg1;
- (void)updateContentViewFrame:(struct CGRect)arg1;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

