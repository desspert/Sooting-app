#pragma once

class Player{
protected:
	Vec2f pos;
	Vec2f size;
	Texture tx;
	virtual void Texture();
public:
	Player();
	void Move();
	//関数ポインタにする
	
};