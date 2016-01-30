//

//  SFLListItem.h
//  Quicksilver
//
//  Created by Patrick Robertson on 30/01/2016.
//
//
//  Original source code form: http://pastebin.com/dYxrGX7c

#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//
//	   Generated from /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList

#pragma mark -

//
// File: SharedFileList
// UUID: 72156BE7-0804-3F90-9AF9-14C4739430C2
//
//                           Arch: x86_64
//                Current version: 24.5.0
//          Compatibility version: 1.0.0
//                 Source version: 24.5.0.0.0
//       Minimum Mac OS X version: 10.11.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Supported
//

@interface SFLListItem : NSObject <NSSecureCoding, NSMutableCopying, NSCopying>
{
	NSUUID *_uniqueIdentifier;
	NSString *_name;
	NSURL *_URL;
	NSData *_bookmark;
	NSDictionary *_properties;
	double _order;
}

+ (BOOL)supportsSecureCoding;
+ (id)supportedPropertyClasses;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property double order; // @synthesize order=_order;
@property(readonly, copy) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, retain) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy) NSData *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, retain) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)debugDescription;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_cfTypeID;
- (void)synthesizeMissingPropertyValues;
- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (id)initWithName:(id)arg1 bookmarkData:(id)arg2 properties:(id)arg3;
- (id)initWithName:(id)arg1 URL:(id)arg2 properties:(id)arg3;
- (id)_init;
- (id)init;

@end
