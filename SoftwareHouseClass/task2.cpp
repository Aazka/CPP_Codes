#include "task2.h"
#include "string.h"

NextBridgeEmployee::NextBridgeEmployee()
{
	name = nullptr;
	address = nullptr;
	phone_no = nullptr;
	level = nullptr;
	experience = 0;
	current_salary = 0;
	increment = 0;
}
NextBridgeEmployee::NextBridgeEmployee(char *N=nullptr,char* ad=nullptr,char *ph=nullptr,char *l=nullptr,int exp=0,double salary=0,double ince=0)
{
	int length = strlen(N);
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = N[i];
	}
	name[length] = '\0';

	 length = strlen(ad);
	address = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		address[i] = ad[i];
	}
	address[length] = '\0';

	length = strlen(ph);
	phone_no = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		phone_no[i] = ph[i];
	}
	phone_no[length] = '\0';

	length = strlen(l);
	level = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		level[i] = l[i];
	}
	level[length] = '\0';

	experience = exp;
	current_salary = salary;
	increment= ince;
}
NextBridgeEmployee::NextBridgeEmployee(const NextBridgeEmployee &obj1)
{
	int length = strlen(obj1.name);
	name=new char[length+1];
	for (int i = 0; i < length; i++)
	{
		name[i] = obj1.name[i];
	}
	name[length] = '\0';

	length = strlen(obj1.address);
	address = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		address[i] = obj1.address[i];
	}
	address[length] = '\0';

	 length = strlen(obj1.phone_no);
	phone_no = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		phone_no[i] = obj1.phone_no[i];
	}
	phone_no[length] = '\0';

	length = strlen(obj1.level);
	level = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		level[i] = obj1.level[i];
	}
	level[length] = '\0';

	experience = obj1.experience;
	current_salary = obj1.current_salary;
}
void NextBridgeEmployee::set_name(char* n)
{
	int length = strlen(n);
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = n[i];
	}
	name[length] = '\0';
}

void NextBridgeEmployee::set_address(char* ad)
{
	int length = strlen(ad);
	address = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		address[i] = ad[i];
	}
	address[length] = '\0';
}
void NextBridgeEmployee::set_phone_no(char* ph)
{
	int length = strlen(ph);
	phone_no = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		phone_no[i] = ph[i];
	}
	phone_no[length] = '\0';
}
void NextBridgeEmployee::set_level(char* l)
{
	int length = strlen(l);
	level = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		level[i] = l[i];
	}
	level[length] = '\0';
}
void NextBridgeEmployee::set_experience(int exp)
{
	experience = exp;
}
void NextBridgeEmployee::set_current_salary(double sal)
{
	current_salary = sal;
}
const char*NextBridgeEmployee::get_name()
{
	return name;
}
const char*NextBridgeEmployee::get_address()
{
	return address;
}
const char*NextBridgeEmployee::get_phone_no()
{
	return phone_no;
}
const char*NextBridgeEmployee::get_level()
{
	return level;
}
int NextBridgeEmployee::get_experience()
{
	return experience;
}
double NextBridgeEmployee::get_current_salary()
{
	return current_salary;
}
double NextBridgeEmployee::get_inc()
{
	return increment;
}
void  NextBridgeEmployee::set_increment(double i)
{
	increment=i;
}
double NextBridgeEmployee::increment_through_experience()
{
	int exp=get_experience();
	if(exp==1||exp==2)
	{
		increment=increment+10;
		//current_salary=current_salary+increment;
		return increment;
	}
	else if(exp>=2&&exp<=6)
	{
		increment=increment+20;
		return increment;
	}
	else if(exp>=6)
	{
		increment=increment+40;
		return increment;
	}
}
void NextBridgeEmployee::display()//char *N,char *add,char *ph_no,char *l,int exp,double salary,double incre
{
	cout<<get_name()<<endl;
	cout<<get_address()<<endl;
	cout<<get_phone_no()<<endl;
	cout<<get_level()<<endl;
	cout<<get_experience()<<endl;
	cout<<get_current_salary()<<endl;
	cout<<get_inc()<<endl;
}
void NextBridgeEmployee::display(NextBridgeEmployee const&obj)
{
	cout<<obj.name<<endl;
	cout<<obj.address<<endl;
	cout<<obj.phone_no<<endl;
	cout<<obj.level<<endl;
	cout<<obj.experience<<endl;
	cout<<obj.current_salary<<endl;
	cout<<obj.increment<<endl;
}
NextBridgeEmployee::~NextBridgeEmployee()
{
	delete[]name;
	delete []address;
	delete []phone_no;
	delete []level;
}
