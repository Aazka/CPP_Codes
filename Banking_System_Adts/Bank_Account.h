#pragma once
#include<iostream>
using namespace std;
class Bank_Account
{
	char *Title;
	double AccountNumber;
	double Balance;
public:
	Bank_Account();
	Bank_Account(char*,double,double);
	void Deposit(double);
	double Withdraw(double);
	void set_title(char*);
	void set_account_no(double);
	void set_bal(double);
	const char *get_title();
	double get_acc();
	double get_bal();
	void display();
	~Bank_Account();
};