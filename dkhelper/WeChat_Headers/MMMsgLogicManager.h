//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt-Protocol.h"
#import "IMMFontMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class BaseMsgContentLogicController, NSMutableArray, NSString;

@interface MMMsgLogicManager : MMService <MMService, IMMLanguageMgrExt, IMMFontMgrExt, IContactMgrExt, IMMNewSessionMgrExt>
{
    NSMutableArray *_arrLogicControllers;
    BaseMsgContentLogicController *_topLogicController;
    BaseMsgContentLogicController *_weixinLogicController;
    BaseMsgContentLogicController *_roomLogicController;
    BaseMsgContentLogicController *_lastPeekController;
}

- (void).cxx_destruct;
- (void)finishedPeekingWithController:(id)arg1;
- (id)logicControllerForPeekingWithContact:(id)arg1 messageWrap:(id)arg2;
- (id)GetCurrentLogicController;
- (void)PopLogicController:(id)arg1 withReuse:(_Bool)arg2;
- (void)PopLogicController:(id)arg1;
- (void)PresentMultiSelectLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)PushOtherLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushNewLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushSpecLogicControllerByContact:(id)arg1 navigationController:(id)arg2;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(_Bool)arg5 animated:(_Bool)arg6 extraInfo:(id)arg7;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(_Bool)arg5 animated:(_Bool)arg6;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 animated:(_Bool)arg5;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(int)arg5 userData:(id)arg6;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(int)arg5;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(int)arg4 extraInfo:(id)arg5;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 extraInfo:(id)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(int)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushLBSRoomLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)cleanUnuseLogicController;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)GetReuseableLogicControllerFromCacheWithContact:(Class)arg1;
- (id)GetLogicControllerFromCacheWithContact:(id)arg1;
- (void)setMsgLogicToCache:(id)arg1;
- (Class)GetLogicClassByContact:(id)arg1;
- (_Bool)onServiceMemoryWarning;
- (void)onPluginsChanged:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onServiceReloadData;
- (void)CheckIfTopViewControllerPoped;
- (void)cleanUpLogicByName:(id)arg1;
- (void)cleanUp;
- (id)getTopLogicController;
- (void)dealloc;
- (void)onServiceInit;
@property(retain, nonatomic) BaseMsgContentLogicController *topLogicController;
@property(retain, nonatomic) NSMutableArray *arrLogicControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

