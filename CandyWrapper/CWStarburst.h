//
//  CWStarburst
//  SqwiggleSDK
//
//  Created by Cameron Webb on 11/19/13.
//  Copyright (c) 2014 Cameron Webb. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ENDPOINT_KEY @"SQJUGGARNAUT_ENDPOINT_KEY"

@class AFHTTPRequestOperation;
@class AFURLConnectionOperation;
@class AFURLSessionManager;


@interface CWStarburst : NSObject

/* Retreival Methods */
+(void) retreiveItemsOfType:(NSString *)type
                  mapToType:(NSString *)mapType
                 parameters:(NSDictionary *)parameters
                  authToken:(id)auth
                    success:(void (^)(id items))success
                    failure:(void (^)(NSError *error))failure;

+(void) retreiveItemOfType:(NSString *)type
                 mapToType:(NSString *)mapType
                      byID:(id)ID
                parameters:(NSDictionary *)parameters
                 authToken:(NSString *)auth
                   success:(void (^)(id item))success
                   failure:(void (^)(NSError *error))failure;

+(void) retreiveItemsOfType:(NSString *)type
                 parameters:(NSDictionary *)parameters
                  authToken:(id)auth
                    success:(void (^)(id items))success
                    failure:(void (^)(NSError *error))failure;

+(void) retreiveItemOfType:(NSString *)type
                      byID:(id)ID
                parameters:(NSDictionary *)parameters
                 authToken:(NSString *)auth
                   success:(void (^)(id item))success
                   failure:(void (^)(NSError *error))failure;


+(void) sendItemOfType:(NSString *)type
            parameters:(NSDictionary *)parameters
             authToken:(NSString *)auth
               success:(void (^)(id item))success
               failure:(void (^)(NSError *error))failure;

+(void) sendItemOfType:(NSString *)type
                  byID:(id)ID
            parameters:(NSDictionary *)parameters
             authToken:(NSString *)auth
               success:(void (^)(id item))success
               failure:(void (^)(NSError *error))failure;

/*
 * Sets current API Endpoint you are using.
 */
+(void) setAPIEndpoint:(NSString *)endpoint;

/*
 * Returns current API endpoint used in class.
 */
+(NSString *) currentAPIEndpoint;

@end