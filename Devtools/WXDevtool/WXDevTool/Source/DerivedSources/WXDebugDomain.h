/**
 * Created by Weex.
 * Copyright (c) 2016, Alibaba, Inc. All rights reserved.
 *
 * This source code is licensed under the Apache Licence 2.0.
 * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
 */

#import "WXDynamicDebuggerDomain.h"
#import "WXObject.h"
#import "WXDebugger.h"
#import "WXDevtool.h"

@protocol WXDebugCommandDelegate;

@interface WXDebugDomain : WXDynamicDebuggerDomain

@property (nonatomic, assign) id <WXDebugCommandDelegate, WXCommandDelegate>delegate;

@end

@protocol WXDebugCommandDelegate <WXCommandDelegate>
@optional
- (void)domain:(WXDebugDomain *)domain sendLogLevel:(NSString *)level withCallback:(void (^)(id error))callback;
- (void)domain:(WXDebugDomain *)domain setInspectorMode:(NSString *)mode withCallback:(void (^)(id error))callback;


@end