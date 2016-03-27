//
//  DetailViewController.h
//  AideMemoire2
//
//  Created by David Ruiz on 27/03/2016.
//  Copyright © 2016 davidruizrao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

