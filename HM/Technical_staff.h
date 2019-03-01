#pragma once
#include "Staff.h"
class Technical_staff:public Staff
{
public:
	Technical_staff();
	Technical_staff(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int dno, string Dname);
	~Technical_staff();
};

