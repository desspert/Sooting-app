#include "Normal.h"


Normal::Normal(Vec2f pos, Vec2f size){
	this -> pos = pos;
	this -> size = size;
	speed = 50;
}

void Normal::Update(Vec2f enemy_pos){
	pos.y() += speed;
}

void Normal::Draw(){
	drawFillBox(pos.x(), pos.y(), size.x(), size.y(), Color::yellow);
}