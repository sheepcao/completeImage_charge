//
//  gameLevelController.h
//  completeImage
//
//  Created by 张力 on 14-6-22.
//  Copyright (c) 2014年 张力. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "uncompleteImage.h"
#import "teachingView.h"
#import "sharePhotoViewController.h"
#import "rewardViewController.h"
#import "globalVar.h"
#import "CustomIOS7AlertView.h"

//ad...big
//#import "GADInterstitial.h"
//#import "GADInterstitialDelegate.h"


@protocol  killTimerDelegate<NSObject>

-(void) stopTimer;
@end


static const int MAXlevel = 50;
static const int MAXanswer = 3;
//static const int bigLevel = 6;

bool levelLock[bigLevel];


@interface gameLevelController : UIViewController<willStopTimerDelegate,/*GADInterstitialDelegate,*/backToLevelDelegate>
{
    int correct[MAXlevel];
    NSTimer *ADTimer;

}
@property (nonatomic, strong) AVAudioPlayer *myAudioPlayer;

@property (strong, nonatomic) CustomIOS7AlertView *submitAlert;


@property (weak,nonatomic) NSObject<killTimerDelegate> *stopDelegate;

@property (strong, nonatomic) UIImage *backgroundImg;
//@property (strong, nonatomic) NSString *backgroundNames;

@property (strong, nonatomic)  UIButton *animationBegin;
@property (strong, nonatomic)  UIImageView *picture;
@property (strong, nonatomic)  UIButton *answer1;
@property (strong, nonatomic)  UIButton *answer2;
@property (strong, nonatomic)  UIButton *answer3;
@property (weak, nonatomic) IBOutlet UIButton *nextButton;
@property (weak, nonatomic) IBOutlet UIButton *priorButton;
@property (strong,nonatomic) NSMutableArray *choices;
@property (strong, nonatomic) IBOutlet UIButton *empty;
@property (weak, nonatomic) IBOutlet UIButton *shareBtn;
@property (weak, nonatomic) IBOutlet UILabel *levelCount;
@property (strong, nonatomic) teachingView *teachView;
@property (strong, nonatomic) UIImageView *wrongLabel;
@property (strong,nonatomic) uncompleteImage *myImg;
@property (strong,nonatomic) NSString *emptyGif;
@property (strong,nonatomic) UIWebView *webView;
@property (strong,nonatomic) UIImageView *questionMark;
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (nonatomic, assign) BOOL isFormRewordFlag;

//@property (strong, nonatomic) NSNumber *failLoadiAD;
@property (nonatomic, assign) BOOL bannerIsVisible;

//ad...big
//@property(nonatomic, retain) GADInterstitial *interstitial;

- (IBAction)priorLevel;
- (IBAction)nextLevel;
- (IBAction)backToLevel;
- (IBAction)share;
- (IBAction)animationTapped:(id)sender;

@end
