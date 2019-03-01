#include"calender.h"

int main()
{
	char C[100]={"SUN"};
	calender C1(C,23,2,2014,0);
	calender C2=C1.prev();
	C2=C1.next();
	C2.display();
	cout<<endl;
	C2=C1.getting_day(2);
	C2.display();
	cout<<endl;
	C2=C1.some_day_back(2);
	C2.display();
}