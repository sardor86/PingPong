#include "Window.h"


void Window::error(string message) {
	cout << message << endl;
	exit(-1);
}


Window::Window(int X, int Y, int FPS) {
	if (X > 0 && Y > 0 && FPS > 0) {
		WIN_SIZE_X = X;
		WIN_SIZE_Y = Y;

		fps = FPS;
	}
	else {
		error("Window size is incorrect");
	}
}


void Window::draw() {
	auto now = chrono::system_clock::now();
	if (is_open) {
		for (int y = 0; y < WIN_SIZE_Y; y++)
		{
			for (int x = 0; x < WIN_SIZE_X; x++) {
				cout << '.';
			}
			cout << endl;
		}
	}
	auto end = chrono::system_clock::now();
	draw_time = end - now;
}

void Window::clear() {
	int sleep_time = (1000 / fps) - (draw_time.count() * 1000);
	std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time));

	system("cls");
}
