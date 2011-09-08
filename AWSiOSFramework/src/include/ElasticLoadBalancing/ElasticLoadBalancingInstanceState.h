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




/**
 * Instance State
 *
 * \ingroup ElasticLoadBalancing
 */

@interface ElasticLoadBalancingInstanceState:NSObject

{
    NSString *instanceId;
    NSString *state;
    NSString *reasonCode;
    NSString *descriptionValue;
}


/**
 * Provides an EC2 instance ID.
 */
@property (nonatomic, retain) NSString *instanceId;

/**
 * Specifies the current status of the instance.
 */
@property (nonatomic, retain) NSString *state;

/**
 * Provides information about the cause of <i>OutOfService</i> instances.
 * Specifically, it indicates whether the cause is Elastic Load Balancing
 * or the instance behind the LoadBalancer.
 */
@property (nonatomic, retain) NSString *reasonCode;

/**
 * Provides a description of the instance.
 */
@property (nonatomic, retain) NSString *descriptionValue;


/**
 * Default constructor for a new InstanceState object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
