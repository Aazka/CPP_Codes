#pragma once
#include<iostream>
using namespace std;
class Door
{
	int length;
//	int width;
	char *material;
//	char *color;
public:
	Door(void);
	Door(int,char*);
	Door(const Door&);
	void set_length(int);
//	void set_width(int);
	void set_material(char*);
//	void set_color(char*);
	int get_length();
//	int get_width();
	char*get_material()const;
//	char*get_color()const;
	~Door(void);
};

