//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MinimizeBaseViewDelegate;

@interface MinimizeBaseView : UIView
{
    id <MinimizeBaseViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MinimizeBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

