//
//  AppDelegate.h
//  SavannahEchoExample
//
//  Created by James Ward on 07/10/2013.
//
//

#import <UIKit/UIKit.h>
#import "SVNHWebViewDelegate.h"
#import "SVNHEchoPlugin.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, UIWebViewDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, nonatomic) SVNHWebViewDelegate *webViewDelegate;
@property (strong, nonatomic) NSArray *plugins;
@property (strong, nonatomic) SVNHEchoPlugin *logPlugin;


- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
