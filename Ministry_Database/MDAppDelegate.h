//
//  MDAppDelegate.h
//  Ministry_Database
//
//  Created by J. Marshall Latham on 5/28/12.
//  Copyright (c) 2012 United States Army. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MDAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;
@property (assign) IBOutlet NSTextField *helloWorldLabel;

@end
