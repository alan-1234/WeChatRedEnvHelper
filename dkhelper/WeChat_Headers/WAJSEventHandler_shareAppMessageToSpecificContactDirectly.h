//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_shareAppMessageDirectly.h"

@class NSDictionary;

@interface WAJSEventHandler_shareAppMessageToSpecificContactDirectly : WAJSEventHandler_shareAppMessageDirectly
{
    NSDictionary *_dic;
}

- (void).cxx_destruct;
- (void)handleShareTransID:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)transferOpenId:(id)arg1 appId:(id)arg2;
- (void)handleJSEvent:(id)arg1;

@end
