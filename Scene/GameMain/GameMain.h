#pragma once
#include "../../Share.h"
#include "../../Player/Player.h"
class GameMain{
private:
	Player player;
public:
	void Update();
	void Draw();
	void Setup();
	Scenename Shift();
};