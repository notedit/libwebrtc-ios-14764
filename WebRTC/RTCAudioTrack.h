/*
 *  Copyright 2015 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <WebRTC/RTCMacros.h>
#import <WebRTC/RTCMediaStreamTrack.h>

NS_ASSUME_NONNULL_BEGIN


@protocol RTCAudioRenderer;
@class RTCPeerConnectionFactory;
@class RTCAudioSource;


RTC_EXPORT
@interface RTCAudioTrack : RTCMediaStreamTrack

- (instancetype)init NS_UNAVAILABLE;

/** The audio source for this audio track. */
@property(nonatomic, readonly) RTCAudioSource *source;

/** Register a renderer that will render all frames received on this track. */
- (void)addRenderer:(id<RTCAudioRenderer>)renderer;

/** Deregister a renderer. */
- (void)removeRenderer:(id<RTCAudioRenderer>)renderer;

@end

NS_ASSUME_NONNULL_END
