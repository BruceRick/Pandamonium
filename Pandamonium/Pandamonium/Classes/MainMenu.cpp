//
//  MainMenu.cpp
//  Pandamonium
//
//  Created by Bruce Rick on 2013-07-28.
//
//

#include "MainMenu.h"
#include "GameLayer.h"

using namespace cocos2d;

MainMenu::MainMenu()
{
    
    m_TransitionTime = 1.0;
    
    setTouchEnabled(true);
    
    _winSize = CCDirector::sharedDirector()->getWinSize();
    
    CCSprite* background = CCSprite::create("MainMenu.png");
    background->setScaleX(_winSize.width/background->getContentSize().width);
    background->setScaleY(_winSize.height/background->getContentSize().height);
    background->setPosition(ccp(_winSize.width/2,_winSize.height/2));
    
    m_pPlayButton = CCMenuItemImage::create("PlayButton.png", "PlayButtonSelected.png", this, menu_selector(MainMenu::startGame) );
    m_pOptionsButton = CCMenuItemImage::create("OptionsButton.png", "OptionsButton.png", this, menu_selector(MainMenu::options) );
    
    m_pPlayButton->setScale(_winSize.height/4 /m_pPlayButton->getContentSize().height);
    m_pOptionsButton->setScale(_winSize.height/4 /m_pOptionsButton->getContentSize().height);
    
    m_pPlayButton->setPosition( _winSize.width/3, _winSize.height/4);
    m_pOptionsButton->setPosition(_winSize.width - _winSize.width/3, _winSize.height/4);
    //CCMenuItemToggle *toggleMenu = CCMenuItemToggle::create(m_pPlayButton);
    //toggleMenu->setPosition(ccp(0,0));
    
    m_pMainMenu = CCMenu::create(m_pPlayButton, m_pOptionsButton ,NULL);
    m_pMainMenu->setPosition(CCPointZero);
    
    this->addChild(background);
    this->addChild(m_pMainMenu);
    
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
    //beginTransitionTo();
    m_pPlayButton->selected();
    beginTransitionTo(GameLayer::scene());
    
    
}
                                            
void MainMenu::options()
{
    
}

void MainMenu::beginTransitionTo(CCScene* a_pScene)
{
    
    m_pPlayButton->setEnabled(false);
    m_pOptionsButton->setEnabled(false);
    
    CCMoveTo* movePlayButton = CCMoveTo::create(m_TransitionTime, CCPoint(-m_pPlayButton->getContentSize().width, m_pPlayButton->getPosition().y));
    CCMoveTo* moveOptionsButton = CCMoveTo::create(m_TransitionTime, CCPoint(_winSize.width + m_pOptionsButton->getContentSize().width, m_pOptionsButton->getPosition().y));
    CCSequence *transitionToScene = CCSequence::create(CCDelayTime::create(m_TransitionTime),CCCallFuncO::create(this, callfuncO_selector(MainMenu::replaceSceneWith), a_pScene));
    
    m_pPlayButton->runAction(movePlayButton);
    m_pOptionsButton->runAction(moveOptionsButton);
    runAction(transitionToScene);
    
}

void MainMenu::replaceSceneWith(CCObject* a_pObj)
{
    CCDirector::sharedDirector()->replaceScene((CCScene*)a_pObj);
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