//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WAAudioPlayerInterface-Protocol.h"
#import "WAAudioSourceDelegate-Protocol.h"

@class NSData, NSString;
@protocol IWAAudioPlayerDelegate, WAAudioSource;

@interface WAGameAudioPlayer : MMObject <WAAudioSourceDelegate, WAAudioPlayerInterface>
{
    long long _state;
    _Bool _autoLoop;
    _Bool _autoPlay;
    _Bool _obeyMuteSwitch;
    NSString *_appId;
    NSString *_audioId;
    NSString *_src;
    double _startTime;
    double _bufferTime;
    double _volume;
    NSData *_fileData;
    id <WAAudioSource> _source;
    id <IWAAudioPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <IWAAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id <WAAudioSource> source; // @synthesize source=_source;
@property(retain) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool autoLoop; // @synthesize autoLoop=_autoLoop;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)sourceDidError:(id)arg1 error:(id)arg2;
- (void)sourceDidFinishPlaying:(id)arg1;
- (void)sourceSeeked:(id)arg1;
- (void)sourceSeeking:(id)arg1;
- (void)sourceStop:(id)arg1;
- (void)sourcePaused:(id)arg1;
- (void)sourceStartPlaying:(id)arg1;
- (void)setOpenALContext;
- (void)setState:(long long)arg1 error:(id)arg2;
- (void)endLoad;
- (void)backgroundInitSource;
- (_Bool)backgroundLoadData:(id)arg1 src:(id)arg2;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double curTime;
- (_Bool)isIdle;
- (_Bool)isWaiting;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isSet;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;
- (void)setPlayerWithSrc:(id)arg1 url:(id)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6 volume:(double)arg7 fileData:(id)arg8;
- (id)initWithAudioId:(id)arg1 appId:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

