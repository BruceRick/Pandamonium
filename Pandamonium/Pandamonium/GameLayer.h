//
//  GameLayer.h
//  Pandamonium
//
//  Created by Bruce Rick on 2013-08-02.
//
//

#ifndef __Pandamonium__GameLayer__
#define __Pandamonium__GameLayer__

#include "cocos2d.h"

class GameLayer : public cocos2d::CCLayer
{
public:
    GameLayer();
    ~GameLayer();
    
    static cocos2d::CCScene* scene();

};

#endif /* defined(__Pandamonium__GameLayer__) */
