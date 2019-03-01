#include "DateCalculator.h"


DateCalculator::DateCalculator(int d,int m,int y)
{
	D=new Date(d,m,y);
}
int DateCalculator::return_year(int y1,int y2)
{
	if(y1>=y2)
	{
		return y1-y2;
	}
	else
		return y2-y1;
}
int DateCalculator::return_thirty_thirtyone_day(int m)
{
	if(m==4||m==6||m==9||m==11)
	{
		return 30;
	}
	else if(m==2)
	{
		return 28;
	}
	else
		return 31;
}
int DateCalculator::no_of_days(Date & D)
{
	int y=D.get_year();
	int m=D.get_month();
	int d=D.get_day();
	int leap=y/4;
	y=y-leap;
	int c=(y*360)+(leap*366)+d;
	int a=0;
	for(int i=1;i<m;i++)
	{
		  a=return_thirty_thirtyone_day(m);
		c+=a;
	}
	return c;
}
double DateCalculator::daysBetween(Date& D1, Date& D2)
 {
	 int a=0;
	 int y1=D1.get_year();
	 int m1=D1.get_month();
	 int d1=D1.get_day();
	 int y2=D2.get_year();
	 int m2=D2.get_month();
	 int d2=D2.get_day();
	 int c=0;
	 //int year=0;
	 if(return_year(y1,y2)==0)
	 {
	 if(m1==m2)
	 {
		 if(d1>d2)
		 {
			 return d1-d2;
		 }
		 else
			 return d2-d1;
	 }
	 if(m1>m2)
	 {
		 int m=m1-m2;
		 //m--;
		  a=return_thirty_thirtyone_day(m1);
		 if(d1>d2)
		 {
			 c=d1-d2;
		 }
		 else 
			 c=d2-d1;
		 for(int i=0;i<m;i++)
		 {
			 a=return_thirty_thirtyone_day(m2);
			if(a==30)
		    {
				c+=a;
			}
			 else if(a==31)
		     {
				 c+=a;
			}
			 else
				 c+=a;
			m2++;
		 }
	   }
		else if(m2>m1)
	    {
		 int m=m2-m1;
		 //m--;
		 int a=return_thirty_thirtyone_day(m2);
		  if(d1>d2)
		 {
			 c=d1-d2;
		 }
		 else 
			 c=d2-d1;
		 for(int i=0;i<m;i++)
		 {
			 a=return_thirty_thirtyone_day(m1);
			if(a==30)
		    {
				c+=a;
			}
			 else if(a==31)
		     {
				 c+=a;
			}
			 else
				 c+=a;
			  m1++;
		 }
	   }
	}
	 else 
	 {
		 int G_y=return_year(y1,y2);
		 int Day1=no_of_days(D1);
		 int Day2=no_of_days(D2);
		 if(d1>d2)
		 {
			 int x=d1-d2;
		 if(Day1>Day2)
		 {
			 return (Day1-Day2)+x;
		 }
		 else
		   return (Day2-Day1)+x;
		 }
		 else
		 {
		 	 int x=d2-d1;
		 if(Day1>Day2)
		 {
			 return (Day1-Day2)+x;
		 }
		 else
		   return (Day2-Day1)+x;
		 }
	 }  
	 return c;
 }
 bool DateCalculator::isEarlier(Date& D1, Date& D2)
 {
	 int y1=D1.get_year();
	 int m1=D1.get_month();
	 int d1=D1.get_day();
	 int y2=D2.get_year();
	 int m2=D2.get_month();
	 int d2=D2.get_day();
	 if(y1>y2)
	 {
		 return true;
	 }
	 else if(y2>y1)
	 {
		 return true;
	 }
	 else if(y1==y2)
	 {
		 if(m1>m2)
		 {
			 return true;
		 }
		 else if(m2>m1)
		 {
			 return true;
		 }
		 else if(m1==m2)
		 {
			 if(d1>d2)
			 {
				 return true;
			 }
			 else if(d2>d1) 
			 {
				 return true;
			 }
		 }
	 }
	 return false;
 }
DateCalculator::~DateCalculator(void)
{
	delete D;
}
/*if(y1>y2)
		{
			if(m1>m2)
			{
				int m=m1-m2;
				m--;
				int temp=m1+1;
				int j=0;
			while(true)
			{
				j=temp+m;
				j=j%12;
				if(j==m1)
				{
					break;
				}
				a=return_thirty_thirtyone_day(temp);
				c+=a;
				temp++;
				if(temp>12)
				{
					temp=1;
				}
			}
			if(d1>d2)
			{
				c+=(d1-d2);
			}
			else
			{
				c+=(d2-d1);
			}
			if(G_y!=1)
			{
				for(int i=1;i<G_y;i++)
				{
					c+=365;
				}
			}
			}
			else 
			{
			int m=m2-m1;
			m--;
			int temp=m1+1;
			int j=0;
			while(true)
			{
				j=temp+m;
				j=j%12;
				if(j==m1)
				{
					break;
				}
				a=return_thirty_thirtyone_day(temp);
				c+=a;
				temp++;
				if(temp>12)
				{
					temp=1;
				}
			}
			if(d1>d2)
			{
				c+=(d1-d2);
			}
			else
			{
				c+=(d2-d1);
			}
			if(G_y!=1)
			{
				for(int i=1;i<G_y;i++)
				{
					c+=365;
				}
			}
			}
			}
		else
		{
			if(m1>m2)
			{
				int m=m1-m2;
				m--;
				int temp=m2+1;
				int j=0;
			while(true)
			{
				j=temp+m;
				j=j%12;
				if(j==m2)
				{
					break;
				}
				a=return_thirty_thirtyone_day(temp);
				c+=a;
				temp++;
				if(temp>12)
				{
					temp=1;
				}
			}
			if(d1>d2)
			{
				c+=(d1-d2);
			}
			else
			{
				c+=(d2-d1);
			}
			if(G_y!=1)
			{
				for(int i=1;i<G_y;i++)
				{
					c+=365;
				}
			}
			}
			else 
			{
			int m=m2-m1;
			m--;
			int temp=m2+1;
			int j=0;
			while(true)
			{
				j=temp+m;
				j=j%12;
				if(j==m2)
				{
					break;
				}
				a=return_thirty_thirtyone_day(temp);
				c+=a;
				temp++;
				if(temp>12)
				{
					temp=1;
				}
			}
			if(d1>d2)
			{
				c+=(d1-d2);
			}
			else
			{
				c+=(d2-d1);
			}
			if(G_y!=1)
			{
				for(int i=1;i<G_y;i++)
				{
					c+=365;
				}
			}
			}
			}
		*/