#include"Date.h"
class DateCalculator{
public:
	DateCalculator(int,int,int);
    double daysBetween(Date& , Date& ); // return days elapsed between two Dates – classical example of association
    bool isEarlier(Date& , Date& ); /* return true if D1 is earlier
				or same as D2 otherwise return false */
	// All other relevant methods go here
	~DateCalculator();
private:
	Date *D;
	int return_year(int,int);
	int return_thirty_thirtyone_day(int);
	int no_of_days(Date&);
	// All relevant attributes go here
};
