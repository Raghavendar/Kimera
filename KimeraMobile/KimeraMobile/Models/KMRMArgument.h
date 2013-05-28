//
//  KMRMArgument.h
//  KimeraMobile
//
//  Created by Massimo Oliviero on 5/28/13.
//  Copyright (c) 2013 Massimo Oliviero. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KMRMArgument : NSObject

// properties
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, assign) Class viewController;


// initializers
- (instancetype)initWithName:(NSString *)name;
- (instancetype)initWithName:(NSString *)name description:(NSString *)description;

@end
