//
//  Queue.h
//  算法导论
//
//  Created by 温杰 on 2018/5/18.
//  Copyright © 2018年 温杰. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Queue : NSObject
-(void)enqueue:(id)object;
-(id)dequeue;
@end
