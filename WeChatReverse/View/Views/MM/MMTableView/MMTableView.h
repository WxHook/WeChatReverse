//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMDelegateCenterExt.h"
#import "tableViewDelegate.h"

@class MMDelegateProxy<UITableViewDataSource>, MMDelegateProxy<UITableViewDelegate>, NSString, UIColor, UIView;

@interface MMTableView : UITableView <MMDelegateCenterExt>
{
    MMDelegateProxy<UITableViewDataSource> *dataSourceProxy;
    MMDelegateProxy<UITableViewDelegate> *delegateProxy;
    id <tableViewDelegate> m_delegateProxy;
    BOOL cancelButtonTouchsTrack;
    Class cancelTouchsTrackClass;
    UIView *_footerView;
    UIView *_footerViewBackground;
//    UIColor *_tailColor;
    BOOL m_dontDrawFooterLine;
//    BOOL _isMainView;
    id <tableViewDelegate> m_delegate;
}

@property(nonatomic) BOOL isMainView; // @synthesize isMainView=_isMainView;
@property(strong, nonatomic) UIColor *tailColor; // @synthesize tailColor=_tailColor;
@property(nonatomic) Class cancelTouchsTrackClass; // @synthesize cancelTouchsTrackClass;
@property(nonatomic) BOOL cancelButtonTouchsTrack; // @synthesize cancelButtonTouchsTrack;
@property(nonatomic, weak) id <tableViewDelegate> m_delegate; // @synthesize m_delegate;

- (void)setWrapperViewBackgroundcolor:(UIColor *)backgroundcolor;
- (void)drawFooterLine:(BOOL)arg1;
- (void)setContentInsetTop:(double)arg1 andBottom:(double)arg2;
- (void)reloadDataAnimated;
- (void)onClearMyDelegate:(id)arg1 forProtocols:(id)arg2;

@end
