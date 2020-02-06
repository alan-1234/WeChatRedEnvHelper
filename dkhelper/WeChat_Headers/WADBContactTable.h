//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WADBContactPack;

@interface WADBContactTable : NSObject <WCTTableCoding>
{
    unsigned int _type;
    unsigned int _wxAppOpt;
    NSString *_userName;
    NSString *_brandIconURL;
    NSString *_externalInfo;
    WADBContactPack *_contactPack;
    NSString *_headImageStatus;
    NSString *_appId;
}

+ (void)__wcdb_column_constraint_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headImageStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wxAppOpt;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)contactPack;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)externalInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)brandIconURL;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *headImageStatus; // @synthesize headImageStatus=_headImageStatus;
@property(nonatomic) unsigned int wxAppOpt; // @synthesize wxAppOpt=_wxAppOpt;
@property(retain, nonatomic) WADBContactPack *contactPack; // @synthesize contactPack=_contactPack;
@property(retain, nonatomic) NSString *externalInfo; // @synthesize externalInfo=_externalInfo;
@property(retain, nonatomic) NSString *brandIconURL; // @synthesize brandIconURL=_brandIconURL;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

