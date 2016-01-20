#pragma once
#include "../../../Share.h"
#include "../Chara.h"

class Thunder : public Chara{
public:
	Thunder(int number){
		//配列の順番
		this->number = number;
		//HPの初期値
		hp = 2000,
			//バレットの攻撃力
			attack = 200,
			//バレットの打ち出す間隔
			bullet_between = 5;
			//バレットの種類の設定
			bullet_type = BulletType::Normal1,
			//キャラの属性
			type = Type::Thunder,
			//キャラの小テクスチャ
			sml_texture = Texture("res/Texture/Chara/sample/sml.png");
			//キャラの大テクスチャ
			big_texture = Texture("res/Texture/Chara/sample/big.png");
	};
	
};

