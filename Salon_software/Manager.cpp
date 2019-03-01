#include "string.h"
#include "Manager.h"
Manager::Manager():ID(0),security_pass_code(0)
{
	name=nullptr;
	DOB=0;
	gender=NULL;
	cont_no=0;
	salary=0;
	type=nullptr;
}
Manager::Manager(int id=0,char*n=nullptr,int date_of_birth=0,char g=NULL,int C_NO=0,int sal=0,int passcode=0,char*typ=nullptr):ID(id),security_pass_code(passcode)
{
	int l = strlen(n);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = n[i];
	}
	name[l] = '\0';
	DOB=date_of_birth;
	gender=g;
	cont_no=C_NO;
	salary=sal;
	l = strlen(typ);
	type = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		type[i] = typ[i];
	}
	type[l] = '\0';
}
Manager::Manager(Manager &obj):ID(obj.ID),security_pass_code(obj.security_pass_code)
{
	
	int l = strlen(obj.name);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = obj.name[i];
	}
	name[l] = '\0';
	DOB=obj.DOB;
	gender=obj.gender;
	cont_no=obj.cont_no;
	salary=obj.salary;
	l = strlen(obj.type);
	type = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		type[i] = obj.type[i];
	}
	type[l] = '\0';
}
void Manager :: operator=(Manager&obj)
{
	int l = strlen(obj.name);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = obj.name[i];
	}
	name[l] = '\0';
	DOB=obj.DOB;
	gender=obj.gender;
	cont_no=obj.cont_no;
	salary=obj.salary;
	l = strlen(obj.type);
	type = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		type[i] = obj.type[i];
	}
	type[l] = '\0';

}
void Manager::set_name(char*n)
{
	int l = strlen(n);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = n[i];
	}
	name[l] = '\0';
}
void Manager::set_contact_no(int c)
{
	cont_no=c;
}
void Manager::set_date_of_birth(int dob)
{
	DOB=dob;
}
void Manager::set_gender(char g)
{
	gender=g;
}
void Manager::set_salary(int s)
{
	salary=s;
}
void Manager::set_typ(char *typ)
{
	int l = strlen(typ);
	type = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		type[i] = typ[i];
	}
	type[l] = '\0';

}
const char* Manager::get_name()
{
	return name;
}
int Manager:: get_contect()
{
	return cont_no;
}
int Manager::get_dob()
{
	return DOB;
}
const char* Manager::get_type()
{
	return type;
}
char Manager::get_gender()
{
	return gender;
}
int Manager::get_salary()
{
	return salary;
}
Manager::~Manager(void)
{
//	delete[]name;
//	delete[]type;
}
