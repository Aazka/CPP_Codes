#pragma once
#include<iostream>
using namespace std;
#include "Operation_Staff.h"
class Doctor:public Operation_Staff
{
	string specialty;
	string location;
public:
	Doctor();
	Doctor(string, string, int dmy[3], char, int pno[11], char*, int, int, int, string special, string loc, int dno, string Dname);
	void Display();
	~Doctor();
};

