//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIResponder.h"

#import "MMCommonAdapterDelegate-Protocol.h"
#import "ResourceMonitorDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "WCLazyInitObjectProtocol-Protocol.h"

@class CAppObserverCenter, CAppViewControllerManager, CMainControll, MMSMStartViewController, MMServiceCenter, MMUIWindow, NSRecursiveLock, NSString, ResourceInfo, ResourceMonitor, UILabel, UIWindow, VoIPTokenRetriveObject;

@interface MicroMessengerAppDelegate : MMUIResponder <MMCommonAdapterDelegate, UIApplicationDelegate, ResourceMonitorDelegate, WCLazyInitObjectProtocol>
{
    CAppObserverCenter *m_appObserverCenter;
    CMainControll *m_mainController;
    MMServiceCenter *m_serviceCenter;
    CAppViewControllerManager *m_appViewControllerMgr;
    NSString *m_nsToken;
    NSString *m_nsSound;
    NSString *m_nsVoipSound;
    unsigned int m_uLastTimeResignActive;
    unsigned int m_uInitViewType;
    long long m_tTotalRunningTime;
    long long m_tLastActiveTime;
    long long m_appVerCompareWithLastRun;
    _Bool m_isActive;
    _Bool m_firstActive;
    UILabel *m_changeValueLabel;
    UILabel *m_resourceLabel;
    MMUIWindow *m_resourceWindow;
    ResourceInfo *m_lastResourceInfo;
    ResourceMonitor *m_resourceMonitor;
    NSRecursiveLock *mActiveLock;
    _Bool mInBackground;
    _Bool mInBackGroundFetch;
    unsigned long long m_ui64BackGroundFetchStopTime;
    CDUnknownBlockType m_fetchCompletionHandler;
    _Bool m_bLaunchFinish;
    MMUIWindow *m_launchWindow;
    _Bool m_isFirstLaunching;
    _Bool m_isInSafeMode;
    MMSMStartViewController *m_safeModeViewController;
    _Bool m_isNormalLaunch;
    _Bool m_isInSafeModeOrMemoryStat;
    _Bool m_isCanReceiveActiveNotify;
    _Bool haveLazyInit;
    UIWindow *_window;
    CDUnknownBlockType _backgroundSessionCompletionHandler;
    VoIPTokenRetriveObject *_m_voipTokenRetriveObject;
}

+ (id)GlobalInstance;
@property(retain, nonatomic) VoIPTokenRetriveObject *m_voipTokenRetriveObject; // @synthesize m_voipTokenRetriveObject=_m_voipTokenRetriveObject;
@property(copy, nonatomic) CDUnknownBlockType backgroundSessionCompletionHandler; // @synthesize backgroundSessionCompletionHandler=_backgroundSessionCompletionHandler;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
@property(retain, nonatomic) NSRecursiveLock *mActiveLock; // @synthesize mActiveLock;
@property(nonatomic) unsigned long long m_ui64BackGroundFetchStopTime; // @synthesize m_ui64BackGroundFetchStopTime;
@property(nonatomic) _Bool mInBackGroundFetch; // @synthesize mInBackGroundFetch;
@property(nonatomic) _Bool m_firstActive; // @synthesize m_firstActive;
@property(readonly, nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(readonly, nonatomic) CAppObserverCenter *m_appObserverCenter; // @synthesize m_appObserverCenter;
@property(readonly, nonatomic) CAppViewControllerManager *m_appViewControllerMgr; // @synthesize m_appViewControllerMgr;
@property(retain, nonatomic) NSString *m_nsVoipSound; // @synthesize m_nsVoipSound;
@property(retain, nonatomic) NSString *m_nsSound; // @synthesize m_nsSound;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) CMainControll *m_mainController; // @synthesize m_mainController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)parseSchemaUrlFrom:(id)arg1;
- (_Bool)isWeWorkURL:(id)arg1;
- (void)setInBackground:(_Bool)arg1;
- (_Bool)getInBackground;
- (void)onUpdateResourceInfo:(id)arg1;
- (void)setUserAgent;
- (void)closeMainFrameWithoutReset;
- (void)delayStopMain;
- (void)closeMainFrameInternal;
- (void)dealloc;
- (long long)GetAppVerCompareWithLastRun;
- (void)saveAppVersion;
- (void)detectAppFirstRunOrFirstRunAfterUpgrade;
- (void)firstStartAfterUpgradeDowngrade;
- (void)didReceiveLocalMemoryWarning:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)clearServiceMemory;
- (void)handleMemoryWarning;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)internalApplication:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)internalApplication:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupForShortcut;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)internalApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2 bundleID:(id)arg3 annotation:(id)arg4;
- (void)reportHandleOpenUrl:(id)arg1 schemeUrl:(id)arg2;
- (id)decodeUrlAttrs:(id)arg1;
- (_Bool)dismissCurrentWAAPP;
- (_Bool)handleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)process3rdAppSupportContentFlagFromOpenUrl:(id *)arg1 andUrlStr:(id *)arg2 appID:(id)arg3;
- (void)application:(id)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)internalApplicationDidBecomeActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)onConfirmPushAlert;
- (void)onCancelPushAlert;
- (void)handleOpenPush;
- (void)applicationWillSuspend;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)resetBadge;
- (void)internalApplication:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)getMainWindowHeight;
- (double)getMainWindowWidth;
- (void)ClearBackGroundFetch;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)internalApplication:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)apnsSilentPushTimeOut:(CDUnknownBlockType)arg1;
- (void)internalApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)internalApplication:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)internalApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)internalApplication:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)internalApplication:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)internalApplication:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)doSendTokenTimeOut;
- (void)doSendToken:(id)arg1 error:(_Bool)arg2;
- (_Bool)internalApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)reportLaunchImage;
- (void)didFinishLoad;
- (void)mainUISetting;
- (void)monitorResource;
- (void)setupCrashBlockMonitor;
- (void)tryProtectLaunchBeforeDeviceFirstUnlock;
- (double)systemBootTime;
- (double)appIntallsTime;
- (void)tryRemoveTheProtectionOfXlog;
- (void)detectBecomeActive;
- (void)continueMainLaunching:(id)arg1;
- (void)beforeMainLaunching;
- (void)lazyLaunch;
- (void)voidFunction;
- (void)logTheFontOfiPhone;
- (void)delayMainAppDelegateThing;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)init;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
- (void)LogFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isImportant:(_Bool)arg4;
- (void)NetworkLogOutput:(id)arg1;
- (void)LogWithinCommon:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (_Bool)ShouldLog:(int)arg1;
- (_Bool)IsChinese;
- (void)setupMMCommonAdapter;
- (void)handleMMSafeModeDidEndNotification:(id)arg1;
- (_Bool)shouldEnterSafeMode;
- (void)handleMemoryStatDidEndNotification:(id)arg1;
- (_Bool)shouldEnterUploadReport;
- (void)checkBootsUpdate;
- (void)delayInitServiceObject;
- (void)clearServiceObject;
- (void)initServiceObject;
- (void)lazyInitServiceObject;
- (void)registerLazyExtensionListener;
- (void)registerClsMethodObserver;
- (void)releaseSeviceCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

