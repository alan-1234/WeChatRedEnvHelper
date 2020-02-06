//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "MMNewMultiSelectContactsViewControllerDelegate-Protocol.h"
#import "MultiTalkBeforeTalkingOperateViewDelegate-Protocol.h"
#import "MultiTalkContactsCollectionViewDelegate-Protocol.h"
#import "MultiTalkMainWindowDelegate-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"
#import "MultiTalkTalkingOperateViewDelegate-Protocol.h"
#import "MultiTalkTalkingOperateViewLayoutDelegate-Protocol.h"
#import "MultitalkSecondOperateViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class CContact, MMTimer, MultiTalkBeforeTalkingOperateView, MultiTalkContactsCollectionView, MultiTalkTalkingOperateView, MultitalkSecondOperateView, NSArray, NSDictionary, NSString, UIImageView, WCUIAlertView, WXCGroupMember, WXCMultiTalkGroup;
@protocol MultiTalkMainViewControllerDelegate;

@interface MultiTalkMainViewController : MMUIViewController <MultiTalkMgrExt, MMNewMultiSelectContactsViewControllerDelegate, MultiTalkContactsCollectionViewDelegate, UIViewControllerTransitioningDelegate, MultiTalkBeforeTalkingOperateViewDelegate, MultiTalkTalkingOperateViewDelegate, MultiTalkTalkingOperateViewLayoutDelegate, MultitalkSecondOperateViewDelegate, IRecordPermissionCheckExt, MultiTalkMainWindowDelegate>
{
    _Bool _m_isCaller;
    _Bool _m_hasClickAcceptButton;
    _Bool _m_hasClickHangupButton;
    _Bool _m_hasStartTimerView;
    _Bool _m_talkReady;
    _Bool _m_deviceLaunchSuccess;
    _Bool _m_hasBlurBackground;
    _Bool _m_isMinimizeMode;
    _Bool _m_hasCreateOk;
    _Bool _m_connect_onePersonLeft;
    _Bool _m_connect_timeOut;
    _Bool _m_connect_netWorkError;
    _Bool _m_connect_hangup;
    _Bool _m_connect_beCanceled;
    _Bool _m_connect_interruptByCall;
    int _m_layoutType;
    unsigned int _m_messageId;
    int _m_networkStatus;
    unsigned int _m_audio_duration;
    unsigned int _m_video_start_time;
    unsigned int _m_minimizeClickCount;
    unsigned int _m_muteClickCount;
    unsigned int _m_speakerClickCount;
    unsigned int _m_videoClickCount;
    unsigned int _m_addMemberClickCount;
    id <MultiTalkMainViewControllerDelegate> _m_mainWindowDelegate;
    MultiTalkContactsCollectionView *_m_contactView;
    MultiTalkBeforeTalkingOperateView *_m_beforeTalkingView;
    MultiTalkTalkingOperateView *_m_talkingView;
    MultitalkSecondOperateView *_m_secondTalkingView;
    UIImageView *_m_backgroundView;
    MMTimer *_m_checkTalkingTimer;
    MMTimer *_m_updateMessageTimer;
    MMTimer *_m_checkQualityTimer;
    WXCMultiTalkGroup *_m_group;
    CContact *_m_contactInviteMe;
    NSDictionary *_m_videoMemberInfo;
    NSArray *_m_memberTalkArray;
    NSDictionary *_m_memberTalkingDic;
    NSArray *_m_memberWaitList;
    NSArray *_m_memberDisplayBigHeadList;
    NSArray *_m_contactWaitList;
    NSArray *_m_contactArrayOther;
    MMTimer *_m_timeOutTimer;
    MMTimer *_m_onePersonCheckFroMinimizeTimer;
    WXCGroupMember *_m_selfMember;
    WCUIAlertView *_currentAlertView;
    unsigned long long _m_connect_startTime;
}

