/*
 * Copyright 2010-2011 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import "AWSiOSDemoAppDelegate.h"
#import "AWSiOSDemoViewController.h"
#import <AWSiOSSDK/AmazonLogger.h>


@implementation AWSiOSDemoAppDelegate

@synthesize window;
@synthesize viewController;

-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
    
    //  Uncomment the line below to see more logging.
    [AmazonLogger verboseLogging];
    
    return YES;
}

-(void)dealloc
{
    [viewController release];
    [window release];
    [super dealloc];
}


@end
