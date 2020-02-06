//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "IQQMailExt-Protocol.h"
#import "ITranslateMsgMgrExt-Protocol.h"
#import "OpenIMSucceedContactLogicLogicDelegate-Protocol.h"
#import "TipsViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "VerifyQQPwdMgrExt-Protocol.h"
#import "addContactToChatRoomDelegate-Protocol.h"

@class NSString, OpenIMSucceedContactLogic, UIImageView;

@interface WeixinContentLogicController : BaseMsgContentLogicController <IQQMailExt, UIAlertViewDelegate, VerifyQQPwdMgrExt, OpenIMSucceedContactLogicLogicDelegate, addContactToChatRoomDelegate, TipsViewDelegate, ITranslateMsgMgrExt>
{
    _Bool m_bTipsShow;
    OpenIMSucceedContactLogic *m_openIMSucceedContactLogic;
    UIImageView *_toolView;
}

@property(retain, nonatomic) UIImageView *toolView; // @synthesize toolView=_toolView;
- (void).cxx_destruct;
- (long long)currPageAppmsgReportScene;
- (long long)currPageAppmsgEnterType;
- (_Bool)shouldPreDownloadPageData;
- (_Bool)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)jumpToOpenSucceedContactSession:(id)arg1;
- (void)openSucceedContactContactInfo:(id)arg1;
- (id)getOpenIMSucceedContactLogic;
- (void)showSucceedContactWindow:(id)arg1;
- (void)jumpToSession:(id)arg1;
- (void)hadShowNewXmlSystemMessage:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)HandleReceiveBrandMsg;
- (void)onClickReceiveBrandMsg;
- (void)HandleShieldBrandMsg;
- (void)onClickShieldBrandMsg;
- (_Bool)isNeedCached;
- (_Bool)isShakeEnabled;
- (id)GetRightBarBtn;
- (void)dealloc;
- (void)checkSecurityBannerShow;
- (void)checkAddFriend;
- (_Bool)isInMyContactList;
- (void)ViewWillAppear;
- (void)onPerformAction:(id)arg1;
- (void)onWillPopFromNavigationController;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (void)UnRegister;
- (void)Register;
- (void)OnGetMailUnreadCount:(int)arg1;
- (void)onJumpInstallMail;
- (void)onEnterMailAppBtnPress:(id)arg1;
- (void)ShowNewMail;
- (void)bringQQMailToolView2Front;
- (void)initQQMailToolView;
- (id)getDefaultEnterMailAppTitle;
- (void)onVerifyQQPwdOK;
- (void)checkQQMailUnReadCount;
- (_Bool)isQQMailAppInstall;
- (_Bool)isQQMailPlugin;
- (id)GetChatContact;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)newMessageFromAddContactToChatRoom:(id)arg1;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (void)checkNeedContactVerify;
- (void)ViewDidAppear;
- (void)deleteAllMsg;
- (void)OpenDetailInfo;
- (_Bool)isOpenSingleInfo;
- (void)OpenContactInfo:(id)arg1;
- (id)GetRightBarButtonTitle;
- (void)switchEarpieceMode;
- (void)StateChanged;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (unsigned int)NumberOfHeaderButtons;
- (_Bool)HasCustomToolBar;
- (void)CustomToolViewEX:(id)arg1;
- (_Bool)isToolViewHidden;
- (_Bool)canShowChatRoomInfo;
- (_Bool)CanShowSight;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanRemoteRecord;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2 withMsgSource:(id)arg3;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)clearUpdatableMsgNotify;
- (void)clearAACount;
- (void)clearTransferCount;
- (void)clearContactVerifyFlag;
- (void)clearAllMsg;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

