#include "Door.h"
#include "string.h"

Door::Door()
{
	length=0;
	//=0;
	material=new char[100];
	material=nullptr;
	//color=new char[100];
	//color=nullptr;
}
Door::Door(int len=0,char* M=nullptr)
{
	length=len;
	//width=wid;
	int l=strlen(M);
	material=new char[l+1];
	for(int i=0;i<l;i++)
	{
		material[i]=M[i];
	}
	material[l]='\0';
}
Door::Door(const Door &obj)
{
	length=obj.length;
	//width=obj.width;
	int l=strlen(obj.material);
	material=new char[l+1];
	for(int i=0;i<l;i++)
	{
		material[i]=obj.material[i];
	}
	material[l]='\0';
}
void Door::set_length(int l)
{
	length=l;
}
/*void Door::set_width(int w)
{
	width=w;
}*/
void Door::set_material(char *M)
{
	int l=strlen(M);
	material=new char[l+1];
	for(int i=0;i<l;i++)
	{
		material[i]=M[i];
	}
	material[l]='\0';
}
/*void Door::set_color(char *C)
{
	int l=strlen(C);
	color=new char[l+1];
	for(int i=0;i<l;i++)
	{
		color[i]=C[i];
	}
	color[l]='\0';
}*/
int Door::get_length()
{
	return length;
}
/*int Door::get_width()
{
	return width;
}*/
char* Door::get_material()const
{
	return material;
}
/*char *Door::get_color() const
{
	return color;
}*/
Door::~Door(void)
{
	delete[]material;
	//delete [] color;
}
