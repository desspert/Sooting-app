#include "Title.h"

Scenename Title::Shift(){
	if (env.isPushKey(GLFW_KEY_ENTER)){
		return Scenename::GameMain;
	}
	return Scenename::Title;
}