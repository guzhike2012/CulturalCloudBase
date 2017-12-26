//  代码地址: https://github.com/CoderMJLee/MJRefresh
//  代码地址: http://code4app.com/ios/%E5%BF%AB%E9%80%9F%E9%9B%86%E6%88%90%E4%B8%8B%E6%8B%89%E4%B8%8A%E6%8B%89%E5%88%B7%E6%96%B0/52326ce26803fabc46000000
//  UIScrollView+MJRefresh.h
//  MJRefreshExample
//
//  Created by MJ Lee on 15/3/4.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//  给ScrollView增加下拉刷新、上拉刷新的功能

#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"

@class MJRefreshHeader, MJRefreshFooter;

@interface UIScrollView (MJRefresh)

#pragma mark - custom header and footer
/**
 *  添加一个下拉刷新头部控件
 *
 *  @param target 目标
 *  @param action 回调方法
 */
- (void)addHeaderWithTarget:(id)target action:(SEL)action;

/**
 *  让下拉刷新头部控件停止刷新状态
 */
- (void)headerEndRefreshing;

/**
 *  添加一个上拉刷新尾部控件
 *
 *  @param target 目标
 *  @param action 回调方法
 */
- (void)addFooterWithTarget:(id)target action:(SEL)action;

/**
 *  添加一个自动上拉刷新尾部控件
 *
 *  @param target 目标
 *  @param action 回调方法
 */
- (void)addAutoFooterWithTarget:(id)target action:(SEL)action;

/**
 *  让上拉刷新尾部控件停止刷新状态
 */
- (void)footerEndRefreshing;

/**
 * 添加一个下拉刷新尾部控件
 *
 *  @param callback 回调
 */
- (void)addHeaderWithCallback:(void(^)())callback;
/**
 *  添加一个上拉刷新尾部控件
 *
 *  @param callback 回调
 */
- (void)addFooterWithCallback:(void(^)())callback;

/**
 *  开始下拉刷新
 */
- (void)beginHeaderRefreshing;

/**
 *  是否正在刷新
 *
 *  @return yes or no
 */
- (BOOL)isRefreshing;

/**
 *  是否正在下拉刷新
 */
- (BOOL)isHeaderRefreshing;

/**
 *  是否正在上拉加载更多
 */
- (BOOL)isFooterRefreshing;

/**
 *  没有更多数据了
 */
- (void)endRefreshingWithNoMoreData;

/**
 *  消除没有更多数据的状态
 */
- (void)resetNoMoreData;

#pragma mark - header and footer
/** 下拉刷新控件 */
@property (strong, nonatomic) MJRefreshHeader *mj_header;
@property (strong, nonatomic) MJRefreshHeader *header MJRefreshDeprecated("使用mj_header");
/** 上拉刷新控件 */
@property (strong, nonatomic) MJRefreshFooter *mj_footer;
@property (strong, nonatomic) MJRefreshFooter *footer MJRefreshDeprecated("使用mj_footer");

#pragma mark - other
- (NSInteger)mj_totalDataCount;
@property (copy, nonatomic) void (^mj_reloadDataBlock)(NSInteger totalDataCount);
@end
