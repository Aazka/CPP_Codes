#include "Package.h"
#include "string.h"
Package::Package(void)
{
	name=new char[100];
	name=nullptr;
	address=new char[100];
	address=nullptr;
	city=new char[100];
	city=nullptr;
	state=new char[100];
	state=nullptr;
	ZIPcode=0;
	weight=0;
	cost=0;
}
Package::Package(char *n=nullptr,char *add=nullptr,char *c=nullptr,char*s=nullptr,int code=0,float w=0,float cst=0)
{
	int l=strlen(n);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=n[i];
	}
	name[l]='\0';
	l=strlen(add);
	address=new char[l+1];
	for(int i=0;i<l;i++)
	{
		address[i]=add[i];
	}
	address[l]='\0';
	l=strlen(c);
	city=new char[l+1];
	for(int i=0;i<l;i++)
	{
		city[i]=c[i];
	}
	city[l]='\0';
	l=strlen(s);
	state=new char[l+1];
	for(int i=0;i<l;i++)
	{
		state[i]=s[i];
	}
	state[l]='\0';
	ZIPcode=code;
	weight=w;
	cost=cst;
}
void Package::set_name(char*n)
{
	int l=strlen(n);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=n[i];
	}
	name[l]='\0';
	
}
void Package::set_address(char *add)
{
	int l=strlen(add);
	address=new char[l+1];
	for(int i=0;i<l;i++)
	{
		address[i]=add[i];
	}
	address[l]='\0';
}
void Package::set_city(char*c)
{
	int l=strlen(c);
	city=new char[l+1];
	for(int i=0;i<l;i++)
	{
		city[i]=c[i];
	}
	city[l]='\0';
}
void Package::set_state(char*s)
{
	int l=strlen(s);
	state=new char[l+1];
	for(int i=0;i<l;i++)
	{
		state[i]=s[i];
	}
	state[l]='\0';
}
void Package::set_code(int c)
{
	ZIPcode=c;
}
void Package::set_cost(float cst)
{
	cost=cst;
}
void Package::set_weight(float w)
{
	weight=w;
}
const char*Package:: get_name()
{
	return name;
}
const char*Package:: get_address()
{
	return address;
}
const char*Package:: get_city()
{
	return city;
}
const char* Package::get_state()
{
	return state;
}
int Package:: get_code()
{
	return ZIPcode;
}
float Package::get_weight()
{
	return weight;
}
float Package::get_cost()
{
	return cost;
}
Package::~Package(void)
{
	delete[]name;
	delete[]address;
	delete[]city;
	delete[]state;
}
