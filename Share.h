#pragma once
#include "lib/framework.hpp"
#include <iostream>
#include <vector>
#define env App::get()

enum WINDOW
{
	WIDTH = 600,
	HEIGHT = 1000
};

class App
{
public:
	static AppEnv& get()
	{
		static AppEnv Env(WIDTH, HEIGHT);

		return Env;
	}
};

enum class Scenename{
	Title,
	GameMain,
	Result
};

enum class BulletType{
	Radiation1,
	Radiation2,
	Radiation3,
	Laser1,
	Laser2,
	Laser3,
	Spread1,
	Spread2,
	Spread3,
	Access1,
	Access2,
	Access3,
};

struct BulletData{
	Vec2f pos[50];
	Vec2f size[50];
	bool flag[50];
	Vec2f angle[50];
	int count;
	
};