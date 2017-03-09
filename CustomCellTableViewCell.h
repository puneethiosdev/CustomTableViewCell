//
//  CustomCellTableViewCell.h
//  CustomTableViewCell
//
//  Created by Vishal on 03/05/16.
//  Copyright (c) 2016 ui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomCellTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *customFirstNameLabel;

@property (weak, nonatomic) IBOutlet UILabel *customLastNameLabel;

@property (weak, nonatomic) IBOutlet UIImageView *customImageView;

@end
