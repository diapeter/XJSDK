//
//  UIViewController+AutoTrack.h
//  XJAnalyticsSDK

#import <UIKit/UIKit.h>
#import "XJAutoTrackProperty.h"

@interface UIViewController (AutoTrack) <SAAutoTrackViewControllerProperty, SAAutoTrackViewPathProperty>

- (void)sa_autotrack_viewDidAppear:(BOOL)animated;

@end
