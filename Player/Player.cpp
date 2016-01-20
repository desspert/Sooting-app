#include "Player.h"

Player::Player() {
	Setup();

	chara.push_back(std::make_shared<Thunder>(1));
	chara.push_back(std::make_shared<Fire>(2));
	chara.push_back(std::make_shared<Water>(3));
	chara.push_back(std::make_shared<Metal>(4));

	std::list<std::shared_ptr<Chara>>::iterator it;
	it = chara.begin();
	hp = (*it)->GetHp();
	attack = (*it)->GetAttack();
	number = (*it)->GetNumber();
	bullet_type = (*it)->GetBulletType();
	type = (*it)->GetType();
	tx = (*it)->GetSmlTexture();
}

void Player::Setup(){
	pos = Vec2f(0, 0);
	size = Vec2f(50, 50);
	/*for (int i = 0; i < 40; i++){

		bullet.count = 5;
		bullet.flag[i] = false;
		}*/
}

void Player::Update(){
	Move();
	Bullet();

	if (env.isPushKey('G')){

		for (auto& it : chara){
			if (it->GetNumber() == number){
				it->SetHp(hp);
			}
		}

		for (auto& it : chara){
			if (it->GetNumber() == 1){
				hp = it->GetHp();
				attack = it->GetAttack();
				bullet_type = it->GetBulletType();
				type = it->GetType();
				tx = it->GetSmlTexture();
			}
		}

	}
	if (env.isPressKey('H')){
		for (auto& it : chara){
			if (it->GetNumber() == number){
				it->SetHp(hp);
			}
		}

		for (auto& it : chara){
			if (it->GetNumber() == 2){
				hp = it->GetHp();
				attack = it->GetAttack();
				bullet_type = it->GetBulletType();
				type = it->GetType();
				tx = it->GetSmlTexture();
			}
		}
	}
	if (env.isPushKey('J')){
		for (auto& it : chara){
			if (it->GetNumber() == number){
				it->SetHp(hp);
			}
		}

		for (auto& it : chara){
			if (it->GetNumber() == 3){
				hp = it->GetHp();
				attack = it->GetAttack();
				bullet_type = it->GetBulletType();
				type = it->GetType();
				tx = it->GetSmlTexture();
			}
		}
	}
	if (env.isPushKey('K')){
		for (auto& it : chara){
			if (it->GetNumber() == number){
				it->SetHp(hp);
			}
		}

		for (auto& it : chara){
			if (it->GetNumber() == 4){
				hp = it->GetHp();
				attack = it->GetAttack();
				bullet_type = it->GetBulletType();
				type = it->GetType();
				tx = it->GetSmlTexture();
			}
		}
	}
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
	color = TypeColor(type);
	drawTextureBox(
		pos.x(),
		pos.y(),
		size.x(),
		size.y(),
		0,
		0,
		128,
		128,
		tx,
		Color::white
		);

	for (auto& it : bullets){
		it->Draw(color);
	}
}


void Player::Bullet(){
	bullet_between--;
	if (bullet_between == 0 ||
		bullet_type == BulletType::Laser1 ||
		bullet_type == BulletType::Laser2 ||
		bullet_type == BulletType::Laser3){
		switch (bullet_type){
		case BulletType::Normal1:
			bullets.push_back(std::make_shared<Normal>(pos - size / 2, Vec2f(100, 200)));
			break;
		case BulletType::Normal2:

			break;
		case BulletType::Normal3:

			break;
		case BulletType::Laser1:
			bullets.push_back(std::make_shared<Laser>(pos - size / 2, Vec2f(100, 100)));
			break;
		case BulletType::Laser2:

			break;
		case BulletType::Laser3:

			break;
		case BulletType::Spread1:
			for (int i = 0; i < 20; i++){
				bullets.push_back(std::make_shared<Spread>(pos - size / 2, Vec2f(10, 10), i));
			}
			break;
		case BulletType::Spread2:
			for (int i = 0; i < 20; i++){
				bullets.push_back(std::make_shared<Spread>(pos - size / 2, Vec2f(10, 10), i));
			}
			break;
		case BulletType::Spread3:
			for (int i = 0; i < 20; i++){
				bullets.push_back(std::make_shared<Spread>(pos - size / 2, Vec2f(10, 10), i));
			}
			break;
		case BulletType::Near1:

			break;
		case BulletType::Near2:

			break;
		case BulletType::Near3:

			break;
		case BulletType::Horming1:
			bullets.push_back(std::make_shared<Horming>(pos - size / 2, Vec2f(50, 50)));
			break;
		case BulletType::Horming2:
			bullets.push_back(std::make_shared<Horming>(pos - size / 2, Vec2f(50, 50)));
			break;
		case BulletType::Horming3:
			bullets.push_back(std::make_shared<Horming>(pos - size / 2, Vec2f(50, 50)));
			break;
		}
	}
	if (bullet_between < 0){
		for (auto& it : chara){
			bullet_between = it->GetBulletBetween();
		}
	}



	for (auto& it : bullets){
		it->Update(Vec2f(0, 50));
		if (it->getPos().y() > HEIGHT / 2){
			it->setHit();

		}
		if (it->getPos().y() < -HEIGHT / 2){
			it->setHit();
		}
		if (it->getPos().x() > WIDTH / 2){
			it->setHit();
		}
		if (it->getPos().x() < -WIDTH / 2){
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

Color Player::TypeColor(Type type){
	switch (type){
	case Type::Fire:
		return Color::red;
		break;
	case Type::Metal:
		return Color::gray;
		break;
	case Type::Thunder:
		return Color::yellow;
		break;
	case Type::Wood:
		return Color::lime;
		break;
	case Type::Water:
		return Color::cyan;
		break;
	}
	return Color::red;
}