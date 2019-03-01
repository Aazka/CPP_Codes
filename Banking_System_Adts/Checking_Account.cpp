#include "Checking_Account.h"

Checking_Account::Checking_Account():Bank_Account()
{
	fee = 0;
}
Checking_Account::Checking_Account(char*T, double Acc, double B, float f) : Bank_Account(T,Acc,B)
{
	fee = f;
}
void Checking_Account::set_fee(double f)
{
	fee = f;
}
double Checking_Account::get_fee()
{
	return fee;
}
void Checking_Account::Deposit(double d)
{
	double b = get_bal();
	b = b + d + fee;
	set_bal(b);
}
double Checking_Account::Withdraw(double d)
{
	double b = get_bal();
	b = (b - d) - fee;
	set_bal(b);
	return b;
}
void Checking_Account::display()
{
	cout << "Title" << ' ' << get_title() << endl;
	cout << "balance" << ' ' << get_bal() << endl;
	cout << "account_no" << ' ' << get_acc() << endl;
	cout << "fee" << ' ' << fee << endl;
}
Checking_Account::~Checking_Account()
{
}