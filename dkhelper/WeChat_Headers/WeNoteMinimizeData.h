//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WeNoteMinimizeData : NSObject <NSCoding>
{
    _Bool _bEditable;
    unsigned int _mesLocalID;
    unsigned int _favLocalId;
    NSString *_chatUser;
    NSString *_timeLineId;
    NSString *_localDataId;
}

@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
@property(retain, nonatomic) NSString *localDataId; // @synthesize localDataId=_localDataId;
@property(retain, nonatomic) NSString *timeLineId; // @synthesize timeLineId=_timeLineId;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId=_favLocalId;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID=_mesLocalID;
@property(retain, nonatomic) NSString *chatUser; // @synthesize chatUser=_chatUser;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

