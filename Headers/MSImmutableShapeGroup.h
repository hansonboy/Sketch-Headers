//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableShapeGroup.h"

#import "MSShapeGroup.h"

@class MSPath, NSBezierPath;

@interface MSImmutableShapeGroup : _MSImmutableShapeGroup <MSShapeGroup>
{
}

+ (id)bezierPathForEndDecorationOnPath:(id)arg1 decorationType:(unsigned long long)arg2;
+ (id)bezierPathForStartDecorationOnPath:(id)arg1 decorationType:(unsigned long long)arg2;
+ (unsigned long long)traits;
+ (void)initialize;
+ (id)lineDecoration;
+ (id)openArrowDecoration;
+ (id)closedArrowDecoration;
+ (id)pathForDecorationType:(unsigned long long)arg1;
+ (void)cacheDecorations;
- (id)bezierPathForEndDecorationOnPath:(id)arg1;
- (id)bezierPathForStartDecorationOnPath:(id)arg1;
@property(readonly, nonatomic) NSBezierPath *decoratedBezierPathInBounds;
- (id)bezierPathOfSubPath:(id)arg1 inRect:(struct CGRect)arg2;
- (id)bezierPathInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) NSBezierPath *bezierPathInBounds;
- (id)_bezierPathInSize:(struct CGSize)arg1;
- (id)_pathInSize:(struct CGSize)arg1;
- (id)pathInBoundsWithCache:(id)arg1;
@property(readonly, nonatomic) MSPath *pathInBounds;
- (void)applyPropertiesToBezier:(id)arg1;
@property(readonly, nonatomic) NSBezierPath *bezierPath;
- (id)pathWithTransformsUsingCache:(id)arg1;
- (BOOL)includeChildrenInCalculatingStyleSize;
- (struct CGRect)influenceRectForBounds;
- (BOOL)canSkipAdvancedClipForStrokes;
- (id)defaultName;
@property(readonly, nonatomic) BOOL isPartOfClippingMask;
@property(readonly, nonatomic) BOOL hasDecorations;
- (void)objectDidInit;
- (Class)overrideViewControllerClassForOverridePoint:(id)arg1;
- (void)refreshPreviewImagesWithDocumentData:(id)arg1 cache:(id)arg2;
- (BOOL)previewImagesRequireRefreshWithDocumentData:(id)arg1 cache:(id)arg2;
- (id)defaultValueForOverridePoint:(id)arg1;
- (BOOL)canOverridePoint:(id)arg1;
- (id)overridePointsWithParent:(id)arg1;
- (id)imageFillForOverrides;
- (void)migratePropertiesFromV51OrEarlierWithUnarchiver:(id)arg1;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (id)addGroupContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2;
- (void)addDecorationToParent:(id)arg1 exporter:(id)arg2;
- (id)addMaskToElement:(id)arg1 exporter:(id)arg2;
- (void)simplifyPathElement:(id)arg1 exporter:(id)arg2 inset:(double)arg3;
- (void)addPathDefinitionToDocument:(id)arg1;
- (id)svgPathAttribute:(id)arg1;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (BOOL)requiresPathDefinition:(id)arg1;
- (id)svgStyle:(id)arg1;

@end

