//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSymbolInstance.h"

@interface MSSymbolInstance : _MSSymbolInstance
{
}

- (BOOL)canResize;
- (BOOL)canScale;
- (BOOL)canBeTransformed;
- (struct CGSize)naturalSize;
- (unsigned long long)selectionCornerMaskWithZoomValue:(double)arg1;
- (void)setRect:(struct CGRect)arg1;
- (void)updateOverrides:(id)arg1 withMapping:(id)arg2;
- (void)updateOverrideIDSWithMapping:(id)arg1;
- (void)symbolMasterDidChange:(id)arg1 withInfluence:(struct CGRect)arg2;
- (void)resizeInstanceToFitSymbol:(id)arg1;
- (id)detachByReplacingWithGroup;
- (BOOL)canInsertIntoGroupWithoutInfiniteRecursion:(id)arg1 visitedSymbols:(id)arg2;
- (BOOL)canInsertIntoGroupWithoutInfiniteRecursion:(id)arg1;
- (void)enumerateOverrides:(id)arg1 inIndex:(unsigned long long)arg2 ancestors:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateOverridesInBlock:(CDUnknownBlockType)arg1;
- (id)overrideForInstanceAtIndex:(unsigned long long)arg1 ancestorIDs:(id)arg2;
- (id)updateOverrides:(id)arg1 withOverrides:(id)arg2 ancestorIDs:(id)arg3;
- (void)addOverrides:(id)arg1 forCellAtIndex:(unsigned long long)arg2 ancestorIDs:(id)arg3;
- (unsigned long long)numberOfVisibleCells;
- (void)updateOverridesToSymbol:(id)arg1;
- (void)changeInstanceToSymbol:(id)arg1;
- (BOOL)isInstanceForMaster:(id)arg1;
- (id)symbolMaster;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)applyOverrides:(id)arg1;
- (long long)cornerRectType;
- (id)inspectorViewControllerNames;

@end

