#pragma once
#include<iostream>
using namespace std;
class Wall
{
	char *wall_color;
	double height;
public:
	Wall(void);
	Wall(const Wall&);
	Wall(char*,double);
	char*get_Wall_color()const;
	double get_height_of_wall();
	void set_W_color(char*);
	void set_W_height(double);
	~Wall(void);
};

