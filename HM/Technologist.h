#pragma once
#include "Technical_staff.h"
class Technologist:public Technical_staff
{
public:
	Technologist();
	Technologist(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int dno, string Dname);
	~Technologist();
};

