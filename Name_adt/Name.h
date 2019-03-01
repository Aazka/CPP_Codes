#pragma once
#include<iostream>
using namespace std;
class Name{
	private:
	char* firstName;
	char* lastName;
	//int check_digit_symbol(char);
	public:
	Name(char* ,char*);
	Name(const Name&);
	void set_fname(char*);
	void set_lname(char*);
	const char* get_fname();
	const char* get_lname();
	void operator=(Name&);
	~Name();
    void copyName(Name&);
	void camelCase();
	void toLower();
	void toUpper();
	int nameLength();
	void swapNames();
	void display();
	char* fullName();//concatenate both attributes and return full name with a space in between both
	bool isValidName();// name should contain only alphabets - no special characters or digits
	// other relevant methods you want; do not forget operator =
//setters/getters
};
