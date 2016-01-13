#include "GameMain.h"
GameMain::GameMain(){
	
}

void GameMain::Setup(){
	player_.Setup();
}

Scenename GameMain::Shift(){

	if (env.isPushKey(GLFW_KEY_ENTER)){
		return Scenename::Result;
	}
	return Scenename::GameMain;

}

void GameMain::Update(){
	player_.Update();
}

void GameMain::Draw(){
	player_.Draw();
}