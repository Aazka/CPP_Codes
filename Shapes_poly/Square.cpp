#include "Square.h"


Square::Square() :Shape()
{

}
Square::Square(double a, double b, int r) : Shape(a, b, r)
{

}
int Square::area()
{
	double l = get_length();
	cout << "squar area is " << ' ' << l*l;
	return l*l;
}
Square::~Square()
{
}