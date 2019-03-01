#include "MyString.h"
#include "string.h"

MyString::MyString()
{
	str =new char[50];
	str=nullptr;
}
MyString::MyString(char *s=nullptr)
{
	int l=strlen(s);
	str=new char[l+1];
	for(int i=0;i<l;i++)
	{
		str[i]=s[i];
	}
	str[l]='\0';
}
void MyString::operator=(const MyString &obj)
{
	int l=strlen(obj.str);
	str=new char[l+1];
	for(int i=0;i<l;i++)
	{
		str[i]=obj.str[i];
	}
	str[l]='\0';
}
MyString::MyString(const MyString &obj)
{
	int l=strlen(obj.str);
	str=new char[l+1];
	for(int i=0;i<l;i++)
	{
		str[i]=obj.str[i];
	}
	str[l]='\0';
}
void MyString::set_string(char*s)
{
	int l=strlen(s);
	str=new char[l+1];
	for(int i=0;i<l;i++)
	{
		str[i]=s[i];
	}
	str[l]='\0';

}
char* MyString::get_string()const
{
	return str;
}
MyString::~MyString(void)
{
	delete[]str;
}
