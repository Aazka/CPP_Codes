#include<iostream>
using namespace std;
class cat
{
	char *C_name;
	char *Owner;
	double weight;
public:
	cat();
	cat(char*, char*, double);
	cat(const cat&);
	const char* Cat_name();
	const char* Owner_name();
	double weight_get();
	void set_name(char*);
	void set_owner(char*);
	void set_weight(double);
	void change(char*);
	void display();
	~cat();
};