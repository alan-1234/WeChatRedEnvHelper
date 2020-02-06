//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMDiskUsageScannerDelegate-Protocol.h"
#import "MMHeavyUserClassifierDelegate-Protocol.h"
#import "MMHeavyUserDataSourceDelegate-Protocol.h"
#import "MMHeavyUserEvaluatorDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "MMStackReportConnectionDelegate-Protocol.h"

@class MMDiskUsageScaner, MMHeavyUserClassifier, MMHeavyUserDataSource, MMHeavyUserEvaluator, MMStackReportConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMHeavyUserMonitorMgr : MMService <MMHeavyUserDataSourceDelegate, MMHeavyUserClassifierDelegate, MMHeavyUserEvaluatorDelegate, MMStackReportConnectionDelegate, MMDiskUsageScannerDelegate, MMService>
{
    unsigned long long m_uiHeavyUserType;
    MMStackReportConnection *m_customInfoReporter;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    NSObject<OS_dispatch_queue> *m_heavyUsrQueue;
    MMDiskUsageScaner *m_usageScanner;
    MMHeavyUserDataSource *_heavyUserDataSource;
    MMHeavyUserClassifier *_heavyUserClassifier;
    MMHeavyUserEvaluator *_heavyUserEvaluator;
}

+ (id)getHeavyUserInfoPath;
@property(retain, nonatomic) MMHeavyUserEvaluator *heavyUserEvaluator; // @synthesize heavyUserEvaluator=_heavyUserEvaluator;
@property(retain, nonatomic) MMHeavyUserClassifier *heavyUserClassifier; // @synthesize heavyUserClassifier=_heavyUserClassifier;
@property(retain, nonatomic) MMHeavyUserDataSource *heavyUserDataSource; // @synthesize heavyUserDataSource=_heavyUserDataSource;
- (void).cxx_destruct;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)onHeavyUserPointChange:(unsigned long long)arg1;
- (void)p_updateIDKeySetting:(unsigned long long)arg1;
- (void)p_reportToMMTestWithHeavyUserType:(unsigned long long)arg1;
- (void)p_reportHeavyUserSubtype:(unsigned long long)arg1;
- (void)onHeavyUserTypeChange:(unsigned long long)arg1;
- (void)onHeavyUserDataUpdate;
- (void)clearCache;
- (void)addDumpCount;
- (void)updateWechatSize:(unsigned long long)arg1;
- (void)updateContactCount:(unsigned long long)arg1;
- (void)updateSessionCount:(unsigned long long)arg1;
- (id)getHeavyUserDataSource;
- (void)p_checkFirstReport;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanCancel;
- (void)startCheckDiskSize;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

