//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString, WCTempSaveModel;

@interface TempSaveFileOperation : NSOperation
{
    WCTempSaveModel *_model;
    NSString *_filePath;
}

+ (id)operationWithModel:(id)arg1 filePath:(id)arg2;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) WCTempSaveModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)main;

@end
