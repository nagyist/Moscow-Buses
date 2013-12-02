//
//  Transport.h
//  Moscow Buses
//
//  Created by Yuri Karabatov on 02.12.13.
//  Copyright (c) 2013 Yuri Karabatov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Route;

@interface Transport : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) Route *route;

@end
