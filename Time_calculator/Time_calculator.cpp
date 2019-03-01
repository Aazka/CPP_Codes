#include "Time_calculator.h"

Time_calculator::Time_calculator()
{
	t=0;
	t2=0;
}
double Time_calculator::timesBetween(Time_1 &T1,Time_1 &T2)
{
	int H=T1.get_hour();
	int M=T1.get_mint();
	int S=T1.get_second();
	char *A_P=T1.get_am_pm();
	T1.convert_to_24Hour();
	t=((H*3600)+(M*60)+S);
	H=T2.get_hour();
	M=T2.get_mint();
	S=T2.get_second();
	A_P=T2.get_am_pm();
	T2.convert_to_24Hour();
	t2=((H*3600)+(M*60)+S);
	if(t>t2)
	{
		return t-t2;
	}
	else
		return t2-t;
}
bool Time_calculator::isEarlier( Time_1&T1 , Time_1&T2)
{
	int H=T1.get_hour();
	int M=T1.get_mint();
	int S=T1.get_second();
	char *A_P=T1.get_am_pm();
	T1.convert_to_24Hour();
	t=((H*3600)+(M*60)+S);
	H=T2.get_hour();
	M=T2.get_mint();
	S=T2.get_second();
	A_P=T2.get_am_pm();
	T2.convert_to_24Hour();
	t2=((H*3600)+(M*60)+S);
	if(t>t2)
	{
		return true;
	}
	else if(t2>t)
	{
		return true;
	}
	else
		return false;
}
Time_calculator::~Time_calculator(void)
{
}
