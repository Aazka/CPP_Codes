#include "Rectangle.h"


Rectangle::Rectangle()
{
}
Rectangle::Rectangle(double a=0, double b=0, int r=0) :Shape(a, b, r)
{
	cout << "rectangle parametrized" << endl;
}
int Rectangle::area()
{
	double l = get_length();
	double w = get_width();
	cout << "area of rectangle is" << ' ' << l*w << endl;
	return l*w;
}
Rectangle::~Rectangle()
{
}