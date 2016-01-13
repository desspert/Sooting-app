#pragma once
#include "../../Share.h"

class Title{
private:
	Texture tx;
public:
	Title();
	void Update();
	void Draw();
	void Setup();
	Scenename Shift();
};