//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerControlView.h"

#import "IWSVideoThumbExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WSPlayerMaskViewDelegate-Protocol.h"
#import "WSVideoPregressBarDelegate-Protocol.h"

@class CAGradientLayer, MMUILabel, NSMutableArray, NSString, UIButton, UIGestureRecognizer, UIImageView, UIView, WSPlayerMaskView, WSPlayerSimpleProgressBar, WSVideoModel, WSVideoOperateButton, WSVideoPregressBar, WSVideoSourceView;
@protocol WSVideoPagingPlayerViewDelegate;

@interface WSVideoPagingPlayerView : WCPlayerControlView <IWSVideoThumbExt, WSVideoPregressBarDelegate, WSPlayerMaskViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_displayContentView;
    UIView *_displayContentBGView;
    UIView *_devideLine;
    CAGradientLayer *_displayShadowLayer;
    CAGradientLayer *_thumbShadowLayer;
    WSVideoSourceView *_sourceView;
    WSVideoOperateButton *_shareButton;
    WSVideoOperateButton *_feedBackButton;
    WSVideoOperateButton *_goodLookButton;
    UIView *_operateTopLine;
    UIView *_operateBottomLine;
    NSMutableArray *_arrTagButton;
    MMUILabel *_titleLabel;
    MMUILabel *_centerTime;
    UIView *_countDownPanel;
    MMUILabel *_countDownTipsLabel;
    WSVideoPregressBar *_videoPregressBar;
    MMUILabel *_videoConsumeLabel;
    UIButton *_playPauseButton;
    WSPlayerSimpleProgressBar *_bottomProgressBar;
    _Bool _isLoading;
    _Bool _panGestureTriggerHorizonMove;
    _Bool _touchesProgressMoved;
    _Bool _tapToHideCountDownTips;
    _Bool _isShowPauseButton;
    struct CGPoint _panTouchStartPoint;
    double _panTouchLastChangedX;
    NSString *_newestNetType;
    int _errCode;
    _Bool _isHandlingExpireUpdate;
    NSString *_lastVideoUrl;
    _Bool _enablePageGesture;
    _Bool _needShowNetStatus;
    id <WSVideoPagingPlayerViewDelegate> _delegate;
    double _topInset;
    double _bottomInset;
    UIGestureRecognizer *_pageGesture;
    WSVideoModel *_videoModel;
    UIImageView *_thumbImageView;
    NSString *_thumbUrl;
    WSPlayerMaskView *_playerMaskView;
    struct CGRect _titleFrame;
}

@property(retain, nonatomic) WSPlayerMaskView *playerMaskView; // @synthesize playerMaskView=_playerMaskView;
@property(nonatomic) _Bool needShowNetStatus; // @synthesize needShowNetStatus=_needShowNetStatus;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WSVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(readonly, nonatomic) UIGestureRecognizer *pageGesture; // @synthesize pageGesture=_pageGesture;
@property(nonatomic) _Bool enablePageGesture; // @synthesize enablePageGesture=_enablePageGesture;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) __weak id <WSVideoPagingPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resumeExpired;
- (_Bool)isExpiredHandling;
- (void)force403;
- (void)onHandleCdnInfo:(id)arg1;
- (void)onClickGoodLook:(id)arg1;
- (void)onMaskViewTopBackBtnClick;
- (void)onCancelBtnClick;
- (void)notifyClickMaskPlayButton;
- (void)loadingForAutoRetryExpireVideo;
- (void)onTipBtnClickForRetryPlay;
- (void)onTipBtnClickForContinuePlay;
- (void)onTipBtnClickForReplay;
- (void)showMaskWithTip:(id)arg1 btnType:(unsigned long long)arg2 showCancelBtn:(_Bool)arg3;
- (void)showMaskWithMobileNetwork;
- (void)clearPlayerMaskView;
- (void)updatePlayerMaskView;
- (void)showTipInfoToastWithText:(id)arg1;
- (void)updateBottomProgress:(double)arg1;
- (void)doHideControlViews;
- (void)hideControlViewsAnimated:(_Bool)arg1;
- (void)hideControlViews;
- (void)showControlViews;
- (void)hidePlayPauseButton;
- (void)showPlayPauseButton:(_Bool)arg1;
- (void)showControlViews:(_Bool)arg1;
- (void)onReplay;
- (void)tryToPlayCurrentVideo;
- (void)onPlayPauseButtonClick:(id)arg1;
- (_Bool)isOffline;
- (_Bool)isOnMobileNetwork;
- (_Bool)isOnWifi;
- (void)updateVideoCurrentTime:(double)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (id)timeFormat:(int)arg1;
- (void)horizontalMoveEnd;
- (void)horizontalMoved:(double)arg1;
- (void)panGestureControl:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onWSVideoThumbDownloadImageFailForKey:(id)arg1;
- (void)onWSVideoThumbDownloadImageFinish:(id)arg1 key:(id)arg2;
- (void)onTapPlayerView:(id)arg1;
- (void)onClickFeedBack:(id)arg1;
- (void)onTapSource:(id)arg1;
- (void)onLike:(id)arg1;
- (void)onShare:(id)arg1;
- (void)delayTapTag:(id)arg1;
- (void)onTapTag:(id)arg1;
- (_Bool)isForbidDisplayFeedBack;
- (_Bool)hasImageCacheForUrl:(id)arg1;
- (void)smartSetVideoThumb;
- (void)updateCountDownLabel;
- (_Bool)needShowCountDownTips:(double)arg1;
- (void)updateConsumeLabel;
- (void)updatePlayPauseButtonVisibility;
- (void)setButtonUIOnPlay:(_Bool)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)isIniting;
- (_Bool)isPlaying;
- (_Bool)isPause;
- (void)anyInteract;
- (void)notifyNetworkChange:(_Bool)arg1;
- (void)beginPlayVideoError;
- (void)setBeginRetryUI;
- (void)setErrorPlayUI;
- (void)resetCountDownTipsUI;
- (void)setCountDownTipsUI;
- (void)setPauseVideoUI;
- (void)setBeginPlayVideoUI;
- (void)setPreparePlayUI;
- (void)setPreviewUI;
- (void)resetStatus;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(int)arg1 LocalizedErrorDes:(id)arg2;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (_Bool)asyncHandleExpiredVideo;
- (id)genTagButton;
- (void)layoutSubviews;
- (void)layoutThumbShadowLayer;
- (void)layoutDisplayContent;
- (void)hideThumbShadow;
- (void)layoutDisplayShadowLayer;
- (void)initDisplayContent;
- (void)initPlayButton;
- (void)removePregressBar;
- (void)initThumbImageView;
- (void)initOtherViews;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

