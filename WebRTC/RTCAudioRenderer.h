/*
 *  Copyright 2015 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif

#import <WebRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

@class RTCAudioFrame;

RTC_EXPORT
@protocol RTCAudioRenderer <NSObject>

/** The frame to be render. */
- (void)renderFrame:(nullable RTCAudioFrame *)frame;

@end

NS_ASSUME_NONNULL_END
