//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactMgrExt-Protocol.h"
#import "ITopStoryColikeExt-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "NewChatRoomMemberItemViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCreateNewGroupViewControllerDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, MMUIButton, MMUILabel, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIView;

@interface WSWowBlackListClassifyMembersViewController : MMUIViewController <WCActionSheetDelegate, tableViewDelegate, NewChatRoomMemberItemViewDelegate, MultiSelectContactsViewControllerDelegate, IContactMgrExt, WCCreateNewGroupViewControllerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, ITopStoryColikeExt>
{
    _Bool _deleteStatus;
    unsigned long long _pageType;
    unsigned long long _updateStatus;
    NSMutableDictionary *_dicGroupMemberView;
    NSMutableArray *_memberList;
    NSMutableArray *_tempAddList;
    MMTableView *_tableView;
    UILabel *_infoTip;
    UIView *_backoutBgView;
    MMUIButton *_backoutButton;
    MMUILabel *_backoutTip;
    UIView *_footerView;
    NSMutableArray *_tempAsyncModList;
}

@property(retain, nonatomic) NSMutableArray *tempAsyncModList; // @synthesize tempAsyncModList=_tempAsyncModList;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUILabel *backoutTip; // @synthesize backoutTip=_backoutTip;
@property(retain, nonatomic) MMUIButton *backoutButton; // @synthesize backoutButton=_backoutButton;
@property(retain, nonatomic) UIView *backoutBgView; // @synthesize backoutBgView=_backoutBgView;
@property(retain, nonatomic) UILabel *infoTip; // @synthesize infoTip=_infoTip;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *tempAddList; // @synthesize tempAddList=_tempAddList;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList=_memberList;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMemberView; // @synthesize dicGroupMemberView=_dicGroupMemberView;
@property(nonatomic) _Bool deleteStatus; // @synthesize deleteStatus=_deleteStatus;
@property(nonatomic) unsigned long long updateStatus; // @synthesize updateStatus=_updateStatus;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (void)onRequestGetColikeBlockListEndResult:(_Bool)arg1 withType:(unsigned int)arg2 list:(id)arg3;
- (void)onRequestGetColikeBlockListEndResultBeforeConfigData:(_Bool)arg1 withType:(unsigned int)arg2 list:(id)arg3 oriList:(id)arg4;
- (void)onAllRequestColikeBlockEnd:(long long)arg1 sucCount:(long long)arg2 failCount:(long long)arg3;
- (void)modBlockMembers;
- (void)modHideMembers;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 indexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setShowRemoveMember;
- (void)onLongPressEx:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)showAlert:(id)arg1;
- (void)onDone;
- (void)onCancel;
- (id)arrangeItemsWithList:(id)arg1 addList:(id)arg2 delList:(id)arg3;
- (id)extraItemsInArray:(id)arg1 besidesInArray:(id)arg2;
- (id)extraItemsInArray:(id)arg1 besidesInArray:(id)arg2 action:(int)arg3;
- (id)diffMemberList;
- (_Bool)shouldModGroup;
- (void)onDismiss;
- (void)reloadMember:(id)arg1;
- (void)reloadMemberListAndView;
- (void)stopLoadingWithTitle:(id)arg1 isOK:(_Bool)arg2 delay:(double)arg3;
- (void)startLoadingWithTitle:(id)arg1;
- (void)hideBackoutView;
- (void)showBackoutView;
- (void)initView;
- (void)initFooterView;
- (void)initOutsiderFooterView;
- (void)initBlacklistFooterView;
- (void)backoutFriendsAdded;
- (void)backoutButtonClicked:(id)arg1;
- (void)initBackoutViewWithSuperView:(id)arg1;
- (void)initData;
- (long long)getColCount;
- (void)updateNavigation;
- (void)updateTitle;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

