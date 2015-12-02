#include "Scenemanager.h"

SceneManager::SceneManager()
{
	title = Texture("res/Texture/title.png");
	Setup();
}

void SceneManager::Setup(){
	scenechange = Scenename::Title;
	
}

void SceneManager::Update(){
	switch (scenechange){
	case Scenename::Title:

		break;
	case Scenename::GameMain:

		break;
	case Scenename::Result:

		break;

	}
}

void SceneManager::Draw(){
	switch (scenechange){
	case Scenename::Title:
		drawTextureBox(
			-300,
			0,
			1024,
			1024,
			0,
			0,
			1024,
			1024,
			title,
			Color::white
			);

		break;
	case Scenename::GameMain:
		
		break;
	case Scenename::Result:

		break;

	}
}

void SceneManager::Shift(){
	switch (scenechange){
	case Scenename::Title:
		scenechange = title_.Shift();
		break;
	case Scenename::GameMain:
		scenechange = gamemain_.Shift();
		break;
	case Scenename::Result:
		scenechange = result_.Shift();
		break;

	}
	std::cout << static_cast<int>(scenechange) << std::endl;
}