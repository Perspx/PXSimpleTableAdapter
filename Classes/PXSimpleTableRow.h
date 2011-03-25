//
//  PXSimpleTableRow.h
//  PXSimpleTableAdapter
//
//  Created by Alex Rozanski on 25/03/2011.
//  Copyright 2011 Alex Rozanski. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PXSimpleTableRow : NSObject {
    NSString *_title;
    UIImage *_icon;
    
    BOOL _disclosureRow;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, assign, getter=isDisclosureRow) BOOL disclosureRow;

+ (id)rowWithTitle:(NSString*)title;
+ (id)rowWithTitle:(NSString*)title icon:(UIImage*)icon;

- (id)initWithTitle:(NSString*)title;
- (id)initWithTitle:(NSString*)title icon:(UIImage*)icon;

@end
