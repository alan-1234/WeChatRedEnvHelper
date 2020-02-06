//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CALayer, UIImageView, UIView;

@interface FaceRecogRoundView : MMUIView
{
    struct CGRect _faceRoundFrame;
    CALayer *_shapeLayer;
    UIView *_previewView;
    UIView *_blurBkView;
    UIImageView *_blurView;
}

@property(nonatomic) struct CGRect faceRoundFrame; // @synthesize faceRoundFrame=_faceRoundFrame;
- (void).cxx_destruct;
- (void)resetView;
- (void)showPreReflectLight;
- (void)showLoading:(_Bool)arg1 image:(id)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)attachPreviewLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 FaceFrame:(struct CGRect)arg2;

@end

