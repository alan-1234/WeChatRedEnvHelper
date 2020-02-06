//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSTemplateBaseMgr.h"

#import "MMResourceMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MessageSearchWeAppBoxCacheDataPB, NSMutableDictionary, NSOperationQueue, NSString;

@interface MessageSearchWeAppBoxMgr : WSTemplateBaseMgr <MMResourceMgrExt, MMService, PBMessageObserverDelegate>
{
    NSMutableDictionary *m_searchWeAppBoxDic;
    NSOperationQueue *m_updateResourceQueue;
    MessageSearchWeAppBoxCacheDataPB *m_messageSearchWeAppBoxCacheData;
}

- (void).cxx_destruct;
- (void)p_saveMessageSearchWeAppBoxToDataFileInternal;
- (void)p_loadMessageSearchWeAppBoxDataInternal;
- (id)p_getMessageSearchWeAppBoxDataFilePath;
- (id)getMessageSearchWeAppBoxResoucePathWithType:(unsigned int)arg1 subType:(unsigned int)arg2;
- (id)p_getMessageSearchWeAppBoxResoucePath;
- (unsigned int)p_createProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3 eventHandler:(Class)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reInitFlightNumberWordBook;
- (void)onServiceInit;
- (id)MMKVVersionKeyForSearchWeAppBoxResWithType:(unsigned int)arg1 subType:(unsigned int)arg2;
- (_Bool)doResUpdateWithType:(unsigned int)arg1 subType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)printSearchWeAppBoxServiceEffective;
- (_Bool)isSearchWeAppBoxServiceEffective;
- (void)reloadFlightNumberWordBook;
- (unsigned int)getFlightNumberWordBookVersion;
- (void)onGetSearchWeAppBoxInfo:(id)arg1;
- (_Bool)getSearchWeAppBoxInfoForJsApiWithQueryJson:(id)arg1 andRequestId:(id)arg2;
- (void)registerMessageSearchWeAppBoxWithSearchWeAppBoxType:(unsigned int)arg1 matchPattern:(id)arg2;
- (_Bool)secondTimeCheckWithSearchWeAppBoxType:(unsigned int)arg1 matchString:(id)arg2;
- (id)parserSearchWeAppBoxInContentText:(id)arg1 withRange:(struct _NSRange)arg2;
- (unsigned int)getResouceType;
- (id)getTemplateResoucePath;
- (id)getAppTemplateResoucePath;
- (void)dealloc;
- (void)initRegister;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

