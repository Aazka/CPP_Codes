#include "t3.h"
#include "string.h"

Pizza_Hutt::Pizza_Hutt(void)
{
	Pizza_type=nullptr;
	size=nullptr;
	pepperoins=0;
	extra_topping=0;
}
Pizza_Hutt::Pizza_Hutt(char *P_Z=nullptr,char *S=nullptr,double P=0,bool ex_top=0)
{
	int len=strlen(P_Z);
	Pizza_type=new char[len+1];
	for(int i=0;i<len;i++)
	{
		Pizza_type[i]=P_Z[i];
	}
	Pizza_type[len]='\0';

	len=strlen(S);
	size=new char[len+1];
	for(int i=0;i<len;i++)
	{
		size[i]=S[i];
	}
	size[len]='\0';
	this->pepperoins=P;
	this->extra_topping=ex_top;
}
Pizza_Hutt::Pizza_Hutt(Pizza_Hutt &const obj)
{
	int len=strlen(obj.Pizza_type);
	Pizza_type=new char[len+1];
	for(int i=0;i<len;i++)
	{
		Pizza_type[i]=obj.Pizza_type[i];
	}
	Pizza_type[len]='\0';

	len=strlen(obj.size);
	size=new char[len+1];
	for(int i=0;i<len;i++)
	{
		size[i]=obj.size[i];
	}
	size[len]='\0';
	pepperoins=obj.pepperoins;
	extra_topping=obj.extra_topping;

}
void Pizza_Hutt::set_Pizza_type(char *P_H)
{
	int len=strlen(P_H);
	Pizza_type=new char[len+1];
	for(int i=0;i<len;i++)
	{
		Pizza_type[i]=P_H[i];
	}
	Pizza_type[len]='\0';
}
void Pizza_Hutt::set_size(char *S)
{
	int len=strlen(S);
	size=new char[len+1];
	for(int i=0;i<len;i++)
	{
		size[i]=S[i];
	}
	size[len]='\0';
}
void Pizza_Hutt::set_pepperoins(double P)
{
	pepperoins=P;
}
void Pizza_Hutt::set_extra_topping(bool ex_top)
{
	extra_topping=ex_top;
}
const char *Pizza_Hutt::get_Pizza_type()
{
	return Pizza_type;
}
const char *Pizza_Hutt::get_size()
{
	return size;
}
double Pizza_Hutt::get_pepperoins()
{
	return pepperoins;
}
bool Pizza_Hutt::get_extra_topping()
{
	return extra_topping;
}
void Pizza_Hutt::display()
{
	cout<<"this Pizza is of"<<' '<<get_size()<<' '<<"size ,"<<get_Pizza_type()<<' '<<"with"<<' '<<get_extra_topping()<<"extra topping of cheez :P "<<' '<<"and having"<<' '<<get_pepperoins()<<' '<<"pepperoins"<<endl;
}
double Pizza_Hutt::Cost_of_pizza()
{
	double total=0;
	if(size=="small" && extra_topping==1)
	{
		total=10+2+0.25*get_pepperoins();
		return total;
	}
	else if(extra_topping==0)
	{
		total=10+0.25*get_pepperoins();
		return total;
	}
	else if(size=="medium"&&extra_topping==1)
	{
		total=14+4+0.5*get_pepperoins();
		return total;
	}
	else if(extra_topping==0)
	{
		total=14+0.5*get_pepperoins();
		return total;
	}
	else if(size=="large"&&extra_topping==1)
	{
		total=17+6+1*get_pepperoins();
		return total;
	}
	else
	{
		total=17+1*get_pepperoins();
		return total;
	}
}
/*Small pizza (any type) = $10 + $2 for extra topping + $0.25 * no. of pepperonis 
Medium pizza (any type) = $14 + $4 for extra topping + $0.5 * no. of pepperonis 
Large pizza (any type) = $17 + $6 for extra topping + $1 * no. of pepperonis*/ 
Pizza_Hutt::~Pizza_Hutt(void)
{
	delete []Pizza_type;
	delete []size;
}
