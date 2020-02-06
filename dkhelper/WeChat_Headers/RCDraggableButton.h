//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UILongPressGestureRecognizer;

@interface RCDraggableButton : MMUIButton
{
    _Bool _isDragging;
    _Bool _singleTapBeenCanceled;
    struct CGPoint _beginLocation;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _draggable;
    _Bool _autoDocking;
    CDUnknownBlockType _longPressBlock;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _doubleTapBlock;
    CDUnknownBlockType _draggingBlock;
    CDUnknownBlockType _dragDoneBlock;
    CDUnknownBlockType _autoDockingBlock;
    CDUnknownBlockType _autoDockingDoneBlock;
}

@property(copy, nonatomic) CDUnknownBlockType autoDockingDoneBlock; // @synthesize autoDockingDoneBlock=_autoDockingDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType autoDockingBlock; // @synthesize autoDockingBlock=_autoDockingBlock;
@property(copy, nonatomic) CDUnknownBlockType dragDoneBlock; // @synthesize dragDoneBlock=_dragDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType draggingBlock; // @synthesize draggingBlock=_draggingBlock;
@property(copy, nonatomic) CDUnknownBlockType doubleTapBlock; // @synthesize doubleTapBlock=_doubleTapBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(copy, nonatomic) CDUnknownBlockType longPressBlock; // @synthesize longPressBlock=_longPressBlock;
@property(nonatomic) _Bool autoDocking; // @synthesize autoDocking=_autoDocking;
@property(nonatomic) _Bool draggable; // @synthesize draggable=_draggable;
- (void).cxx_destruct;
- (_Bool)isDragging;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)executeButtonTouchedBlock;
- (void)buttonTouched;
- (void)gestureRecognizerHandle:(id)arg1;
- (void)defaultSetting;
- (id)initInView:(id)arg1 WithFrame:(struct CGRect)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

