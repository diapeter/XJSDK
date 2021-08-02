//  XJSwizzler.h
//  XJAnalyticsSDK


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (XJSwizzle)

+ (BOOL)sa_swizzleMethod:(SEL)origSel_ withMethod:(SEL)altSel_ error:(NSError **)error_;
+ (BOOL)sa_swizzleClassMethod:(SEL)origSel_ withClassMethod:(SEL)altSel_ error:(NSError **)error_;

@end

NS_ASSUME_NONNULL_END
