//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class CContact, EmotionBannerSet, ForwardMessageLogicController, NSString, WCDataItem;
@protocol MMUIViewControllerDelegate;

@interface StoreEmotionPageShareLogic : MMObject <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSString *m_titleForShareToTimeline;
    NSString *m_titleForShareToFriend;
    NSString *m_desc;
    NSString *m_iconUrl;
    NSString *m_linkUrl;
    int m_shareToTimelineType;
    int m_shareToFriendType;
    NSString *m_pid;
    unsigned int m_packType;
    unsigned int m_designerUin;
    NSString *m_designerName;
    EmotionBannerSet *m_bannerSet;
    CContact *m_shareContact;
    id <MMUIViewControllerDelegate> _delegate;
    WCDataItem *_timeLineDataItem;
}

+ (id)genProductIdFromTimelineUserData:(id)arg1;
@property(retain, nonatomic) WCDataItem *timeLineDataItem; // @synthesize timeLineDataItem=_timeLineDataItem;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)ReportShareAction:(unsigned long long)arg1 BannerSet:(id)arg2 Type:(unsigned long long)arg3;
- (void)ReportShareAction:(unsigned long long)arg1 DesignerUin:(unsigned int)arg2;
- (void)ReportShareAction:(unsigned long long)arg1 Pid:(id)arg2;
- (void)showLoadingWithMsg:(id)arg1;
- (id)genShareFriendMessage;
- (void)shareToFriend;
- (id)genTimelineUserData;
- (id)genUploadTask;
- (void)shareToTimeline;
- (void)showActionSheetWithSender:(id)arg1;
- (id)initWithBannerSet:(id)arg1;
- (id)initWithPersonalDesigner:(id)arg1 Desc:(id)arg2 OldRedirectUrl:(id)arg3;
- (id)initWithStoreItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

