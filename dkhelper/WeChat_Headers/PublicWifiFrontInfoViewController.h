//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IPublicWifiManagerExt-Protocol.h"
#import "PublicWifiCompletePageViewControllerDelegate-Protocol.h"
#import "PublicWifiConnectedViewControllerDelegate-Protocol.h"
#import "PublicWifiViewControllerDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"

@class APBase, CLLocationManager, MMScrollView, MMWebImageView, NSString, RichTextView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, WCAccountBindPhoneControlLogic, WCBizLoadingView;
@protocol PublicWifiFrontInfoViewControllerDelegate;

@interface PublicWifiFrontInfoViewController : MMUIViewController <IPublicWifiManagerExt, ILinkEventExt, PublicWifiViewControllerDelegate, PublicWifiConnectedViewControllerDelegate, PublicWifiCompletePageViewControllerDelegate, WCAccountBindPhoneControlLogicDelegate, CLLocationManagerDelegate>
{
    _Bool _isGuideViewShowed;
    _Bool _isLoading;
    _Bool _isInLocationAuthorizationAlert;
    id <PublicWifiFrontInfoViewControllerDelegate> _delegate;
    UIImageView *_logoImageView;
    WCBizLoadingView *_connectingView;
    UIView *_grayView;
    MMScrollView *_scrollView;
    MMWebImageView *_brandImage;
    UILabel *_brandNameLbl;
    UILabel *_ssidLbl;
    RichTextView *_failedLbl;
    UIButton *_confirmBtn;
    UIButton *_connectingBtn;
    UIActivityIndicatorView *_loadingView;
    RichTextView *_helpTextView;
    UILabel *_phoneNumNoticeLbl;
    APBase *_apbase;
    unsigned long long _viewState;
    WCAccountBindPhoneControlLogic *_m_bindLogic;
    CLLocationManager *_locationMgrForAuthorization;
}

@property(retain, nonatomic) CLLocationManager *locationMgrForAuthorization; // @synthesize locationMgrForAuthorization=_locationMgrForAuthorization;
@property(nonatomic) _Bool isInLocationAuthorizationAlert; // @synthesize isInLocationAuthorizationAlert=_isInLocationAuthorizationAlert;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *m_bindLogic; // @synthesize m_bindLogic=_m_bindLogic;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) _Bool isGuideViewShowed; // @synthesize isGuideViewShowed=_isGuideViewShowed;
@property(retain, nonatomic) APBase *apbase; // @synthesize apbase=_apbase;
@property(retain, nonatomic) UILabel *phoneNumNoticeLbl; // @synthesize phoneNumNoticeLbl=_phoneNumNoticeLbl;
@property(retain, nonatomic) RichTextView *helpTextView; // @synthesize helpTextView=_helpTextView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *connectingBtn; // @synthesize connectingBtn=_connectingBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) RichTextView *failedLbl; // @synthesize failedLbl=_failedLbl;
@property(retain, nonatomic) UILabel *ssidLbl; // @synthesize ssidLbl=_ssidLbl;
@property(retain, nonatomic) UILabel *brandNameLbl; // @synthesize brandNameLbl=_brandNameLbl;
@property(retain, nonatomic) MMWebImageView *brandImage; // @synthesize brandImage=_brandImage;
@property(retain, nonatomic) MMScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) WCBizLoadingView *connectingView; // @synthesize connectingView=_connectingView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak id <PublicWifiFrontInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpToBrandProfile;
- (void)onBackToMainUI;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)wifiCompletePageViewControlerWillDone:(_Bool)arg1;
- (void)wifiConnenctedViewControlerWillDone:(_Bool)arg1;
- (void)wifiViewControllerWillGoBack;
- (void)showBindPhoneView;
- (void)onCancel;
- (void)onBind;
- (void)onPublicWifiStatusChangedWithApBase:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)onConfirmToConnect;
- (void)doConnect;
- (void)doRequestLocationAuthorizationInIOS13;
- (void)doAlertForNotAuthoriziedStateInIOS13AndNeedQuit:(_Bool)arg1;
- (void)buttonPressed:(id)arg1;
- (void)autoContinueWithProto3;
- (void)doBack;
- (void)stopWifiLoading;
- (void)startWifiLoading;
- (float)smallSapce;
- (float)largeSapce;
- (void)layout;
- (id)getWelcomMsg;
- (id)genConnecttingButton;
- (id)genPhoneNumNoticeTbl;
- (id)genFailRichTextView;
- (id)genRichTextView;
- (void)initViewForReadyState;
- (void)showConnenctedViewController;
- (void)dealStatusChanged:(id)arg1;
- (void)dealloc;
- (id)initWithApBase:(id)arg1;
- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

