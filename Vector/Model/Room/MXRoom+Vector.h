/*
 Copyright 2015 OpenMarket Ltd

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <MatrixKit/MatrixKit.h>

/**
 Define a `MXRoom` category at Vector level.
 */
@interface MXRoom (Vector)

/**
 Returns YES if there is an push rule to disable the notifications for this room.
 */
@property(nonatomic, readonly) BOOL areRoomNotificationsMuted;

/**
 Returns YES if the oneself user is a super user i.e. he is allowed to modify the
 */
@property(nonatomic, readonly) BOOL isSuperUser;

/**
 Toggle a room rule notifications.
 
 @param mute YES to disable room notification
 @return the dedicated push rule
 */
- (void)toggleRoomNotifications:(BOOL)mute;

@end
