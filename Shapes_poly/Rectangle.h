#include"Shape.h"
#include<iostream>
using namespace std;
class Rectangle:public Shape
{
public:
	Rectangle();
	Rectangle(double,double,int);
	int area();
	~Rectangle();
};