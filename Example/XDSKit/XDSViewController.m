//
//  XDSViewController.m
//  XDSKit
//
//  Created by xudusheng on 11/25/2016.
//  Copyright (c) 2016 xudusheng. All rights reserved.
//

#import "XDSViewController.h"
#import "XDSLabel.h"
@interface XDSViewController ()

@end

@implementation XDSViewController

- (void)viewDidLoad
{
    [super viewDidLoad];


    XDSLabel *accessoryLabel = [[XDSLabel alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width/2-5, self.view.frame.size.height-1)];
    accessoryLabel.backgroundColor = [UIColor clearColor];
    accessoryLabel.textAlignment = NSTextAlignmentRight;
    accessoryLabel.textColor = [UIColor blackColor];
    accessoryLabel.font = [UIFont systemFontOfSize:20];
    accessoryLabel.text = @"With renewed pledges to transition its economy and defend free and fair trade, China has reasserted its role as an anchor of growth and globalization in front of world's political and business leaders who assembled here to draw a blueprint for an inclusive future.";
    accessoryLabel.marqueeType = XDSMLContinuousReverse;
    //accessoryLabel.scrollDuration = 15.0;
    accessoryLabel.rate = 20.0;
    accessoryLabel.animationCurve = UIViewAnimationOptionCurveLinear;
    accessoryLabel.fadeLength = 5.0f;
    accessoryLabel.leadingBuffer = 0;
    accessoryLabel.trailingBuffer = 20.0f;
    accessoryLabel.animationDelay = 1.5f;
    [self.view addSubview:accessoryLabel];
}



@end
