//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSWindowDelegate.h"

@class BCLicenseManager, BCMASEmailWindowController, ECLogManagerMacUISupport, MSCrashLogManager, MSIOSConnectionController, MSLocalWebServer, MSPasteboardManager, MSPersistentAssetCollection, MSPluginManagerWithActions, MSReleaseNotesWindowController, NSMenu, NSMenuItem, NSObject<OS_dispatch_semaphore>, NSString, NSTimer;

@interface AppController : NSObject <NSApplicationDelegate, NSWindowDelegate, NSMenuDelegate>
{
    id shapesMenu;
    NSMenuItem *pluginsMenuItem;
    NSMenu *templatesMenu;
    NSMenu *printMenu;
    NSMenuItem *debugMenuItem;
    MSIOSConnectionController *_connectionController;
    NSMenuItem *_insertSymbolMenuItem;
    NSMenuItem *_insertSharedTextStyleMenuItem;
    NSTimer *_updateTimer;
    MSPasteboardManager *_pasteboardManager;
    MSLocalWebServer *_localServer;
    MSCrashLogManager *_crashLogManager;
    MSPluginManagerWithActions *_pluginManager;
    MSReleaseNotesWindowController *_releaseNotesWindowController;
    NSString *_scriptPath;
    NSObject<OS_dispatch_semaphore> *_migrationSemaphore;
    BCLicenseManager *_licenseManager;
    MSPersistentAssetCollection *_globalAssets;
    ECLogManagerMacUISupport *_logSupport;
    id _lastRunPlugin;
    BCMASEmailWindowController *_masEmailController;
}

+ (id)licenseManager;
+ (id)rvContext;
@property(retain, nonatomic) BCMASEmailWindowController *masEmailController; // @synthesize masEmailController=_masEmailController;
@property(retain, nonatomic) id lastRunPlugin; // @synthesize lastRunPlugin=_lastRunPlugin;
@property(retain, nonatomic) ECLogManagerMacUISupport *logSupport; // @synthesize logSupport=_logSupport;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(retain, nonatomic) BCLicenseManager *licenseManager; // @synthesize licenseManager=_licenseManager;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *migrationSemaphore; // @synthesize migrationSemaphore=_migrationSemaphore;
@property(nonatomic) NSString *scriptPath; // @synthesize scriptPath=_scriptPath;
@property(retain, nonatomic) MSReleaseNotesWindowController *releaseNotesWindowController; // @synthesize releaseNotesWindowController=_releaseNotesWindowController;
@property(retain, nonatomic) MSPluginManagerWithActions *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(retain, nonatomic) MSCrashLogManager *crashLogManager; // @synthesize crashLogManager=_crashLogManager;
@property(retain, nonatomic) MSLocalWebServer *localServer; // @synthesize localServer=_localServer;
@property(retain, nonatomic) MSPasteboardManager *pasteboardManager; // @synthesize pasteboardManager=_pasteboardManager;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSMenuItem *insertSharedTextStyleMenuItem; // @synthesize insertSharedTextStyleMenuItem=_insertSharedTextStyleMenuItem;
@property(retain, nonatomic) NSMenuItem *insertSymbolMenuItem; // @synthesize insertSymbolMenuItem=_insertSymbolMenuItem;
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
- (void).cxx_destruct;
- (void)waitForResourceMigrationToFinish;
- (void)migrateResources:(id)arg1;
- (id)resourcesNeedingMigrationFromResources:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)refreshCurrentDocument;
- (void)visitDocumentation:(id)arg1;
- (void)showLicenseAlert:(long long)arg1 remainingDays:(unsigned long long)arg2;
- (void)setupLicenseManagerWithPublicCertificate:(id)arg1 licenseURL:(id)arg2 applicationID:(id)arg3;
- (void)checkMASMigration;
- (void)refreshDocumentOverlayAfterDefaultsChange;
- (void)toggleLayerHighlight:(id)arg1;
- (void)toggleSelection:(id)arg1;
- (void)togglePixelLines:(id)arg1;
- (void)toggleAlignmentGuides:(id)arg1;
- (void)toggleArtboardShadow:(id)arg1;
- (void)buy:(id)arg1;
- (void)showSupportPage:(id)arg1;
- (void)showOnlineHelp:(id)arg1;
- (void)feedback:(id)arg1;
- (void)openPreferencesWindowWithPreferencePaneIdentifier:(id)arg1;
- (void)openPreferencesWindow:(id)arg1;
- (void)documentWillClose:(id)arg1;
- (void)revealTemplatesFolderInFinder:(id)arg1;
- (void)addTemplatesAtPath:(id)arg1 toMenu:(id)arg2;
- (id)templateLibraryPath;
- (void)updateTemplateMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)openTemplateAtPath:(id)arg1;
- (void)openTemplateFile:(id)arg1;
- (void)checkImageTemplates;
- (void)checkDefaults;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showReleaseNotesWindow:(id)arg1;
- (void)setupMetrics;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)licenseStateChanged;
- (void)awakeFromNib;
- (void)welcomeToSketch:(id)arg1;
- (void)showMainApplicationWindow;
- (id)licensePlaceholderString;
- (BOOL)isAppStoreVersion;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)scriptingMenuAction:(id)arg1;
- (BOOL)validatePluginMenuItem:(id)arg1 documentShowing:(BOOL)arg2;
- (id)runPluginScript:(id)arg1 name:(id)arg2;
- (id)runPluginScript:(id)arg1;
- (id)runPluginAtURL:(id)arg1;
- (id)runPluginCommandWithIdentifier:(id)arg1 fromBundleAtURL:(id)arg2;
- (id)runPluginCommand:(id)arg1 fromMenu:(BOOL)arg2;
- (id)runPluginCommand:(id)arg1;
- (id)targetDocumentForPluginCommand;
- (id)pluginContextForDocument:(id)arg1;
- (id)pluginContext;
- (id)evaluateScript:(id)arg1;
- (void)buildPluginsMenu:(id)arg1;
- (void)revealPlugins:(id)arg1;
- (void)editPlugins:(id)arg1;
- (void)openPluginPreferences:(id)arg1;
- (void)runLastScriptAction:(id)arg1;
- (void)runCustomScriptAction:(id)arg1;
- (void)revealPlugin:(id)arg1;
- (void)runPlugin:(id)arg1;
- (id)lastRun;
- (void)rememberLastRun:(id)arg1;
- (BOOL)isSparkleUsed;
- (void)checkForUpdates:(id)arg1;
- (id)feedParametersForUpdater:(id)arg1 sendingSystemProfile:(BOOL)arg2;
- (void)checkForUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

