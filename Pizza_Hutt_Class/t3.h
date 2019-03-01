#include<iostream>
using namespace std;

class Pizza_Hutt
{
	char *Pizza_type;//pan,deep_dish or hand_tossed
	char *size;//small,medium,large
	double pepperoins;
	bool extra_topping;
public:
	Pizza_Hutt(void);
	Pizza_Hutt(char*,char*,double,bool);
	Pizza_Hutt(Pizza_Hutt &const);
	void set_Pizza_type(char*);
	void set_size(char*);
	void set_pepperoins(double);
	void set_extra_topping(bool);
	const char *get_Pizza_type();
	const char *get_size();
	double get_pepperoins();
	bool get_extra_topping();
	void display();
	double Cost_of_pizza();
	~Pizza_Hutt(void);
};

