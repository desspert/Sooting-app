#pragma once
#include "lib/framework.hpp"
#include <iostream>
#define env (App::get())

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
		static AppEnv Env(WIDTH, HEIGHT, false, true);

		return Env;
	}
};

enum class Scenename{
	Title,
	GameMain,
	Result
};