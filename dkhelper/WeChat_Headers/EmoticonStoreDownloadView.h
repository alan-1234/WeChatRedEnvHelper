//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"

@class EmoticonStoreItem, EmotionProgressView, UIActivityIndicatorView, UIButton, UIImageView;
@protocol EmoticonStoreCellDelegate, EmoticonStoreDownloadViewDelegate;

@interface EmoticonStoreDownloadView : UIView <IEmoticonPackageStateMgrExt, IEmoticonPackageMgrExt>
{
    _Bool _m_freeToDownload;
    id <EmoticonStoreCellDelegate> _m_delegate;
    UIImageView *_m_downloadedView;
    UIButton *_m_button;
    UIButton *_m_downloadButton;
    UIButton *_m_downloadedButton;
    EmotionProgressView *_m_progressView;
    UIActivityIndicatorView *_m_activityIndicatorView;
    long long _m_scene;
    long long _m_type;
    long long _type;
    id <EmoticonStoreDownloadViewDelegate> _delegate;
    EmoticonStoreItem *_m_storeItem;
}

@property(nonatomic) _Bool m_freeToDownload; // @synthesize m_freeToDownload=_m_freeToDownload;
@property(retain, nonatomic) EmoticonStoreItem *m_storeItem; // @synthesize m_storeItem=_m_storeItem;
@property(nonatomic) __weak id <EmoticonStoreDownloadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long m_type; // @synthesize m_type=_m_type;
@property(nonatomic) long long m_scene; // @synthesize m_scene=_m_scene;
@property(retain, nonatomic) UIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView=_m_activityIndicatorView;
@property(retain, nonatomic) EmotionProgressView *m_progressView; // @synthesize m_progressView=_m_progressView;
@property(retain, nonatomic) UIButton *m_downloadedButton; // @synthesize m_downloadedButton=_m_downloadedButton;
@property(retain, nonatomic) UIButton *m_downloadButton; // @synthesize m_downloadButton=_m_downloadButton;
@property(retain, nonatomic) UIButton *m_button; // @synthesize m_button=_m_button;
@property(retain, nonatomic) UIImageView *m_downloadedView; // @synthesize m_downloadedView=_m_downloadedView;
@property(nonatomic) __weak id <EmoticonStoreCellDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnBuyItemCancel:(id)arg1;
- (void)OnBuyItemFailed:(id)arg1;
- (void)OnBuyItemSuccess:(id)arg1;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)checkEmoticonBuyRet:(int)arg1;
- (void)onClickButton;
- (void)onClickDownloadButton;
- (void)onState:(int)arg1;
- (void)updateStoreItem:(id)arg1;
- (id)getChannelButton;
- (void)initChannelButton;
- (void)initDownloadProgressView;
- (void)initDownloadButton;
- (void)initStateButton;
- (void)initDownloadedView;
- (void)layoutSubviews;
- (void)loadSubView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

