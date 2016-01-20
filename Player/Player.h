#pragma once
#include "../Share.h"
#include "Bullet/Bullet.h"
#include "../Include.h"
#include "Chara/Chara.h"

class Player{
protected:
	Vec2f pos;
	Vec2f size;
	Texture tx;
	int hp;
	int attack;
	int bullet_between;
	int number;
	Type type;
	BulletType bullet_type;
	Color color;
	std::list<std::shared_ptr<Bullet>> bullets;
	std::list<std::shared_ptr<Chara>> chara;
	
public:
	Player();
	void Setup();
	void Update();
	void Draw();
	void Move();
	void Bullet();
	Color TypeColor(Type);
};