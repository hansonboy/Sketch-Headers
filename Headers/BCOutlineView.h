//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@class BCOutlineViewDataController, NSMutableDictionary, NSMutableSet;

@interface BCOutlineView : NSOutlineView
{
    BCOutlineViewDataController *_dataController;
    id _discloserTriangleClickedItem;
    SEL _disclosureButtonAction;
    NSMutableDictionary *_viewCache;
    NSMutableSet *_registeredViews;
}

@property(retain, nonatomic) NSMutableSet *registeredViews; // @synthesize registeredViews=_registeredViews;
@property(retain, nonatomic) NSMutableDictionary *viewCache; // @synthesize viewCache=_viewCache;
@property(nonatomic) SEL disclosureButtonAction; // @synthesize disclosureButtonAction=_disclosureButtonAction;
@property(retain, nonatomic) id discloserTriangleClickedItem; // @synthesize discloserTriangleClickedItem=_discloserTriangleClickedItem;
@property(nonatomic) __weak BCOutlineViewDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)reloadData;
- (void)addViewToCache:(id)arg1;
- (void)deliberateScrollRowToVisible:(long long)arg1;
- (void)scrollRowToVisible:(long long)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (id)menuForEvent:(id)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (void)registerView:(id)arg1 withIdentifier:(id)arg2;
- (void)disclosureTriangleClicked:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)mouseDown:(id)arg1;
- (void)awakeFromNib;

@end

