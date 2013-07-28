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
    
private:
    
    
};

#endif /* __MainMenu_H__ */
