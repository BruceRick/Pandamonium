//
//  MainMenu.cpp
//  Pandamonium
//
//  Created by Bruce Rick on 2013-07-28.
//
//

#include "MainMenu.h"

using namespace cocos2d;

MainMenu::MainMenu()
{
    
    setTouchEnabled(true);
    scheduleUpdate();
    
}

MainMenu::~MainMenu()
{
    
}

void MainMenu::draw()
{
    
    CCLayer::draw();
    
}

void MainMenu::update(float a_DeltaTime)
{
    
    
    
}

void MainMenu::startGame()
{
    
}

CCScene* MainMenu::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // add layer as a child to scene
    CCLayer* layer = new MainMenu();
    scene->addChild(layer);
    layer->release();
    
    return scene;
}