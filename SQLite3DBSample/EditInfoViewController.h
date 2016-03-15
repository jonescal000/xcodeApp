//
//  EditInfoViewController.h
//  SQLite3DBSample
//
//  Created by Callie Jones on 2/27/16.
//  Copyright © 2016 Callie Jones. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol EditInfoViewControllerDelegate

-(void)editingInfoWasFinished;

@end


@interface EditInfoViewController : UIViewController <UITextFieldDelegate>


@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;

@property (weak, nonatomic) IBOutlet UITextField *txtLastname;

@property (weak, nonatomic) IBOutlet UITextField *txtAge;

@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;

@property (nonatomic) int recordIDToEdit;

- (IBAction)saveInfo:(id)sender;

@end
