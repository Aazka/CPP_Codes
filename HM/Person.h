#pragma once
#include<iostream>
using namespace std;
class Person
{
	string fname;
	string lname;
	int DOB[3];
	char gender;
	int phoneNo[11];
public:
	Person(void);
	Person(string, string, int dmy[3], char, int pno[11],int);
	void set_fname(string);
	void set_lname(string);
	void set_DOB(int dmy[3]);
	void set_gender(char);
	void set_pno(int pno[11]);

    string getFname()const;
	string getlname()const;
	void get_dislay_dob();
	char get_gender();
	int get_pno();
	//void get_pno();

	void person_display();
	~Person(void);
};

