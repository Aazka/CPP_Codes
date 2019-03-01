#pragma once
#include"Address.h"
#include"DataOfBirth.h"
#include"MyString.h"
#include"Property.h"
class Person
{
private:
	MyString *nic;
	MyString *name;
protected:
	DataOfBirth *Dob;
public:
	Property *property;
	Address *address;
	Person();
	void aggrigation (Address*,Property*);
	void operator=( const Person&);
	Person(char*,char*,int,int,int);//,Property *,Address *);
	Person(Property *p);
	Person(Address *a);
	void set_nic(char*);
	void set_name(char*);
	void set_dob_day(int);
	void set_dob_month(int);
	void set_dob_year(int);
	//void set_Pro_city(char*);
	//void set_Pro_name(char*);
	//void set_pro_lane(int);
	//void set_pro_hno(int);

	//void set_Add_city(char*);
	//void set_Add_province(char*);
	//void set_Add_lane(int);
	//void set_Add_hno(int);

	char* get_nic()const;
	char* get_name()const;
	int get_DOB_day();
	int get_DOB_month();
	int get_DOB_year();
	//const char* get_pro_city();
	//const char* get_pro_name();
	//int get_pro_lane();
	//int get_prob_hno();

	//const char* get_add_city();
	//const char* get_add_province();
	//int get_add_lane();
	//int get_add_hno();
	~Person(void);
};

