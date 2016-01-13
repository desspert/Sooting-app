#pragma once
#include "../../Share.h"
#include "../../Player/Player.h"
class GameMain{
private:
	Player player_;
public:
	GameMain();
	void Update();
	void Draw();
	void Setup();
	Scenename Shift();
};