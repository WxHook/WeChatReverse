//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CMessageWrap;

@protocol IMsgExt

@optional
- (void)onChatNewMsgSent:(CMessageWrap *)msgWrap;
- (void)OnSendSight:(NSString *)arg1;
- (void)OnBeginDownloadAppData:(CMessageWrap *)msgWrap;
- (void)OnBeginDownloadVideo:(CMessageWrap *)msgWrap;
- (void)OnBeginDownloadImage:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadAppAttachCancel:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadAppAttachCommonFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadAppAttachExpiredFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadAppAttachSuccess:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadVideoCancel:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadVideoCommonFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadVideoExpiredFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadVideoSuccess:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnUpdateVideoStatus:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnGetNewXmlMsg:(NSString *)arg1 Type:(NSString *)arg2 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadThumbFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgDownloadThumbOK:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnMsgNotAddDBSession:(NSString *)arg1 MsgList:(NSArray *)arg2;
- (void)OnShowPush:(CMessageWrap *)msgWrap;
- (void)OnAddMsgForSpecialSession:(NSString *)arg1 MsgList:(NSArray *)arg2;
- (void)OnMsgNotAddDBNotify:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnAddMsgListForSession:(NSDictionary *)arg1 NotifyUsrName:(NSSet *)arg2;
- (void)OnUnReadCountChange:(NSString *)arg1;
- (void)OnDelMsg:(NSString *)arg1 DelAll:(BOOL)arg2;
- (void)OnRevokeMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap ResultCode:(unsigned int)resultCode ResultMsg:(NSString *)resultMsg EducationMsg:(NSString *)educationMsg;
- (void)OnDelMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnDelMsg:(NSString *)arg1;
- (void)OnModMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnAddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnPreAddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)msgWrap;
- (void)OnChangeMsg:(NSString *)arg1 OpCode:(unsigned int)opCode;
@end

