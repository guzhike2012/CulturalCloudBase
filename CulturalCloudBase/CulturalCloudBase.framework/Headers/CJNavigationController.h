//
//  CJNavigationController.h
//  CJNavigationController
//
//  Created by Jay_pc on 15/10/27.
//  Copyright © 2015年 CrazyCJay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CJNavigationController : UINavigationController

/**
 *  添加滑动手势
 */
-(void)addPanGesture;
/**
 *  删除滑动手势
 */
-(void)removePanGesture;

@end
