//
//  Installer.h
//  Mac Remote
//
//  Created by connormckenna on 3/6/13.
//  Copyright (c) 2013 connormckenna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Installer : NSObject
+ (void)installHelper;
+ (void)uninstallHelper;
+ (void)installDaemon;
+ (void)uninstallDaemon;
+ (BOOL)daemonInstalled;
+ (BOOL)helperInstalled;
@end
