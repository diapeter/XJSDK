//  XJAnalyticsSDK.h
//  XJAnalyticsSDK
//
//  Created by 曹犟 on 15/7/1.

// 
// 
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UIApplication.h>

#import "XJAnalyticsSDK+Public.h"

#import "XJConfigOptions.h"


#if __has_include("SensorsAnalyticsSDK+WKWebView.h")
#import "SensorsAnalyticsSDK+WKWebView.h"
#endif

#if __has_include("SensorsAnalyticsSDK+WebView.h")
#import "SensorsAnalyticsSDK+WebView.h"
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 * @abstract
 * 在 DEBUG 模式下，发送错误时会抛出该异常
 */
@interface SensorsAnalyticsDebugException : NSException

@end

@protocol SAUIViewAutoTrackDelegate <NSObject>

//UITableView
@optional
- (NSDictionary *)sensorsAnalytics_tableView:(UITableView *)tableView autoTrackPropertiesAtIndexPath:(NSIndexPath *)indexPath;

//UICollectionView
@optional
- (NSDictionary *)sensorsAnalytics_collectionView:(UICollectionView *)collectionView autoTrackPropertiesAtIndexPath:(NSIndexPath *)indexPath;
@end

@interface UIImage (SensorsAnalytics)
@property (nonatomic, copy) NSString* sensorsAnalyticsImageName;
@end

@interface UIView (SensorsAnalytics)
- (nullable UIViewController *)sensorsAnalyticsViewController __attribute__((deprecated("已过时")));

/// viewID
@property (nonatomic, copy) NSString* sensorsAnalyticsViewID;

/// AutoTrack 时，是否忽略该 View
@property (nonatomic, assign) BOOL sensorsAnalyticsIgnoreView;

/// AutoTrack 发生在 SendAction 之前还是之后，默认是 SendAction 之前
@property (nonatomic, assign) BOOL sensorsAnalyticsAutoTrackAfterSendAction;

/// AutoTrack 时，View 的扩展属性
@property (nonatomic, strong) NSDictionary* sensorsAnalyticsViewProperties;

@property (nonatomic, weak, nullable) id<SAUIViewAutoTrackDelegate> sensorsAnalyticsDelegate;
@end



/**
 * @abstract
 * 自动追踪 (AutoTrack) 中，实现该 Protocal 的 Controller 对象可以通过接口向自动采集的事件中加入属性
 *
 * @discussion
 * 属性的约束请参考 track:withProperties:
 */
@protocol SAAutoTracker <NSObject>

@required


@end

@protocol SAScreenAutoTracker <SAAutoTracker>

@required

@end

NS_ASSUME_NONNULL_END

