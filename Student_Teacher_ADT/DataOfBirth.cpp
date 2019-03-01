#include "DataOfBirth.h"
DataOfBirth::DataOfBirth()
{
	day=0;
	month=0;
	year=0;
}
DataOfBirth::DataOfBirth(int a,int b,int c)
{
	day=a;
	month=b;
	year=c;
}
DataOfBirth::DataOfBirth(const DataOfBirth&obj)
{
	day=obj.day;
	month=obj.month;
	year=obj.year;
}
bool DataOfBirth::isLeapYear()
{
	if(year%4==0)
	{
		return true;
	}
	return false;
}
void DataOfBirth::set_day(int d)
{
	this->day=d;
}
void DataOfBirth::set_month(int m)
{
	this->month=m;
}
void DataOfBirth::set_year(int y)
{
	this->year=y;
}
int DataOfBirth::get_day()
{
	return day;
}
int DataOfBirth::get_month()
{
	return month;
}
int DataOfBirth::get_year()
{
	return year;
}
bool DataOfBirth::validateDate()
{
	if(day<1||day>31)
	{
		return false;
	}
	else if(month<1||month>12)
	{
		return false;
	}
	if(year==0)
	{
		return false;
	}
	return true;
}
DataOfBirth::~DataOfBirth(void)
{
}
