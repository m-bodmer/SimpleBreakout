//
//  HelloWorldLayer.h
//  SimpleBreakout
//
//  Created by Marc Bodmer on 12-02-10.
//  Copyright University of Guelph 2012. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"

@interface HelloWorldLayer : CCLayer {
    //World and ball variables
    b2World *_world;
    b2Body *_groundBody;
    b2Fixture *_bottomFixture;
    b2Fixture *_ballFixture;
    
    //Paddle variables
    b2Body *_paddleBody;
    b2Fixture *_paddleFixture;
}

+ (id) scene;

@end