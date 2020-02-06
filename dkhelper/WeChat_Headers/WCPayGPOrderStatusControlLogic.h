//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMUseCaseCallback-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayGPLaunchControlLogicDelegate-Protocol.h"
#import "WCPayGPOrderStatusViewControllerDelegate-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"

@class CContact, NSString, WCPayPayMoneyLogic;
@protocol WCPayGPOrderStatusControlLogicDelegate;

@interface WCPayGPOrderStatusControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderStatusViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlMgrExt, WCBaseControlLogicDeleagte, UIAlertViewDelegate, MMTipsViewControllerDelegate, MMUseCaseCallback, WCPayGPLaunchControlLogicDelegate>
{
    _Bool _bIsLaunchSucc;
    unsigned int _msgLocalID;
    unsigned int _ver;
    id <WCPayGPOrderStatusControlLogicDelegate> _orderStatusDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    unsigned long long _currentLogicScene;
    NSString *_curAlertRightBtnUrl;
    NSString *_sign;
    CContact *_launchContact;
}

@property(retain, nonatomic) CContact *launchContact; // @synthesize launchContact=_launchContact;
@property(nonatomic) _Bool bIsLaunchSucc; // @synthesize bIsLaunchSucc=_bIsLaunchSucc;
@property(nonatomic) unsigned int ver; // @synthesize ver=_ver;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *curAlertRightBtnUrl; // @synthesize curAlertRightBtnUrl=_curAlertRightBtnUrl;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
@property(nonatomic) unsigned long long currentLogicScene; // @synthesize currentLogicScene=_currentLogicScene;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(nonatomic) __weak id <WCPayGPOrderStatusControlLogicDelegate> orderStatusDelegate; // @synthesize orderStatusDelegate=_orderStatusDelegate;
- (void).cxx_destruct;
- (void)onLaunchControlLogicStop;
- (void)onLaunchGroupPaySuccWithContact:(id)arg1;
- (void)call:(id)arg1;
- (void)prepayAlertViewConfirmClick;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetAACloseUnpayNotifyResonse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetSendPayNotifyMsgResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCloseAAOrderResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderPrePayResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderDetailResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAPaySuccResponse:(id)arg1;
- (void)queryAAPaySuccFromSvr;
- (void)getAAOrderDetailFromSvr;
- (_Bool)gotoViewController:(id)arg1;
- (_Bool)updateC2CNewXmlMsgContentWithRespXml:(id)arg1;
- (void)addAAPaySuccessSysMsg;
- (void)delayStopLogic;
- (void)ContinueDismissAndStopLogic;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showSetPwdTipsView;
- (void)dismissAndStopLogic;
- (void)handleQryPaySuccFinish;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onClickLaunchNewGroupPayBtn;
- (void)onClickViewBalanceLink;
- (void)startPayMoneyLogic:(_Bool)arg1;
- (void)startPayMoneyLogic;
- (void)onPayerClickCloseUnPayNotify;
- (void)onLauncherClickCloseOrderBtn;
- (void)onLauncherClickSendPayNotifyMsgBtn;
- (void)onPayerClickPayMoneyButton;
- (void)onOrderStatusViewControllerCancel;
- (void)confirmCloseUnPayNotifyFromSysMsg;
- (void)cancelCloseUnPayNotifyFromSysMsg;
- (void)confirmCloseOrderFromSysMsg;
- (void)cancelCloseOrderFromSysMsg;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithJSParam:(id)arg1;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 withMsgLocalID:(unsigned int)arg5;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 selectedMessageWrap:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

