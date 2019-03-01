#include"Time_1.h"
#include"Time_calculator.h"
int main()
{
	Time_1 T(15,1,24,nullptr);
	Time_1 T2(1,7,25,"PM");
	T.display();
	T2.display();
	T.convert_to_12Hour();
	T2.convert_to_24Hour();
	T.display();
	T2.display();
	Time_calculator TC;
	Time_1 T3(21,7,25,"PM");
	cout<<"the time btw is"<<' '<<TC.timesBetween(T,T3)<<endl;
	T.set_am_pm("PM");
	T3.set_am_pm("PM");
	TC.isEarlier(T,T3);
}