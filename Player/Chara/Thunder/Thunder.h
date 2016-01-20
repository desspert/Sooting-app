#pragma once
#include "../../../Share.h"
#include "../Chara.h"

class Thunder : public Chara{
public:
	Thunder(int number){
		//�z��̏���
		this->number = number;
		//HP�̏����l
		hp = 2000,
			//�o���b�g�̍U����
			attack = 200,
			//�o���b�g�̑ł��o���Ԋu
			bullet_between = 5;
			//�o���b�g�̎�ނ̐ݒ�
			bullet_type = BulletType::Normal1,
			//�L�����̑���
			type = Type::Thunder,
			//�L�����̏��e�N�X�`��
			sml_texture = Texture("res/Texture/Chara/sample/sml.png");
			//�L�����̑�e�N�X�`��
			big_texture = Texture("res/Texture/Chara/sample/big.png");
	};
	
};
