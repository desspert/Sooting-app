#include "Result.h"

Scenename Result::Shift(){
	if (env.isPushKey(GLFW_KEY_ENTER)){
		return Scenename::Title;
	}
	return Scenename::Result;
}