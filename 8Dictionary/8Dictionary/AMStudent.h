//
//  AMStudent.h
//  8Dictionary
//
//  Created by Admin on 22.08.17.
//  Copyright © 2017 Anna Miksiuk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AMStudent : NSObject

@property (strong, nonatomic) NSString* firstName;
@property (strong, nonatomic) NSString* lastName;
@property (strong, nonatomic) NSString* welcome;

- (instancetype) initWithName: (NSString*) firstName lastName: (NSString*) lastName welcome: (NSString*) welcome;

@end
