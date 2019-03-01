#include "PC.h"
#include "string.h"
PC::PC()
{
	HDD();
	CPU();
	RAM();
}
void  PC::set_model_of_HDD(char *m)
{
	H.set_model(m);
}
void PC::set_RPM_of_HDD(int r)
{
	H.set_RPM(r);
}
void PC::set_capacity_of_HDD(int c)
{
	H.set_capacity(c);
}
void PC::set_buffer_of_HDD(int b)
{
	H.set_buffer(b);
}
void PC::set_frequency_of_RAM(int f)
{
	R.set_fre(f);
}
void PC::set_model_of_RAM(char *m)
{
	R.set_model(m);
}
void PC::set_space_of_RAM(float s)
{
	R.set_space(s);
}
void PC::set_tech_of_RAM(char* t)
{
	R.set_tech(t);
}
void PC::set_frequency_of_CPU(int f)
{
	C.set_fre(f);
}
void PC::set_model_of_CPU(char *m)
{
	C.set_model(m);
}
void PC::set_serial_no_of_CPU(int s)
{
	C.set_serial_no(s);
}
const char* PC::get_model_of_HDD()
{
	return H.get_model();
}
int PC::get_RPM_of_HDD()
{
	return H.get_RPM();
}
int PC::get_capacity_of_HDD()
{
	return H.get_capacity();
}
int PC::get_buffer_of_HDD()
{
	return H.get_buffer();
}
const char* PC::get_model_of_RAM()
{
	return R.get_model();
}
const char* PC::get_tech_of_RAM()
{
	return R.get_tech();
}
int PC::get_fre_of_RAM()
{
	return R.get_fre();
}
float PC::get_sp_of_RAM()
{
	return R.get_sp();
}
const char* PC::get_model_of_CPU()
{
	return C.get_model();
}
int PC::get_fre_of_CPU()
{
	return C.get_fre();
}
int PC::get_s_no_of_CPU()
{
	return C.get_s_no();
}