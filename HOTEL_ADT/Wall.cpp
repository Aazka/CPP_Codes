#include "Wall.h"
#include "string.h"

Wall::Wall(void)
{
	wall_color=new char[100];
	wall_color=nullptr;
	height=5;
}
Wall::Wall(char*wall_C=nullptr,double Heigh=0)
{
	int l=strlen(wall_C);
	for(int i=0;i<l;i++)
	{
		wall_color[i]=wall_C[i];
	}
	wall_color[l]='\0';
	if(Heigh<5)
	{
		cout<<"Height_of_wall is not less then 10 foot"<<endl;
		height=5;
	}
	else 
		height=Heigh;
}
Wall::Wall(const Wall&obj)
{
	int l=strlen(obj.wall_color);
	for(int i=0;i<l;i++)
	{
		wall_color[i]=obj.wall_color[i];
	}
	wall_color[l]='\0';
	if(obj.height<10)
	{
		cout<<"Height_of_wall is not less then 10 foot"<<endl;
		height=12;
	}
	else 
		height=obj.height;
}
void Wall::set_W_color(char*wall_C)
{
	int l=strlen(wall_C);
	wall_color=new char[l+1];
	for(int i=0;i<l;i++)
	{
		wall_color[i]=wall_C[i];
	}
	wall_color[l]='\0';
}
void Wall::set_W_height(double H)
{
	if(H<5)
	{
		cout<<"Height_of_wall is not less then 10 foot"<<endl;
		height=5;
	}
	else 
		height=H;
}
char* Wall::get_Wall_color()const
{
	return wall_color;
}
double Wall::get_height_of_wall()
{
	return height;
}
Wall::~Wall(void)
{
}
