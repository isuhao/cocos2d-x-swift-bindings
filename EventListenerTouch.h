
/****************************************************************************
 Copyright (c) 2014 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

//  EventListenerTouch.h
//  Created by Justin Graham on 6/21/14.

#import "EventListener.h"

@class Touch;

@interface EventListenerTouchOneByOne : EventListener
typedef bool(^boolBlock)(Touch*, Event*);
typedef void(^voidBlock)(Touch*, Event*);
@property (nonatomic,copy) boolBlock onTouchBegan;
@property (nonatomic,copy) voidBlock onTouchMoved;
@property (nonatomic,copy) voidBlock onTouchEnded;
@property (nonatomic,copy) voidBlock onTouchCancelled;
@property (nonatomic,retain) NSArray* claimedTouches;
@property (nonatomic) bool swallowTouches;
@property (nonatomic) bool needSwallow;
- (id) init;
+ (EventListenerTouchOneByOne*) create;
- (bool) checkAvailable;
- (EventListenerTouchOneByOne*) clone;
@end
