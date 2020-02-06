//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, CContact, MMBrandHeadImageView, MMHeadImageView, MMImageView, MMUILabel, NSArray, NSString, SearchMatchTip, UIButton, UILabel;
@protocol FTSContactCellDelegate;

@interface FTSContactCell : MMTableViewCell
{
    CContact *_contact;
    NSString *_searchText;
    SearchMatchTip *_matchTip;
    NSArray *_arrKeyword;
    id <FTSContactCellDelegate> _delegate;
    MMBrandHeadImageView *_brandHeadImageView;
    MMHeadImageView *_headImageView;
    MMImageView *_iconNamePostfix;
    MMUILabel *_labelNamePostfix;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    UIButton *_chatButton;
    MMUILabel *_appTypeLabel;
    UILabel *_rightLabel;
    _Bool _bAsTopHit;
}

@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak id <FTSContactCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateContact:(id)arg1 searchText:(id)arg2 matchTip:(id)arg3 keywords:(id)arg4 asTopHit:(_Bool)arg5;
- (void)updateContact:(id)arg1 searchText:(id)arg2 matchTip:(id)arg3 keywords:(id)arg4;
- (void)updateStatus:(_Bool)arg1;
- (id)getTopHitDescrpition;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateRightLabel:(id)arg1 color:(id)arg2;
- (void)initView;
- (void)onChatButtonClicked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

