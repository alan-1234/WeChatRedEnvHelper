//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCStorySetting : MMObject <PBCoding>
{
    _Bool hasClearCameraRedDot;
    _Bool hasShowCameraGuide;
    _Bool hasDragDownStoryTeachView;
    _Bool hasAutoPlayVideoFirst;
    _Bool hasTakePhotoAfterShowGuide;
    _Bool hasAlwaysShowFriendsStoryCellInTimeline;
    _Bool hasShowEntrance;
    _Bool hasClearAlbumRedDot;
    _Bool hasFirstPost;
    _Bool hasShowPrivateTips;
    unsigned int canBubbleTipsShowedCount;
    unsigned int canCameraTipsShowedCount;
    unsigned int dragDownStoryProfileCount;
    unsigned long long lastReadTimelineMaxTid;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasShowPrivateTips;
+ (void)PBArrayAdd_hasFirstPost;
+ (void)PBArrayAdd_hasClearAlbumRedDot;
+ (void)PBArrayAdd_hasShowEntrance;
+ (void)PBArrayAdd_lastReadTimelineMaxTid;
+ (void)PBArrayAdd_hasAlwaysShowFriendsStoryCellInTimeline;
+ (void)PBArrayAdd_hasTakePhotoAfterShowGuide;
+ (void)PBArrayAdd_dragDownStoryProfileCount;
+ (void)PBArrayAdd_hasAutoPlayVideoFirst;
+ (void)PBArrayAdd_hasDragDownStoryTeachView;
+ (void)PBArrayAdd_hasShowCameraGuide;
+ (void)PBArrayAdd_canCameraTipsShowedCount;
+ (void)PBArrayAdd_hasClearCameraRedDot;
+ (void)PBArrayAdd_canBubbleTipsShowedCount;
@property(nonatomic) _Bool hasShowPrivateTips; // @synthesize hasShowPrivateTips;
@property(nonatomic) _Bool hasFirstPost; // @synthesize hasFirstPost;
@property(nonatomic) _Bool hasClearAlbumRedDot; // @synthesize hasClearAlbumRedDot;
@property(nonatomic) _Bool hasShowEntrance; // @synthesize hasShowEntrance;
@property(nonatomic) unsigned long long lastReadTimelineMaxTid; // @synthesize lastReadTimelineMaxTid;
@property(nonatomic) _Bool hasAlwaysShowFriendsStoryCellInTimeline; // @synthesize hasAlwaysShowFriendsStoryCellInTimeline;
@property(nonatomic) _Bool hasTakePhotoAfterShowGuide; // @synthesize hasTakePhotoAfterShowGuide;
@property(nonatomic) unsigned int dragDownStoryProfileCount; // @synthesize dragDownStoryProfileCount;
@property(nonatomic) _Bool hasAutoPlayVideoFirst; // @synthesize hasAutoPlayVideoFirst;
@property(nonatomic) _Bool hasDragDownStoryTeachView; // @synthesize hasDragDownStoryTeachView;
@property(nonatomic) _Bool hasShowCameraGuide; // @synthesize hasShowCameraGuide;
@property(nonatomic) unsigned int canCameraTipsShowedCount; // @synthesize canCameraTipsShowedCount;
@property(nonatomic) _Bool hasClearCameraRedDot; // @synthesize hasClearCameraRedDot;
@property(nonatomic) unsigned int canBubbleTipsShowedCount; // @synthesize canBubbleTipsShowedCount;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

