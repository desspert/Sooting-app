#include "GameMain.h"

Scenename GameMain::Shift(){

	if (env.isPushKey(GLFW_KEY_ENTER)){
		return Scenename::Result;
	}
	return Scenename::GameMain;

}