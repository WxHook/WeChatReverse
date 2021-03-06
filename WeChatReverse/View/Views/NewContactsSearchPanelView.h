//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"
#import "NewContactsSearchPanelViewDelegate.h"
#import "FavTagEditViewDelegate.h"
#import "MyUIScrollViewDelegate.h"

@class FavTagTableView, MMTableView, MyUIScrollView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIScrollView, UITextField, UIView;

@interface NewContactsSearchPanelView : MMUIView <FavTagEditViewDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIScrollViewDelegate, MyUIScrollViewDelegate>
{
    NSMutableArray *m_arrKeys;
    NSMutableArray *m_arrImages;
    unsigned int m_uiImageSize;
    unsigned int m_uiCellSize;
    unsigned int m_uiLeftMargin;
    unsigned int m_uiRightMargin;
    BOOL m_bShouldDeleteOnClick;
    UIImageView *m_emptyView;
    BOOL m_showEmptyView;
    int m_headerType;
    id <NewContactsSearchPanelViewDelegate> m_delegate;
    MyUIScrollView *m_scrollView;
    long long uiMaxShowHeadViewCount;
    BOOL isEmbedSearchTextField;
    BOOL isShowAllTags;
    UIImageView *m_searchIconView;
    UITextField *m_SearchTextField;
    UILabel *m_placeholderLabel;
    UIView *m_ContentView;
    double m_atContentViewYPos;
    UIView *m_bottomSeperatorLine;
    MMTableView *m_tableView;
    MMUIView *m_tagView;
    UIScrollView *m_tagScrollView;
    FavTagTableView *m_favTagView;
    NSMutableArray *m_arrFilteredObject;
    NSArray *m_arrContactTags;
    double m_normalKeyboardHeight;
    BOOL bIsAddedBlurEffect;
    NSString *nsCurrentSelectTagName;
    NSMutableArray *m_arrSearchTagFilteredObject;
    NSMutableDictionary *m_dicContactsOfTagName;
    NSMutableArray *m_arrSectionKeys;
    NSMutableDictionary *m_dicSectionTitles;
    NSMutableDictionary *m_dicSectionResults;
    unsigned int m_expandBitSet;
}

@property(nonatomic) BOOL bDisplaySectionResults;
@property(nonatomic) BOOL bShouldFilterSearchResults;
@property(nonatomic, setter=SetIsShowAllTags:) BOOL isShowAllTags; // @synthesize isShowAllTags;
@property(retain, nonatomic) UITextField *m_SearchTextField; // @synthesize m_SearchTextField;
@property(nonatomic, setter=SetIsEmbedSearchTextField:) BOOL isEmbedSearchTextField; // @synthesize isEmbedSearchTextField;
@property(nonatomic, weak) id <NewContactsSearchPanelViewDelegate> m_delegate; // @synthesize m_delegate;

#pragma mark -
- (void)onSelectSearchedContact;
- (id)getSearchText;
- (void)makeViewOfInvisibleStatus;
- (void)recoverTextAttribute;
- (void)doSearch:(id)arg1;
- (void)HideSearchIcon;
- (void)ShowSearchIcon;
- (BOOL)isLastHeadViewHighlight;
- (void)SetLastHeadViewHighlight:(BOOL)highlight;
- (void)deleteImage:(unsigned int)arg1;
- (void)addImage:(UIImage *)image animated:(BOOL)animated;
- (void)updateBlurView;
- (void)setHideContactTagViews:(BOOL)shouldHide;
- (void)updateContactTagView;
- (void)clearAll;
- (void)recoverSearchBarView;
- (void)RemoveImageForKey:(id)key;
- (void)SetImageForKey:(id)key animated:(BOOL)animated;
- (void)SetRightMargin:(unsigned int)rightMargin;
- (void)SetLeftMargin:(unsigned int)leftMargin;
- (void)SetCellSize:(unsigned int)cellSize;
- (void)SetImageSize:(unsigned int)imageSize;
- (void)SetImageType:(int)imageType;
- (id)getMatchTipFor:(id)arg1;
- (id)getFilteredObjects;
- (void)tryFilterSearchResult;
- (void)clearFilteredObjects;
- (void)addFilteredObject:(id)arg1;
- (NSUInteger)getObjectCount;
- (void)setFilteredObjects:(id)arg1;
- (unsigned int)getObjectRow:(id)arg1;
- (id)getObjectForIndexPath:(NSIndexPath *)indexPath;
- (id)getObjectFor:(NSUInteger)arg1;
- (void)layoutSubviews;
- (void)setContentView:(UIView *)contentView atContentViewYPos:(CGFloat)YPos;
- (void)updateBottomSeperatorLine;
- (void)idkeyWithResultClick:(BOOL)resultClick withCollapse:(BOOL)collapse;
- (BOOL)shouldCollaseOrExpandSearchResultAtIndex:(NSInteger)index;
- (int)getMoreCellStatusAtSection:(NSInteger)section;
- (void)clickMoreCellAtIndexPath:(NSIndexPath *)indexPath;
- (id)getSectionKeyAtSection:(NSInteger)section;
- (id)getMoreCellImageAtSection:(NSInteger)section;
- (id)getMoreCellDescriptionAtSection:(NSInteger)section;
- (BOOL)isCollapseAtSection:(NSInteger)section;
- (BOOL)isMoreCellAtIndexPath:(NSIndexPath *)indexPath;
- (void)prepareRefreshing;
- (void)setFilterdSectionResults:(id)arg1;
- (void)setSectionTitleMaps:(id)arg1;
- (void)setFilterdSectionKeys:(id)arg1;
- (id)getSearchResultTable;
- (instancetype)initWithFrame:(CGRect)frame andContentView:(UIView *)contentView atContentViewYPos:(CGFloat)YPos andCellSize:(CGFloat)cellSize andMaxShowCount:(NSInteger)maxShowCount;

@end

