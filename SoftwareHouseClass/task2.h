#include<iostream>
using namespace std;
class NextBridgeEmployee
{
	char *name;
	char *address;
	char *phone_no;
	char *level;
	int experience;
	double current_salary;
	double increment;
public:
	NextBridgeEmployee(void);
	NextBridgeEmployee(NextBridgeEmployee const&);
	NextBridgeEmployee(char*,char*,char*,char*,int,double,double);
	void set_name(char*);
	void set_increment(double);
	void set_address(char*);
	void set_phone_no(char*);
	void set_level(char*);
	void set_experience(int);
	void set_current_salary(double);
	const char* get_name();
	const char* get_address();
	const char* get_phone_no();
	const char* get_level();
	int get_experience();
	double get_current_salary();
	double get_inc();
	double increment_through_experience();
	void display();
	void display(NextBridgeEmployee const&);
	~NextBridgeEmployee(void);
};

