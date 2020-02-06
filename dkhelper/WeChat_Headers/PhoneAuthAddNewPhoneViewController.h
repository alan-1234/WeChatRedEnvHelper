//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PhoneAuthManagePhoneLogicOperationDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class FixTitleColorButton, NSString, PhoneAuthManagePhoneLogic, UILabel, UISwitch, UIView, WAReportPhoneAuthActionItem, WCAccountTextFieldItem;

@interface PhoneAuthAddNewPhoneViewController : MMUIViewController <WCBaseInfoItemDelegate, PhoneAuthManagePhoneLogicOperationDelegate>
{
    _Bool _phoneNumberEntered;
    _Bool _confirmCodeRequested;
    _Bool _confirmCodeEntered;
    WAReportPhoneAuthActionItem *_actionItem;
    UIView *_phoneNumberArea;
    UIView *_phoneNumberAreaTopLine;
    UILabel *_phoneTitleLabel;
    WCAccountTextFieldItem *_phoneNumberTF;
    FixTitleColorButton *_resendButton;
    UIView *_phoneNumberAreaBottomLine;
    UIView *_confirmCodeArea;
    UILabel *_confirmCodeTitleLabel;
    WCAccountTextFieldItem *_confirmCodeTF;
    UIView *_confirmCodeAreaBottomLine;
    UIView *_savePhoneArea;
    UILabel *_savePhoneTitleLabel;
    UISwitch *_savePhoneSwitch;
    UIView *_savePhoneAreaBottomLine;
    FixTitleColorButton *_confirmButton;
    PhoneAuthManagePhoneLogic *_logic;
    unsigned long long _countDown;
}

@property(nonatomic) unsigned long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) PhoneAuthManagePhoneLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) _Bool confirmCodeEntered; // @synthesize confirmCodeEntered=_confirmCodeEntered;
@property(nonatomic) _Bool confirmCodeRequested; // @synthesize confirmCodeRequested=_confirmCodeRequested;
@property(nonatomic) _Bool phoneNumberEntered; // @synthesize phoneNumberEntered=_phoneNumberEntered;
@property(retain, nonatomic) FixTitleColorButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *savePhoneAreaBottomLine; // @synthesize savePhoneAreaBottomLine=_savePhoneAreaBottomLine;
@property(retain, nonatomic) UISwitch *savePhoneSwitch; // @synthesize savePhoneSwitch=_savePhoneSwitch;
@property(retain, nonatomic) UILabel *savePhoneTitleLabel; // @synthesize savePhoneTitleLabel=_savePhoneTitleLabel;
@property(retain, nonatomic) UIView *savePhoneArea; // @synthesize savePhoneArea=_savePhoneArea;
@property(retain, nonatomic) UIView *confirmCodeAreaBottomLine; // @synthesize confirmCodeAreaBottomLine=_confirmCodeAreaBottomLine;
@property(retain, nonatomic) WCAccountTextFieldItem *confirmCodeTF; // @synthesize confirmCodeTF=_confirmCodeTF;
@property(retain, nonatomic) UILabel *confirmCodeTitleLabel; // @synthesize confirmCodeTitleLabel=_confirmCodeTitleLabel;
@property(retain, nonatomic) UIView *confirmCodeArea; // @synthesize confirmCodeArea=_confirmCodeArea;
@property(retain, nonatomic) UIView *phoneNumberAreaBottomLine; // @synthesize phoneNumberAreaBottomLine=_phoneNumberAreaBottomLine;
@property(retain, nonatomic) FixTitleColorButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) WCAccountTextFieldItem *phoneNumberTF; // @synthesize phoneNumberTF=_phoneNumberTF;
@property(retain, nonatomic) UILabel *phoneTitleLabel; // @synthesize phoneTitleLabel=_phoneTitleLabel;
@property(retain, nonatomic) UIView *phoneNumberAreaTopLine; // @synthesize phoneNumberAreaTopLine=_phoneNumberAreaTopLine;
@property(retain, nonatomic) UIView *phoneNumberArea; // @synthesize phoneNumberArea=_phoneNumberArea;
@property(retain, nonatomic) WAReportPhoneAuthActionItem *actionItem; // @synthesize actionItem=_actionItem;
- (void).cxx_destruct;
- (void)confirmCodeVerifyFailedWithErrorMsg:(id)arg1;
- (void)confirmCodeVerifySuccess;
- (void)savePhoneSuccess:(id)arg1 saveFlag:(_Bool)arg2;
- (void)confirmCodeRequestedFailedWithErrorMsg:(id)arg1;
- (void)confirmCodeRequestedSuccess;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)handleOnConfirmButtonEvent:(id)arg1;
- (void)handleOnReSendButtonEvent:(id)arg1;
- (void)onReturn;
- (void)updateSendVerifyCodeButton;
- (void)startTimer;
- (void)refreshConfirmButtonState;
- (void)refreshResendButtonState;
- (void)updateNavigationItems;
- (void)initCustomNavigationBar;
- (void)initSubViews;
- (void)viewDidLoad;
- (id)initWithLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

