#pragma once
#include"MyString.h"
#include"Person.h"
#include"Student.h"
#include"Address.h"
#include"Person.h"
class Teacher:public Person
{
	MyString *tid;
	double salary;
protected:
	int leave_avalible;
	const int allow_leave;
public:
	Student *TA;
	Teacher(void);
	Teacher(char*,char*,int,int,int,char*,double,int,int);
	Teacher(Student *);
	void set_tid(char*);
	void set_salary(double);
	void set_leave_avalible(int);
	
	char* get_tid()const;
	double get_salary();
	int get_leave_avalible();

	~Teacher(void);
};

