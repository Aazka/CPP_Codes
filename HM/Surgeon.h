#pragma once
#include "Doctor.h"
class Surgeon:public Doctor
{
public:
	Surgeon();
	Surgeon(string, string, int dmy[3], char, int pno[11], char*, int, int, int, string special, string loc, int dno, string Dname);
	~Surgeon();
};

