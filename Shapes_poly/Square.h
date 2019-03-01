#include"Shape.h"
#include<iostream>
using namespace std;
class Square:public Shape 
{
public:
	Square();
	Square(double,double,int);
	int area();
	~Square();
};