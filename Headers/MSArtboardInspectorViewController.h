//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseExportableInspectorViewController.h"

#import "BCPopoverDelegate.h"
#import "MSArtboardPresetsViewControllerDelegate.h"
#import "MSColorInspectorDelegate.h"
#import "MSStylePartPreviewButtonDelegate.h"

@class BCPopover, MSArtboardPresetStore, MSArtboardPresetsViewController, MSStylePartPreviewButton, NSArrayController, NSButton, NSSegmentedControl, NSString, NSView;

@interface MSArtboardInspectorViewController : MSBaseExportableInspectorViewController <MSArtboardPresetsViewControllerDelegate, MSColorInspectorDelegate, BCPopoverDelegate, MSStylePartPreviewButtonDelegate>
{
    NSView *_artboardBackgroundView;
    NSView *_symbolStandardPropertiesView;
    NSView *_artboardResizingView;
    MSStylePartPreviewButton *_artboardBackgroundColorButton;
    NSView *_bottomLabelView;
    NSArrayController *_layersController;
    BCPopover *_colorPopover;
    MSArtboardPresetStore *_presetStore;
    NSButton *_presetButton;
    MSArtboardPresetsViewController *_presetsViewController;
    NSSegmentedControl *_orientationControl;
    NSButton *_sizeToFitButton;
}

@property(retain, nonatomic) NSButton *sizeToFitButton; // @synthesize sizeToFitButton=_sizeToFitButton;
@property(retain, nonatomic) NSSegmentedControl *orientationControl; // @synthesize orientationControl=_orientationControl;
@property(retain, nonatomic) MSArtboardPresetsViewController *presetsViewController; // @synthesize presetsViewController=_presetsViewController;
@property(retain, nonatomic) NSButton *presetButton; // @synthesize presetButton=_presetButton;
@property(readonly, nonatomic) MSArtboardPresetStore *presetStore; // @synthesize presetStore=_presetStore;
@property(retain, nonatomic) BCPopover *colorPopover; // @synthesize colorPopover=_colorPopover;
@property(retain, nonatomic) NSArrayController *layersController; // @synthesize layersController=_layersController;
@property(retain, nonatomic) NSView *bottomLabelView; // @synthesize bottomLabelView=_bottomLabelView;
@property(retain, nonatomic) MSStylePartPreviewButton *artboardBackgroundColorButton; // @synthesize artboardBackgroundColorButton=_artboardBackgroundColorButton;
@property(retain, nonatomic) NSView *artboardResizingView; // @synthesize artboardResizingView=_artboardResizingView;
@property(retain, nonatomic) NSView *symbolStandardPropertiesView; // @synthesize symbolStandardPropertiesView=_symbolStandardPropertiesView;
@property(retain, nonatomic) NSView *artboardBackgroundView; // @synthesize artboardBackgroundView=_artboardBackgroundView;
- (void).cxx_destruct;
- (id)stylePartPreviewButtonPreviewColorSpace:(id)arg1;
- (void)artboardPresetsViewController:(id)arg1 didSelectOrientation:(long long)arg2;
- (void)artboardPresetsViewController:(id)arg1 didSelectPreset:(id)arg2;
- (id)views;
- (void)prepareForDisplay;
- (void)selectionDidChangeTo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dismissAllPresentedViewControllers;
- (void)viewWillDisappear;
- (void)dismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animator:(id)arg2;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)canHandleColorMagnifierAction;
- (void)changeBackgroundColorTo:(id)arg1;
- (BOOL)colorInspectorShouldAdjustInspectorToPopover:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)validateArtboardBackgroundButtons;
- (void)backgroundColorAction:(id)arg1;
- (void)prepareArtboardsForFill;
- (void)artboardBackgroundCheckAction:(id)arg1;
- (void)refreshSizeToFitButton;
- (id)orientationOfArtboard:(id)arg1;
- (id)orientation;
- (void)didChangeOrientation:(long long)arg1;
- (void)toggleOrientation:(id)arg1;
- (void)applyOrientation:(long long)arg1;
- (void)refreshOrientationControl;
- (id)selectedPreset;
- (void)refreshPresetButtonAndPopover;
- (void)showPresets:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

