//
//  ViewController.h
//  AppCoreData
//
//  Created by teks on 5/14/16.
//  Copyright © 2016 teks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *mobileno;
@property (strong, nonatomic) IBOutlet UILabel *status;

- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;

@end

