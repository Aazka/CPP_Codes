#include"Bank_Account.h"
#include"Checking_Account.h"
#include"Saving_Account.h"

int main()
{
	Saving_Account S1("habib_bank", 25, 25000, 25);
	Checking_Account C1("MCB", 32, 50000, 25);
	cout << "enter ur choice 1.saving , 2. checking" << endl;
	int c;
	cin >> c;
	if (c == 1)
	{
		Saving_Account S("habib_bank", 25, 25000, 25);
		S.CalculateInterest();
		S.display();
	}
	else if (c == 2)
	{
		Checking_Account C("MCB", 32, 50000, 25);
		cout << "Checking withdraw" << endl;
		C.Withdraw(2);
		cout << "Checking deposite" << endl;
		C.Deposit(56);
		C.display();
	}
	else
	{
		cout << "bank_account withdraw and deposite" << endl;
		S1.Bank_Account::Deposit(45);
		S1.Bank_Account::Withdraw(5);
		S1.display();
	}
}