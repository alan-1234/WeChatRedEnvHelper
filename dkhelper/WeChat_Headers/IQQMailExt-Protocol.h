//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMail, NSArray, NSData, NSString;

@protocol IQQMailExt

@optional
- (void)OnGetMailUnreadCount:(int)arg1;
- (void)OnViewImage:(NSData *)arg1 ErrNo:(int)arg2;
- (void)OnViewCompress:(NSArray *)arg1 ErrNo:(int)arg2;
- (void)OnComposeSend:(int)arg1;
- (void)OnUploadData:(NSString *)arg1 filename:(NSString *)arg2 ErrNo:(int)arg3;
- (void)OnSetMailUnread:(int)arg1;
- (void)OnGetMail:(CMail *)arg1 ErrNo:(int)arg2;
- (void)OnGetAllMailContact:(NSArray *)arg1 ErrNo:(int)arg2;
@end

