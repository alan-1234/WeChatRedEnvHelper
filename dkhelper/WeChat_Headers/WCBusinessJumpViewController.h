//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface WCBusinessJumpViewController : MMUIViewController <IContactMgrExt, UIAlertViewDelegate>
{
    NSString *_url;
    NSString *_jumpUrl;
    MMUIViewController *_parentViewController;
    NSString *_errorMsg;
    NSDictionary *_dictTranslateInfo;
}

@property(retain, nonatomic) NSDictionary *dictTranslateInfo; // @synthesize dictTranslateInfo=_dictTranslateInfo;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void).cxx_destruct;
- (void)handleRedirectUrlResult:(id)arg1;
- (void)handleRefreshTokenJump:(id)arg1;
- (void)handleBusinessJump:(id)arg1;
- (void)handleBackAppWithErr:(int)arg1;
- (void)onReturn;
- (void)showFailErrorMsg:(id)arg1;
- (void)sendTranslateReq;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)setLoadingViewTitle:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 translateInfo:(id)arg2 parentViewController:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

