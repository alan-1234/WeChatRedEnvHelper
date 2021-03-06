//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTileOverlay.h"

@class QWorldMapCounter, QWorldTileOverlayDataProvider;

@interface QWorldTileOverlay : QTileOverlay
{
    long long _language;
    QWorldMapCounter *_worldMapCounter;
    QWorldTileOverlayDataProvider *_provider;
}

@property(retain, nonatomic) QWorldTileOverlayDataProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) __weak QWorldMapCounter *worldMapCounter; // @synthesize worldMapCounter=_worldMapCounter;
@property(nonatomic) long long language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onWorldVesionCheck:(id)arg1;
- (void)loadTileAtPath:(CDStruct_7e23819f)arg1 result:(CDUnknownBlockType)arg2;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;

@end

