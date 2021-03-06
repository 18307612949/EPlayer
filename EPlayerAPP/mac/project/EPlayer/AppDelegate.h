//
//  AppDelegate.h
//  EPlayer
//
//  Created by GaoPeng on 2017/5/13.
//  Copyright © 2017年 EC. All rights reserved.
//

#import "EPlayerAPI.h"
#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate, EPlayerSdkDelegate>
- (void)entryFullScreen;
- (void)mediaStopedNotify;
- (void)volumeMuteNotify:(BOOL)mute;
@end

@interface MainWindow : NSWindow
@property BOOL isFullScreen;
@property BOOL ctrViewNeedDisplay;
@property AppDelegate* appCtrl;
@property NSTimer* ctrViewWatcher;
- (void)hideMediaCtrlPannelAfterTime:(float)time;
- (void)stopHideCtrlPannelTimer;
@end
