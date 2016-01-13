#include "Scenemanager.h"

SceneManager::SceneManager()
{
	
	
}

void SceneManager::Setup(){
	scenechange = Scenename::Title;
	title_.Setup();
}

void SceneManager::Update(){
	switch (scenechange){
	case Scenename::Title:

		break;
	case Scenename::GameMain:
		gamemain_.Update();
		break;
	case Scenename::Result:

		break;

	}
}

void SceneManager::Draw(){
	switch (scenechange){
	case Scenename::Title:
		title_.Draw();
		

		break;
	case Scenename::GameMain:
		gamemain_.Draw();
		break;
	case Scenename::Result:

		break;

	}
}

void SceneManager::Shift(){
	switch (scenechange){
	case Scenename::Title:
		scenechange = title_.Shift();
		if (scenechange == Scenename::GameMain){
			gamemain_.Setup();
		}
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