#include "task4.h"
#include "string.h"
employee::employee(void)
{
	name=nullptr;
	code=nullptr;
	joining_day=0;
	joining_month=0;
	joining_year=0;
}
//char *n,int n_size,int *code,int size_c,int jd,int jm,int jy);
employee::employee(char *n,int n_size,int *co,int size_c,int jd,int jm,int jy)
{
	name=new char[n_size];
	for(int i=0;i<n_size;i++)
	{
		name[i]=n[i];
	}
	name[n_size]='\0';
	code=new int[size_c];
	for(int i=0;i<size_c;i++)
	{
		code[i]=co[i];
	}
	code[size_c]='\0';
	joining_day=jd;
	joining_month=jm;
	joining_year=jy;
	count=size_c;
}
void employee:: set_name(char *n,int size_n)
{
	for(int i=0;i<size_n;i++)
	{
		name[i]=n[i];
	}
	name[size_n]='\0';
	
}
void employee::set_code(int *c,int size_c)
{
	for(int i=0;i<size_c;i++)
	{
		code[i]=c[i];
	}
	count=size_c;
}
void  employee::set_day(int d)
{
	joining_day=d;
}
void employee::set_month(int m)
{
	joining_month=m;
}
void employee::set_year(int y)
{
	joining_year=y;
}
char employee::get_name()
{
	int length=strlen(name);
	char *N=new char[length];
	for(int i=0;i<length;i++)
	{
		N[i]=name[i];
	}
	N[length]='\0';
	return *N;
}
int employee::get_code()
{
	int *c=new int [count];
	for(int i=0;i<count;i++)
	{
		c[i]=code[i];
	}
	return *c;
}
int employee::get_day()
{
	return joining_day;
}
int employee:: get_month()
{
	return joining_month;
}
int employee::get_year()
{
	return joining_year;
}
int employee::calculate_tenure(int y)
{
	int year=y-joining_year;
	return year;
}
void employee::display()
{
	//if(y>=2)
	//{
	cout<<"name of emplyee is"<<' ';
	for(int i=0;name[i]!='\0';i++)
	{
		cout<<name[i];
	}
	cout<<endl;
	cout<<"the employee ID is"<<' ';
	for(int i=0;i<count;i++)
	{
		cout<<code[i]<<' ';
	}
	cout<<endl;
	cout<<"the dd/mm/yy of joining date is"<<' '<<joining_day<<' '<<joining_month<<' '<<joining_year;
	//}
}
employee::~employee()
{
	delete[]name;
	delete[]code;
}
