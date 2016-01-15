#pragma once
#include "../Share.h"
#include "Bullet/Bullet.h"
#include "../BulletInclude.h"
class Player{
protected:
	Vec2f pos;
	Vec2f size;
	Texture tx;
	BulletType bullet_type;
	std::list<std::shared_ptr<Bullet>> bullets;
	
	
public:
	Player();
	void Setup();
	void Update();
	void Draw();
	void Move();
	void Bullet();
	
	
};