#pragma once
#include<iostream>
#include"Shape.h"
using namespace std;
class Circle:public Shape 
{
public:
	Circle();
	Circle(double,double,int);
	int area();
	~Circle();
};
