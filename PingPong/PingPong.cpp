// PingPong.cpp: определяет точку входа для приложения.
//

#include "PingPong.h"
#include "Window.h"

using namespace std;

int main()
{
	Window window(120, 30, 5);

	while (window.is_open) {
		window.draw();
		window.clear();
	}

	return 0;
}
