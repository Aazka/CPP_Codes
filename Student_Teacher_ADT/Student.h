#pragma once
#include"Person.h"
#include"MyString.h"
class Student:public Person
{
	MyString *SID;
protected:
	double gpa;
public:
	int semeter;
	Student(void);
	Student(const Student&);
	Student(char*,char*,int,int,int,char*,double,int);
	void set_SID(char*);
	void set_gpa(double);
	char* get_SID()const;
	double get_gpa();

	~Student(void);
};

