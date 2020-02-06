//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WXVideoMetadata : NSObject
{
    NSMutableDictionary *_extraInfo;
}

+ (id)metadataFromAssetABA:(id)arg1;
+ (id)getExtraInfoFromAsset:(id)arg1;
+ (id)metadataFromAsset:(id)arg1;
+ (id)metadataWithWXTag;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (void).cxx_destruct;
- (int)containsCodecID:(id)arg1;
- (int)containsABAFlag:(id)arg1;
- (_Bool)addToWriterABA:(id)arg1 ABA:(int)arg2 ABA:(int)arg3;
- (_Bool)addToExportSession:(id)arg1;
- (_Bool)addToWriter:(id)arg1;
- (id)generateMetadataFromExtraInfo;
- (unsigned int)getCreatedWXVersion;
- (int)containsExtraInfo;
- (id)extraInfoForKey:(id)arg1;
- (_Bool)addExtraInfos:(id)arg1;
- (_Bool)addExtraInfo:(id)arg1 forKey:(id)arg2;

@end

