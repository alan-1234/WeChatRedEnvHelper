//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSDate, NSString;

@interface CdnComMgr : MMService <MMService, MMKernelExt, PBMessageObserverDelegate, CNetworkStatusExt>
{
    struct CdnCallback *m_pCallback;
    unsigned int m_uiGetCdnDnsInfoEventID;
    unsigned int m_uiGetCdnCount;
    NSDate *m_tGetCdn;
    MMTimer *m_tmCheckCdnInfo;
    _Bool m_bInitCdnCom;
    _Bool m_bHasGetCdnDns;
    _Bool m_bNetWorkChangeRetry;
    _Bool m_bIgnoreBackGroundFetchRetry;
    _Bool m_bForbidSnsDownloadWithCustomProtocol;
}

+ (id)GetMsgUploadClientMsgID:(id)arg1;
+ (struct Config)GetWxConfig;
+ (id)GetDownloadThumbClientID:(id)arg1;
+ (id)GetDownloadClientID:(id)arg1 HD:(_Bool)arg2;
+ (id)GetCdnRootPath;
@property(readonly, nonatomic) _Bool m_bForbidSnsDownloadWithCustomProtocol; // @synthesize m_bForbidSnsDownloadWithCustomProtocol;
@property(retain, nonatomic) NSDate *m_tGetCdn; // @synthesize m_tGetCdn;
- (void).cxx_destruct;
- (void)StopUploadEmoji:(id)arg1;
- (_Bool)StartUploadEmoji:(id)arg1;
- (_Bool)tryMultisockC2CDowload:(struct C2CDownloadRequest)arg1;
- (_Bool)tryMultisockC2CUpload:(struct C2CUploadRequest)arg1;
- (_Bool)shouldUseMultisocket;
- (id)genarateResAesKey;
- (id)calcMP4IdentifyMD5WithFilePath:(id)arg1;
- (id)calcFileMd5WithFilePath:(id)arg1;
- (void)SetCdnHostIPFromNewDNS;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)onAuthOK;
- (void)OnRequestGetCdnDns:(int)arg1;
- (void)CallInternalGetCdnDns:(id)arg1;
- (void)OnDownloadEnd:(id)arg1;
- (void)CallDownloadExtendsion:(id)arg1;
- (void)OnDownloadProgress:(id)arg1;
- (void)OnPreloadCompleted:(id)arg1;
- (void)CallPreloadCompletedExtendsion:(id)arg1;
- (void)onDownloadToEnd:(id)arg1;
- (void)CallDownloadToEndExtendsion:(id)arg1;
- (void)OnMoovReady:(id)arg1;
- (void)CallDownloadMoovReadyExtendsion:(id)arg1;
- (void)OnDownloadPartialVideoData:(id)arg1;
- (void)CallDownloadPartialDataExtendsion:(id)arg1;
- (void)CallDownloadProgressExtendsion:(id)arg1;
- (void)OnUploadEnd:(id)arg1;
- (void)CallUploadExtendsion:(id)arg1;
- (void)OnUploadProgress:(id)arg1;
- (void)CallUploadProgressExtendsion:(id)arg1;
- (void)StopDownloadYearLuckyMoneyImage:(id)arg1;
- (_Bool)StartDownloadYearLuckyMoneyImage:(id)arg1;
- (void)StopUploadYearLuckyMoneyImage:(id)arg1;
- (_Bool)StartUploadYearLuckyMoneyImage:(id)arg1;
- (_Bool)StartUploadDeviceFile:(id)arg1;
- (_Bool)StartUploadEncryptDeviceImage:(id)arg1;
- (_Bool)StartUploadDeviceImage:(id)arg1;
- (_Bool)StartUploadDeviceRankCover:(id)arg1;
- (void)StopUploadTimelineMediaOfSight:(id)arg1;
- (_Bool)StartUploadTimelineMediaOfSight:(id)arg1;
- (_Bool)StartUploadTimelineMediaOfSightThumb:(id)arg1;
- (void)StopUploadTimelineMedia:(id)arg1;
- (_Bool)StartUploadTimelineMedia:(id)arg1;
- (void)StopDownloadNormalFile:(id)arg1;
- (_Bool)StartDownloadNormalFile:(id)arg1;
- (void)StopUploadNormalFile:(id)arg1;
- (_Bool)StartUploadNormalFile:(id)arg1;
- (_Bool)StopDownloadRecordMedia:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (_Bool)StartDownloadRecordMedia:(id)arg1;
- (void)StopUploadRecordMedia:(id)arg1;
- (_Bool)StartUploadRecordMedia:(id)arg1 enableHitCheck:(_Bool)arg2;
- (void)StopDownloadFavMedia:(id)arg1;
- (_Bool)StartDownloadFavMedia:(id)arg1;
- (void)StopUploadFavMedia:(id)arg1;
- (_Bool)StartUploadFavMedia:(id)arg1;
- (void)StopDownloadComMedia:(id)arg1;
- (_Bool)StartDownloadComMedia:(id)arg1;
- (void)StopUploadComMedia:(id)arg1;
- (_Bool)StartUploadComMedia:(id)arg1;
- (_Bool)CheckAppAttachExist:(id)arg1 IsLargeFile:(_Bool)arg2;
- (int)QueryDownloadedLength:(id)arg1 fileUrl:(id)arg2 filePath:(id)arg3 fileSize:(unsigned long long)arg4 isLargeFile:(_Bool)arg5;
- (int)QueryDownloadedLength:(id)arg1 IsLargeFile:(_Bool)arg2;
- (_Bool)StopDownloadAppAttach:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)StopDownloadAppAttach:(id)arg1;
- (_Bool)StartDownloadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 SvrSign:(id)arg3 bigFileAes:(id)arg4 bigFileSign:(id)arg5 Silent:(_Bool)arg6;
- (void)StopUploadGameVideo:(id)arg1;
- (_Bool)StartUploadGameVideo:(id)arg1 fileMd5:(id)arg2 videoPath:(id)arg3 thumbPath:(id)arg4;
- (void)StopUploadGameMedia:(id)arg1;
- (_Bool)StartUploadGameHaowanImage:(id)arg1 imagePath:(id)arg2;
- (_Bool)StartUploadGameHaowanVideo:(id)arg1 videoPath:(id)arg2 thumbPath:(id)arg3;
- (void)StopUploadStoryMedia:(id)arg1;
- (_Bool)StartStoryDownloadWithTaskInfoWrap:(id)arg1;
- (_Bool)StartUploadStoryWithTaskInfo:(id)arg1;
- (void)StopUploadAppAttach:(id)arg1;
- (_Bool)StartUploadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 FileMd5:(id)arg3 SvrSign:(id)arg4 bigFileAes:(id)arg5 bigFileSign:(id)arg6 enableHitCheck:(_Bool)arg7 filekey:(id)arg8;
- (_Bool)StopDownloadSnsImage:(id)arg1;
- (_Bool)StartDownloadSnsImage:(id)arg1;
- (void)StopDownloadThumb:(id)arg1;
- (_Bool)StartDownloadThumb:(id)arg1;
- (_Bool)StopHttpsDownloadTask:(id)arg1;
- (_Bool)StartHttpsDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(_Bool)arg5 withFileType:(int)arg6;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 durationMs:(int)arg4;
- (_Bool)StartVideoStreamingDownload:(id)arg1 DownloadMode:(int)arg2;
- (_Bool)StartVideoStreamingDownload:(id)arg1 PlayMode:(_Bool)arg2;
- (_Bool)StartVideoPreload:(id)arg1;
- (int)getRequestVideoFormat:(id)arg1 mode:(int)arg2 tempPath:(id)arg3;
- (_Bool)StopCdnTaskDownloadWithClientMediaId:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (_Bool)StartSNSDownloadWithTaskInfoWrap:(id)arg1;
- (_Bool)StopAllDownloadTaskWithFileType:(int)arg1 CancelFlag:(int)arg2;
- (_Bool)StartHttpVideoStreamingDownload:(id)arg1 fileType:(int)arg2 filePath:(id)arg3 preloadPercent:(int)arg4 Timeout:(unsigned int)arg5;
- (_Bool)StartHttpVideoStreamingDownload:(id)arg1 fileType:(int)arg2 filePath:(id)arg3 preloadPercent:(int)arg4;
- (_Bool)StopDownloadVideo:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)StopDownloadVideo:(id)arg1;
- (_Bool)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2 Silent:(_Bool)arg3;
- (void)StopUploadVideo:(id)arg1;
- (_Bool)StartUploadVideo:(id)arg1 enableHitCheck:(_Bool)arg2 filekey:(id)arg3;
- (_Bool)StopDownloadImage:(id)arg1 HD:(_Bool)arg2 CdnDownloadTaskInfo:(id)arg3;
- (void)StopDownloadImage:(id)arg1 HD:(_Bool)arg2;
- (_Bool)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 Silent:(_Bool)arg4 disableHevc:(_Bool)arg5;
- (void)StopUploadImage:(id)arg1;
- (_Bool)StartUploadOCRImage:(id)arg1;
- (_Bool)StartUploadImage:(id)arg1 enableHitCheck:(_Bool)arg2 disableHevc:(_Bool)arg3 filekey:(id)arg4;
- (id)GetUploadImageBuffer:(id)arg1;
- (int)startDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3 andDownloadMode:(int)arg4;
- (int)startDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3;
- (_Bool)StopDownloadComMedia:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)CheckCdnInfo;
- (void)GetCdnDnsInfo:(unsigned int)arg1;
- (void)InternalGetCdnDnsInfo:(unsigned int)arg1;
- (int)GetRecentAverageSpeedWithType:(int)arg1;
- (_Bool)IsCanRetry:(int)arg1;
- (_Bool)IsCdnAvaible;
- (_Bool)IsAppMsgUseCdn;
- (_Bool)IsVideoUseCdn;
- (_Bool)IsImageUseCdn;
- (_Bool)IsCdnHideAeskey;
- (_Bool)IsUseCdn;
- (_Bool)IsMessageCanUseCdnDownload:(id)arg1;
- (_Bool)IsMessageCanUseCdnUpload:(id)arg1;
- (void)UnInit;
- (void)InitWithCdnInfo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

