#ifndef __GAME_MAIN_SCENE_
#define __GAME_MAIN_SCENE_

#include "cocos2d.h"
#include "layer\MainSpriteLayer.h"
#include "layer\MainMenuLayer.h"
#include "layer\MainTouchLayer.h"
#include "layer\MainResourceLayer.h"

class GameMainScene : public cocos2d::CCScene
{
public:
	CC_SYNTHESIZE(int,childIndex,ChildIndex);
protected:
	MainSpriteLayer * spriteLayer;
	MainMenuLayer * menuLayer;
	MainTouchLayer * touchLayer;
	MainResourceLayer * resourceLayer;
public:
	virtual bool init();
	virtual void onExit();
	CREATE_FUNC(GameMainScene);
};

#endif
