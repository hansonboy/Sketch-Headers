//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSArtboardGroup.h"

@class NSString;

@interface _MSSymbolMaster : MSArtboardGroup
{
    BOOL _includeBackgroundColorInInstance;
    NSString *_symbolID;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveSymbolID:(id)arg1;
- (id)primitiveSymbolID;
- (void)setPrimitiveIncludeBackgroundColorInInstance:(BOOL)arg1;
- (BOOL)primitiveIncludeBackgroundColorInInstance;
@property(retain, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(nonatomic) BOOL includeBackgroundColorInInstance; // @synthesize includeBackgroundColorInInstance=_includeBackgroundColorInInstance;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

