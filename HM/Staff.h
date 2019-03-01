#pragma once
#include"Person.h"
#include "Department.h"
class Staff:virtual public Person//,virtual public Department
{
	int joiningDate;
	int joiningMonth;
	int joiningYear;
	char*education;
	

public:
	Staff(string, string, int dmy[3], char, int pno[11], char*, int, int, int, int, string);
	Staff(void);
	char*get_qualification()const;
	void set_qualification(char*);
	void staff_Display();
	~Staff(void);
};

