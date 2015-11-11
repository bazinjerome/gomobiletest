//
//  ViewController.h
//  MyAuth
//
//  Created by razor on 08/11/2015.
//  Copyright © 2015 razor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

@property (weak, nonatomic) IBOutlet UIView *viewPreview;

@end

