#pragma once
#include<iostream>
using namespace std;
class Time_1
{
	int Hour;
	int Mint;
	int second;
	char *AM_PM;
	bool valide_time();
	bool valid_12hour(int,char*);
	bool valid_24hour(int,char*);
public:
	Time_1(void);
	Time_1(int,int,int,char*);
	Time_1(const Time_1&);
	bool input_Time();
	Time_1 get_time()const;
	void retrive_time(int&,int&,int&,char*&)const;
	void convert_to_12Hour();
	void convert_to_24Hour();
	void set_Hour(int);
	void set_Mint(int);
	void set_second(int);
	void set_am_pm(char*);
	int get_hour();
	int get_mint();
	int get_second();
	char*get_am_pm()const;
	void display();
	~Time_1(void);
};

