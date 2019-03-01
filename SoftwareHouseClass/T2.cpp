#include "task2.h"

int main()
{
	char name[100]={"aazka_iqbal"};
	char address[100]={"217 shadman lahore"};
	char phone_no[100]={"+923435562243"};
	char level[100]={"senior"};
	int experience=2;
	double salary=250000;
	double increment=0;
	NextBridgeEmployee E1(name,address,phone_no,level,experience,salary,increment);
	increment=E1.increment_through_experience();
	E1.set_increment(increment);
	E1.display();
	NextBridgeEmployee E2=E1;
	cout<<endl;
	E2.display(E1);
}