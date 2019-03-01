#pragma once
#include "Administrative_staff.h"
class Front_Desk_staff:public Administrative_staff
{
public:
	Front_Desk_staff();
	Front_Desk_staff(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int dno, string Dname);
	~Front_Desk_staff();
};

