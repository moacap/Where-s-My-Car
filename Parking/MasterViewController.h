//
//  MasterViewController.h
//  Parking
//
//  Created by Charles Hagman on 12/26/11.
//  Copyright (c) 2011 Deloitte. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>
#import "CHAddCarView.h"

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, CHAddCarViewDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
