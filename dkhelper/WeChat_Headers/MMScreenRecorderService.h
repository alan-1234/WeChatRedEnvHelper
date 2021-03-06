//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSObject, NSString, VideoWriter;
@protocol MMScreenRecorderDelegate, OS_dispatch_queue;

@interface MMScreenRecorderService : MMService <MMService>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    char *videoBuffer;
    unsigned long long videoBuffSize;
    struct MediaSdkMgr *mediaSdk;
    _Bool _waitSaveThumb;
    int _recordStatus;
    id <MMScreenRecorderDelegate> delegate;
    VideoWriter *_videoWriter;
    NSString *_videoPath;
    NSString *_videoId;
    NSString *_thumbPath;
    NSString *_thumbId;
    long long _lastFrameStamp;
}

@property(nonatomic) long long lastFrameStamp; // @synthesize lastFrameStamp=_lastFrameStamp;
@property(retain, nonatomic) NSString *thumbId; // @synthesize thumbId=_thumbId;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) _Bool waitSaveThumb; // @synthesize waitSaveThumb=_waitSaveThumb;
@property(nonatomic) int recordStatus; // @synthesize recordStatus=_recordStatus;
@property(retain, nonatomic) VideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(nonatomic) __weak id <MMScreenRecorderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (unsigned long long)getDiskFreeSpace;
- (unsigned long long)getDiskTotalSpace;
- (void)removeMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)createMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getMediaTrack:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)removeMediaContainer:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)exportMediaContainer:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)createMediaContainer:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)remux:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)abort:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)stop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)resume:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pause:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)write:(id)arg1 data:(char *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 bitmapInfo:(unsigned int)arg8;
- (void)start:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

