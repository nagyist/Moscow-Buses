//
//  Stop.h
//  Moscow Buses
//
//  Created by Yuri Karabatov on 02.12.13.
//  Copyright (c) 2013 Yuri Karabatov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Route;

@interface Stop : NSManagedObject

@property (nonatomic, retain) NSNumber * locationLat;
@property (nonatomic, retain) NSNumber * locationLon;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *routeBack;
@property (nonatomic, retain) NSSet *routeThere;
@end

@interface Stop (CoreDataGeneratedAccessors)

- (void)addRouteBackObject:(Route *)value;
- (void)removeRouteBackObject:(Route *)value;
- (void)addRouteBack:(NSSet *)values;
- (void)removeRouteBack:(NSSet *)values;

- (void)addRouteThereObject:(Route *)value;
- (void)removeRouteThereObject:(Route *)value;
- (void)addRouteThere:(NSSet *)values;
- (void)removeRouteThere:(NSSet *)values;

@end
