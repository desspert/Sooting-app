#include "Spread.h"

Spread::Spread(Vec2f pos,Vec2f size,int amount){
	this->pos = pos;
	this->size = size;
	this->amount = amount;
	speed = 20;
	angle = 2 * M_PI * amount / 20+M_PI/2;
}

void Spread::Update(Vec2f enemy_pos){
	
	pos.x() += cos(angle)*speed;
	pos.y() += sin(angle)*speed;
}

void Spread::Draw(){
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::green,angle,Vec2f(1,1),Vec2f(size.x()/2,size.y()/2));
}