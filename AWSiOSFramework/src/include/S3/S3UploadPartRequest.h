/*
 * Copyright 2010-2011 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "S3Request.h"
#import "S3MultipartUpload.h"

/** Contains the parameters used for the uploadPart operation.
 *
 * \ingroup S3
 */
@interface S3UploadPartRequest:S3Request {
    int      partNumber;
    NSString *uploadId;
    NSString *contentMD5;
    NSData   *data;
}

/** Identifies which part this is. */
@property (nonatomic) int partNumber;

/** The base64-encoded 128-bit MD5 digest of the part data.
 * This header can be used as a message integrity check to verify
 * that the part data is the same data that was originally sent.
 */
@property (nonatomic, retain) NSString *contentMD5;

/** The uploadId of the multipart upload that this part is for. */
@property (nonatomic, retain) NSString *uploadId;

/** The data for the part. */
@property (nonatomic, retain) NSData *data;

/** Initializes the instance with the bucket, key, and uploadId from an S3MultipartUpload instance returned in an S3MultipartUploadResponse. */
-(id)initWithMultipartUpload:(S3MultipartUpload *)multipartUpload;

@end
