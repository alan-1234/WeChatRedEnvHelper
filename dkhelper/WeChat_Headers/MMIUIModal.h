//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMIUIModal : NSObject
{
    struct Handle<std::__1::shared_ptr<kinda::IUIModal>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)IsShowAndroidCenterPadding;
- (void)onClickAndroidBack;
- (void)onModalEnterForeground;
- (void)onModalEnterBackground;
- (void)keyboadWillHide;
- (void)keyboadWillShow:(float)arg1;
- (void)setPlatformDelegate:(id)arg1;
- (void)onCreateLayout:(id)arg1;
- (id)initWithCpp:(const shared_ptr_8bcf0829 *)arg1;

@end

