//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditVideoLogicControl.h"

#import "WCStoryEditVideoLayoutViewDelegate-Protocol.h"

@class NSString;

@interface WCStoryEditVideoLogicControl : WCEditVideoLogicControl <WCStoryEditVideoLayoutViewDelegate>
{
}

- (void)onClickSaveEditVideoToAlbumActionSheet:(CDUnknownBlockType)arg1;
- (void)editImageShowPOIPickerViewController:(id)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (struct CGSize)getImageRatioSize;
- (void)showEditVideoViewOn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

