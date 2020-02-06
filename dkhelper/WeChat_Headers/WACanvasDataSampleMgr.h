//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACanvasDataSampleMgrExt-Protocol.h"

@class NSString;

@interface WACanvasDataSampleMgr : NSObject <WACanvasDataSampleMgrExt>
{
}

- (void)onBeforeWAGameExit:(id)arg1;
- (void)onBeforeProfileRedirect:(id)arg1;
- (void)onBeforeQRCodeRecognized:(id)arg1;
- (void)onServiceRequestSample:(id)arg1 EventInfo:(id)arg2 Success:(CDUnknownBlockType)arg3 Failure:(CDUnknownBlockType)arg4 isDebugMode:(_Bool)arg5;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;
- (void)requestReportCanvasSampleData:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)getResizedImageByAppId:(id)arg1;
- (id)getGameServerData:(id)arg1;
- (id)getCurrentCanvasImage:(id)arg1 scaleFactor:(float)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
