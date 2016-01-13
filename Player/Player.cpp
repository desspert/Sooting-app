#include "Player.h"

Player::Player() {
	Setup();
}

void Player::Setup(){
	pos = Vec2f(0, 0);
	size = Vec2f(50, 60);
	/*for (int i = 0; i < 40; i++){
		
		bullet.count = 5;
		bullet.flag[i] = false;
	}*/
}

void Player::Update(){
	Move();
	Bullet();
	std::cout << pos.x() << std::endl;
}

void Player::Move(){
	if (env.isPressKey('W')){
		pos.y() += 5;
	}
	if (env.isPressKey('S')){
		pos.y() -= 5;
	}
	if (env.isPressKey('D')){
		pos.x() += 5;
	}
	if (env.isPressKey('A')){
		pos.x() -= 5;
	}
}

void Player::Draw(){
	drawFillBox(pos.x(),
				pos.y(),
				size.x(),
				size.y(),
				Color::red
				);
	/*for (int i = 0; i < 40; i++){
		drawFillCircle(bullet.pos[i].x() + size.x() / 2,
			bullet.pos[i].y() + size.x() / 2,
			3,
			15,
			50,
			Color::yellow);
	}*/
	for (auto& it : bullets){
		it->Draw();
	}
}


void Player::Bullet(){


	if (env.isPushKey(' ')){
		//bullets.push_back(std::make_shared<Horming>(pos, Vec2f(50, 50)));
		//bullets.push_back(std::make_shared<Normal>(pos, Vec2f(50, 50)));
		for (int i = 0; i < 20; i++){
			bullets.push_back(std::make_shared<Spread>(pos, Vec2f(10, 10),i));
		}
	}

	
	for (auto& it : bullets){
		it->Update(Vec2f(0, 50));
		if (it->getPos().y() > HEIGHT){
			it->setHit();

		}
	}

}