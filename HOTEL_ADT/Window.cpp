#include "Window.h"


Window::Window(void)
{
	no_of_window=1;
	height=2;
}
Window::Window(int num_window=1,double h=2)
{
	no_of_window=num_window;
	height=h;
}
Window::Window(const Window&obj)
{
	no_of_window=obj.no_of_window;
	height=obj.height;
}
void Window::set_H_window(double H)
{
	height=H;
}
void Window::set_num_window(int num)
{
	no_of_window=num;
}
int Window::get_num_window()
{
	return no_of_window;
}
double Window::get_H_window()
{
	return height;
}
Window::~Window(void)
{
}
