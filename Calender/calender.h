#include<iostream>
#include "string.h"
using namespace std;
class calender
{
	const int size;
	char *day;
	int date;
	int month;
	int year;
public:
	calender();
	calender(char*,int,int,int,int);
	calender(calender &);
	void set_day(char*);
	void set_cur_date(int);
	char* get_day();
	int get_date();
	int get_mon();
	int get_y();
	void set_mon(int);
	void set_year(int);
	void display();
	calender next();
	calender prev();
	void operator=(calender &);
	calender getting_day(int);
	calender some_day_back(int);
	~calender();
};