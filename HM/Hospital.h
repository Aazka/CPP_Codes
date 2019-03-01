#pragma once
#include"Person.h"
#include"Patients.h"
#include"Staff.h"
class Hospital
{
	char *name;
	int pno[11];
	//Staff *S;
	//Patients *p;
	static int count;
public:
	Hospital(void);
	Hospital(char*,int ph[11]);
	void patient_Data_enter(Patients *);
   // void Staff_data_enter(Staff *A);
	//void get_input_of_staff(Staff S[10]);
	int patient_search_data(Patients&,string);//Patients
	void get_input(Patients  P[10]);
	~Hospital(void);
};

