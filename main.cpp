#include "Share.h"
#include "Scene/Scenemanager.h"



int main() {
	env;
	SceneManager scene_;
	scene_.Setup();
	env.bgColor(Color::white);
	while (env.isOpen()) {
		scene_.Shift();
		scene_.Update();
		env.begin();
		scene_.Draw();
		
		env.end();
	}
}
