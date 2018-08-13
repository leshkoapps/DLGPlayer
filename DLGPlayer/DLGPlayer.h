//
//  DLGPlayer.h
//  DLGPlayer
//
//  Created by Liu Junqi on 09/12/2016.
//  Copyright © 2016 Liu Junqi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DLGPlayerDef.h"

typedef void (^DLGPlayerVoidCompletionBlock)(void);

@class DLGPlayerDecoder;

@interface DLGPlayer : NSObject

@property (readonly, strong) UIView *playerView;

@property (atomic) double minBufferDuration;
@property (atomic) double maxBufferDuration;
@property (nonatomic) double position;
@property (atomic, readonly) double duration;
@property (atomic, readonly) BOOL opened;
@property (atomic, readonly) BOOL playing;
@property (atomic, readonly) BOOL buffering;
@property (atomic, strong, readonly) NSDictionary *metadata;
@property (atomic, strong, readonly) DLGPlayerDecoder *decoder;

- (void)open:(NSString *)url;
- (void)close;
- (void)play;
- (void)pause;

- (void)open:(NSString *)url completion:(DLGPlayerVoidCompletionBlock)completion;
- (void)close:(DLGPlayerVoidCompletionBlock)completion;
- (void)play:(DLGPlayerVoidCompletionBlock)completion;
- (void)pause:(DLGPlayerVoidCompletionBlock)completion;
- (void)setPosition:(double)position completion:(DLGPlayerVoidCompletionBlock)completion;

@end
