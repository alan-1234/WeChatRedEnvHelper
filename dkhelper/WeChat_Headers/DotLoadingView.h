//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface DotLoadingView : UIView
{
    long long _dotStyle;
    UIColor *_dotColor;
    NSMutableArray *_dots;
    _Bool _animating;
    _Bool _hidesWhenStopped;
    double _separatorDistance;
    struct CGSize _dotSize;
}

@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(nonatomic) double separatorDistance; // @synthesize separatorDistance=_separatorDistance;
@property(nonatomic) struct CGSize dotSize; // @synthesize dotSize=_dotSize;
- (void).cxx_destruct;
- (void)setDetachDistance:(double)arg1;
- (_Bool)isLoading;
- (void)stopLoading;
- (void)startLoading;
- (void)forceStartLoading;
- (id)fadeInAnimation:(double)arg1;
- (id)createDotPath;
- (void)resetPos;
- (void)ensureDotsPathCreated;
- (id)getDotColor:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dotStyle:(long long)arg2 dotColor:(long long)arg3 dotSize:(struct CGSize)arg4;
- (id)initWithFrame:(struct CGRect)arg1 dotStyle:(long long)arg2 dotColor:(long long)arg3;

@end

