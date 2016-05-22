//
//  DropitBehavior.h
//  Dropit
//
//  Created by Leo Peng on 5/22/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
@end
