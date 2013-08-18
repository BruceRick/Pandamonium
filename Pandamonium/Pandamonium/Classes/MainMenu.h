//
//  MainMenu.h
//  Pandamonium
//
//  Created by Bruce Rick on 2013-07-28.
//
//

#ifndef __MainMenu_H__
#define __MainMenu_H__

#include "cocos2d.h"


class MainMenu : public cocos2d::CCLayer
{
public:
    
    ~MainMenu();
    MainMenu();
    
    static cocos2d::CCScene* scene();
    
    virtual void draw();
    virtual void update(float a_DeltaTime);
    void startGame();
    void options();
    void beginTransitionTo(cocos2d::CCScene* a_pScene);
    void replaceSceneWith(cocos2d::CCObject* a_pObj);
    
    CREATE_FUNC(MainMenu);
    
private:
    
    cocos2d::CCMenu* m_pMainMenu;
    cocos2d::CCMenuItem* m_pPlayButton;
    cocos2d::CCMenuItem* m_pOptionsButton;
    float m_TransitionTime;
    cocos2d::CCSize _winSize;
    
};

#endif /* __MainMenu_H__ */
