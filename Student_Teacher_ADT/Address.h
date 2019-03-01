#pragma once
#include<iostream>
#include"MyString.h"
using namespace std;
class Address
{
	 MyString *city;
	 MyString *province; 
	 int laneNo;
	 int houseNo;
public:
	Address(void);
	Address(const Address&);
	Address(char*,char*,int,int);
	void set_laneNo(int);
	void set_Hno(int);
	int get_lane_no();
	int get_house_no();
	 char* get_name_C() const;
	char* get_name_P()const;
	void set_name_C(char *);
	void set_name_P(char*);
	~Address(void);
};