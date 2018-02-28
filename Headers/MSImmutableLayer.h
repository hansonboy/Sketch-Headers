//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableLayer.h"

#import "MSFlowContainmentCheck.h"
#import "MSLayer.h"
#import "MSLayerContainment.h"
#import "MSLayerTraits.h"

@class MSImmutableStyle, NSAffineTransform, NSArray, NSSet, NSString;

@interface MSImmutableLayer : _MSImmutableLayer <MSLayerContainment, MSFlowContainmentCheck, MSLayer, MSLayerTraits>
{
    unsigned long long _traits;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) unsigned long long traits; // @synthesize traits=_traits;
- (BOOL)canSkipAdvancedClipForStrokes;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
- (struct CGRect)overlayInfluenceRectForFrame;
@property(readonly, nonatomic) struct CGRect influenceRectForFrame;
- (struct CGRect)overlayInfluenceRectForBounds;
@property(readonly, nonatomic) struct CGRect influenceRectForBounds;
- (struct CGRect)calculateInfluenceRectForBoundsInDocument:(id)arg1 cache:(id)arg2 visitedSymbols:(id)arg3;
- (struct CGRect)influenceRectForBoundsInDocument:(id)arg1 cache:(id)arg2 visitedSymbols:(id)arg3;
- (struct CGRect)influenceRectForFrameInDocument:(id)arg1 cache:(id)arg2 visitedSymbols:(id)arg3;
- (struct CGRect)influenceRectForBoundsInDocument:(id)arg1 cache:(id)arg2;
- (struct CGRect)influenceRectForFrameInDocument:(id)arg1 cache:(id)arg2;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (struct CGRect)rectByTransformingRect:(struct CGRect)arg1 andPaddingWithAncestors:(id)arg2;
- (struct CGRect)transformRectToParentCoordinates:(struct CGRect)arg1;
- (struct CGRect)absoluteOverlayInfluenceRectForAncestorGroups:(id)arg1;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1 document:(id)arg2 cache:(id)arg3;
- (id)bezierBoundsInAbsoluteCoordinatesWithAncestors:(id)arg1;
- (struct CGRect)absoluteRectForAncestorGroups:(id)arg1;
@property(readonly, nonatomic) struct CGRect frameForTransforms;
@property(readonly, nonatomic) NSAffineTransform *transform;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
- (id)transformForRect:(struct CGRect)arg1;
@property(readonly, nonatomic) MSImmutableStyle *usedStyle;
- (id)childrenIncludingSelf:(BOOL)arg1;
- (id)children;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, nonatomic) struct CGPoint origin;
- (BOOL)canBreakMaskChain;
- (BOOL)hasClippingMask;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) BOOL hasEnabledBackgroundBlur;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly, nonatomic) BOOL isLayerExportable;
- (id)layerWithID:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (void)objectDidInit;
- (Class)overrideViewControllerClassForOverridePoint:(id)arg1;
- (void)addPreviewWithBezier:(id)arg1 documentData:(id)arg2 cache:(id)arg3;
- (id)previewImageWithBezier:(id)arg1 documentData:(id)arg2 selected:(BOOL)arg3;
- (id)previewFillColorForDocumentData:(id)arg1 selected:(BOOL)arg2;
- (id)previewBorderColorForDocumentData:(id)arg1 selected:(BOOL)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1 documentData:(id)arg2 selected:(BOOL)arg3 bezier:(id)arg4;
- (void)refreshPreviewImagesWithDocumentData:(id)arg1 cache:(id)arg2;
- (BOOL)previewImagesRequireRefreshWithDocumentData:(id)arg1 cache:(id)arg2;
- (BOOL)includeInManifest;
@property(readonly, nonatomic) NSArray *manifestLayers;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (void)enumerateImmutableWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2 parentCreatorBlock:(CDUnknownBlockType)arg3 inBlock:(CDUnknownBlockType)arg4;
- (BOOL)containsFlowWithSymbolsFromDocument:(id)arg1 visited:(id)arg2;
- (BOOL)containsFlowWithSymbolsFromDocument:(id)arg1;
- (id)overridePointsWithParent:(id)arg1;
- (id)defaultValueForOverridePoint:(id)arg1;
- (BOOL)canOverridePoint:(id)arg1;
@property(readonly, nonatomic) NSSet *unavailableFontNames;
@property(readonly, nonatomic) NSSet *fontNames;
- (struct CGRect)overlayRectForAncestors:(id)arg1 document:(id)arg2;
- (struct CGRect)influenceRectForAncestors:(id)arg1 document:(id)arg2 cache:(id)arg3;
- (BOOL)shouldSkipDrawingInContext:(id)arg1;
- (unsigned long long)transparencyLayerUseRectCondition;
- (BOOL)shouldRenderInTransparencyLayer;
- (void)configureBackgroundOfRequest:(id)arg1;
- (id)renderBitmapEffects:(id)arg1;
- (void)addDefaultFillAttributes:(id)arg1 exporter:(id)arg2;
- (void)writeSVGToElement:(id)arg1 withExporter:(id)arg2;
- (void)addTransformAttributes:(id)arg1 exporter:(id)arg2;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2;
- (id)svgStyle:(id)arg1;
- (void)addPathDefinitionToDocument:(id)arg1;
- (void)simplifyPathElement:(id)arg1 exporter:(id)arg2 inset:(double)arg3;
- (void)addGradientsToDocument:(id)arg1;
- (void)addChildrenToElement:(id)arg1 exporter:(id)arg2;
- (id)addGroupContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (BOOL)shouldIncludeInSVGExport:(id)arg1;
- (BOOL)requiresPathDefinition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) double rotation;
@property(readonly) Class superclass;

@end

