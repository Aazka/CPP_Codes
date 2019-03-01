#pragma once
#include"Person.h"
class Patients:public Person
{
	int id;
	char*sickness;
	int roomNo;
public:
	Patients(string, string, int dmy[3], char, int pno[11], char*, int, int);//room no,id
	Patients(void);
	void set_ID(int id);
	void set_room(int RN);

	char*get_sickness()const;
	int get_id();
	int get_roomNo();
	void display();
	void set_sickness(char*);
	//void patient_Data_enter(Patients *P);
	~Patients(void);
};

