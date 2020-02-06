//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonDescMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IEnterpriseMsgExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "ISessionInfoExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MMSessionRefreshExt-Protocol.h"

@class MMChatContentUploadLogic, MMSessionDB, NSArray, NSMutableArray, NSMutableDictionary, NSString, SessionSortLogic;

@interface MMNewSessionMgr : MMService <IEnterpriseMsgExt, ISessionInfoExt, EmoticonDescMgrExt, MMSessionRefreshExt, MMService, IMsgExt, IContactMgrExt>
{
    NSMutableArray *m_arrSession;
    MMSessionDB *m_sessionStorage;
    NSString *m_nsActiveUserName;
    SessionSortLogic *m_oSessionSortLogic;
    unsigned int m_uiTotalUnReadCount;
    unsigned int m_appIconTotalUnreadCount;
    NSMutableDictionary *m_dicAtMeCount;
    NSMutableDictionary *m_dicNewInvCount;
    NSMutableDictionary *m_dicTransferCount;
    NSMutableDictionary *m_dictAACount;
    NSMutableDictionary *m_dictUpdatableMsgDigest;
    MMChatContentUploadLogic *m_chatUploadLogic;
    NSArray *m_compareSorterArray;
    NSArray *m_sessionFilterArray;
    _Bool m_shouldReload;
    _Bool m_shouldChangeUnreadCount;
    NSMutableArray *m_notifySessionChangeArray;
    NSMutableArray *m_notifyNewMsgArrivingArray;
    _Bool m_bNotifySound;
    NSMutableDictionary *m_dicAtMeType;
}

- (void).cxx_destruct;
- (unsigned int)GetUnReadCountExcludingActiveUser:(id)arg1;
- (void)rebuildSessionInfo;
- (void)checkAndMergeTopFlag;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)addContact:(id)arg1 AtUser:(id)arg2;
- (void)deleteAtUserList:(id)arg1;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 draftTime:(unsigned int)arg3;
- (void)onGetDraft:(id)arg1 draft:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (void)onAddMsgDigetstForSession:(id)arg1;
- (void)checkSessionTopWithContact:(id)arg1;
- (void)checkSessionTop:(id)arg1 contact:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)updateSessions:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (id)GetSessionDeleteInfo:(id)arg1;
- (_Bool)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (void)recountUnReadCountAndFireExtension;
- (void)recountUnReadCount;
- (void)fulFillSession:(id)arg1;
- (unsigned int)getSessionIndexOfUser:(id)arg1;
- (void)deleteSessionAtIndex:(unsigned int)arg1 forceDelete:(_Bool)arg2;
- (_Bool)isNeedDeleteMsg:(id)arg1 forceDelete:(_Bool)arg2;
- (_Bool)isNeedCallNewMsgArrival:(id)arg1;
- (void)processOnAddMsgWithNotifyFlag:(int)arg1 UsrName:(id)arg2;
- (_Bool)isNeedSaveSessionInfo:(id)arg1;
- (_Bool)isMsgNeedProcess:(id)arg1;
- (_Bool)isUserNeedProcess:(id)arg1;
- (void)executeContactVerifyBanner;
- (_Bool)checkContactVerifySysmsgSwitch;
- (_Bool)realCheckStrangerFirstChat:(id)arg1;
- (_Bool)checkStrangerFirstChat:(id)arg1;
- (void)processContactWhenAddMsg:(id)arg1;
- (id)getContactByNameForce:(id)arg1;
- (void)tryGetContactImage:(id)arg1;
- (void)resortSessions;
- (void)filterSessionDeleted:(id)arg1 modified:(id)arg2;
- (void)checkLoadData;
- (void)p_buildSession:(_Bool)arg1;
- (void)appFirstBecomeActive;
- (void)tryToBuildSession:(_Bool)arg1;
- (id)genSessionInfoByContact:(id)arg1;
- (id)genSessionInfoByUserName:(id)arg1;
- (void)AddSessionToTop:(id)arg1;
- (_Bool)isSessionTopable:(id)arg1;
- (_Bool)IsTopSessionCountExceed;
- (void)UntopSessionByName:(id)arg1;
- (void)TopSessionByName:(id)arg1;
- (_Bool)IsSessionWithNullMsg:(id)arg1;
- (void)temporaryTopSessionByContact:(id)arg1;
- (_Bool)IsSessionNeedDelayLoad;
- (unsigned int)GenSendMsgTime;
- (_Bool)HasActiveUser;
- (id)GetActiveUser;
- (_Bool)IsActiveUser:(id)arg1;
- (void)SetActiveSession:(id)arg1;
- (id)GetSyncUserNamesOnSessionListWithMaxCount:(unsigned int)arg1;
- (id)GetUserNamesOnSessionList;
- (void)DeleteAllSession;
- (void)DeleteSessionWithoutDeleteMessage:(id)arg1;
- (void)DeleteSessionAtIndex:(unsigned int)arg1;
- (void)DeleteSessionOfUser:(id)arg1;
- (void)clearNeedContactVerifyFlag:(id)arg1;
- (void)clearUpdatableMsgNotify:(id)arg1;
- (void)clearAAMessageCount:(id)arg1;
- (void)clearTransferCount:(id)arg1;
- (void)clearNewInvApprove:(id)arg1;
- (void)clearNewInvCount:(id)arg1;
- (void)clearAtMeCount:(id)arg1;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (void)AddOrModifySession:(id)arg1 withNotifyFlag:(int)arg2;
- (id)SessionNewArray;
- (id)SessionEnumerator;
- (unsigned int)GetTotalUnreadCountForAppIcon;
- (unsigned int)GetTotalUnreadCount;
- (long long)GetSessionIndexByUserName:(id)arg1;
- (id)GetSessionByUserName:(id)arg1;
- (void)AsyncFulFillSession:(id)arg1;
- (void)CleanupPreLoadSessionCache;
- (id)GetSessionInfoList;
- (id)GetSessionUserNameAtIndex:(unsigned int)arg1;
- (id)GetSessionAtIndex:(unsigned int)arg1;
- (unsigned int)GetSessionCount;
- (void)p_notifyNewMsg:(id)arg1 withNotifyFlag:(int)arg2;
- (void)p_notifySessionChangeArrayAddObject:(id)arg1;
- (void)p_refreshNewSessionMgr;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceInit;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (id)getSessionFilterArray;
- (id)getCompareSorterArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

