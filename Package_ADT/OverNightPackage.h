#pragma once
#include"Package.h"

class OverNightPackage:public Package
{
	int additional_fee; 
public:
	OverNightPackage(void);
	OverNightPackage(char*,char*,char*,char*,int,float,float,int);
	void set_adfee(int);
	int get_adfee();
	float Package’s_calculate_Cost();
	~OverNightPackage(void);
};

