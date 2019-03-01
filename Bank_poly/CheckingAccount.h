#pragma once
#include"BankAccount.h"
class Checking_Account :public Bank_Account
{
	double fee;
public:
	Checking_Account();
	Checking_Account(char*, double, double, float);
	void set_fee(double);
	double get_fee();
	void Deposit(double);
	double Withdraw(double);
	void display();
	~Checking_Account();
};