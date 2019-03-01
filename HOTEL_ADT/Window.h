#pragma once
#include<iostream>
using namespace std;
class Window
{
	int no_of_window;
	double height;
public:
	Window(void);
	Window(int,double);
	Window(const Window&);
	void set_num_window(int);
	void set_H_window(double);
	int get_num_window();
	double get_H_window();
	~Window(void);
};

