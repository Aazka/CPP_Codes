#pragma once
class Manager
{
	const int ID;
	char*name;
	int DOB;
	char gender;
	int cont_no;
	int salary;
	const int security_pass_code;
	char *type;
public:
	Manager();
	Manager(int,char*,int,char,int,int,int,char*);
	Manager(Manager &);
	void operator=(Manager &); 
	void set_name(char*);
	void set_contact_no(int);
	void set_date_of_birth(int);
	void set_gender(char);
	void set_salary(int);
	void set_typ(char*);
	
	const char *get_name();
	int get_contect();
	int get_dob();
	const char *get_type();
	char get_gender();
	int get_salary();
	~Manager(void);
};

