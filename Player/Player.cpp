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
	
	for (auto& it : bullets){
		it->Draw();
	}
}


void Player::Bullet(){
	/*switch (bullet_type){
	case BulletType::Normal1:
		bullets.push_back(std::make_shared<Normal>(pos, Vec2f(100, 200)));
		break;
	case BulletType::Normal2:

		break;
	case BulletType::Normal3:

		break;
	case BulletType::Laser1:

		break;
	case BulletType::Laser2:

		break;
	case BulletType::Laser3:

		break;
	case BulletType::Spread1:
		for (int i = 0; i < 20; i++){
			bullets.push_back(std::make_shared<Spread>(pos, Vec2f(10, 10), i));
		}
		break;
	case BulletType::Spread2:
		for (int i = 0; i < 20; i++){
			bullets.push_back(std::make_shared<Spread>(pos, Vec2f(10, 10), i));
		}
		break;
	case BulletType::Spread3:
		for (int i = 0; i < 20; i++){
			bullets.push_back(std::make_shared<Spread>(pos, Vec2f(10, 10), i));
		}
		break;
	case BulletType::Near1:

		break;
	case BulletType::Near2:

		break;
	case BulletType::Near3:

		break;
	case BulletType::Horming1:
		bullets.push_back(std::make_shared<Horming>(pos, Vec2f(50, 50)));
		break;
	case BulletType::Horming2:
		bullets.push_back(std::make_shared<Horming>(pos, Vec2f(50, 50)));
		break;
	case BulletType::Horming3:
		bullets.push_back(std::make_shared<Horming>(pos, Vec2f(50, 50)));
		break;
	}*/
	
	
	if (env.isPushKey('G')){
		bullets.push_back(std::make_shared<Normal>(pos, Vec2f(50, 50)));
	}
	if (env.isPressKey('H')){
		bullets.push_back(std::make_shared<Laser>(pos, Vec2f(100, 100)));
	}
	if (env.isPushKey('J')){
		for (int i = 0; i < 20; i++){
			bullets.push_back(std::make_shared<Spread>(pos, Vec2f(10, 10), i));
		}
	}
	if (env.isPushKey('K')){
		bullets.push_back(std::make_shared<Horming>(pos, Vec2f(50, 50)));
	}


	for (auto& it : bullets){
		it->Update(Vec2f(0, 50));
		if (it->getPos().y() > HEIGHT/2){
			it->setHit();

		}
		if (it->getPos().y() < -HEIGHT/2){
			it->setHit();
		}
		if (it->getPos().x() > WIDTH/2){
			it->setHit();
		}
		if (it->getPos().x() < -WIDTH/2){
			it->setHit();
		}
	}
	for (auto itr = bullets.begin(); itr != bullets.end(); itr++)
	{
		if ((*itr)->isActive() == false){
			itr = bullets.erase(itr);
		}
	}
	
	
	

}

