//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBaseContact, NSString;

@protocol WCAdFullScreenVideoViewControllerDelegate <NSObject>

@optional
- (void)onAdVideoPlayerRotation:(_Bool)arg1;
- (void)onCloseAdPlayerForDetailView:(NSString *)arg1;
- (void)onShareAdVideoToTimeline:(_Bool)arg1;
- (void)onCancelShareAdVideoToFriend;
- (void)onShareAdVideoToFriends:(CBaseContact *)arg1;
- (void)onFavAdVideoClicked;
- (void)onAdPlayerStateChange:(int)arg1;
@end