@property(nonatomic) unsigned int m_addMemberClickCount; // @synthesize m_addMemberClickCount=_m_addMemberClickCount;
@property(nonatomic) unsigned int m_videoClickCount; // @synthesize m_videoClickCount=_m_videoClickCount;
@property(nonatomic) unsigned int m_speakerClickCount; // @synthesize m_speakerClickCount=_m_speakerClickCount;
@property(nonatomic) unsigned int m_muteClickCount; // @synthesize m_muteClickCount=_m_muteClickCount;
@property(nonatomic) unsigned int m_minimizeClickCount; // @synthesize m_minimizeClickCount=_m_minimizeClickCount;
@property(nonatomic) unsigned int m_video_start_time; // @synthesize m_video_start_time=_m_video_start_time;
@property(nonatomic) unsigned int m_audio_duration; // @synthesize m_audio_duration=_m_audio_duration;
@property(nonatomic) unsigned long long m_connect_startTime; // @synthesize m_connect_startTime=_m_connect_startTime;
@property(nonatomic) _Bool m_connect_interruptByCall; // @synthesize m_connect_interruptByCall=_m_connect_interruptByCall;
@property(nonatomic) _Bool m_connect_beCanceled; // @synthesize m_connect_beCanceled=_m_connect_beCanceled;
@property(nonatomic) _Bool m_connect_hangup; // @synthesize m_connect_hangup=_m_connect_hangup;
@property(nonatomic) _Bool m_connect_netWorkError; // @synthesize m_connect_netWorkError=_m_connect_netWorkError;
@property(nonatomic) _Bool m_connect_timeOut; // @synthesize m_connect_timeOut=_m_connect_timeOut;
@property(nonatomic) _Bool m_connect_onePersonLeft; // @synthesize m_connect_onePersonLeft=_m_connect_onePersonLeft;
@property(nonatomic) _Bool m_hasCreateOk; // @synthesize m_hasCreateOk=_m_hasCreateOk;
@property(nonatomic) __weak WCUIAlertView *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
@property(nonatomic) int m_networkStatus; // @synthesize m_networkStatus=_m_networkStatus;
@property(retain, nonatomic) WXCGroupMember *m_selfMember; // @synthesize m_selfMember=_m_selfMember;
@property(retain, nonatomic) MMTimer *m_onePersonCheckFroMinimizeTimer; // @synthesize m_onePersonCheckFroMinimizeTimer=_m_onePersonCheckFroMinimizeTimer;
@property(retain, nonatomic) MMTimer *m_timeOutTimer; // @synthesize m_timeOutTimer=_m_timeOutTimer;
@property(retain, nonatomic) NSArray *m_contactArrayOther; // @synthesize m_contactArrayOther=_m_contactArrayOther;
@property(retain, nonatomic) NSArray *m_contactWaitList; // @synthesize m_contactWaitList=_m_contactWaitList;
@property(retain, nonatomic) NSArray *m_memberDisplayBigHeadList; // @synthesize m_memberDisplayBigHeadList=_m_memberDisplayBigHeadList;
@property(retain, nonatomic) NSArray *m_memberWaitList; // @synthesize m_memberWaitList=_m_memberWaitList;
@property(retain, nonatomic) NSDictionary *m_memberTalkingDic; // @synthesize m_memberTalkingDic=_m_memberTalkingDic;
@property(retain, nonatomic) NSArray *m_memberTalkArray; // @synthesize m_memberTalkArray=_m_memberTalkArray;
@property(retain, nonatomic) NSDictionary *m_videoMemberInfo; // @synthesize m_videoMemberInfo=_m_videoMemberInfo;
@property(nonatomic) unsigned int m_messageId; // @synthesize m_messageId=_m_messageId;
@property(retain, nonatomic) CContact *m_contactInviteMe; // @synthesize m_contactInviteMe=_m_contactInviteMe;
@property(retain, nonatomic) WXCMultiTalkGroup *m_group; // @synthesize m_group=_m_group;
@property(retain, nonatomic) MMTimer *m_checkQualityTimer; // @synthesize m_checkQualityTimer=_m_checkQualityTimer;
@property(retain, nonatomic) MMTimer *m_updateMessageTimer; // @synthesize m_updateMessageTimer=_m_updateMessageTimer;
@property(retain, nonatomic) MMTimer *m_checkTalkingTimer; // @synthesize m_checkTalkingTimer=_m_checkTalkingTimer;
@property(nonatomic) _Bool m_isMinimizeMode; // @synthesize m_isMinimizeMode=_m_isMinimizeMode;
@property(nonatomic) _Bool m_hasBlurBackground; // @synthesize m_hasBlurBackground=_m_hasBlurBackground;
@property(nonatomic) _Bool m_deviceLaunchSuccess; // @synthesize m_deviceLaunchSuccess=_m_deviceLaunchSuccess;
@property(nonatomic) _Bool m_talkReady; // @synthesize m_talkReady=_m_talkReady;
@property(nonatomic) _Bool m_hasStartTimerView; // @synthesize m_hasStartTimerView=_m_hasStartTimerView;
@property(nonatomic) _Bool m_hasClickHangupButton; // @synthesize m_hasClickHangupButton=_m_hasClickHangupButton;
@property(nonatomic) _Bool m_hasClickAcceptButton; // @synthesize m_hasClickAcceptButton=_m_hasClickAcceptButton;
@property(nonatomic) int m_layoutType; // @synthesize m_layoutType=_m_layoutType;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView=_m_backgroundView;
@property(retain, nonatomic) MultitalkSecondOperateView *m_secondTalkingView; // @synthesize m_secondTalkingView=_m_secondTalkingView;
@property(retain, nonatomic) MultiTalkTalkingOperateView *m_talkingView; // @synthesize m_talkingView=_m_talkingView;
@property(retain, nonatomic) MultiTalkBeforeTalkingOperateView *m_beforeTalkingView; // @synthesize m_beforeTalkingView=_m_beforeTalkingView;
@property(retain, nonatomic) MultiTalkContactsCollectionView *m_contactView; // @synthesize m_contactView=_m_contactView;
@property(nonatomic) __weak id <MultiTalkMainViewControllerDelegate> m_mainWindowDelegate; // @synthesize m_mainWindowDelegate=_m_mainWindowDelegate;
@property(nonatomic) _Bool m_isCaller; // @synthesize m_isCaller=_m_isCaller;
- (void).cxx_destruct;
- (void)adjustViewAndNavBarRect;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (struct CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (void)clearBlurMode;
- (void)showBlurMode;
- (void)onMultitalkSecondOperateViewMinimizeButtonClick;
- (void)onMultitalkSecondOperateViewAddMember;
- (double)onRetriveMemberCellBottom;
- (void)onMultiTalkTalkingOperateViewFlipCameraButtonClick;
- (void)onMultiTalkTalkingOperateViewHangup;
- (void)onMultiTalkTalkingOperateViewSpeakerOff;
- (void)onMultiTalkTalkingOperateViewSpeakerOn;
- (void)onMultiTalkTalkingOperateViewMuteOff;
- (void)onMultiTalkTalkingOperateViewMuteOn;
- (void)onMultiTalkTalkingOperateViewVideoClose;
- (void)onMultiTalkTalkingOperateViewVideoOpen;
- (void)onMultiTalkTalkingOperateViewMinimizeButtonClick;
- (void)onMultiTalkTalkingOperateViewAddMember;
- (void)onMultiTalkContactsCollectionViewTapToPreviewWithUserName:(id)arg1;
- (void)onMultiTalkContactsCollectionViewTapToFlipCamera;
- (id)onMultiTalkBeforeTalkingOperateViewContactThatInviteMe;
- (void)onMultiTalkBeforeTalkingOperateViewMinimize;
- (void)onMultiTalkBeforeTalkingOperateViewEnterCall;
- (void)onMultiTalkBeforeTalkingOperateViewHanup;
- (void)callAcceptDelegate;
- (void)callHangupDelegate;
- (void)realCallHangupDelegate;
- (id)onMultiTalkContactsCollectionViewMemberThatInviteMeBeforeTalking;
- (unsigned long long)onMultiTalkContactsCollectionViewMemberCountBeforeTalking;
- (id)onMultiTalkContactsCollectionViewMemberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (void)onMultiTalkContactsCollectionViewOnNormalView;
- (void)onMultiTalkContactsCollectionViewOnBigView;
- (void)onMultiTalkContactsCollectionViewAnimateToOnePerson;
- (id)onMultiTalkContactsCollectionViewMemberAtIndex:(unsigned long long)arg1;
- (unsigned long long)onMultiTalkContactsCollectionViewTotalMemberCount;
- (id)onMultiTalkContactsCollectionViewRequestRenderForUsername:(id)arg1;
- (_Bool)onMultiTalkContactsCollectionViewIsVideoUserName:(id)arg1;
- (void)onMultiTalkContactsCollectionViewTapToInviteUser:(id)arg1;
- (void)onMultiSelectContactsDidDismiss;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(_Bool)arg2 clickCount:(unsigned int)arg3;
- (void)onSingleSelectContactDidFinishSelect:(id)arg1;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1;
- (void)onMultiTalkSysInterruptEnd;
- (void)onMultiTalkSysInterrupt;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)recoverVideoOn:(_Bool)arg1;
- (void)closeVideoSendAndRecv;
- (void)changeVideoModeBaseOnNetwork;
- (void)resubscribeLargeVideo;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkMgrChangeToLowNetwork;
- (void)onMultiTalkMgrChangeToHighWWan;
- (void)onMultiTalkMgrChangeToWiFi;
- (void)onMultiTalkMgrChangeToUnReachable;
- (void)onMultiTalkMgrNetworkChange;
- (void)delayCheckUnReachable;
- (void)onMultiTalkMgrLowformanceDevice;
- (void)onMultiTalkMgrVideoDeviceAuthFailed;
- (void)onMultiTalkMgrChangeVideoFailed;
- (void)onMultiTalkMgrVideoSessionStopComplete;
- (void)onMultiTalkMgrVideoSessionStartComplete;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extDic:(id)arg2;
- (void)onMultiTalkMgrOpenVideoServerNotAllowed;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 groupInfo:(id)arg2;
- (void)onAlertError;
- (void)onErr:(int)arg1;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)tryStartTimerView;
- (void)onMemberChange:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (void)changeToTalkingLayout;
- (void)changeToJoinACallLayout;
- (void)changeToReceiveACallLayout;
- (_Bool)isIgnoreSpeakerButtonDevice;
- (_Bool)isUsingEarDevice;
- (void)onClickAddMemberButton;
- (void)initBeforeTalkingView;
- (void)initSecondTalkingView;
- (void)initTalkingView;
- (void)initContactView;
- (void)updateBackgroundViewBlur;
- (void)initBackgroundView;
- (void)getMemberQualityInfoList;
- (void)checkTalkMember;
- (void)initCheckQualityTimer;
- (void)initCheckTalkingTimer;
- (void)updateMessageDuration;
- (void)initUpdateMessageTimer;
- (void)timeOutLogic;
- (void)initTimeOutTimer;
- (void)onePersonCheckForMinimize;
- (void)initOnePersonCheckForMinimizeTimer;
- (void)updateVideoMemberInfo;
- (void)updateMemberDisplayBigHeadList;
- (void)updateMemberWaitList;
- (void)updateContactWaitList;
- (void)updateContactOtherList;
- (void)updateMemberTalkingList;
- (void)checkIfOnePerson;
- (_Bool)isMemberReachLimit;
- (_Bool)isTheSameWithGroup:(id)arg1;
- (void)updateGroupInfo:(id)arg1;
- (void)updateMessageId:(unsigned int)arg1;
- (id)groupInfo;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (void)functionReport;
- (void)videoDurationReport;
- (void)durationReport;
- (void)connectReportFailed;
- (void)connectReportSuccess;
- (void)callReport;
- (void)whenGoingToResign;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

