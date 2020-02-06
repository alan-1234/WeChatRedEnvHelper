//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class AxAuthSecResp;
@protocol MMAxAuthLogicDelegate;

@interface MMAxAuthLogic : NSObject <PBMessageObserverDelegate>
{
    unsigned int m_eventId;
    AxAuthSecResp *m_axAuthSecResp;
    unsigned int m_system_error_retry_count;
    unsigned int m_server_busy_retry_count;
    id <MMAxAuthLogicDelegate> _delegate;
}

@property __weak id <MMAxAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequest;
- (id)axAuthDescription;
@property(readonly, nonatomic) unsigned int axAuthCgiId;
- (id)initWithAxAuthSecResp:(id)arg1;

@end

