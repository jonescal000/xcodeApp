//
//  ViewController.h
//  SQLite3DBSample
//
//  Created by Callie Jones on 2/27/16.
//  Copyright © 2016 Callie Jones. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditInfoViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblPeople;


- (IBAction)addNewRecord:(id)sender;


@end

