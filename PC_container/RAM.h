#include<iostream>
using namespace std;
class RAM
{
	int frequency;
	char *model;
	float space;
	char *technology;
public:
	RAM();
	RAM(char*,int,float,char*);
	RAM(RAM &);
	void set_fre(int);
	void set_model(char*);
	void set_space(float);
	void set_tech(char*);
	const char *get_model();
	const char *get_tech();
	int get_fre();
	float get_sp();
	~RAM();
};