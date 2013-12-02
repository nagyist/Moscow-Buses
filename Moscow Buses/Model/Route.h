//
//  Route.h
//  Moscow Buses
//
//  Created by Yuri Karabatov on 02.12.13.
//  Copyright (c) 2013 Yuri Karabatov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Stop, Transport;

@interface Route : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *back;
@property (nonatomic, retain) NSOrderedSet *there;
@property (nonatomic, retain) Transport *transport;
@end

@interface Route (CoreDataGeneratedAccessors)

- (void)insertObject:(Stop *)value inBackAtIndex:(NSUInteger)idx;
- (void)removeObjectFromBackAtIndex:(NSUInteger)idx;
- (void)insertBack:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeBackAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInBackAtIndex:(NSUInteger)idx withObject:(Stop *)value;
- (void)replaceBackAtIndexes:(NSIndexSet *)indexes withBack:(NSArray *)values;
- (void)addBackObject:(Stop *)value;
- (void)removeBackObject:(Stop *)value;
- (void)addBack:(NSOrderedSet *)values;
- (void)removeBack:(NSOrderedSet *)values;
- (void)insertObject:(Stop *)value inThereAtIndex:(NSUInteger)idx;
- (void)removeObjectFromThereAtIndex:(NSUInteger)idx;
- (void)insertThere:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeThereAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInThereAtIndex:(NSUInteger)idx withObject:(Stop *)value;
- (void)replaceThereAtIndexes:(NSIndexSet *)indexes withThere:(NSArray *)values;
- (void)addThereObject:(Stop *)value;
- (void)removeThereObject:(Stop *)value;
- (void)addThere:(NSOrderedSet *)values;
- (void)removeThere:(NSOrderedSet *)values;
@end
