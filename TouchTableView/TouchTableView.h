//
//  TouchTableView.h
//  jinheLV
//
//  Created by 今合网技术部 on 16/7/26.
//  Copyright © 2016年 今合网技术部. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TouchTableViewDelegate <NSObject>
@optional
- (void)tableView:(UITableView *)tableView touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)tableView:(UITableView *)tableView touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)tableView:(UITableView *)tableView touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)tableView:(UITableView *)tableView touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;

@end

@interface TouchTableView : UITableView {
    id touchDelegate;
}

@property (nonatomic,assign) id<TouchTableViewDelegate> touchDelegate;

@end
