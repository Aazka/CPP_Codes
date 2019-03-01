#include<iostream>
using namespace std;
class employee
{
	char *name;
	int *code;
	int count;
	int joining_day;
	int joining_month;
	int joining_year;

public:
	employee(void);
	employee(char *n,int n_size,int *co,int size_c,int jd,int jm,int jy);
	void set_name(char *n,int size_n);
	void set_code(int *c,int size_c);
	void set_day(int d);
	void set_month(int m);
	void set_year(int y);
	char get_name();
	int get_code();
	int get_day();
	int get_month();
	int get_year();
	void display();
	int calculate_tenure(int y);
	~employee(void);
};

