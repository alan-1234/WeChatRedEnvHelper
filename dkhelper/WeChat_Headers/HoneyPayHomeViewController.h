//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

#import "WCPayNoticeBannerDelegate-Protocol.h"

@class HoneyPayListResp, NSDictionary, NSString, UIButton;
@protocol HoneyPayHomeViewControllerDelegate;

@interface HoneyPayHomeViewController : HoneyPayBaseViewController <WCPayNoticeBannerDelegate>
{
    id <HoneyPayHomeViewControllerDelegate> _delegate;
    HoneyPayListResp *_response;
    UIButton *_helpButton;
    NSDictionary *_bannerData;
}

@property(retain, nonatomic) NSDictionary *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) HoneyPayListResp *response; // @synthesize response=_response;
@property(nonatomic) __weak id <HoneyPayHomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)banner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)clickAddCard;
- (void)clickCardCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)clickWelcomeHelp;
- (void)onRightBarButtonClick;
- (void)makeReachLimitCell:(id)arg1;
- (void)makeAddCardCell:(id)arg1;
- (void)makeCardCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)showCardList;
- (void)showWelcome;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)requestBannerData;
- (void)refreshViewWithData:(id)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

