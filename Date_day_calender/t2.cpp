#include <stdio.h>
#include <time.h>
#include"Date.h"
#include"DateCalculator.h"
void set_current_DATE(int &Day,int &Month,int &Year)
{
	time_t current_time;
	struct tm  local_time;
	time(&current_time);
	localtime_s(&local_time, &current_time);
	Year = local_time.tm_year + 1900;
	Month = local_time.tm_mon + 1;
	Day = local_time.tm_mday;
}
int main()
{
	int Day=0;
	int Month=0;
	int Year=0;
	set_current_DATE(Day,Month,Year);
	cout<<Year<<' '<<Month<<' '<<Day;
	cout<<"enter the choice 1. view Date.h, 2.view Date_calculator"<<endl;
	int choice=0;
	cin>>choice;
	if(choice==1)
	{
	Date D;
	if(D.inputDate()==true)
	{
		cout<<"after 1st inputDate() enter"<<endl;
		D.showDate();
		cout<<"after creating new object"<<endl;
		Date D1(4,2,2013);
		D1.showDate();
		cout<<"after copyDate()"<<endl;
		D1.copyDate(D);
		D1.showDate();
		cout<<"after inputCompleteDate()"<<endl;
		if(D.inputCompleteDate(27,11,2016)==true)
		{
			D.showDate();
			cout<<"after getDate():const"<<endl;
			D1.getDate();
			D1.showDate();
			cout<<"after retriving data"<<endl;
			D.retrieveDate(Day,Month,Year);
			D.showDate();
			cout<<"after checking equality isequal()"<<endl;
			if(D.isEqual(D1)==true)
			{
				cout<<"both are equal"<<endl;
			}
			else
			{
				cout<<"not equal"<<endl;
			}
		}
	}
	else
	{
		cout<<"invaild info"<<endl;
	}
	}
	else
	{
	DateCalculator DC(Day,Month,Year);
	Date D1(23,4,2017);
	Date D2(27,2,2018);
    double x=DC.daysBetween(D1,D2);
	cout<<endl;
	cout<<x;
	if(DC.isEarlier(D1,D2)==true)
	{
		cout<<"D1 is earlier then D2"<<endl;
	}
	else 
		cout<<"D2 is earlier then D1"<<endl;
	}
}
/*#include <iostream>
#include <ctime>
using namespace std;
int main ()
{
    time_t now = time(0);
    cout << ctime(&now);
   cin.get();
	 return EXIT_SUCCESS;
}*/