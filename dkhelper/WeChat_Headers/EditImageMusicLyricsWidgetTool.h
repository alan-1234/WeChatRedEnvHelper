//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EditImageWidgetTool.h"

@class NSMutableArray, UIImageView, UITextView, WCStoryLyricWaveView;

@interface EditImageMusicLyricsWidgetTool : EditImageWidgetTool
{
    _Bool _dragToDelete;
    UIImageView *_imageView;
    WCStoryLyricWaveView *_waveView;
    NSMutableArray *_lyrics;
    UITextView *_snapShotTextView;
    CDUnknownBlockType _didDeletedBlock;
    CDUnknownBlockType _didDoubleTapBlock;
    double _lyricTotalTime;
    struct CGPoint _initialOrigin;
}

@property(nonatomic) double lyricTotalTime; // @synthesize lyricTotalTime=_lyricTotalTime;
@property(copy, nonatomic) CDUnknownBlockType didDoubleTapBlock; // @synthesize didDoubleTapBlock=_didDoubleTapBlock;
@property(copy, nonatomic) CDUnknownBlockType didDeletedBlock; // @synthesize didDeletedBlock=_didDeletedBlock;
@property(nonatomic, getter=isDragToDelete) _Bool dragToDelete; // @synthesize dragToDelete=_dragToDelete;
@property(retain, nonatomic) UITextView *snapShotTextView; // @synthesize snapShotTextView=_snapShotTextView;
@property(retain, nonatomic) NSMutableArray *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) __weak WCStoryLyricWaveView *waveView; // @synthesize waveView=_waveView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGPoint initialOrigin; // @synthesize initialOrigin=_initialOrigin;
- (void).cxx_destruct;
- (id)exportAnimatedLayer;
- (void)resetToInitialState;
- (void)onWidgitDeleted;
- (void)handlePinchGesture:(id)arg1;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (id)genLyricImageWithLyric:(id)arg1;
- (id)genLyricAnimationForScene:(unsigned long long)arg1;
- (id)splitLyrics:(id)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)setup;

@end

