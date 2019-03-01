#pragma once
#include "Staff.h"
class Operation_Staff:public Staff
{
public:
	Operation_Staff(void);
	Operation_Staff(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int dno, string Dname);
	~Operation_Staff();
};

