//
//  Intro.h
//  Pandamonium
//
//  Created by Bruce Rick on 2013-07-28.
//
//

#ifndef __Pandamonium__Intro__
#define __Pandamonium__Intro__

#include "cocos2d.h"

class Intro : public cocos2d::CCLayerColor
{
    
public:
    
    virtual bool init();
    
    // there's no 'id' in cpp, so we recommend to return the class instance pointer
    static cocos2d::CCScene* scene();
    
    void gotoMainMenu();
    
    // preprocessor macro for "static create()" constructor ( node() deprecated )
    CREATE_FUNC(Intro);

};

#endif /* defined(__Pandamonium__Intro__) */
