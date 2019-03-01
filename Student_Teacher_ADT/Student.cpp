#include "Student.h"


Student::Student():Person()
{
	SID=new MyString;
    SID=nullptr;
	gpa=0;
	semeter=0;
}
Student::Student(char*n=nullptr,char*card=nullptr,int d=0,int m=0,int y=0,char*id=nullptr,double g=0,int s=0):Person(n,card,d,m,y)//,nullptr,nullptr)
{
	SID=new MyString(id);
	gpa=g;
	semeter=s;
}
/*Student::Student(const Student&obj)
{
	//SID->set_string(obj.SID);
	SID=new MyString(obj.SID);
	gpa=obj.gpa;
	semeter=obj.semeter;
}*/
void Student::set_SID(char*Id)
{
	SID->set_string(Id);
}
void Student::set_gpa(double g)
{
	gpa=g;
}
char* Student::get_SID()const
{
	return SID->get_string();
}
double Student::get_gpa()
{
	return gpa;
}
Student::~Student(void)
{
	delete SID;
}
