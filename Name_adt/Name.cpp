#include "Name.h"
#include "string.h"

Name::Name(char* first=nullptr ,char* last=nullptr)
{
	int l=strlen(first);
	firstName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		firstName[i]=first[i];
	}
	firstName[l]='\0';
	l=strlen(last);
	lastName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		lastName[i]=last[i];
	}
	lastName[l]='\0';
}
Name::Name(const Name&obj)
{
	int l=strlen(obj.firstName);
	firstName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		firstName[i]=obj.firstName[i];
	}
	firstName[l]='\0';
	l=strlen(obj.lastName);
	lastName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		lastName[i]=obj.lastName[i];
	}
	lastName[l]='\0';
}
void Name::set_fname(char *first)
{
	int l=strlen(first);
	firstName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		firstName[i]=first[i];
	}
	firstName[l]='\0';	
}
void Name::set_lname(char*last)
{
	int l=strlen(last);
	lastName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		lastName[i]=last[i];
	}
	lastName[l]='\0';
}
const char* Name:: get_fname()
{
	return firstName;
}
const char*  Name::get_lname()
{
	return lastName;
}
void Name::operator=(Name&obj)
{
	int l=strlen(obj.firstName);
	firstName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		firstName[i]=obj.firstName[i];
	}
	firstName[l]='\0';
	l=strlen(obj.lastName);
	lastName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		lastName[i]=obj.lastName[i];
	}
	lastName[l]='\0';
}
void Name::camelCase()
{
	firstName[0]=firstName[0]-32;
	lastName[0]=lastName[0]-32;
}
int check_digit_symbol(char a)
{
	if((a>='A'&&a<='Z')||a>='a'&&a<='z')
	{
		return 1;
	}
	return 0;
}
bool Name::isValidName()
{
	int l=strlen(firstName);
	int l1=strlen(lastName);
	int l3=l+l1;
	for(int i=0;i<l;i++)
	{
		if(check_digit_symbol(firstName[i])==0)
		{
			cout<<"ur name is not valid"<<endl;
			return false;
		}
	}
	for(int i=0;i<l1;i++)
	{
		if(check_digit_symbol(lastName[i])==0)
		{
			cout<<"ur name is not valid"<<endl;
			return false;
		}
	}
	return true;
}
void Name::toLower()
{
	if(!isValidName())
	{
		cout<<"ur name is not valid"<<endl;
	}
	else
	{
		for(int i=0;firstName[i]!='\0';i++)
		{
			firstName[i]=firstName[i]+32;
		}
		for(int i=0;lastName[i]!='\0';i++)
		{
			lastName[i]=lastName[i]+32;
		}
	}
}
void Name::toUpper()
{
	if(!isValidName())
	{
		cout<<"ur name is not valid"<<endl;
	}
	else
	{
		for(int i=0;firstName[i]!='\0';i++)
		{
			firstName[i]=firstName[i]-32;
		}
		for(int i=0;lastName[i]!='\0';i++)
		{
			lastName[i]=lastName[i]-32;
		}
	}
}
int Name::nameLength()
{
	int l=strlen(firstName);
	int l1=strlen(lastName);
	return l+l1;
}
void Name::swapNames()
{
	int l=strlen(firstName);
	int l2=strlen(lastName);
	char *temp=new char[l2+l+1];
	for(int i=0;i<l2;i++)
	{
		temp[i]=firstName[i];
	}
	temp[l]='\0';
	for(int i=0;i<l2;i++)
	{
		firstName[i]=lastName[i];
	}
	firstName[l2]='\0';
	for(int i=0;i<l;i++)
	{
		lastName[i]=temp[i];
	}
	lastName[l]='\0';
}
void Name::display()
{
	cout<<firstName<<' '<<lastName<<endl;
}
char* Name::fullName()
{
	int c=0;
	int l=nameLength();
	char *full=new char[l+2];
	for(int i=0;firstName[i]!='\0';i++)
	{
		full[i]=firstName[i];
		c++;
	}
	full[c]=' ';
	c++;
	for(int i=0;lastName[i]!='\0';i++)
	{
		full[c]=lastName[i];
		c++;
	}
	full[l+1]='\0';
	return full;
}
 void Name::copyName(Name&obj)
 {
	 int l=strlen(obj.firstName);
	firstName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		firstName[i]=obj.firstName[i];
	}
	firstName[l]='\0';
	l=strlen(obj.lastName);
	lastName=new char[l+1];
	for(int i=0;i<l;i++)
	{
		lastName[i]=obj.lastName[i];
	}
	lastName[l]='\0';
 }
Name::~Name(void)
{
	delete[]firstName;
	delete[]lastName;
}
