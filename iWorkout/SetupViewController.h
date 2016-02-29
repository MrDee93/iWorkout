//
//  SetupViewController.h
//  iWorkout
//
//  Created by Dayan Yonnatan on 29/02/2016.
//  Copyright © 2016 Dayan Yonnatan. All rights reserved.
//

#import "ViewController.h"

@interface SetupViewController : ViewController

@property (nonatomic, strong) IBOutlet UIPickerView *unitPicker;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) IBOutlet UITextField *textField;

@property (nonatomic, strong) NSMutableArray *defaultUnits;
@property (nonatomic, strong) NSMutableArray *customWorkouts;

// custom
@property (nonatomic, strong) NSMutableArray *customData;

@end