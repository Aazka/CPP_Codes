#include "task1.h"
#include "string.h"

cat::cat()
{
	cout << "defult" <<endl;
	C_name = nullptr;
	Owner = nullptr;
	weight = 0;
}
cat::cat(char*name, char*owner_name, double w)
{
	cout << "parametrize" << endl;
	int len = strlen(name);
	C_name = new char[len+1];
	for (int i = 0; i < len; i++)
	{
		C_name[i] = name[i];
	}
	C_name[len] = '\0';

	int l = strlen(owner_name);
	Owner = new char[l+1];
	for (int i = 0; i < l; i++)
	{
		Owner[i] = owner_name[i];
	}
	Owner[l] = '\0';
	weight = w;
}
cat::cat(const cat &obj1)
{
	cout << "copy constructor" << endl;
	int len = strlen(C_name);
	for (int i = 0; i < len; i++)
	{
		C_name[i]=obj1.C_name[i];
	}
	obj1.C_name[len] = '\0';

	int l = strlen(Owner);
	for (int i = 0; i < l; i++)
	{
		Owner[i]=obj1.Owner[i];
	}
	obj1.Owner[l] = '\0';
	weight=obj1.weight;
}
const char* cat::Cat_name()
{
	return C_name;
}

const char* cat::Owner_name()
{
	return Owner;
}
double cat::weight_get()
{
	return weight;
}
void cat::set_name(char* N)
{
	int len = strlen(N);
	C_name = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		 C_name[i]=N[i];
	}
	C_name[len] = '\0';
}
void cat::set_owner(char* O)
{
	int l = strlen(O);
	Owner = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		 Owner[i]=O[i] ;
	}
	Owner[l] = '\0';
}
void cat::change(char* O)
{
	set_owner(O);
}
void cat::set_weight(double w)
{
	 weight=w;
}
void cat::display()
{
	cout << Cat_name() << endl;
	cout << Owner_name() << endl;
	cout << weight_get()<<endl;
}
cat::~cat()
{
	cout << "destructor" << endl;
	delete C_name;
	delete Owner;
}