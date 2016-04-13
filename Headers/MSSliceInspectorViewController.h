//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseExportableInspectorViewController.h"

#import "BCPopoverDelegate.h"
#import "MSColorInspectorDelegate.h"
#import "MSSliceLayerWatcher.h"

@class BCPopover, MSColorPreviewButton, NSButton, NSString, NSView;

@interface MSSliceInspectorViewController : MSBaseExportableInspectorViewController <MSSliceLayerWatcher, MSColorInspectorDelegate, BCPopoverDelegate>
{
    NSView *_sliceExportPropertiesView;
    NSView *_standardPropertiesView;
    NSView *_sliceBackgroundView;
    NSButton *_groupContentsOnlyButton;
    MSColorPreviewButton *_sliceBackgroundColorButton;
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSColorPreviewButton *sliceBackgroundColorButton; // @synthesize sliceBackgroundColorButton=_sliceBackgroundColorButton;
@property(retain, nonatomic) NSButton *groupContentsOnlyButton; // @synthesize groupContentsOnlyButton=_groupContentsOnlyButton;
@property(retain, nonatomic) NSView *sliceBackgroundView; // @synthesize sliceBackgroundView=_sliceBackgroundView;
@property(retain, nonatomic) NSView *standardPropertiesView; // @synthesize standardPropertiesView=_standardPropertiesView;
@property(retain, nonatomic) NSView *sliceExportPropertiesView; // @synthesize sliceExportPropertiesView=_sliceExportPropertiesView;
- (void).cxx_destruct;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)canHandleColorMagnifierAction;
- (id)nibName;
- (id)views;
- (void)prepareForDisplay;
- (void)dealloc;
- (void)selectionDidChangeTo:(id)arg1;
- (void)changeBackgroundColorTo:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)viewWillDisappear;
- (void)popoverWillClose:(id)arg1;
- (void)backgroundColorAction:(id)arg1;
- (void)groupContentsOnlyAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

