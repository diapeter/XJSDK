//
//  XJAutoTrackProperty.h
//  XJAnalyticsSDK

    

#import <Foundation/Foundation.h>

@protocol SAAutoTrackViewControllerProperty <NSObject>
@property (nonatomic, readonly) BOOL sensorsdata_isIgnored;
@property (nonatomic, copy, readonly) NSString *sensorsdata_screenName;
@property (nonatomic, copy, readonly) NSString *sensorsdata_title;
@end

#pragma mark -
@protocol SAAutoTrackViewProperty <NSObject>
@property (nonatomic, readonly) BOOL sensorsdata_isIgnored;
/// 记录上次触发点击事件的开机时间
@property (nonatomic, assign) NSTimeInterval sensorsdata_timeIntervalForLastAppClick;

@property (nonatomic, copy, readonly) NSString *sensorsdata_elementType;
@property (nonatomic, copy, readonly) NSString *sensorsdata_elementContent;
@property (nonatomic, copy, readonly) NSString *sensorsdata_elementId;

/// 元素位置，UISegmentedControl 中返回选中的 index，
@property (nonatomic, copy, readonly) NSString *sensorsdata_elementPosition;

/// 获取 view 所在的 viewController，或者当前的 viewController
@property (nonatomic, readonly) UIViewController<SAAutoTrackViewControllerProperty> *sensorsdata_viewController;
@end

#pragma mark -
@protocol SAAutoTrackCellProperty <SAAutoTrackViewProperty>
- (NSString *)sensorsdata_elementPositionWithIndexPath:(NSIndexPath *)indexPath;
- (NSString *)sensorsdata_itemPathWithIndexPath:(NSIndexPath *)indexPath;

- (NSString *)sensorsdata_similarPathWithIndexPath:(NSIndexPath *)indexPath;
/// 遍历查找 cell 所在的 indexPath
@property (nonatomic, strong, readonly) NSIndexPath *sensorsdata_IndexPath;
@end



#pragma mark -
@protocol SAAutoTrackViewPathProperty <NSObject>

/// $AppClick 某个元素的相对路径，拼接 $element_path，用于可视化全埋点
@property (nonatomic, copy, readonly) NSString *sensorsdata_itemPath;

/// $AppClick 某个元素的相对路径，拼接 $element_selector，用于点击图
@property (nonatomic, copy, readonly) NSString *sensorsdata_heatMapPath;

@optional
/// 元素相似路径，可能包含 [-]
@property (nonatomic, copy, readonly) NSString *sensorsdata_similarPath;
@end
