#include "CheckingAccount.h"
#include"BankAccount.h"
int main()
{
	Bank_Account *B;//char*T, double Acc, double B, float f
	Checking_Account A("MCB", 23, 2300, 2);
	B = &A;
	cout << B->Withdraw(23) << endl;

}