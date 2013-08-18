//
//  Player.h
//  Pandamonium
//
//  Created by Bruce Rick on 2013-08-18.
//
//


#ifndef __Pandamonium__Player__
#define __Pandamonium__Player__

#include "cocos2d.h"

class Player : public cocos2d::CCNode
{
public:
    Player();
    ~Player();
    
    void update(double a_ElapsedTime);
    void jump();
    
private:
    
    cocos2d::CCSprite* m_pPlayerSprite;
    
};

#endif /* defined(__Pandamonium__Player__) */
