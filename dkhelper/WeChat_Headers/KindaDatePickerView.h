//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKDatePickerView-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class MMKDatePickerViewOnSelectCallback, NSString, TenpaySecureCtrl, UIPickerView, WCUITextField;

@interface KindaDatePickerView : KindaView <MMKDatePickerView, UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *m_pickerView;
    long long m_iStartYear;
    long long m_iBeginYear;
    long long m_iEndYear;
    NSString *m_value;
    TenpaySecureCtrl *m_secureCtrlItem;
    WCUITextField *m_textField;
    long long m_type;
    long long m_selectedYearRow;
    long long m_selectedMonthRow;
    long long m_selectedDayRow;
    MMKDatePickerViewOnSelectCallback *m_onSelectCallback;
}

- (void).cxx_destruct;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (_Bool)isLeapYear:(long long)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setOriginDate:(int)arg1 month:(int)arg2 day:(int)arg3;
- (void)setStartYear:(long long)arg1 endYear:(long long)arg2 beginYear:(long long)arg3;
- (long long)nowYear;
- (long long)getType;
- (void)setType:(long long)arg1;
- (void)setOnSelectCallback:(id)arg1;
- (id)getValue;
- (void)setValue:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

