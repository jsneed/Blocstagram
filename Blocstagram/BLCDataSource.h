//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by Jeanne on 7/25/14.
//  Copyright (c) 2014 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;
//@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, strong, readonly) NSMutableArray *mediaItems;

-(void) removeMediaItem:(NSIndexPath *)indexPath;

@end
