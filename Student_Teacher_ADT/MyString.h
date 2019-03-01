#pragma once
#include<iostream>
using namespace std;
class MyString
{
	char *str;
public:
	MyString(void);
	void operator=(const MyString &);
	MyString(const MyString&);
	MyString(char*);
	void set_string(char*);
	char* get_string()const;
	~MyString(void);
};

