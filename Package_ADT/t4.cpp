#include"Package.h"
#include"OverNightPackage.h"
#include"TwoDayPackage.h"
int main()
{
	Package *P;
	OverNightPackage O("az","abc block","lahore","johar town",1,280,200,20);
	P=&O;
	cout<<P->Package’s_calculate_Cost();
	cout<<endl;
	TwoDayPackage T("az","abc block","lahore","wapda town",2,500,10,10);
	P=&T;
	cout<<P->Package’s_calculate_Cost();
}