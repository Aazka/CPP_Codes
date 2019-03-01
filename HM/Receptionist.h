#pragma once
#include "Front_Desk_staff.h"
class Receptionist:public Front_Desk_staff
{
public:
	Receptionist();
	Receptionist(string f, string l, int dmy[3], char g, int pno[11], char*Quali, int jd, int jm, int jy, int dno, string Dname);
	~Receptionist();
};

