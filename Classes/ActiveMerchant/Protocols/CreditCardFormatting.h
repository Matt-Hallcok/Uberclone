//
//  CreditCardFormatting.h
//  objective_merchant
//
//  Created by Joshua Krall on 2/8/09.
//  Copyright 2009 TransFS.com. All rights reserved.
//

#if defined(TARGET_IPHONE_SIMULATOR) || defined(TARGET_OS_IPHONE)
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

#import "NSStringAdditions.h"

@protocol CreditCardFormatting

- (NSString *) format:(NSString*)number option:(NSString*)option;

@end
