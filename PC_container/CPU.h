#include<iostream>
using namespace std; 
class CPU
{
	int frequency;
	char *model;
	int serial_no;
public:
	CPU();
	CPU(char*,int,int);
	CPU(CPU&);
	void set_fre(int);
	void set_model(char*);
	void set_serial_no(int);
	const char *get_model();
	int get_fre();
	int get_s_no();
	~CPU();
};
