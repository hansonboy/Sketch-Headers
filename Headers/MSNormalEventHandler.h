//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

@class MSLayer, MSLayerPositionDrawing, MSNormalEventContextualMenuBuilder, MSNormalEventData, NSArray, NSMapTable, NSMutableDictionary;

@interface MSNormalEventHandler : MSNormalBaseEventHandler
{
    BOOL _ignoreNextKeyDownEventUntilModifiersChange;
    BOOL _nextModifierKeyChangeShouldRefreshView;
    BOOL _didDuplicate;
    BOOL _firstMouseDraggedMoveLayers;
    BOOL _didDuplicateWhenMovingLayers;
    MSLayerPositionDrawing *_positionDrawing;
    MSLayer *_hoveringLayer;
    MSNormalEventContextualMenuBuilder *_menuBuilder;
    MSNormalEventData *_eventData;
    id _duplicatedObjectID;
    NSMutableDictionary *_originalDraggedLocations;
    NSArray *_duplicatedLayers;
    NSMapTable *_originalSelectedOriginsInAbsoluteCoordinates;
    double _shiftAlignLongestDistance;
    unsigned long long _shiftAlignLongestAxis;
    struct CGSize _duplicateOffset;
    struct CGPoint _duplicateOrigin;
    struct CGPoint _lastMouseMoved;
}

@property(nonatomic) unsigned long long shiftAlignLongestAxis; // @synthesize shiftAlignLongestAxis=_shiftAlignLongestAxis;
@property(nonatomic) double shiftAlignLongestDistance; // @synthesize shiftAlignLongestDistance=_shiftAlignLongestDistance;
@property(retain, nonatomic) NSMapTable *originalSelectedOriginsInAbsoluteCoordinates; // @synthesize originalSelectedOriginsInAbsoluteCoordinates=_originalSelectedOriginsInAbsoluteCoordinates;
@property(retain, nonatomic) NSArray *duplicatedLayers; // @synthesize duplicatedLayers=_duplicatedLayers;
@property(nonatomic) BOOL didDuplicateWhenMovingLayers; // @synthesize didDuplicateWhenMovingLayers=_didDuplicateWhenMovingLayers;
@property(retain, nonatomic) NSMutableDictionary *originalDraggedLocations; // @synthesize originalDraggedLocations=_originalDraggedLocations;
@property(retain, nonatomic) id duplicatedObjectID; // @synthesize duplicatedObjectID=_duplicatedObjectID;
@property(nonatomic) struct CGPoint lastMouseMoved; // @synthesize lastMouseMoved=_lastMouseMoved;
@property(nonatomic) BOOL firstMouseDraggedMoveLayers; // @synthesize firstMouseDraggedMoveLayers=_firstMouseDraggedMoveLayers;
@property(nonatomic) struct CGPoint duplicateOrigin; // @synthesize duplicateOrigin=_duplicateOrigin;
@property(nonatomic) BOOL didDuplicate; // @synthesize didDuplicate=_didDuplicate;
@property(nonatomic) struct CGSize duplicateOffset; // @synthesize duplicateOffset=_duplicateOffset;
@property(nonatomic) BOOL nextModifierKeyChangeShouldRefreshView; // @synthesize nextModifierKeyChangeShouldRefreshView=_nextModifierKeyChangeShouldRefreshView;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSNormalEventContextualMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
@property(retain, nonatomic) MSLayer *hoveringLayer; // @synthesize hoveringLayer=_hoveringLayer;
@property(retain, nonatomic) MSLayerPositionDrawing *positionDrawing; // @synthesize positionDrawing=_positionDrawing;
- (void).cxx_destruct;
- (void)zoomValueWillChangeTo:(double)arg1;
- (void)currentPageDidChange;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)cut:(id)arg1;
- (BOOL)layerCanBeSelected:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (id)layerSnapper;
- (void)changeColor:(id)arg1;
- (void)deleteNormalLayers:(id)arg1;
- (void)delete:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (id)menu;
- (void)selectAll:(id)arg1;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)duplicateSelectedLayersInOriginalLocation:(BOOL)arg1;
- (void)flagsChangedDuringMove:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawSubPathsForGroup:(id)arg1;
- (void)drawDragSelection;
- (struct CGRect)rectForDrawingDragSelectOrZoom;
- (void)drawMultipleSelection;
- (BOOL)shouldDrawSelectionForLayer:(id)arg1;
- (void)drawLayerHover;
- (void)drawLayerSelection;
- (id)layerBelowPoint:(struct CGPoint)arg1;
- (void)deselectAllLayers;
- (id)allLayersWithClickThroughBehavior:(long long)arg1;
- (void)duplicate:(id)arg1;
- (void)keyDownMoveCanvasIncremental:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDownMoveToEndOfCanvas:(unsigned short)arg1;
- (void)keyDownMoveCanvas:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)flashSnapsForLayer:(id)arg1;
- (double)opacityFromChar:(unsigned short)arg1;
- (void)adjustOpacityIfNumberKeyIsPressed:(unsigned short)arg1;
- (void)keyDownResizeLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (BOOL)layersAreNotIntersectingTheirArtboards:(id)arg1;
- (void)moveLayersFromArtboardToParentPage:(id)arg1;
- (void)moveLayers:(id)arg1 toArtboard:(id)arg2;
- (id)parentArtboardWeCanMoveLayersTo:(id)arg1;
- (void)moveLayersOnOrOffArtboard:(id)arg1;
- (void)keyDownMoveLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)escapeKeyPressed;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (BOOL)isMouseHoveringMultipleSelectedLayerCorner:(struct CGPoint)arg1;
- (long long)multipleSelectedLayerCornerAtPoint:(struct CGPoint)arg1;
- (BOOL)isMouseHoveringLayer:(id)arg1 corner:(struct CGPoint)arg2 flags:(unsigned long long)arg3;
- (BOOL)isMouseHoveringLayerCorner:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)shouldNotChangeSelectionForFlags:(unsigned long long)arg1;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)resetClickThroughs;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseExited;
- (void)selectLayer:(id)arg1;
- (void)mouseDraggedSelectLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGRect)rectForDragSelectionOrZoom:(struct CGPoint)arg1;
- (void)moveLayer:(id)arg1 from:(struct CGPoint)arg2 inAbsoluteCoodinatesBy:(struct CGPoint)arg3;
- (void)mouseDraggedMoveLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)alignPoint:(struct CGPoint)arg1 withShiftTo:(struct CGPoint)arg2;
- (void)refreshPositionDrawingIfApplicable:(unsigned long long)arg1;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)recordSelectedLayerLocations;
- (void)mouseDownMoveLayers:(struct CGPoint)arg1 clickCount:(long long)arg2 flags:(unsigned long long)arg3;
- (void)mouseDownDoubleClick:(struct CGPoint)arg1 onLayer:(id)arg2;
- (void)mouseDownSelectLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)enterMultipleResizeModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 resizingCorner:(long long *)arg4 manager:(id)arg5;
- (void)enterLineResizeModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 manager:(id)arg4;
- (void)enterRotateModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 manager:(id)arg4;
- (void)enterResizeModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3 manager:(id)arg4;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)toolbarIdentifier;
- (id)initWithManager:(id)arg1;

@end

