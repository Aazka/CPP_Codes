#include "Student.h"
#include"string.h"
static int objectCount=0;
Student::Student()
{
	lname = new char[100];
	lname = nullptr;
	fname = new char[100];
	fname = nullptr;
	objectCount++;
}
Student::Student(char *fn, char *ln)
{
	int l = strlen(fn);
	fname = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		fname[i] = fn[i];
	}
	fname[l] = '\0';
	l = strlen(ln);
	lname = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		lname[i] = ln[i];
	}
	lname[l] = '\0';
	objectCount++;
}
Student::Student(Student&obj)
{
	int l = strlen(obj.fname);
	 fname= new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		fname[i] = obj.fname[i];
	}
	fname[l] = '\0';
	l = strlen(obj.lname);
	lname = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		lname[i] = obj.lname[i];
	}
	lname[l] = '\0';
	objectCount++;
}
 int Student::get_count()
{
	return objectCount;
}
 void Student::set_F_name(char *fn)
 {
	 int l = strlen(fn);
	 fname = new char[l + 1];
	 for (int i = 0; i < l; i++)
	 {
		 fname[i] = fn[i];
	 }
	 fname[l] = '\0';
 }
 void Student::set_Lname(char *ln)
 {
	int l = strlen(ln);
	 lname = new char[l + 1];
	 for (int i = 0; i < l; i++)
	 {
		 lname[i] = ln[i];
	 }
	 lname[l] = '\0';
 }
 const char* Student::get_fn()
 {
	 return fname;
 }
 const char* Student::get_ln()
 {
	 return lname;
 }
Student::~Student()
{
	objectCount--;
	delete[]fname;
	delete[]lname;
}
