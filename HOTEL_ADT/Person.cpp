#include "Person.h"
#include "string.h"

Person::Person(void)
{
	no_of_people=0;
	cnic=new char[100];
	cnic=nullptr;
	name=new char[100];
	name=nullptr;
	contact=0;
}
Person::Person(char *Naam=nullptr,char*NIC=nullptr,double Ph=0,int no=0)
{
	no_of_people=no;
	int l=strlen(Naam);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=Naam[i];
	}
	name[l]='\0';
	l=strlen(NIC);
	cnic=new char[l+1];
	for(int i=0;i<l;i++)
	{
		cnic[i]=NIC[i];
	}
	cnic[l]='\0';
	contact=Ph;
}
Person::Person(const Person &obj)
{
	no_of_people=obj.no_of_people;
	int l=strlen(obj.name);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=obj.name[i];
	}
	name[l]='\0';
	l=strlen(obj.cnic);
	cnic=new char[l+1];
	for(int i=0;i<l;i++)
	{
		cnic[i]=obj.cnic[i];
	}
	cnic[l]='\0';
	contact=obj.contact;
}
void Person::set_no_people(int p)
{
	no_of_people=p;
}
int Person::get_no_people()
{
	return no_of_people;
}
void Person::set_contact_person(double c)
{
	contact=c;
}
void Person::set_name_person(char*Naam)
{
	int l=strlen(Naam);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=Naam[i];
	}
	name[l]='\0';
}
void Person::set_nic_person(char*NIC)
{
	int l=strlen(NIC);
	cnic=new char[l+1];
	for(int i=0;i<l;i++)
	{
		cnic[i]=NIC[i];
	}
	cnic[l]='\0';
}
char* Person::get_name_person()const
{
	return name;
}
char* Person::get_nic_peron()const
{
	return cnic;
}
double Person::get_contact_person()
{
	return contact;
}
Person::~Person(void)
{
}
