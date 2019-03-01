#pragma once
#include "Address.h"
#include "MyString.h"
class Property
{
	int no;
	MyString *city;
public:
	Property(void);
	Property(char*,int);
	char* get_A_name_C()const;
	int get_A_number();
	void set_A_name_C(char*);
	void set_A_number(int);
	~Property(void);
};

/*
//MyString *name;
//,int,int);
	//void set_A_laneNo(int);
	//void set_A_Hno(int);
	//int get_A_lane_no();
	//int get_A_house_no();
	//const char* get_A_name_N();
	//void set_A_name_N(char*);
	
	*/