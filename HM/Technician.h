#pragma once
#include "Technical_staff.h"
class Technician:public Technical_staff
{
public:
	Technician();
	Technician(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int dno, string Dname);
	~Technician();
};

