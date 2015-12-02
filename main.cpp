#include "Share.h"
#include "Scene/Scenemanager.h"



int main() {
	SceneManager scene_;
	while (env.isOpen()) {
		scene_.Shift();
		scene_.Update();
		env.begin();
		scene_.Draw();
		env.end();
	}
}
