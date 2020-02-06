//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKPwdInputView-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMKPwdInputViewOnEndEnterPasswordCallback, MMKPwdInputViewOnPasswordChangeCallback, NSString, UIView, WCPayTenpayPasswordCtrlItem;
@protocol MMKImage;

@interface KindaPwdInputView : KindaView <WCBaseInfoItemDelegate, MMKPwdInputView>
{
    WCPayTenpayPasswordCtrlItem *_m_passwordTextField;
    UIView *_m_view;
    id <MMKImage> _m_image;
    MMKPwdInputViewOnEndEnterPasswordCallback *_m_editEndCallBack;
    MMKPwdInputViewOnPasswordChangeCallback *_m_editChangeCallBack;
}

@property(retain, nonatomic) MMKPwdInputViewOnPasswordChangeCallback *m_editChangeCallBack; // @synthesize m_editChangeCallBack=_m_editChangeCallBack;
@property(retain, nonatomic) MMKPwdInputViewOnEndEnterPasswordCallback *m_editEndCallBack; // @synthesize m_editEndCallBack=_m_editEndCallBack;
@property(retain, nonatomic) id <MMKImage> m_image; // @synthesize m_image=_m_image;
@property(retain, nonatomic) UIView *m_view; // @synthesize m_view=_m_view;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_passwordTextField; // @synthesize m_passwordTextField=_m_passwordTextField;
- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)setOnPasswordChangeCallback:(id)arg1;
- (void)setOnEndEnterPasswordCallback:(id)arg1;
- (void)setFocus:(_Bool)arg1;
- (void)setAutoRemarkKeyBoradType:(_Bool)arg1;
- (void)setChearInput:(_Bool)arg1;
- (id)getHashData;
- (void)setHashData:(id)arg1;
- (long long)getTextLength;
- (void)setTextLength:(long long)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

