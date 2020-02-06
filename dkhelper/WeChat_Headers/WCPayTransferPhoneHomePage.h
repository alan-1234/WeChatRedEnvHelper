//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCActionSheetDelegate-Protocol.h"

@class KindaUIView, NSString, TransferPhoneHomePageResp, UIButton, UILabel, UITextField, UIView, WCPayCss;
@protocol WCPayTransferPhoneHomePageDelegate;

@interface WCPayTransferPhoneHomePage : WCPayBaseViewController <WCActionSheetDelegate>
{
    id <WCPayTransferPhoneHomePageDelegate> _m_delegate;
    UIView *_containerView;
    KindaUIView *_noticeView;
    UILabel *_noticeLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleView;
    UIView *_firstLineView;
    UIView *_inputContainerView;
    UILabel *_inputTipsLabel;
    UITextField *_textField;
    UIButton *_iconButton;
    UIView *_secondLineView;
    UIView *_bottomContainerView;
    UIButton *_startButton;
    UIView *_headerView;
    TransferPhoneHomePageResp *_homePageResp;
    WCPayCss *_css;
    double _keyboardHeight;
}

@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) TransferPhoneHomePageResp *homePageResp; // @synthesize homePageResp=_homePageResp;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain) UIView *secondLineView; // @synthesize secondLineView=_secondLineView;
@property(retain) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain) UITextField *textField; // @synthesize textField=_textField;
@property(retain) UILabel *inputTipsLabel; // @synthesize inputTipsLabel=_inputTipsLabel;
@property(retain) UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain) UIView *firstLineView; // @synthesize firstLineView=_firstLineView;
@property(retain) UILabel *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain) KindaUIView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property __weak id <WCPayTransferPhoneHomePageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onTapEmpty;
- (void)onOperate:(id)arg1;
- (void)textFieldDidChange;
- (void)onTapStart;
- (void)onTapIcon;
- (void)updateStartButton;
- (void)updateBottomContainerView;
- (void)updateSecondLineView;
- (void)updateIconButton;
- (void)updateTextField;
- (void)updateInputTipsView;
- (void)updateInputContainerView;
- (void)updateFirstLineView;
- (void)updateSubTitleView;
- (void)updateTitleView;
- (void)updateHeaderView;
- (void)updateNoticeLabel;
- (void)onTapNotice;
- (void)updateNoticeView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

