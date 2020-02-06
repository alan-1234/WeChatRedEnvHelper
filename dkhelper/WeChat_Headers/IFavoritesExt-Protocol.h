//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItem, NSArray, NSString;

@protocol IFavoritesExt <NSObject>

@optional
- (void)OnNoteSecurityCheck:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)OnDelAllFavItem;
- (void)OnModFavoritesItem:(NSArray *)arg1;
- (void)OnFavCapacityInfoUpdate;
- (void)OnDelFavoritesItems:(NSArray *)arg1;
- (void)OnUpdateItemDescription:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItems:(NSArray *)arg1;
- (void)OnSearch:(NSArray *)arg1;
- (void)OnCacheWebFinish:(FavoritesItem *)arg1;
- (void)OnUploadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnUploadFavoritesItemFinish:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnFavoritesItemDownloadFinished:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)OnAddNewFavoritesItems:(NSArray *)arg1;
- (void)OnGetNextPageFavoritesCapacityItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesCapacityItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)OnGetNextPageFavoritesItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(NSArray *)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
@end

