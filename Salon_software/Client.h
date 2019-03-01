#include<iostream>
using namespace std;
class Client
{
	char *name;
	int contact_no;
	int DOB;
	const int d_of_m;
	char *membership;
	char locker;
public:
	Client(void);
	Client(char*,int,int,int,char*,char);
	Client(Client&);
	
	void operator=(Client&);
	void set_name(char*);
	void set_contact_no(int);
	void set_date_of_birth(int);
	void set_member_ship(char*);
	void set_locker(char);

	const char *get_name();
	int get_contect();
	int get_dob();
	const char *get_member_ship();
	char get_locker();

	~Client(void);
};

