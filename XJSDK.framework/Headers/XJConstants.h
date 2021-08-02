//
//  XJConstants.h
//  XJAnalyticsSDK
//
//  Created by 向作为 on 2018/8/9.

// 
// 
//

#import <Foundation/Foundation.h>


#pragma mark - typedef
/**
 * @abstract
 * Debug 模式，用于检验数据导入是否正确。该模式下，事件会逐条实时发送到 SensorsAnalytics，并根据返回值检查
 * 数据导入是否正确。
 *
 * @discussion
 *
 * Debug模式有三种选项:
 *   SensorsAnalyticsDebugOff - 关闭 DEBUG 模式
 *   SensorsAnalyticsDebugOnly - 打开 DEBUG 模式，但该模式下发送的数据仅用于调试，不进行数据导入
 *   SensorsAnalyticsDebugAndTrack - 打开 DEBUG 模式，并将数据导入到 SensorsAnalytics 中
 */
typedef NS_ENUM(NSInteger, SensorsAnalyticsDebugMode) {
    SensorsAnalyticsDebugOff,
    SensorsAnalyticsDebugOnly,
    SensorsAnalyticsDebugAndTrack,
};

/**
 * @abstract
 * TrackTimer 接口的时间单位。调用该接口时，传入时间单位，可以设置 event_duration 属性的时间单位。
 *
 * @discuss
 * 时间单位有以下选项：
 *   SensorsAnalyticsTimeUnitMilliseconds - 毫秒
 *   SensorsAnalyticsTimeUnitSeconds - 秒
 *   SensorsAnalyticsTimeUnitMinutes - 分钟
 *   SensorsAnalyticsTimeUnitHours - 小时
 */
typedef NS_ENUM(NSInteger, SensorsAnalyticsTimeUnit) {
    SensorsAnalyticsTimeUnitMilliseconds,
    SensorsAnalyticsTimeUnitSeconds,
    SensorsAnalyticsTimeUnitMinutes,
    SensorsAnalyticsTimeUnitHours
};


/**
 * @abstract
 * AutoTrack 中的事件类型
 *
 * @discussion
 *   SensorsAnalyticsEventTypeAppStart - $AppStart
 *   XJAnalyticsEventTypeAppEnd - $AppEnd
 *   XJAnalyticsEventTypeAppClick - $AppClick
 *   XJAnalyticsEventTypeAppViewScreen - $AppViewScreen
 */
typedef NS_OPTIONS(NSInteger, SensorsAnalyticsAutoTrackEventType) {
    XJAnalyticsEventTypeNone      = 0,
    XJAnalyticsEventTypeAppStart      = 1 << 0,
    XJAnalyticsEventTypeAppEnd        = 1 << 1,
    XJAnalyticsEventTypeAppClick      = 1 << 2,
    XJAnalyticsEventTypeAppViewScreen = 1 << 3,
};

/**
 * @abstract
 * 网络类型
 *
 * @discussion
 *   SensorsAnalyticsNetworkTypeNONE - NULL
 *   SensorsAnalyticsNetworkType2G - 2G
 *   SensorsAnalyticsNetworkType3G - 3G
 *   SensorsAnalyticsNetworkType4G - 4G
 *   SensorsAnalyticsNetworkTypeWIFI - WIFI
 *   SensorsAnalyticsNetworkTypeALL - ALL
 *   SensorsAnalyticsNetworkType5G - 5G   
 */
typedef NS_OPTIONS(NSInteger, SensorsAnalyticsNetworkType) {
    SensorsAnalyticsNetworkTypeNONE     = 0,
    SensorsAnalyticsNetworkType2G       = 1 << 0,
    SensorsAnalyticsNetworkType3G       = 1 << 1,
    SensorsAnalyticsNetworkType4G       = 1 << 2,
    SensorsAnalyticsNetworkTypeWIFI     = 1 << 3,
    SensorsAnalyticsNetworkTypeALL      = 0xFF,

#ifdef __IPHONE_14_1
    SensorsAnalyticsNetworkType5G = 1 << 4,
#endif
};
