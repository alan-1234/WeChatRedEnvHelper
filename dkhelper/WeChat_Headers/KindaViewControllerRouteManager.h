//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSString;

@interface KindaViewControllerRouteManager : MMService <MMService>
{
    NSMutableArray *_routeActions;
}

@property(retain, nonatomic) NSMutableArray *routeActions; // @synthesize routeActions=_routeActions;
- (void).cxx_destruct;
- (void)parseNext;
- (void)addRouteAction:(CDUnknownBlockType)arg1;
- (void)PopToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)DismissModalViewController:(id)arg1 Animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)DismissModalViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)DismissOrPopViewController:(id)arg1 Animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)DismissOrPopViewController:(id)arg1 Animated:(_Bool)arg2;
- (id)previousViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

