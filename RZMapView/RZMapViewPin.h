//
//  RZMapViewPin.h
//
//  Created by Joe Goullaud on 1/4/12.
//  Copyright (c) 2012 Raizlabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RZMapViewLocation.h"

typedef enum {
    RZMapViewPinPointLocationTopLeft,
    RZMapViewPinPointLocationTop,
    RZMapViewPinPointLocationTopRight,
    RZMapViewPinPointLocationLeft,
    RZMapViewPinPointLocationCenter,
    RZMapViewPinPointLocationRight,
    RZMapViewPinPointLocationBottomLeft,
    RZMapViewPinPointLocationBottom,                                            // Default Pin Point Location
    RZMapViewPinPointLocationBottomRight
} RZMapViewPinPointLocation;

@protocol RZMapViewPinDelegate;

@interface RZMapViewPin : UIView

@property (retain, nonatomic, readonly) UIImage *pinImage;
@property (retain, nonatomic) UIImage *popoverBackgroundImage;
@property (retain, nonatomic) UIView *popoverView;
@property (retain, nonatomic, readonly) UIImageView *pinImageView;
@property (retain, nonatomic) RZMapViewLocation *location;
@property (assign, nonatomic, getter = isActive) BOOL active;
@property (assign, nonatomic, readonly) RZMapViewPinPointLocation pointLocation;
@property (assign, nonatomic) id<RZMapViewPinDelegate> delegate;

- (void)setPinImage:(UIImage *)pinImage withPointLocation:(RZMapViewPinPointLocation)pointLocation;
- (void)setActive:(BOOL)active animated:(BOOL)animated;
- (void)setupPinView;

@end


@protocol RZMapViewPinDelegate <NSObject>

- (void)pinViewTapped:(RZMapViewPin*)pin;

@end