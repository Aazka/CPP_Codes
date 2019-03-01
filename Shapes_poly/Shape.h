#pragma once
#include<iostream>
using namespace std;
class Shape
{
	double length;
	double width;
	int radius;
public:
	Shape();
	Shape(double,double,int);
	virtual int area()=0;//pure virtual
	void set_length(double);
	void set_width(double);
	void set_radius(int);
	double get_length();
	double get_width();
	int get_radius();
	~Shape();
};
