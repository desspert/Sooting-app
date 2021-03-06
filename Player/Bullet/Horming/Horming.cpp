#include "Horming.h"

Horming::Horming(Vec2f pos,Vec2f size){
	this->pos = pos;
	this->size = size;
	speed = 20;
	angle = 3*3.141592/2;
	count = 0;
}

void Horming::Update(Vec2f enemy_pos){
	count++;
	
	float bx = cos(angle);
	float by = sin(angle);
	float ax = enemy_pos.x() - pos.x();
	float ay = enemy_pos.y() - pos.y();
	if (count < 120){
		angle += (ax * by - ay * bx < 0) ? +3.141592 / 180 * 8 : -3.141592 / 180 * 8;
	}
	pos.x() += (int)(cos(angle) * speed);
	pos.y() += (int)(sin(angle) * speed);
}

void Horming::Draw(Color color){
	drawFillBox(pos.x() + size.x() / 2, pos.y()+size.y() / 2, size.x(), size.y(), color, angle, Vec2f(1, 1), Vec2f(0, 0));
}