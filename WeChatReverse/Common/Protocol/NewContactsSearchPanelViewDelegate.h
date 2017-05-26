//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol NewContactsSearchPanelViewDelegate <NSObject>
- (void)didSearchViewTableSelect:(NSIndexPath *)indexPath;
- (double)heightForSearchViewTable:(NSIndexPath *)indexPath;
- (UITableViewCell *)cellForSearchViewTable:(UITableViewCell *)tableViewCell index:(NSIndexPath *)indexPath;

@optional
- (void)doTagSearch:(NSString *)tag arrContacts:(NSArray *)contactList;
- (void)cancelSearch;
- (void)doSearch:(NSString *)content Pre:(BOOL)isPre;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(NSString *)key;
- (void)didClickImageAtIndex:(NSInteger)arg1 withKey:(NSString *)key;
@end

