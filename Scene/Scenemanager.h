#pragma once

#include "../Share.h"
#include "Title/Title.h"
#include "GameMain/GameMain.h"

#include "Result/Result.h"
class SceneManager{
private:
	Title title_;
	GameMain gamemain_;
	Result result_;
	Scenename scenechange;
	Texture title;
public:
	SceneManager();
	void Update();
	void Draw();
	void Setup();
	void Shift();
};