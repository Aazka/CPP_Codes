#include "Shape.h"


Shape::Shape()
{
	length = 0;
	width = 0;
	radius = 0;
}
Shape::Shape(double a, double b, int c)
{
	length = a;
	width = b;
	radius = c;
	cout << "Shape Parametrized" << endl;
}
void Shape::set_length(double l)
{
	length = l;
}
void Shape::set_radius(int r)
{
	radius = r;
}
void Shape::set_width(double w)
{
	width = w;
}
double Shape::get_length()
{
	return length;
}
int Shape::get_radius()
{
	return radius;
}
double Shape::get_width()
{
	return width;
}

Shape::~Shape()
{
}