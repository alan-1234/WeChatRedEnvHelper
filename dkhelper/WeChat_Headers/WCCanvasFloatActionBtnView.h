//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, WCCanvasComponent, WCCanvasComponentItem;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasFloatActionBtnView : MMUIView <CAAnimationDelegate>
{
    _Bool _isDisappearing;
    _Bool _didAppearFirstTime;
    id <WCCanvasComponentDelegate> _delegate;
    WCCanvasComponentItem *_componentItem;
    WCCanvasComponent *_component;
    long long _orientation;
}

@property(nonatomic) _Bool didAppearFirstTime; // @synthesize didAppearFirstTime=_didAppearFirstTime;
@property(nonatomic) _Bool isDisappearing; // @synthesize isDisappearing=_isDisappearing;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WCCanvasComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyComponentStatusChanged:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideActionView:(_Bool)arg1 animation:(_Bool)arg2;
- (_Bool)shouldShowActionViewWithOffsetY:(double)arg1;
- (id)fetchComponentId;
- (id)initWithFrame:(struct CGRect)arg1 componentItem:(id)arg2 dataItem:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

