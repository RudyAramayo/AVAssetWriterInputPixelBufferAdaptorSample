//
//  AVAssetWriterInputPixelBufferAdaptorSampleAppDelegate.h
//  AVAssetWriterInputPixelBufferAdaptorSample
//
//  Created by 9r0ximi7y on 6/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreVideo/CoreVideo.h>


@interface AVAssetWriterInputPixelBufferAdaptorSampleAppDelegate : NSObject <UIApplicationDelegate>
{
    
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


- (void) testCompressionSession;
- (CVPixelBufferRef )pixelBufferFromCGImage:(CGImageRef)image size:(CGSize)size;

@end
