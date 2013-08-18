//
//  GameLayer.cpp
//  Pandamonium
//
//  Created by Bruce Rick on 2013-08-02.
//
//

#include "GameLayer.h"
using namespace cocos2d;


CCScene* GameLayer::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // add layer as a child to scene
    CCLayer* layer = new GameLayer();
    scene->addChild(layer);
    layer->release();
    
    return scene;
}

GameLayer::GameLayer()
{
    
}

GameLayer::~GameLayer()
{
    
}