#pragma once
#include"Bank_Account.h"
class Saving_Account:public Bank_Account
{
	float InterestRate;
public:
	Saving_Account();
	Saving_Account(char*, double, double,float);
	void set_interest(float);
	float get_interset();
	void CalculateInterest();
	void display();
	~Saving_Account();
};
