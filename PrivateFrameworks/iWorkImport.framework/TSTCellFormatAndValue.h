/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellFormatAndValue : NSObject <NSCopying, TSSPropertyCommandSerializing, TSTCellDiffing> {
    BOOL  mApplySpareFormatOnly;
    TSUFormatObject * mBaseFormat;
    TSUFormatObject * mCurrencyFormat;
    int  mCurrentFormatType;
    TSUFormatObject * mCustomFormat;
    TSUFormatObject * mDateFormat;
    TSUFormatObject * mDurationFormat;
    int  mExplicitFlags;
    TSWPStorage * mFormattedRichTextStorage;
    NSString * mFormattedValue;
    TSUFormatObject * mMultipleChoiceFormat;
    TSUFormatObject * mNumberFormat;
    int  mSpareFormatType;
    TSUFormatObject * mStepperSliderFormat;
    BOOL  mSuppressApplyValue;
    BOOL  mUseAllSpareFormats;
    /* Warning: unhandled union encoding: '(?="mDouble"d"mBool"c"mDate"@"NSDate""mString"@"NSString""mStorage"@"TSWPStorage")' */ union { 
        double mDouble; 
        BOOL mBool; 
        NSDate *mDate; 
        NSString *mString; 
        id mStorage; 
    }  mValue;
    unsigned int  mValueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)cellDiffProperties;
+ (id)formatAndValueForCoercingControlCellToNonControlType:(id)arg1;
+ (id)formatAndValueFromCell:(id)arg1 applySpareFormatOnly:(int)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2 forceNoContent:(BOOL)arg3;
+ (id)formatAndValueFromRichTextCell:(id)arg1 updatingStorageWithBlock:(id /* block */)arg2;

- (void)applyToCell:(id)arg1;
- (id)copyForApplyingNoContent;
- (id)copyForApplyingNoContentWithSuppressApplyValue:(BOOL)arg1;
- (id)copyForNotApplyingValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; struct { double x_6_3_1; double x_6_3_2; double x_6_3_3; int x_6_3_4; unsigned int x_6_3_5 : 2; unsigned int x_6_3_6 : 2; } x_4_2_6; struct { int x_7_3_1; unsigned int x_7_3_2; id x_7_3_3; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_7_3_4; } x_4_2_7; } x_2_1_4; } x2; })getCurrentFormat;
- (BOOL)hasStringContentMatchingCell:(id)arg1;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2 forceNoContent:(BOOL)arg3 applySpareFormatOnly:(int)arg4;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (BOOL)isControl;
- (BOOL)isFormulaSyntaxError;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id*)p_formatObjectForFormatType:(int)arg1;
- (id)p_sikritCopyStorage:(id)arg1;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (int)valueType;

@end
