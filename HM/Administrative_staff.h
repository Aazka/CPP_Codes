#pragma once
#include "Staff.h"
class Administrative_staff:public Staff
{
public:
	Administrative_staff();
	Administrative_staff(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int dno, string Dname);
	~Administrative_staff();
};

