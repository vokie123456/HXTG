//
//  TrainingCourseRequestModel.h
//  HXTG
//  培训课程
//  Created by grx on 2017/4/1.
//  Copyright © 2017年 grx. All rights reserved.
//

#import "HXBaseRequestModel.h"

@interface TrainingCourseRequestModel : HXBaseRequestModel

/*! id */
@property (strong, nonatomic) NSString *post_id;

/*! 页数 */
@property (nonatomic, strong) NSString *pagenum;

@end
