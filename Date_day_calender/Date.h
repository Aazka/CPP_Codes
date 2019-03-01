#pragma once
#include<iostream>
using namespace std;
class Date{
public:
	Date(); 
	Date(int,int,int);
	Date(const Date&);	
	bool inputDate();
	bool copyDate(Date&); 
	bool inputCompleteDate(int,int,int);
	Date& getDate() const;
	void retrieveDate(int& , int& , int&) const; 
	void showDate() const; 
	bool isEqual(Date&);  
	bool isLeapYear();
	void set_day(int);
	void set_month(int);
	void set_year(int);
	int get_day();
	int get_month();
	int get_year();
	~Date();
private:
	bool validateDate(); // Validate attribute range values – methods can also be private
	int day;
	int month;
	int year;
};
