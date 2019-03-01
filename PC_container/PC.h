#include<iostream>
#include"CPU.h"
#include"HDD.h"
#include"RAM.h"
using namespace std;
class PC
{
	CPU C;
	HDD H;
	RAM R;
public:
	PC();
	void set_model_of_HDD(char*);
	void set_RPM_of_HDD(int);
	void set_capacity_of_HDD(int);
	void set_buffer_of_HDD(int);
	void set_frequency_of_RAM(int);
	void set_model_of_RAM(char*);
	void set_space_of_RAM(float);
	void set_tech_of_RAM(char*);
	void set_frequency_of_CPU(int);
	void set_model_of_CPU(char*);
	void set_serial_no_of_CPU(int);
	
	const char *get_model_of_HDD();
	int get_RPM_of_HDD();
	int get_capacity_of_HDD();
	int get_buffer_of_HDD();
	const char *get_model_of_RAM();
	const char *get_tech_of_RAM();
	int get_fre_of_RAM();
	float get_sp_of_RAM();
	const char *get_model_of_CPU();
	int get_fre_of_CPU();
	int get_s_no_of_CPU();
	//PC();
	//~PC();
};