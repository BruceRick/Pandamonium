//
//  Intro.cpp
//  Pandamonium
//
//  Created by Bruce Rick on 2013-07-28.
//
//

#include "Intro.h"
#include "MainMenu.h"

using namespace cocos2d;

CCScene* Intro::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    Intro *layer = Intro::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool Intro::init()
{
    
    if ( !CCLayerColor::initWithColor(ccc4(0,0,0,255)) )
    {
        return false;
    }
    
    CCSize _winSize = CCDirector::sharedDirector()->getWinSize();
    
    CCSprite* whiteRectangle = CCSprite::create("Default.png");
    whiteRectangle->setScaleX(_winSize.width/whiteRectangle->getContentSize().width);
    whiteRectangle->setScaleY(_winSize.height/whiteRectangle->getContentSize().height);
    whiteRectangle->setPosition(ccp(_winSize.width/2,_winSize.height/2));
    
    this->addChild(whiteRectangle);
    
    CCSprite* companyLogo = CCSprite::create("CompanyLogo.png");
    companyLogo->setOpacity(0);
    companyLogo->setPosition(ccp(_winSize.width/2, _winSize.height/2));
    
    CCFadeIn* fadein = CCFadeIn::create(2.0);
    CCDelayTime* menuDelay = CCDelayTime::create(2.0);
    CCCallFunc* gotoMenu = CCCallFunc::create(this, callfunc_selector(Intro::gotoMainMenu));
    
    this->addChild(companyLogo);
    
    CCSequence* splashScreenAction = CCSequence::create(fadein, menuDelay, gotoMenu, NULL);
    
    companyLogo->runAction(splashScreenAction);
    
   
    
    return true;
}

void Intro::gotoMainMenu()
{
    CCDirector::sharedDirector()->replaceScene(CCTransitionCrossFade::create(0.5, MainMenu::scene()));
}
