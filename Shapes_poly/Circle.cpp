#include "Circle.h"

const int pi = 3.14;
Circle::Circle() :Shape()
{
}
Circle::Circle(double a = 0, double b = 0, int r = 0) : Shape(a, b, r)
{
	cout << "circle parametrize" << endl;
}
int Circle::area()
{
	int r = get_radius();
	r = r*r;
	cout << "area of circle is " << ' ' << pi*r << endl;
	return pi*r;
}

Circle::~Circle()
{
}