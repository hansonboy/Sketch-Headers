//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSSectionProtocol.h"

@class MSLayer, NSArray, NSSet, NSString;

@interface MSOverrideViewController : NSViewController <MSSectionProtocol>
{
    NSArray *_instances;
    MSLayer *_layerInsideSymbol;
    id _info;
    NSSet *_overrides;
}

@property(retain, nonatomic) NSSet *overrides; // @synthesize overrides=_overrides;
@property(retain, nonatomic) id info; // @synthesize info=_info;
@property(retain, nonatomic) MSLayer *layerInsideSymbol; // @synthesize layerInsideSymbol=_layerInsideSymbol;
@property(retain, nonatomic) NSArray *instances; // @synthesize instances=_instances;
- (void).cxx_destruct;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (void)applyOverrideToSelectedLayers:(id)arg1;
- (void)overrideValueAction:(id)arg1;
- (id)labelView;
- (id)valueFromControlView:(id)arg1;
- (id)controlViewForEditingOverride;
- (void)build;
- (id)views;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

