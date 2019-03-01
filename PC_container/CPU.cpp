#include "CPU.h"
CPU::CPU()
{
	frequency = 100;
	model = new char[100];
	model = nullptr;
	serial_no = 0;
}
CPU::CPU(char *m, int f, int sno)
{
	int l = strlen(m);
	model = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		model[i] = m[i];
	}
	model[l] = '\0';
	frequency = f;
	serial_no = sno;
}
CPU::CPU(CPU&obj)
{
	int l = strlen(obj.model);
	model = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		model[i] = obj.model[i];
	}
	model[l] = '\0';
	frequency = obj.frequency;
	serial_no = obj.serial_no;
}
void CPU::set_fre(int f)
{
	frequency = f;
}
void CPU::set_model(char *m)
{
	int l = strlen(m);
	for (int i = 0; i < l; i++)
	{
		model[i] = m[i];
	}
	model[l] = '\0';
}
void CPU::set_serial_no(int s)
{
	serial_no = s;
}
const char *CPU::get_model()
{
	return model;
}
int CPU::get_fre()
{
	return frequency;
}
int CPU::get_s_no()
{
	return serial_no;
}
CPU::~CPU()
{
	delete[]model;
}
