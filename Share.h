#pragma once
#include "lib/framework.hpp"
#include <iostream>
#include <list>
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
	Normal1,
	Normal2,
	Normal3,
	Laser1,
	Laser2,
	Laser3,
	Spread1,
	Spread2,
	Spread3,
	Near1,
	Near2,
	Near3,
	Horming1,
	Horming2,
	Horming3
};

enum class Type{
	Fire,
	Water,
	Thunder,
	Wood,
	Metal
};

struct Chara{
	int hp,attack;
	BulletType bullet_type;
	Type type;
};