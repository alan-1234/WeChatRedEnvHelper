//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKScanWidget-Protocol.h"
#import "WCPayCardNumberScanDelegate-Protocol.h"
#import "WCPayFillCardNumberViewControllerDelegate-Protocol.h"

@class MMVoidStringCallback, NSString;

@interface KindaScanWidget : NSObject <WCPayFillCardNumberViewControllerDelegate, WCPayCardNumberScanDelegate, MMKScanWidget>
{
    MMVoidStringCallback *m_callback;
}

- (void).cxx_destruct;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberCancel:(_Bool)arg1;
- (void)FillCardInfoCancel;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2;
- (void)scan:(id)arg1;
- (void)setHandlerImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

