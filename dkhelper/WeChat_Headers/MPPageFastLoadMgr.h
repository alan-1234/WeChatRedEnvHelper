//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MPPageFastLoadEventMgr, MPPageResourceDownloader, MPPageTemplateInfoContainer, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPPageFastLoadMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableArray *_downloadingInfoList;
    MPPageTemplateInfoContainer *_templateInfoContainer;
    unsigned int _lastCheckTemplateVersionTime;
    MPPageResourceDownloader *_templateDownloader;
    _Bool _isBatchReporting;
    NSMutableDictionary *_preloadWebViewDic;
    NSMutableDictionary *_pageDataCacheItemDic;
    NSMutableArray *_pageDataWaitQueue;
    NSMutableDictionary *_pageDataRequestDic;
    NSObject<OS_dispatch_queue> *_workQueue;
    MPPageFastLoadEventMgr *_eventMgr;
}

+ (id)webviewPresetUIWithTemplateType:(unsigned int)arg1;
+ (unsigned int)templateTypeFromShowType:(unsigned int)arg1;
+ (_Bool)isKnownItemShowType:(unsigned int)arg1;
+ (_Bool)isMPDomainWithUrl:(id)arg1;
+ (_Bool)isSupportedFastload:(_Bool)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 andGetTemplateType:(unsigned int *)arg4;
+ (_Bool)isSupportedFastload:(_Bool)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3;
+ (unsigned long long)useFlagForIsPreCreateWebView:(_Bool)arg1 isSyncGetPageData:(_Bool)arg2;
@property(retain, nonatomic) MPPageFastLoadEventMgr *eventMgr; // @synthesize eventMgr=_eventMgr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *pageDataRequestDic; // @synthesize pageDataRequestDic=_pageDataRequestDic;
@property(retain, nonatomic) NSMutableArray *pageDataWaitQueue; // @synthesize pageDataWaitQueue=_pageDataWaitQueue;
@property(retain, nonatomic) NSMutableDictionary *pageDataCacheItemDic; // @synthesize pageDataCacheItemDic=_pageDataCacheItemDic;
@property(retain, nonatomic) NSMutableDictionary *preloadWebViewDic; // @synthesize preloadWebViewDic=_preloadWebViewDic;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)pathOfLibraryDir;
- (id)pathOfCacheDir;
- (void)clearPreloadWebViewWithScene:(unsigned long long)arg1;
- (id)generatePreloadWebViewWithType:(unsigned int)arg1;
- (id)popPreloadWebViewWithType:(unsigned int)arg1 enterType:(long long)arg2 scene:(unsigned int)arg3;
- (void)preparePreloadWebViewWithType:(unsigned int)arg1 enterType:(long long)arg2;
- (void)setSwitchValue:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)loadSwitchValueWithKey:(id)arg1;
- (id)userDefaultKeyWithName:(id)arg1;
- (id)changeUrlSchemeToHttps:(id)arg1;
- (void)destoryPreloadWebViewWithType:(unsigned int)arg1 fullVersion:(id)arg2;
- (id)webViewControllerWithType:(unsigned int)arg1 enterType:(long long)arg2 scene:(unsigned int)arg3 url:(id)arg4 pageDataKeyUrl:(id)arg5 visibleViewController:(id)arg6 addExtraInfo:(id)arg7;
- (id)createWebViewCtrlMaybeUseFastLoad:(_Bool)arg1 itemShowType:(unsigned int)arg2 enterType:(long long)arg3 scene:(unsigned int)arg4 urlForReport:(id)arg5 url:(id)arg6 visibleViewController:(id)arg7 addExtraInfo:(id)arg8 presetUI:(id)arg9 isUsedFastLoad:(_Bool *)arg10 forceUrl:(id *)arg11;
- (void)asyncPreparePreloadWebViewWithTypeList:(id)arg1 enterType:(long long)arg2 scene:(unsigned int)arg3 afterDelay:(double)arg4;
- (void)asyncPreparePreloadWebViewWithType:(unsigned int)arg1 enterType:(long long)arg2 scene:(unsigned int)arg3 afterDelay:(double)arg4;
- (id)pageFastLoadEventMgr;
- (id)commonCheckTemplateTypeList;
- (unsigned int)templateTypeCommonShare;
- (unsigned int)templateTypeArticle;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2 value:(unsigned int)arg3;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2;
- (_Bool)isLowQualityNetworkCondition;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (void)onResponseAppMsgReport:(id)arg1 context:(id)arg2;
- (_Bool)requestReportItemWithContext:(id)arg1;
- (_Bool)batchReportItemList:(id)arg1;
- (void)tryBatchReportItemsWithEnterType:(long long)arg1;
- (void)reportLoadPageWithUrl:(id)arg1 a8keyScene:(unsigned int)arg2;
- (void)reportUpdateTemplateWithEnterType:(long long)arg1;
- (void)reportPreCreateWebViewWithEnterType:(long long)arg1 reportId:(unsigned int)arg2;
- (_Bool)isPageDataFileExistWithIdentity:(id)arg1;
- (id)pageDataFilePathWithIdentity:(id)arg1;
- (id)pageDataFileDir;
- (void)addMPPageCacheItemList:(id)arg1;
- (id)getPageDataCacheItemWithIdentity:(id)arg1;
- (id)getPageDataCacheItem:(id)arg1;
- (void)reportRequestPageDataWithContext:(id)arg1;
- (_Bool)saveResponsePageDataContentToDisk:(id)arg1 identity:(id)arg2;
- (void)updateUrlInfoCountInEnterType:(long long)arg1 bizTimelineCount:(unsigned int *)arg2 bizSessionCount:(unsigned int *)arg3 commSessionCount:(unsigned int *)arg4 snsCount:(unsigned int *)arg5 bizProfileCount:(unsigned int *)arg6 webJSAPICount:(unsigned int *)arg7 kanJSAPICount:(unsigned int *)arg8;
- (void)workQueue_processPageDataResponse:(id)arg1 withUrlToContentInfoDic:(id)arg2 context:(id)arg3;
- (void)workQueue_onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)requestPageData:(id)arg1 scene:(unsigned long long)arg2;
- (void)checkPageDataWaitQueue;
- (void)addHeadOfPageDataWaitQueue:(id)arg1;
- (void)removeFromPageDataWaitQueueWithIdentityList:(id)arg1;
- (id)identityListFromPageDataUrlInfoList:(id)arg1;
- (id)filterPageDataRequestUrlInfoList:(id)arg1;
- (id)filterInvalidOrRepeatedUrlInfoList:(id)arg1;
- (void)mainThread_updatePageDataWaitUrlInfoList:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)workQueue_filterAndFillPageDataRequestUrlInfoList:(id)arg1 withTemplateTypeToVersionDictionary:(id)arg2 withTemplateTypeToVersionGroupDictionary:(id)arg3;
- (id)getPageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersion:(unsigned int)arg3 templateVersionGroup:(id)arg4;
- (_Bool)hasValidPageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersion:(unsigned int)arg3 templateVersionGroup:(id)arg4;
- (unsigned int)getPageDataRequiredTemplateVersionWithUrl:(id)arg1 templateType:(unsigned int)arg2 templateVersionGroup:(id)arg3;
- (unsigned int)getItemShowTypeWithUrl:(id)arg1;
- (_Bool)hasItemShowTypeWithUrl:(id)arg1;
- (_Bool)getPageForceUrlFullScreenValidState:(id)arg1;
- (id)getPageForceUrlWithUrl:(id)arg1;
- (void)directUpdatePageData:(id)arg1 withTemplateVersion:(unsigned int)arg2 withTemplateVersionGroup:(id)arg3;
- (void)advanceDirectUpdatePageDataWithUrl:(id)arg1 templateType:(unsigned int)arg2 scene:(unsigned int)arg3 enterType:(unsigned int)arg4;
- (void)priorityUpdatePageData:(id)arg1 enterType:(long long)arg2;
- (void)onServiceReloadDataWithCategoryPageData;
- (void)onServiceInitWithCategoryPageData;
- (void)p_requestTemplateFileWithTemplateInfo:(id)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3 url:(id)arg4 md5:(id)arg5 header:(id)arg6 versionGroup:(id)arg7 scene:(unsigned int)arg8 fullVersion2FilePathMap:(id)arg9;
- (id)p_fullVersion2FilePathMapWithTemplateType:(unsigned int)arg1;
- (id)downloadingInfoList;
- (id)downloadingInfoWithType:(unsigned int)arg1 fullVersion:(id)arg2;
- (void)reportTemplateDownloadWithParam:(id)arg1 downloadingInfo:(id)arg2 isSuccess:(_Bool)arg3;
- (unsigned long long)convertDownloaderErrorCode2ReportKey:(unsigned long long)arg1;
- (void)onResponseTemplateFileWithParam:(id)arg1 downloadingInfo:(id)arg2;
- (void)requestTemplateFileWithTemplateInfo:(id)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3 url:(id)arg4 md5:(id)arg5 header:(id)arg6 versionGroup:(id)arg7 scene:(unsigned int)arg8 fullVersion2FilePathMap:(id)arg9;
- (void)setupTemplateDownloader;
- (id)dirPathOfTemplateDownload;
- (void)clearInvalidTemplateDonwloadedFile;
- (_Bool)isTemplateFileValidWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)pathOfTemplateFileWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)pathOfTemplateDirWithType:(unsigned int)arg1;
- (id)pathOfTemplateStoreDir;
- (_Bool)isResponseTemplateInfoValid:(id)arg1;
- (unsigned int)templateCheckInterval;
- (id)httpHeaderWithType:(unsigned int)arg1 templateVersion:(unsigned int)arg2;
- (id)getAndRemoveInvalidFullVersions:(id)arg1 templateInfo:(id)arg2;
- (void)saveTemplateInfoIfNeed:(id)arg1;
- (_Bool)isCheckTemplateVersionResponseOK:(id)arg1;
- (void)onResponseCheckTemplateVersion:(id)arg1 request:(id)arg2;
- (void)requestCheckTemplateVersionWityTypeList:(id)arg1 scene:(unsigned int)arg2;
- (id)templateInfoWithTemplateType:(unsigned int)arg1;
- (id)templateTypeToFullVersionDictionary;
- (id)templateTypeToVersionGroupDictionary;
- (id)templateTypeToVersionDictionary;
- (unsigned int)tempalteVersionForInitWebViewWithType:(unsigned int)arg1 andGetFullVersion:(id *)arg2 andGetVersionGroup:(id *)arg3;
- (id)latestTemplateFullVersionWithType:(unsigned int)arg1;
- (unsigned int)minValidTemplateVersionWithType:(unsigned int)arg1;
- (void)clearInvalidTemplateDownloadedRecord;
- (void)saveTemplateInfo;
- (void)loadTemplateInfo;
- (id)pathOfTemplateInfo;
- (void)setupTemplateInfo;
- (id)pageFrameContentWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (void)forceUpdateTemplateFromServerWityType:(unsigned int)arg1;
- (void)updateTemplateFromServerWityTypeList:(id)arg1 enterType:(long long)arg2 scene:(unsigned int)arg3;
- (id)fullVersion2FilePathMapWithTemplateType:(unsigned int)arg1;
- (id)localLatestDownloadedFullVersionWithType:(unsigned int)arg1;
- (id)localFullVersionListWithType:(unsigned int)arg1;
- (unsigned int)templateReportIdWithType:(unsigned int)arg1;
- (void)onServiceReloadDataWithCategoryTemplateDownoad;
- (void)onServiceInitWithCategoryTemplateDownload;
- (_Bool)isUseFastLoadCommonShare;
- (unsigned long long)commonSharsUseFlag;
- (_Bool)isPrepareWebviewWithTemplateTypeIfNeeded:(unsigned int)arg1;
- (_Bool)canUseFastLoadWithEnterType:(long long)arg1 andTemplateType:(unsigned int)arg2;
- (_Bool)isUseFastLoadWithEnterType:(long long)arg1;
- (_Bool)isUsePreDownloadPageDataWithEnterType:(long long)arg1;
- (_Bool)isUsePreCreateWebViewWithEnterType:(long long)arg1;
- (unsigned long long)useFlagWithEnterType:(long long)arg1;
- (unsigned long long)allOpenUseFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

