//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface WAPreDownloadReport : MMService <MMService>
{
    NSString *_appID;
    unsigned long long _appVersion;
    unsigned int _appType;
    unsigned int _appState;
    NSString *_instanceId;
    unsigned int _isPreload;
    _Bool _isDownloadedCode;
    unsigned int _scene;
    unsigned int _hasSplashScreen;
}

- (void).cxx_destruct;
- (void)reportPreDownloadStatus:(unsigned int)arg1 value:(unsigned int)arg2;
- (void)markEventTriggerDownload:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)init:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

