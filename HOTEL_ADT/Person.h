#pragma once
#include<iostream>
using namespace std;
class Person
{
	char *cnic;
	char *name;
	double contact;
	int no_of_people;
public:
	Person(void);
	Person(const Person&);
	Person(char*,char*,double,int);
	void set_no_people(int);
	int get_no_people();
	void set_name_person(char*);
	void set_nic_person(char*);
	void set_contact_person(double);
	char*get_name_person()const;
	char*get_nic_peron()const;
	double get_contact_person();
	~Person(void);
};