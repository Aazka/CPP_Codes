#include "User.h"
#include"string.h"

User::User(void)
{
	name=new char[20];
	name=nullptr;
	ID=0;
}
User::User(char*n,int id)
{
	int l=strlen(n);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=n[i];
	}
	name[l]='\0';
	ID=id;
}
void User::set_name(char*n)
{
		int l=strlen(n);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=n[i];
	}
	name[l]='\0';

}
void User::set_id(int id)
{
	ID=id;
}
char* User::get_name()const
{
	return name;
}
int User::get_id()
{
	return ID;
}
User::~User(void)
{
}
