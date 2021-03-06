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
#import <UIKit/UIKit.h>

#import <WebRTC/RTCMacros.h>
#import <WebRTC/RTCAudioRenderer.h>
#import <WebRTC/RTCAudioFrame.h>

NS_ASSUME_NONNULL_BEGIN


@class RTCAudioOutRenderer;
RTC_EXPORT
@protocol RTCAudioOutRendererDelegate

- (void)audioRenderer:(RTCAudioOutRenderer *)render didGetAudioFrame:(RTCAudioFrame *)frame;

@end

RTC_EXPORT
@interface RTCAudioOutRenderer : NSObject <RTCAudioRenderer>

@property(nonatomic, weak) id<RTCAudioOutRendererDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
