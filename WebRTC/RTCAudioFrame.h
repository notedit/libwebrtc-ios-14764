/*

add by llx 

 */

#import <AVFoundation/AVFoundation.h>
#import <Foundation/Foundation.h>

#import <WebRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

RTC_EXPORT
@interface RTCAudioFrame : NSObject

@property(nonatomic, readonly, nullable) const int16_t *data;
@property(nonatomic, readonly) size_t samples_per_channel;
@property(nonatomic, readonly) int sample_rate;
@property(nonatomic, readonly) size_t channels;
@property(nonatomic, readonly) uint32_t timestamp;

@property(nonatomic, readonly) int  bits_per_sample;


- (instancetype)init NS_UNAVAILABLE;


@end

NS_ASSUME_NONNULL_END
