//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseInfoItemDelegate-Protocol.h"

@class CountryCodeWrap, WCPayCountryCodeItem;

@protocol WCPayCountryCodeItemDelegate <WCBaseInfoItemDelegate>
- (void)countryCodeItem:(WCPayCountryCodeItem *)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(WCPayCountryCodeItem *)arg1 didSelectCountryCode:(CountryCodeWrap *)arg2;
@end

