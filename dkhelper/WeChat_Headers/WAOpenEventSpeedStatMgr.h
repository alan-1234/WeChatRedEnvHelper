//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString, WACanvasDataSampleMgr;

@interface WAOpenEventSpeedStatMgr : MMService <MMService>
{
    NSMutableDictionary *m_timeStampCache;
    unsigned long long m_beginTime;
    NSString *m_appid;
    long long m_version;
    unsigned long long m_appState;
    unsigned long long m_scene;
    _Bool m_isTriggerDownload;
    _Bool m_isSyncUpdateContact;
    _Bool m_isSyncLaunchCgi;
    _Bool m_isUsePreloadTask;
    unsigned int m_syncUpdateReason;
    unsigned int m_scriptDataSize;
    unsigned int m_packageSize;
    _Bool m_updatedContact;
    _Bool m_usePatch;
    unsigned long long m_preloadPageFrameBeginTime;
    unsigned long long m_preloadPageFrameJSBeginTime;
    unsigned long long m_packageReadyTime;
    NSString *m_instanceId;
    unsigned int m_isSplitPluginCode;
    NSMutableDictionary *m_keyEventSampleConfigs;
    WACanvasDataSampleMgr *canvasSampleMgr;
    unsigned int _sampleType;
    unsigned int _sampleCollectInterval;
    unsigned int _fpsLagWindowSize;
    unsigned int _fpsLagWindowDiff;
    unsigned int _fpsLowThreshold;
}

@property(nonatomic) unsigned int fpsLowThreshold; // @synthesize fpsLowThreshold=_fpsLowThreshold;
@property(nonatomic) unsigned int fpsLagWindowDiff; // @synthesize fpsLagWindowDiff=_fpsLagWindowDiff;
@property(nonatomic) unsigned int fpsLagWindowSize; // @synthesize fpsLagWindowSize=_fpsLagWindowSize;
@property(nonatomic) unsigned int sampleCollectInterval; // @synthesize sampleCollectInterval=_sampleCollectInterval;
@property(nonatomic) unsigned int sampleType; // @synthesize sampleType=_sampleType;
- (void).cxx_destruct;
- (id)getNetTypeString:(unsigned int)arg1;
- (id)getCanvasServerSampleConfigById:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)requestWeAppExtraConfigWithAppID:(id)arg1 debugModeType:(unsigned int)arg2 appVersion:(unsigned int)arg3 scene:(unsigned int)arg4 isFromBackground:(_Bool)arg5 dicLaunchParameter:(id)arg6;
- (unsigned long long)getBeginTime;
- (void)reportInjectReady:(unsigned int)arg1 path:(id)arg2 isPreload:(_Bool)arg3 isPreOpen:(_Bool)arg4;
- (void)reportInitReady:(unsigned int)arg1 path:(id)arg2 isPreload:(_Bool)arg3;
- (void)endWithGetUrlReady:(unsigned int)arg1 ret:(unsigned int)arg2;
- (void)endWithPackageReady:(unsigned int)arg1 isPreOpen:(_Bool)arg2 isPreload:(_Bool)arg3;
- (id)getReportId;
- (void)markUpdateContact:(_Bool)arg1;
- (void)beginWithWeAppInit;
- (void)markTaskClosedWithAppid:(id)arg1;
- (void)markEventDownloadPackageInfo:(id)arg1 packageSize:(unsigned int)arg2 usePatch:(_Bool)arg3;
- (unsigned long long)markEventEnd:(unsigned long long)arg1 appType:(unsigned int)arg2;
- (void)markEventBegin:(unsigned long long)arg1;
- (void)markEventDealScriptSize:(unsigned int)arg1 appid:(id)arg2 preload:(_Bool)arg3;
- (void)markEventOpenFromPreloadTask:(id)arg1;
- (void)markEventSyncLaunchCgi:(id)arg1;
- (void)markEventSyncUpdateContact:(id)arg1 reason:(unsigned int)arg2;
- (void)markEventTriggerDownload:(id)arg1;
- (void)registerOpenWeAppInfo:(id)arg1 appVersion:(long long)arg2 appState:(unsigned long long)arg3 scene:(unsigned long long)arg4 isPluginCode:(unsigned int)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

