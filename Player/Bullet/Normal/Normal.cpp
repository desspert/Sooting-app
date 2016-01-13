#include "Normal.h"


Normal::Normal(Vec2f pos, Vec2f size){
	this -> pos = pos;
	this -> size = size;
	speed = Vec2f(5, 5);
}

void Normal::Update(Vec2f enemy_pos){
	pos.y() += speed.y();
}

void Normal::Draw(){
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::yellow);
}