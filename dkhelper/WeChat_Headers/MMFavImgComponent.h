//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponent.h"

#import "ILocationThumbMgrExt-Protocol.h"

@class MMCDNImageView, MMUILabel, NSString;

@interface MMFavImgComponent : MMComponent <ILocationThumbMgrExt>
{
    MMCDNImageView *_cdnImg;
    MMUILabel *_appLabel;
    MMUILabel *_ocrLabel;
}

+ (id)genLocationLabel:(id)arg1 withPoi:(id)arg2 maxWidth:(double)arg3;
+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (id)cropImage:(id)arg1 toFitSize:(struct CGSize)arg2;
- (void)configImgView;
- (void)configContentLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

