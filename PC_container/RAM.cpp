#include "RAM.h"
#include "string"

RAM::RAM()
{
	frequency = 100;
	model = new char[100];
	model = nullptr;
	space = 100;
	technology = new char[100]; 
	technology = nullptr;
}
RAM::RAM(char* m, int fre, float sp, char* tech)
{
	int l = strlen(m);
	model = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		model[i] = m[i];
	}
	model[l] = '\0';
	l = strlen(tech);
	for (int i = 0; i < l; i++)
	{
		technology[i] = tech[i];
	}
	technology[l] = '\0';
	frequency = fre;
	space = sp;
}
RAM::RAM(RAM &obj)
{
	int l = strlen(obj.model);
	model = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		model[i] = obj.model[i];
	}
	model[l] = '\0';
	l = strlen(obj.technology);
	for (int i = 0; i < l; i++)
	{
		technology[i] = obj.technology[i];
	}
	technology[l] = '\0';
	frequency = obj.frequency;
	space = obj.space;
}
void RAM::set_fre(int f)
{
	frequency = f;
}
void RAM::set_model(char *m)
{
	int l = strlen(m);
	for (int i = 0; i < l; i++)
	{
		model[i] = m[i];
	}
	model[l] = '\0';
}
void RAM::set_space(float sp)
{
	space = sp;
}
void RAM::set_tech(char *tech)
{
	int l = strlen(tech);
	for (int i = 0; i < l; i++)
	{
		technology[i] = tech[i];
	}
	technology[l] = '\0';
}
const char *RAM::get_model()
{
	return model;
}
const char *RAM::get_tech()
{
	return technology;
}
int RAM::get_fre()
{
	return frequency;
}
float RAM::get_sp()
{
	return space;
}
RAM::~RAM()
{
	delete[]model;
	delete[]technology;
}
