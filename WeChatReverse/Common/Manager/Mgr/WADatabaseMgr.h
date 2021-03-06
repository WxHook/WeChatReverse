//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMDBRRepairerExt.h"
#import "MMService.h"

@class NSString, WCDataBase, WCDataBaseTable;

@interface WADatabaseMgr : MMService <MMDBRRepairerExt, MMService>
{
    WCDataBase *_db;
    WCDataBaseTable *_tableWeAppInfo;
    WCDataBaseTable *_tablePermissionInfo;
    WCDataBaseTable *_tableContact;
    WCDataBaseTable *_tableBizAttrSyncBuffer;
    WCDataBaseTable *_tableConfigInfo;
    WCDataBaseTable *_tableWeAppListItem;
    WCDataBaseTable *_tableWeAppStarItem;
}

@property(retain) WCDataBaseTable *tableWeAppStarItem; // @synthesize tableWeAppStarItem=_tableWeAppStarItem;
@property(retain) WCDataBaseTable *tableWeAppListItem; // @synthesize tableWeAppListItem=_tableWeAppListItem;
@property(retain) WCDataBaseTable *tableConfigInfo; // @synthesize tableConfigInfo=_tableConfigInfo;
@property(retain) WCDataBaseTable *tableBizAttrSyncBuffer; // @synthesize tableBizAttrSyncBuffer=_tableBizAttrSyncBuffer;
@property(retain) WCDataBaseTable *tableContact; // @synthesize tableContact=_tableContact;
@property(retain) WCDataBaseTable *tablePermissionInfo; // @synthesize tablePermissionInfo=_tablePermissionInfo;
@property(retain) WCDataBaseTable *tableWeAppInfo; // @synthesize tableWeAppInfo=_tableWeAppInfo;
@property(retain) WCDataBase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)willRepairDB:(unsigned int)arg1 needCatch:(_Bool *)arg2;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)dbPath;
- (void)closeDB;
- (void)openDB;
- (_Bool)deleteConfigInfoByAppID:(id)arg1;
- (_Bool)insertOrUpdateConfigInfo:(id)arg1;
- (id)getConfigInfoByAppID:(id)arg1 andType:(unsigned int)arg2;
- (_Bool)setPermissionBytes:(id)arg1 weAppBindInfo:(id)arg2 withAppID:(id)arg3;
- (id)getPermissionWeAppBindInfoWithAppID:(id)arg1;
- (id)getPermissionBytesWithAppID:(id)arg1;
- (_Bool)deleteAllAppInfo;
- (_Bool)deleteAppInfoByAppID:(id)arg1 andVersion:(unsigned long long)arg2;
- (_Bool)deleteAppInfoByAppID:(id)arg1;
- (_Bool)insertOrUpdateAppInfo:(id)arg1;
- (id)getAppInfoByAppID:(id)arg1;
- (id)getUserNameOfAppInfoByAppID:(id)arg1;
- (unsigned int)getAppInfoCount;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (_Bool)deleteAllAppStarItem;
- (_Bool)deleteAppStarItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)insertAppStarItemList:(id)arg1;
- (_Bool)insertOrUpdateAppStarItem:(id)arg1;
- (id)getAllAppStarItemByUsername:(id)arg1;
- (id)getAppStarItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (id)getAllAppStarItemOrderByUpdateTime;
- (id)getAllAppStarItem;
- (unsigned int)getAppStartItemCount;
- (_Bool)isItemStared:(id)arg1;
- (_Bool)deleteAllAppListItem;
- (_Bool)deleteAppListItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)updateAppListItemOnStarState:(id)arg1;
- (_Bool)updateAppListItemOnUpdateTime:(id)arg1;
- (_Bool)insertOrUpdateAppListItem:(id)arg1;
- (id)getCurrentAppListItemByLimit:(unsigned int)arg1;
- (id)getAllAppListItemByUsername:(id)arg1;
- (id)getAppListItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1;
- (id)getAllAppListItemOrderByUpdateTime;
- (id)getAllAppListItem;
- (unsigned int)getAppListItemCount;
- (_Bool)mergeAppListItems:(id)arg1 updateTimeOfLastItemAfterMerge:(unsigned int *)arg2;
- (_Bool)mergeAppStarItems:(id)arg1;
- (_Bool)clearBizAttrSyncBufferList:(id)arg1;
- (_Bool)setBizAttrSyncBufferList:(id)arg1;
- (id)getBizAttrSyncBuffer:(id)arg1;
- (id)dbContactWithContact:(id)arg1;
- (id)contactFromDBContact:(id)arg1;
- (_Bool)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (_Bool)modifyWxAppOpt:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (_Bool)unfocusContact:(id)arg1 getType:(unsigned int *)arg2;
- (_Bool)unfocusContact:(id)arg1;
- (_Bool)focusContact:(id)arg1;
- (_Bool)deleteContactList:(id)arg1;
- (_Bool)inserOrUpdateContactList:(id)arg1;
- (_Bool)hasContact:(id)arg1;
- (id)getAllContact;
- (id)getAllNoFocusContact;
- (id)getAllFocusContact;
- (id)getContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

