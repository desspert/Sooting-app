#pragma once
#include "../../Share.h"

class Chara{
protected:
	int hp, attack,bullet_between,number;
	BulletType bullet_type;
	Type type;
	Texture sml_texture;
	Texture big_texture;
public:
	Chara() = default;

	

	int GetHp(){
		return hp;
	}

	int GetAttack(){
		return attack;
	}

	int GetBulletBetween(){
		return bullet_between;
	}

	int GetNumber(){
		return number;
	}

	BulletType GetBulletType(){
		return bullet_type;
	}

	Type GetType(){
		return type;
	}

	Texture GetSmlTexture(){
		return sml_texture;
	}
	Texture GetBigTexture(){
		return big_texture;
	}


	void SetHp(int hp){
		this->hp = hp;
	}
	
};