//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate-Protocol.h"
#import "CreateChatLogicDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IStrongNotificationMgrExt-Protocol.h"
#import "MsgSearchHelperDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class CContact, CreateChatLogic, DelaySwitchSettingLogic, MMTableView, MMTableViewInfo, MsgSearchHelper, NSIndexPath, NSSet, NSString, UIView;
@protocol addContactToChatRoomDelegate;

@interface AddContactToChatRoomViewController : MMUIViewController <WCActionSheetDelegate, IStrongNotificationMgrExt, MsgSearchHelperDelegate, ChatRoomMemberGridViewDelegate, IContactMgrExt, CreateChatLogicDelegate, contactInfoDelegate, UIAlertViewDelegate>
{
    CContact *m_contact;
    id <addContactToChatRoomDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_headerView;
    CreateChatLogic *m_createChatLogic;
    _Bool m_bTopSession;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bShowTranslateSectionAtFirst;
    NSIndexPath *m_showTranslateSectionIndex;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    MsgSearchHelper *m_oMsgSearchHelper;
    NSSet *_trackUsernameSet;
}

@property(retain, nonatomic) NSIndexPath *m_showTranslateSectionIndex; // @synthesize m_showTranslateSectionIndex;
@property(nonatomic) _Bool m_bShowTranslateSectionAtFirst; // @synthesize m_bShowTranslateSectionAtFirst;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) __weak id <addContactToChatRoomDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)onAlertViewAction:(_Bool)arg1;
- (void)setTopSession;
- (void)checkTopSession;
- (void)onDeleteContact:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)doReset;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)dealloc;
- (void)didAppearFromSearchController;
- (void)willAppearFromSearchController;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadView;
- (void)initView;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)reloadTableData;
- (void)initMemberView;
- (void)setFlagIcon:(id)arg1 ItemUsername:(id)arg2;
- (void)onExpose;
- (void)onClear:(id)arg1;
- (void)makeStrongNotificationCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (double)getMemListCellHeight;
- (_Bool)p_currentStrongNotificationStatue;
- (void)onStrongNotificationSetting:(id)arg1;
- (void)initMsgSearchHelper:(int)arg1;
- (void)onEditAndSearch;
- (void)onArriveFundConfirmDeleteSession;
- (void)onArriveFundCancelDeleteSession;
- (void)confirmClearAllMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showChatBackgroundConfig;
- (void)toggleWatchContact:(id)arg1;
- (void)setMuteStatus;
- (_Bool)setUpdateNotifyMuted:(_Bool)arg1;
- (void)initData;
- (_Bool)isTopSessionCountExceed;
- (void)onTopSession:(_Bool)arg1;
- (_Bool)getSessionTopped;
- (void)tryGetContactUsrImg;
- (void)addMember;
- (void)createChatRoom;
- (void)openContactInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

