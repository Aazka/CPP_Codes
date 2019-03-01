#pragma once
#include<iostream>
using namespace std;
class User
{
	char *name;
	int ID;
public:
	User(void);
	User(char*,int);
	char *get_name()const;
	int get_id();
	void set_name(char*);
	void set_id(int);
	~User(void);
};

