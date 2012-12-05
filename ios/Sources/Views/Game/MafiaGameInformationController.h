//
//  Created by ZHENG Zhong on 2012-12-03.
//  Copyright (c) 2012 ZHENG Zhong. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MafiaInformation;
@class MafiaGameInformationController;


@protocol MafiaGameInformationDelegate <NSObject>

- (void)informationControllerDidComplete:(MafiaGameInformationController *)controller;

@end // MafiaGameInformationDelegate


@interface MafiaGameInformationController : UIViewController

@property (retain, nonatomic) IBOutlet UIImageView *categoryImageView;
@property (retain, nonatomic) IBOutlet UILabel *messageLabel;
@property (retain, nonatomic) IBOutlet UILabel *detailsLabel;
@property (retain, nonatomic) MafiaInformation *information;
@property (readonly, assign, nonatomic) id<MafiaGameInformationDelegate> delegate;

+ (id)controllerWithDelegate:(id<MafiaGameInformationDelegate>)delegate;

- (id)initWithDelegate:(id<MafiaGameInformationDelegate>)delegate;
- (void)presentInformation:(MafiaInformation *)information inSuperview:(UIView *)superview;
- (void)dismissInformationFromSuperview;

- (IBAction)dismissButtonTapped:(id)sender;

@end // MafiaGameInformationController

