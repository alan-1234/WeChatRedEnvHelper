//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UILabel, UIView;

@interface MMAssetSelectCheckButton : UIButton
{
    long long m_selectedIndex;
    UILabel *m_selectedIndexView;
    UIImage *m_normalImage;
    UIImage *m_selectedImage;
    UIView *_notSelectedView;
    struct CGRect _selectedIndexViewFrame;
}

@property(retain, nonatomic) UIView *notSelectedView; // @synthesize notSelectedView=_notSelectedView;
@property(nonatomic) struct CGRect selectedIndexViewFrame; // @synthesize selectedIndexViewFrame=_selectedIndexViewFrame;
- (void).cxx_destruct;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (id)selectedView;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isSelected;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;

@end

