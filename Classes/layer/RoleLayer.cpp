#include "RoleLayer.h"
#include "utils\Utils.h"
#include "bean\Player.h"

USING_NS_CC;

bool RoleLayer::init()
{
	if(!AlertLayer::init())
		return false;
	Player * p = Player::player();
	CCLOG(p->getName()->getCString());
	return true;
}
