//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, WCAdvertiseCommentUploadMgr;

@interface WCAdvertiseDataHelper : MMObject
{
    NSMutableArray *m_advertiseList;
    NSMutableArray *m_advertiseMsgXmlList;
    WCAdvertiseCommentUploadMgr *m_adCommentUploader;
    _Bool m_bLoaded;
}

@property(retain, nonatomic) WCAdvertiseCommentUploadMgr *m_adCommentUploader; // @synthesize m_adCommentUploader;
- (void).cxx_destruct;
- (void)updateAtFriendAdvertiseData:(id)arg1;
- (_Bool)checkInvalidAdData;
- (void)removeAllCacheAdvertiseMsgXml;
- (void)addAdvertiseMsgXml:(id)arg1;
- (id)getAdvertiseMsgXmlList;
- (void)saveAdvertiseMsgXmlDatas;
- (id)GetPathOfWCAdvertiseMsgXmlStorage;
- (id)getAdvertiseItemByID:(id)arg1;
- (id)getAdvertiseDataBeforeCurMinTime:(unsigned int)arg1;
- (id)getAdvertiseDataByCurMinTime:(unsigned int)arg1 MaxTime:(unsigned int)arg2;
- (void)setAdvertiseDataExposured:(id)arg1;
- (void)updateAdvertiseDataExceptCreateTime:(id)arg1;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)updateAdvertiseData:(id)arg1;
- (void)deleteAllAdvertiseData;
- (void)deleteAdvertiseData:(id)arg1;
- (void)deleteAdvertiseDataList:(id)arg1;
- (void)addAdvertiseDataList:(id)arg1;
- (void)addAdvertiseData:(id)arg1 needUpdateCreateTime:(_Bool)arg2;
- (void)LL_addAdvertiseData:(id)arg1 IsAtFriend:(_Bool)arg2 needUpdateCreateTime:(_Bool)arg3;
- (unsigned int)getEarliestTimeOfCommentsAndLikes:(id)arg1;
- (void)saveAdvertiseDatas;
- (void)tryLoadAdvertiseData;
- (void)reuseAdvertiseData:(id)arg1;
- (_Bool)IsAdvertiseDataCanBeReused:(id)arg1;
- (_Bool)IsAdvertiseDataValid:(id)arg1;
- (_Bool)hasOutOfExposureTime:(id)arg1;
- (_Bool)hasExposured:(id)arg1;
- (_Bool)hasOutOfCommentTime:(id)arg1;
- (_Bool)hasCommented:(id)arg1;
- (id)GetPathOfWCAdvertiseStorage;
- (id)init;

@end

