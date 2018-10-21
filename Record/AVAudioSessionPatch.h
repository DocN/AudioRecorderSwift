//
//  AVAudioSessionPatch.h
//  Record
//
//  Created by Ryan on 2018-10-21.
//  Copyright © 2018 DrN. All rights reserved.
//

@import AVFoundation;

NS_ASSUME_NONNULL_BEGIN

@interface AVAudioSessionPatch : NSObject

+ (BOOL)setSession:(AVAudioSession *)session category:(AVAudioSessionCategory)category withOptions:(AVAudioSessionCategoryOptions)options error:(__autoreleasing NSError **)outError;

@end

NS_ASSUME_NONNULL_END

// AVAudioSessionPatch.m

#import "AVAudioSessionPatch.h"

@implementation AVAudioSessionPatch

+ (BOOL)setSession:(AVAudioSession *)session category:(AVAudioSessionCategory)category withOptions:(AVAudioSessionCategoryOptions)options error:(__autoreleasing NSError **)outError {
    return [session setCategory:category withOptions:options error:outError];
}

@end
