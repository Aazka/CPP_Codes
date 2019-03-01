#include "Saving_Account.h"


Saving_Account::Saving_Account() :Bank_Account()
{
	InterestRate = 0;
}
Saving_Account::Saving_Account(char* T, double acc, double bal, float IR) : Bank_Account(T, acc, bal)
{
	InterestRate = IR;
}
void Saving_Account::set_interest(float IR)
{
	InterestRate = IR;
}
float Saving_Account::get_interset()
{
	return InterestRate;
}
void Saving_Account::CalculateInterest()
{
	double b = get_bal();
	InterestRate = ((InterestRate)*(b)) / 100;
	cout << InterestRate << endl;
}
void Saving_Account::display()
{
	cout << "Title" << ' ' << get_title() << endl;
	cout << "balance" << ' ' << get_bal() << endl;
	cout << "account_no" << ' ' << get_acc() << endl;
	cout << InterestRate << endl;

}
Saving_Account::~Saving_Account()
{
}
