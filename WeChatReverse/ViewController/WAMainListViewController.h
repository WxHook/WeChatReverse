//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWAAppEntryExtension.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WAAppItemManagerExtension.h"
#import "WAContactMgrExtension.h"
#import "WAMainListNearByLogicDelegate.h"
#import "WAMainListPageLogicDelegate.h"
#import "WAMainListStarLogicDelegate.h"
#import "WASearchControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, MMToastViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UISearchBar, UIView, WAAppItemData, WAMainListNearByLogic, WAMainListPageLogic, WAMainListStarLogic, WAPackageSweeperLogic, WASearchController;

@interface WAMainListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WAContactMgrExtension, WCActionSheetDelegate, WAAppItemManagerExtension, WASearchControllerDelegate, IWAAppEntryExtension, WAMainListPageLogicDelegate, WAMainListStarLogicDelegate, WAMainListNearByLogicDelegate>
{
    NSMutableArray *m_unStarHistoryItemMenuArray;
    NSMutableArray *m_staredHistoryItemMenuArray;
    NSMutableDictionary *m_contactViewCache;
    WAAppItemData *m_appItemToDelete;
    WAPackageSweeperLogic *m_sweepLogic;
    NSString *m_showSessionId;
    _Bool _isShowSearchBar;
    NSMutableArray *m_sessionData;
    _Bool _isViewHasLayout;
    _Bool _hasClickHistoryItem;
    _Bool _hasClickNearBySection;
    _Bool _needLogRedDot;
    unsigned int _onRedDotTime;
    unsigned long long m_scene;
    NSString *m_relatedUserName;
    WASearchController *_searchController;
    UISearchBar *_searchBar;
    UIView *_topNavView;
    MMTableView *_tableView;
    MMToastViewController *_toastView;
    UIView *_emptyView;
    NSDictionary *_searchResult;
    WAMainListPageLogic *_pageLogic;
    WAMainListNearByLogic *_nearByLogic;
    WAMainListStarLogic *_starLogic;
}

@property(retain, nonatomic) WAMainListStarLogic *starLogic; // @synthesize starLogic=_starLogic;
@property(retain, nonatomic) WAMainListNearByLogic *nearByLogic; // @synthesize nearByLogic=_nearByLogic;
@property(retain, nonatomic) WAMainListPageLogic *pageLogic; // @synthesize pageLogic=_pageLogic;
@property(retain, nonatomic) NSDictionary *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) MMToastViewController *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topNavView; // @synthesize topNavView=_topNavView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WASearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) unsigned int onRedDotTime; // @synthesize onRedDotTime=_onRedDotTime;
@property(nonatomic) _Bool needLogRedDot; // @synthesize needLogRedDot=_needLogRedDot;
@property(copy, nonatomic) NSString *m_relatedUserName; // @synthesize m_relatedUserName;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene;
- (void).cxx_destruct;
- (void)fixTableViewOffset;
- (void)didEndSearch;
- (void)willBeginSearch;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)reportDestopStateWhenViewAppear;
- (void)onWeAppItemOpened:(id)arg1;
- (void)openStarListView;
- (_Bool)hasStarSection;
- (id)genStaredHistoryItemMenuArray;
- (id)genUnStarHistoryItemMenuArray;
- (_Bool)hasRunningAppTask;
- (id)getContactByUserName:(id)arg1;
- (void)reloadTableViewNonAnimated;
- (void)reloadTableView;
- (void)showTipsViewController:(id)arg1;
- (void)showToast:(id)arg1;
- (void)setAppItemStarState:(_Bool)arg1 appItem:(id)arg2;
- (void)onDeleteAppListItemAtIndexPath:(id)arg1 appItem:(id)arg2;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)checkAndUpdateContactInNearByList:(id)arg1;
- (void)checkAndUpdateContactInList:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onOpenNearWeApps;
- (void)onClickNearbyCell;
- (void)onGetNearByInfoFailedWithLocationInvalid;
- (void)onGetNearByInfoFailedWithErrCode:(int)arg1;
- (void)onNearByInfoTriggerUpdated;
- (void)onFirstTimeGetNearByInfo;
- (void)refreshStarStatusForItem:(id)arg1;
- (void)starDataDidUpdated;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidStaredFailedWithCountLimit:(id)arg1;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
- (void)didFinishFetchNextPageItems:(id)arg1 pageNum:(unsigned int)arg2 beginPos:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateViewStates;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMoreOperate;
- (void)onStarBarButton;
- (void)onReturn;
- (void)reloadNearBySection;
- (void)initEmptyView;
- (void)initSearchController;
- (void)initTopNavView;
- (void)initRefreshControl;
- (void)initTableView;
- (void)updateNavigationItems;
- (void)initCustomNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)adjustTableViewInset:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateFooterNoMoreDataState;
- (void)updateRefreshFooterHiddenState;
- (void)updateEmptyViewState;
- (long long)indexOfSessionId:(id)arg1;
- (void)updateSectionData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
