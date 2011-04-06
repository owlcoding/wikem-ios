//
//  UpdateViewController.h
//  TabViewTest
//
//  Created by Sabin Dang on 4/1/11.
//  Copyright 2011 sabindang.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TBXML.h"
#import "AcceptLicense.h"
#import "AboutWikemViewController.h"

@interface UpdateViewController : UIViewController <AcceptLicenseDelegate> {
    AcceptLicense *licenseViewController;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    UIProgressView *progressBar;
    UIButton *updaterButton;
    UILabel *progressText;
    BOOL ranInitialSetup;
    BOOL displayingLicense;
}


@property (nonatomic, retain) AcceptLicense *licenseViewController;
@property (nonatomic, retain) UITabBarItem *tabBarItem;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) IBOutlet UIProgressView *progressBar;
@property (nonatomic, retain) IBOutlet UILabel *progressText;
@property (nonatomic, retain) IBOutlet UIButton *updaterButton;

@property (assign) BOOL ranInitialSetup;
@property (assign) BOOL displayingLicense;

- (void)userDidAcceptLicense:(BOOL)status;
- (IBAction)clearWikEMData;
- (IBAction)parseXMLDatabaseFile;
- (IBAction)runUpdateCheck:(id)sender;
- (IBAction)displayAboutWikEMView:(id)sender;

- (void)addNoteFromXMLElement:(TBXMLElement *)subElement context:(NSManagedObjectContext *)managedContextIndex;
- (void)updateAvailable:(BOOL)status;
- (NSDictionary *)checkUpdateAvailable;
- (void)disableAllTabBarItems:(BOOL)status;
- (void)updateProgressBar:(float)currentProgress message:(NSString *)messageString;
- (NSDictionary *)parseXMLInfoFile;

@end
