//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol WSJSEventHandleDelegate <NSObject>

@optional
- (void)onRequestLocalSuggestion:(NSDictionary *)arg1;
- (void)onWSMusicStatusChanged:(NSDictionary *)arg1;
- (void)currentFriendScene:(unsigned int *)arg1 withParams:(NSDictionary *)arg2;
- (void)onDeleteBrowsingSnsItemOnH5;
- (void)onBrowsingSnsItem:(NSString *)arg1;
- (_Bool)checkBrowsingSnsItem:(NSString *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (void)onLaunchDetailPageForWeApp:(NSDictionary *)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)enableSearchBar;
- (void)hideSearchKeyboard;
@end

