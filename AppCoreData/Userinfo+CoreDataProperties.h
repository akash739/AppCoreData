//
//  Userinfo+CoreDataProperties.h
//  AppCoreData
//
//  Created by teks on 5/14/16.
//  Copyright © 2016 teks. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Userinfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface Userinfo (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *address;
@property (nullable, nonatomic, retain) NSString *mobileno;

@end

NS_ASSUME_NONNULL_END
