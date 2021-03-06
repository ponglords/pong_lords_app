//
//  LoginViewController.h
//  PongLords
//
//  Created by Paul Tower on 9/25/13.
//  Copyright (c) 2013 Paul Tower. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LoginViewDelegate <NSObject>

- (void)dismissLogin;

@end

@interface LoginViewController : UIViewController <UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (nonatomic, weak) id <LoginViewDelegate> delegate;
@property (nonatomic, weak) IBOutlet UITextField *emailField;
@property (nonatomic, weak) IBOutlet UITextField *passwordField;
@property (nonatomic, weak) IBOutlet UIButton *submitButton;
@property (nonatomic, weak) IBOutlet UIButton *forgotPasswordButton;

- (IBAction)submitButtonPressed:(id)sender;

@end
