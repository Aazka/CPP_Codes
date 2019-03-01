#include "Person.h"
Person::Person()
{
	nic=new MyString;
	nic=nullptr;
	name=new MyString;
	name=nullptr;
	Dob=new DataOfBirth;
	Dob=nullptr;
	property=nullptr;
	address=nullptr;
}
/*void Person::operator=(const Person &obj) 
{
	nic=new MyString(obj.nic);
	name=new MyString(obj.name);
	//Dob=new DataOfBirth(obj.);
}*/
Person::Person(char*car=nullptr,char*N=nullptr,int d=0,int m=0,int y=0)//,Property *p=nullptr,Address *a=nullptr)
{
	nic=new MyString(N);
	name=new MyString(car);
	Dob=new DataOfBirth(d,m,y);

}
void Person::aggrigation (Address* ad,Property*pt)
{
	address=ad;
	property=pt;
}
Person::Person(Property *p)
{
	property=p;
}
Person::Person(Address *a)
{
	address=a;
}
void Person::set_nic(char*card)
{
	nic->set_string(card);
}
void Person::set_name(char*N)
{
	nic->set_string(N);
}
void Person::set_dob_day(int D)
{
	Dob->set_day(D);
}
void Person::set_dob_month(int M)
{
	Dob->set_month(M);
}
void Person::set_dob_year(int y)
{
	Dob->set_year(y);
}
/*void Person::set_Add_city(char*c)
{
	address->set_name_C(c);
}
void Person::set_Add_province(char*p)
{
	address->set_name_P(p);
}
void Person::set_Add_lane(int l)
{
	address->set_laneNo(l);
}
void Person::set_Add_hno(int hno)
{
	address->set_Hno(hno);
}
void Person::set_Pro_city(char*c)
{
	property->set_A_name_C(c);
}
void Person::set_Pro_name(char*n)
{
	property->set_A_name_N(n);
}*/
char* Person::get_nic()const
{
	return nic->get_string();
}
char* Person::get_name()const
{
	return name->get_string();
}
int Person::get_DOB_day()
{
	return Dob->get_day();
}
int Person::get_DOB_month()
{
	return Dob->get_month();
}
int Person::get_DOB_year()
{
	return Dob->get_year();
}
/*int Person::get_add_lane()
{
	return address->get_lane_no();
}
int Person::get_add_hno()
{
	return address->get_house_no();
}
const char* Person::get_pro_city()
{
	return property->get_A_name_C();
}
const char* Person::get_pro_name()
{
	return	property->get_A_name_N(); 
}
const char* Person::get_add_city()
{
	return address->get_name_C();
}
const char* Person::get_add_province()
{
	return address->get_name_P();
}*/
Person::~Person(void)
{
	delete nic;
	delete name;
	delete Dob;
}
