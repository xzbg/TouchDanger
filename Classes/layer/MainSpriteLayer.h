#ifndef __MAIN_SPRITE_LAYER_
#define __MAIN_SPRITE_LAYER_

#include "cocos2d.h"
#include "MainTouchDelegate.h"
#include "sprite\RoleSprite.h"
#include "sprite\NpcSprite.h"
#include "MainResourceDelegate.h"
/*场景中同时出现精灵的个数*/
#define NPC_MAX 1

/*精灵显示层*/
class MainSpriteLayer : public cocos2d::CCLayer , public MainTouchDelegate
{
protected:
	cocos2d::CCPoint origin;
	cocos2d::CCSize visibleSize;
	cocos2d::CCArray * npcs;
	cocos2d::CCTMXTiledMap * pMap;
public:
	CC_SYNTHESIZE(RoleSprite *, playerSprite, PlayerSprite);
	CC_SYNTHESIZE(NpcSprite *, npcSprite, NpcSprite);
	CC_SYNTHESIZE(MainResourceDelegate *, p_mMainResourceDelegate, MainResourceDelegate);
public:
	virtual bool init();
	virtual void onExit();
	/*触摸响应*/
	virtual void singleTouchDirecting(cocos2d::CCPoint point);
	/*触摸响应结束*/
	virtual void singleTouchEndsIn(cocos2d::CCPoint point);
	/*添加一个npc*/
	void addNpc();
	/*移除一个npc*/
	void removeNpc(NpcSprite * npc);
	/*更新npc*/
	void updateNpc(float ft);
	CREATE_FUNC(MainSpriteLayer);
};

#endif