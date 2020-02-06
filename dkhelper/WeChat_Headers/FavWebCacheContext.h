//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableString, NSString, NSURL;

@interface FavWebCacheContext : MMObject
{
    NSURL *_currentUrl;
    NSMutableString *_htmlString;
    NSMutableDictionary *_fileSrcMap;
    NSMutableDictionary *_ajaxCacheData;
    NSMutableDictionary *_ajaxCacheHeaders;
    NSDictionary *_localStorage;
    NSDictionary *_sessionStorage;
    NSString *_cookie;
}

@property(retain, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(retain, nonatomic) NSDictionary *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(retain, nonatomic) NSDictionary *localStorage; // @synthesize localStorage=_localStorage;
@property(retain, nonatomic) NSMutableDictionary *ajaxCacheHeaders; // @synthesize ajaxCacheHeaders=_ajaxCacheHeaders;
@property(retain, nonatomic) NSMutableDictionary *ajaxCacheData; // @synthesize ajaxCacheData=_ajaxCacheData;
@property(retain, nonatomic) NSMutableDictionary *fileSrcMap; // @synthesize fileSrcMap=_fileSrcMap;
@property(retain, nonatomic) NSMutableString *htmlString; // @synthesize htmlString=_htmlString;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
- (void).cxx_destruct;
- (id)init;

@end

