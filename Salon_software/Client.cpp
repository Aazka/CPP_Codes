#include "Client.h"
#include "string.h"

Client::Client(char *n=nullptr,int C_NO=0,int date_of_birth=0,int joining=0,char *memship=nullptr,char L=NULL):d_of_m(joining)
{
	int l = strlen(n);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = n[i];
	}
	name[l] = '\0';
	contact_no=C_NO;
	DOB=date_of_birth;
	
	 l = strlen(memship);
	membership = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		membership[i] = memship[i];
	}
	membership[l] = '\0';
	locker=L;
}
Client::Client(Client &obj):d_of_m(obj.d_of_m)
{
	int l = strlen(obj.name);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = obj.name[i];
	}
	name[l] = '\0';
	contact_no=obj.contact_no;
	DOB=obj.DOB;
	
	 l = strlen(obj.membership);
	membership = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		membership[i] = obj.membership[i];
	}
	membership[l] = '\0';
	locker=obj.locker;
}
void Client::operator=(Client &obj)//:d_of_m(obj.d_of_m)
{
	int l = strlen(obj.name);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = obj.name[i];
	}
	name[l] = '\0';
	contact_no=obj.contact_no;
	DOB=obj.DOB;
	
	l = strlen(obj.membership);
	membership = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		membership[i] = obj.membership[i];
	}
	membership[l] = '\0';
	locker=obj.locker;
}


void Client::set_name(char*n)
{
	int l = strlen(n);
	name = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		name[i] = n[i];
	}
	name[l] = '\0';
}
void Client::set_contact_no(int c)
{
	contact_no=c;
}
void Client::set_date_of_birth(int dob)
{
	DOB=dob;
}
void Client::set_member_ship(char *member)
{
	membership=member;
}
void Client::set_locker(char C)
{
	locker=C;
}
const char* Client::get_name()
{
	return name;
}
int Client:: get_contect()
{
	return contact_no;
}
int Client::get_dob()
{
	return DOB;
}
const char* Client::get_member_ship()
{
	return membership;
}
char Client::get_locker()
{
	return locker;
}
Client::~Client(void)
{
//	delete[]name;
	//delete[]membership;
}
