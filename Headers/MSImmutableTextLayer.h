//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableTextLayer.h"

#import "MSColorUser.h"
#import "MSFirstLineTypesetterDelegate.h"
#import "MSTextLayer.h"
#import "NSLayoutManagerDelegate.h"

@class NSDictionary, NSFont, NSLayoutManager, NSObject<NSCopying><NSCoding>, NSString, NSTextContainer, NSTextStorage;

@interface MSImmutableTextLayer : _MSImmutableTextLayer <MSColorUser, MSFirstLineTypesetterDelegate, NSLayoutManagerDelegate, MSTextLayer>
{
    BOOL _isEditingText;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    unsigned long long _textAlignment;
}

+ (unsigned long long)traits;
+ (id)defaultName;
@property(nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
- (void).cxx_destruct;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, nonatomic) double lineHeight;
- (double)lineSpacing;
@property(readonly, nonatomic) double defaultLineHeight;
@property(readonly, nonatomic) NSFont *font;
@property(readonly, nonatomic) double fontSize;
- (id)usedFonts;
- (double)baselineAdjustmentForTypesetter:(id)arg1;
- (double)startingPositionOnPath:(id)arg1;
- (id)bezierPathWithParentGroup:(id)arg1;
- (id)bezierPathFromGlyphsInBoundsWithParentGroup:(id)arg1;
- (id)firstUnderlyingShapePathWithParentGroup:(id)arg1;
- (id)shapeToUseForTextOnPathWithParentGroup:(id)arg1;
@property(readonly, nonatomic) BOOL shouldUseBezierRepresentationForRendering;
- (id)createLayoutManager;
- (id)createTextContainer;
- (struct CGSize)textContainerSize;
- (double)totalHeightOfFont:(id)arg1;
- (struct CGRect)calculateInfluenceRectForBounds;
- (void)setupText;
- (void)objectDidInit;
- (void)performInitWithMutableModelObject:(id)arg1;
- (void)updateColorCounter:(id)arg1;
- (void)migratePropertiesFromV77OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV76OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV44OrEarlierWithCoder:(id)arg1;
- (void)trackColors:(id)arg1;
- (BOOL)shouldSkipDrawing;
- (BOOL)shouldRenderInTransparencyLayer;
- (Class)rendererClass;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)elementForSpan:(id)arg1 origin:(struct CGPoint)arg2 exporter:(id)arg3 text:(id)arg4;
- (id)spanInfoForRun:(struct _NSRange)arg1 charAttributes:(id)arg2 text:(id)arg3;
- (void)addSVGAttributes:(id)arg1 forCharacterAttributes:(id)arg2 forExporter:(id)arg3 origin:(struct CGPoint *)arg4;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (id)svgStyle;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) BOOL automaticallyDrawOnUnderlyingPath;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL dontSynchroniseWithSymbol;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) struct CGRect glyphBounds;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL heightIsClipped;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) long long lineSpacingBehaviour;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) NSTextStorage *storage;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long textBehaviour;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end
