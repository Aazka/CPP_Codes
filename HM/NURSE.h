#pragma once
#include "Operation_Staff.h"
class NURSE:public Operation_Staff
{
public:
	NURSE();
	NURSE(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int dno, string Dname);
	void display();
	~NURSE();
};

