#include <iostream>
#include <string> 
#include <chrono>
#include <thread>

#pragma once

using namespace std;

class Window {
private:
	int WIN_SIZE_X;
	int WIN_SIZE_Y;
	chrono::duration<double>  draw_time;
	int fps;

	void error(string message);
public:
	Window(int X, int Y, int FPS);

	bool is_open = true;

	void draw();
	void clear();
};
