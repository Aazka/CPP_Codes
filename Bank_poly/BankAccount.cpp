#include "BankAccount.h"
#include "string.h"

Bank_Account::Bank_Account()
{
	Title = new char[100];
	AccountNumber = 0;
	Balance = 0;
}
Bank_Account::Bank_Account(char*T, double A, double B)
{
	int l = strlen(T);
	Title = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		Title[i] = T[i];
	}
	Title[l] = '\0';
	AccountNumber = A;
	Balance = B;
}
void Bank_Account::set_title(char *T)
{
	int l = strlen(T);
	Title = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		Title[i] = T[i];
	}
	Title[l] = '\0';
}
void Bank_Account::set_account_no(double a)
{
	AccountNumber = a;
}
void Bank_Account::set_bal(double b)
{
	Balance = b;
}
const char* Bank_Account::get_title()
{
	return Title;
}
double Bank_Account::get_bal()
{
	return Balance;
}
double Bank_Account::get_acc()
{
	return AccountNumber;
}
void Bank_Account::Deposit(double d)
{
	Balance = Balance + d;
}
/*double Bank_Account::Withdraw(double d)
{
	Balance = Balance - d;
	return Balance;
}*/
void Bank_Account::display()
{
	cout << "Title" << ' ' << Title << endl;
	cout << "balance" << ' ' << Balance << endl;
	cout << "account_no" << ' ' << AccountNumber << endl;
}
Bank_Account::~Bank_Account()
{
	delete[]Title;
}
