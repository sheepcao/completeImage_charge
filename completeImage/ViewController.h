//
//  ViewController.h
//  completeImage
//
//  Created by 张力 on 14-6-4.
//  Copyright (c) 2014年 张力. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "gameLevelController.h"
#import "AboutUsViewController.h"
#import "moreInfoViewController.h"
#import "sharePhotoViewController.h"
#import "CustomIOS7AlertView.h"
//ad...big
//#import "GADInterstitial.h"
//#import "GADInterstitialDelegate.h"


#define P(x,y) CGPointMake(x, y)




@interface ViewController : UIViewController<killTimerDelegate/*GADInterstitialDelegate*/>
{
	NSTimer *timer;
    NSTimer *ADTimer;
}

@property (strong, nonatomic) CustomIOS7AlertView *lockedAlert;

@property (strong, nonatomic) UIButton *animal;
@property (strong, nonatomic) UIButton *plant;
@property (strong, nonatomic) UIButton *food ;
@property (strong, nonatomic) UIButton *sport;
@property (strong, nonatomic) UIButton *livingGood;
@property (strong, nonatomic) UIButton *moreFun;
@property (strong, nonatomic) UIButton *aboutUs;
@property (strong, nonatomic) UIButton *shareApp;
@property (strong, nonatomic) UIImageView *levelTitle;
@property (strong, nonatomic) UIImageView *movingSnail;

@property (strong, nonatomic) CALayer *car;
@property (strong, nonatomic) UIBezierPath *trackPath;

//@property(nonatomic, retain) GADInterstitial *interstitial;


- (IBAction)animalBtn:(UIButton *)sender;
- (IBAction)sportBtn:(UIButton *)sender;
- (IBAction)livingGoodBtn:(UIButton *)sender;
- (IBAction)plantBtn:(UIButton *)sender;
- (IBAction)foodBtn:(UIButton *)sender;


@end
