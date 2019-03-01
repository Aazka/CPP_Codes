#pragma once
#include"Time_1.h"
class Time_calculator
{
	double t;
	double t2;
public:
	 bool isEarlier( Time_1& , Time_1& );
	 double timesBetween(Time_1& , Time_1& ); 
	Time_calculator(void);
	~Time_calculator(void);
};

