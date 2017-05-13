//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSData;

@interface FaceRecogConfigLogic : MMObject <PBMessageObserverDelegate>
{
    id <FaceRecogConfigLogicDelegate> _delegate;
    unsigned long long _bioId;
    NSData *_configBuffer;
}

@property(retain, nonatomic) NSData *configBuffer; // @synthesize configBuffer=_configBuffer;
@property(nonatomic) unsigned long long bioId; // @synthesize bioId=_bioId;
@property(nonatomic) __weak id <FaceRecogConfigLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleGetBioConfig:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2;
- (id)getConfigBuffer;
- (unsigned long long)getBioId;
- (_Bool)isConfigReady;
- (void)resetConfig;
- (void)dealloc;
- (id)init;

@end
