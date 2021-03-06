//
//  WCDataBaseTable.h
//  WeChatReverse
//
//  Created by sunshinek31 on 2017/6/17.
//  Copyright © 2017年 sunshinek31. All rights reserved.
//

@class WCDataBase;

@interface WCDataBaseTable : NSObject
{
    WCDataBase *m_db;
    NSString *m_tableName;
    Class m_tableClass;
}

- (Class)tableClass;
- (id)database;
- (id)tableName;
- (_Bool)deleteObjectsWhere:(const struct WCDBConditionBase *)arg1;
- (_Bool)deleteObject:(id)arg1;
- (_Bool)updateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 where:(const struct WCDBConditionBase *)arg3;
- (_Bool)updateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2;
- (_Bool)updateProperty:(const struct WCDBConditionBase *)arg1 withValue:(id)arg2 where:(const struct WCDBConditionBase *)arg3;
- (_Bool)insertOrUpdateObjects:(id)arg1 onConflict:(CDUnknownBlockType)arg2;
- (_Bool)insertOrUpdateObject:(id)arg1 onConflict:(CDUnknownBlockType)arg2;
- (_Bool)insertOrUpdateObjects:(id)arg1;
- (_Bool)insertOrUpdateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2;
- (_Bool)insertOrUpdateObject:(id)arg1;
- (_Bool)insertObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 autoIncrement:(_Bool)arg3;
- (_Bool)insertObject:(id)arg1 autoIncrement:(_Bool)arg2;
- (id)getSumProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)getMaxProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)getMaxProperty:(const struct WCDBConditionBase *)arg1;
- (id)getOnePropertyValue:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 orderBy:(const struct WCDBConditionBase *)arg3;
- (id)getPropertyWithDistinct:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 orderBy:(const struct WCDBConditionBase *)arg3 limit:(unsigned int)arg4;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 limit:(unsigned int)arg3;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2;
- (id)getProperty:(const struct WCDBConditionBase *)arg1;
- (unsigned int)getCountOfDistinctProperty:(const struct WCDBConditionBase *)arg1 Where:(const struct WCDBConditionBase *)arg2;
- (unsigned int)getCountOfObjectsWhere:(const struct WCDBConditionBase *)arg1;
- (unsigned int)getCountOfObjects;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 onProperties:(const vector_24c76cbd *)arg2 orderBy:(const struct WCDBConditionBase *)arg3 limit:(unsigned int)arg4 getError:(id *)arg5;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 onProperties:(const vector_24c76cbd *)arg2 orderBy:(const struct WCDBConditionBase *)arg3 limit:(unsigned int)arg4;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 orderBy:(const struct WCDBConditionBase *)arg2 limit:(unsigned int)arg3;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1 limit:(unsigned int)arg2;
- (id)getObjectsWhere:(const struct WCDBConditionBase *)arg1;
- (id)getAllObjects;
- (id)getOneObjectWhere:(const struct WCDBConditionBase *)arg1 onProperties:(const vector_24c76cbd *)arg2 orderBy:(const struct WCDBConditionBase *)arg3;
- (id)getOneObjectWhere:(const struct WCDBConditionBase *)arg1;
- (id)getLastObject;

/**
 构造方法
 
 @param dataBase 数据库
 @param tableName 表名称
 @param className 类名称
 @return WCDataBaseTable
 */
- (instancetype)initWithDataBase:(WCDataBase *)dataBase tableName:(NSString *)tableName objectClass:(Class)className;
@end
