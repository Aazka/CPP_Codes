#include "Date.h"
#include <time.h>
Date::Date(void)
{
	day=1;
	month=1;
	year=2018;
}
Date::Date(int d,int m,int y)
{
	    this->day=d;
		this->month=m;
		this->year=y;
	if(!validateDate())
	{
	time_t current_time;
	struct tm  local_time;
	time(&current_time);
	localtime_s(&local_time, &current_time);
	this->year = local_time.tm_year + 1900;
	this->month= local_time.tm_mon + 1;
	this->day= local_time.tm_mday;
	}
}
Date::Date(const Date&obj)
{
	this->day=obj.day;
	this->month=obj.month;
	this->year=obj.year;
}
bool Date::inputCompleteDate(int d,int m,int y)
{
	if(m==12&&(d>=1||d<=31))
	{
		this->month=m;
		this->day=d;
		this->year=y;
		return true;
	}
	else if((month==4||month==6||month==9||month==11)&&(day<=30 && day>=1))
	{
		this->day=d;
		this->month=m;
		this->year=y;
		return true;
	}
	else if((day>=1||day<=31)&&(month==1||month==2||month==3||month==5||month==7||month==8||month==10))
	{
		this->day=d;
		this->month=m;
		this->year=y;
		return true;
	}
	return false;
}
bool Date::isEqual(Date& obj)
{
	if(obj.validateDate()==true)
	{
		if((this->day==obj.day)&&(this->month==obj.month)&&(this->year==obj.year))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else 
	{
		return false;
	}
}
Date& Date::getDate()const
{
	Date temp;
	temp.day=this->day;
	temp.month=this->month;
	temp.year=this->year;
	return temp;
}
bool Date::copyDate(Date&obj)
{
	if(!inputCompleteDate(obj.day,obj.month,obj.year))
	{
		return false;
	}
	else 
		return true;
}
bool Date::isLeapYear()
{
	if(year%4==0)
	{
		return true;
	}
	return false;
}
void Date::set_day(int d)
{
	this->day=d;
}
void Date::set_month(int m)
{
	this->month=m;
}
void Date::set_year(int y)
{
	this->year=y;
}
int Date::get_day()
{
	return day;
}
int Date::get_month()
{
	return month;
}
int Date::get_year()
{
	return year;
}
bool Date::inputDate()
{
	cout<<"enter the date"<<endl;
	cin>>day;
	if(day>31||day<1)
	{
		return false;
	}
	cout<<"enter the month"<<endl;
	cin>>month;
	if(month>12 ||month<1)
	{
		return false;
	}
	cout<<"enter the year"<<endl;
	cin>>year;
	return true;
}
bool Date::validateDate()
{
	if(month==12&&(day>=1||day<=31))
	{
		return true;
	}
	else if((month==4||month==6||month==9||month==11)&&(day<=30 && day>=1))
	{
		return true;
	}
	else if((day>=1||day<=31)&&(month==1||month==2||month==3||month==5||month==7||month==8||month==10))
	{
		return true;
	}
	return false;
}
void Date::showDate()const
{
	cout<<"date"<<' '<<day<<endl;
	cout<<"month"<<' '<<month<<endl;
	cout<<"year"<<' '<<year<<endl;
}
void Date::retrieveDate(int &d,int &m,int &y)const
{
	d=this->day;
	m=this->month;
	y=this->year;
}
Date::~Date(void)
{
}
