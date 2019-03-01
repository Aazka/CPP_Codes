#pragma once
#include<iostream>
using namespace std;
class Package
{
	char *name;
	char*address;
	char *city;
	char *state;
	int ZIPcode;
	float weight;
	float cost ;
public:
	Package(void);
	Package(char*,char*,char*,char*,int,float,float);
	void set_name(char*);
	void set_address(char*);
	void set_city(char*);
	void set_state(char*);
	void set_code(int);
	void set_weight(float);
	void set_cost(float);
	const char* get_name();
	const char* get_address();
	const char* get_city();
	const char* get_state();
	int get_code();
	float get_weight();
	float get_cost();
	virtual float Package’s_calculate_Cost()=0; 
	~Package(void);
};

