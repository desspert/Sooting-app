#pragma once
#include "../../Share.h"

class Bullet {
protected:
	Vec2f pos;
	Vec2f size;
	bool is_active;

public:
	Bullet() = default;

	virtual void Update(Vec2f enemy_pos) = 0;
	virtual void Draw() = 0;

	Vec2f getPos(){ return pos; }
	Vec2f getSize(){ return size; }

	bool isActive(){ return is_active; }
	void setHit(){ is_active = false; }
};