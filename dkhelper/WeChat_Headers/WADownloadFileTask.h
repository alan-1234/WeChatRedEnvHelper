//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURLSession, NSURLSessionDownloadTask, WADownloadFileProgressInfo;
@protocol OS_dispatch_queue, WADownloadFileTaskDelegate;

@interface WADownloadFileTask : NSObject
{
    NSString *_appID;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSString *_taskID;
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _completionHandler;
    _Bool _isRedirectInvalid;
    NSString *_url;
    NSMutableDictionary *_dicContext;
    _Bool _isFirstPkg;
    _Bool _isIgnoreCheckDomain;
    _Bool _isExceedMaxFileSize;
    _Bool _isCanceled;
    id <WADownloadFileTaskDelegate> delegate;
    NSDictionary *_dichttpHeader;
    NSMutableDictionary *_dicTaskContext;
    NSString *_userAgent;
    NSString *_httpHeaderReferer;
    NSString *_savePath;
    NSString *_localID;
    unsigned long long _lastUpdateProgressAbsoluteTime;
    WADownloadFileProgressInfo *_lastNotNotifyProgressInfo;
}

@property(retain) WADownloadFileProgressInfo *lastNotNotifyProgressInfo; // @synthesize lastNotNotifyProgressInfo=_lastNotNotifyProgressInfo;
@property unsigned long long lastUpdateProgressAbsoluteTime; // @synthesize lastUpdateProgressAbsoluteTime=_lastUpdateProgressAbsoluteTime;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain) NSString *localID; // @synthesize localID=_localID;
@property(retain) NSString *savePath; // @synthesize savePath=_savePath;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSString *httpHeaderReferer; // @synthesize httpHeaderReferer=_httpHeaderReferer;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain) NSMutableDictionary *dicTaskContext; // @synthesize dicTaskContext=_dicTaskContext;
@property(retain) NSDictionary *dichttpHeader; // @synthesize dichttpHeader=_dichttpHeader;
@property(retain) NSString *url; // @synthesize url=_url;
@property _Bool isExceedMaxFileSize; // @synthesize isExceedMaxFileSize=_isExceedMaxFileSize;
@property(nonatomic) _Bool isIgnoreCheckDomain; // @synthesize isIgnoreCheckDomain=_isIgnoreCheckDomain;
@property __weak id <WADownloadFileTaskDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(_Bool)arg5;
- (void)flushProgressNotifcation;
- (void)notifyProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)taskDidEnd;
- (id)workerQueue;
- (void)callCompletionHandlerWithResult:(id)arg1 error:(id)arg2;
- (void)markRedirectFail;
- (id)task;
- (void)cancelWithError:(id)arg1;
- (void)cancelForExceedMaxSize;
- (void)cancel;
- (void)taskDidCompleteWithError:(id)arg1 statusCode:(unsigned long long)arg2;
- (void)anyThread_didFinishDownloadingToURL:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)anyThread_updateTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)anyThread_didReceiveResponse;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)startWithURL:(id)arg1 httpHeaders:(id)arg2 userAgent:(id)arg3 referer:(id)arg4 context:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 workerQueue:(id)arg3 taskID:(id)arg4;

@end

