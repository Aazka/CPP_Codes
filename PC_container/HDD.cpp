#include "HDD.h"
#include "string.h"

HDD::HDD()
{
	model = new char[100];
	model = nullptr;
	RPM = 100;
	capacity = 5000;
	buffer = 2;
}
HDD::HDD(char *m, int rate, int cap, int buff)
{
	int l = strlen(m);
	model = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		model[i] = m[i];
	}
	model[l] = '\0';
	RPM = rate;
	capacity = cap;
	buffer = buff;
}
HDD::HDD(HDD &obj)
{
	int l = strlen(obj.model);
	model = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		model[i] = obj.model[i];
	}
	model[l] = '\0';
	RPM = obj.RPM;
	capacity = obj.capacity;
	buffer = obj.buffer;
}
void HDD::set_model(char *m)
{
	int l = strlen(m);
	model = new char(l + 1);
	for (int i = 0; i < l; i++)
	{
		model[i] = m[i];
	}
	model[l] = '\0';
}
void HDD::set_RPM(int rate)
{
	RPM = rate;
}
void HDD::set_capacity(int c)
{
	capacity = c;
}
void HDD::set_buffer(int b)
{
	buffer = b;
}
const char *HDD::get_model()
{
	return model;
}
int HDD::get_RPM()
{
	return RPM;
}
int HDD::get_capacity()
{
	return capacity;
}
int HDD::get_buffer()
{
	return buffer;
}
HDD::~HDD()
{
	delete[] model;
}