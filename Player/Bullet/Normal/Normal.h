#pragma once
#include "../../../Share.h"
#include "../Bullet.h"
class Normal : public Bullet{
private:
	Vec2f speed;

public:
	Normal(Vec2f pos, Vec2f size);

	void Update(Vec2f enemy_pos);
	void Draw();
};