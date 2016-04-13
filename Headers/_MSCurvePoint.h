//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelBase.h"

@interface _MSCurvePoint : MSModelBase
{
    BOOL _hasCurveFrom;
    BOOL _hasCurveTo;
    double _cornerRadius;
    long long _curveMode;
    struct CGPoint _curveFrom;
    struct CGPoint _curveTo;
    struct CGPoint _point;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitivePoint:(struct CGPoint)arg1;
- (struct CGPoint)primitivePoint;
- (void)setPrimitiveHasCurveTo:(BOOL)arg1;
- (BOOL)primitiveHasCurveTo;
- (void)setPrimitiveHasCurveFrom:(BOOL)arg1;
- (BOOL)primitiveHasCurveFrom;
- (void)setPrimitiveCurveTo:(struct CGPoint)arg1;
- (struct CGPoint)primitiveCurveTo;
- (void)setPrimitiveCurveMode:(long long)arg1;
- (long long)primitiveCurveMode;
- (void)setPrimitiveCurveFrom:(struct CGPoint)arg1;
- (struct CGPoint)primitiveCurveFrom;
- (void)setPrimitiveCornerRadius:(double)arg1;
- (double)primitiveCornerRadius;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) BOOL hasCurveTo; // @synthesize hasCurveTo=_hasCurveTo;
@property(nonatomic) BOOL hasCurveFrom; // @synthesize hasCurveFrom=_hasCurveFrom;
@property(nonatomic) struct CGPoint curveTo; // @synthesize curveTo=_curveTo;
@property(nonatomic) long long curveMode; // @synthesize curveMode=_curveMode;
@property(nonatomic) struct CGPoint curveFrom; // @synthesize curveFrom=_curveFrom;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

