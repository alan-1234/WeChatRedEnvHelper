//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class BTBaseItemCellView, BTMsgSectionData, CContact, CMessageWrap;

@interface BTBaseItemCellViewModel : MMObject
{
    double _viewWidth;
    double _viewHeight;
    CMessageWrap *_msgWrap;
    CContact *_contact;
    int _posInTL;
    BTBaseItemCellView *_cellView;
    BTMsgSectionData *_msgSectionData;
}

@property(nonatomic) int posInTL; // @synthesize posInTL=_posInTL;
@property(nonatomic) __weak BTMsgSectionData *msgSectionData; // @synthesize msgSectionData=_msgSectionData;
@property(nonatomic) __weak BTBaseItemCellView *cellView; // @synthesize cellView=_cellView;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
- (void).cxx_destruct;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (id)initWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (id)createItemCellView;
- (id)itemViewClassName;
@property(readonly, nonatomic) double viewHeight;

@end

