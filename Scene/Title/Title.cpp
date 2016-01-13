#include "Title.h"
Title::Title() : tx("res/Texture/title.png") {
	
}

void Title::Setup(){
	
}
void Title::Draw(){
	drawTextureBox(
		-300,
		0,
		1024,
		1024,
		0,
		0,
		1024,
		1024,
		tx,
		Color::white
		);
}

Scenename Title::Shift(){
	if (env.isPushKey(GLFW_KEY_ENTER)){
		return Scenename::GameMain;
	}
	return Scenename::Title;
}