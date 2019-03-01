#pragma once
#include<iostream>
using namespace std;
class DataOfBirth
{
//	bool validateDate();
	int day;
	int month;
	int year;
public:
	bool validateDate();
	DataOfBirth(const DataOfBirth&);
	DataOfBirth();
	DataOfBirth(int,int,int);
	void showDate() const; 
	bool isLeapYear();
	void set_day(int);
	void set_month(int);
	void set_year(int);
	int get_day();
	int get_month();
	int get_year();
	~DataOfBirth(void);
};

