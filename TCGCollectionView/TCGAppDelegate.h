//
//  TCGAppDelegate.h
//  TCGCollectionView
//
//  Created by Huo Jie on 8/12/14.
//  Copyright (c) 2014 netadp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TCGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
