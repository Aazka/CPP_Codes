#include<iostream>
using namespace std;
class Student
{
	char *lname;
	char *fname;
public:
	Student();
	Student(char*,char*);
	Student(Student&);
	static int get_count();
	 void set_Lname(char*);
	 void set_F_name(char*);
	 const char *get_fn();
	 const char *get_ln();
	~Student();
};