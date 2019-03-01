
#include "Doctor.h"
#include<iostream>
using namespace std;
#include<string>


Doctor::Doctor()
{
	 
}
Doctor::Doctor(string f, string l, int dmy[3], char g, int pno[11], char*Quali, int jd, int jm, int jy, string special, string loc, int dno, string Dname) :Operation_Staff(f, l, dmy, g, pno, Quali, jd, jm, jy, dno, Dname)
{
	specialty = special;
	location = loc;
}
void Doctor::Display()
{
	Staff::staff_Display();
	cout<<"specialty :"<<specialty<<' ';
	cout<<"location :"<<location<<endl;
}
Doctor::~Doctor()
{
}
