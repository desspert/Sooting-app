#include "Laser.h"


Laser::Laser(Vec2f pos, Vec2f size){
	this->pos = pos;
	this->size = size;
	speed = 50;
}

void Laser::Update(Vec2f enemy_pos){
	pos.y() += speed;
}

void Laser::Draw(Color color){
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), color);
}