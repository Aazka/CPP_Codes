#include<iostream>
using namespace std;
class HDD
{
	char *model;
	int RPM;
	int capacity;
	int buffer;
public:
	HDD();
	HDD(char*,int,int,int);
	HDD(HDD &);
	void set_model(char*);
	void set_RPM(int);
	void set_capacity(int);
	void set_buffer(int);
	const char *get_model();
	int get_RPM();
	int get_capacity();
	int get_buffer();
	~HDD();
};