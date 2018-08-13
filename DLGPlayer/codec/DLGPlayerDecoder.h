//
//  DLGPlayerDecoder.h
//  DLGPlayer
//
//  Created by Liu Junqi on 05/12/2016.
//  Copyright © 2016 Liu Junqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DLGPlayerDecoder : NSObject

@property (atomic) BOOL isYUV;
@property (atomic) BOOL hasVideo;
@property (atomic) BOOL hasAudio;
@property (atomic) BOOL hasPicture;
@property (atomic, readonly) BOOL isEOF;

@property (atomic) double rotation;
@property (atomic) double duration;
@property (atomic, strong) NSDictionary *metadata;

@property (atomic) UInt32 audioChannels;
@property (atomic) float audioSampleRate;

@property (atomic) double videoFPS;
@property (atomic) double videoTimebase;
@property (atomic) double audioTimebase;
@property (atomic, readonly) BOOL opened;

- (BOOL)open:(NSString *)url error:(NSError **)error;
- (void)close;
- (void)prepareClose;
- (BOOL)shouldInterrupt;
- (NSArray *)readFrames;
- (void)seek:(double)position;
- (int)videoWidth;
- (int)videoHeight;
- (BOOL)isYUV;

@end
