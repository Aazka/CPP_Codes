#pragma once
#include"Package.h"
class TwoDayPackage:public Package
{
	int  flat_fee; 
public:
	TwoDayPackage(void);
	TwoDayPackage(char*,char*,char*,char*,int,float,float,int);
	void set_flat_fee(int);
	int get_flat_fee();
	float Package’s_calculate_Cost();
	~TwoDayPackage(void);
};

