//
//  DBManager.h
//  SQLite3DBSample
//
//  Created by Callie Jones on 2/27/16.
//  Copyright © 2016 Callie Jones. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface DBManager : NSObject

-(instancetype)initWithDatabaseFilename:(NSString *)dbFilename;
-(NSArray *)loadDataFromDB:(NSString *)query;

-(void)executeQuery:(NSString *)query;

@property (nonatomic, strong) NSMutableArray *arrColumnNames;

@property (nonatomic) int affectedRows;

@property (nonatomic) long long lastInsertedRowID;


@end
