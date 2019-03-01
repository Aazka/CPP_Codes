#include "Teacher.h"


Teacher::Teacher():allow_leave(0)
{
	tid=new MyString;
	tid=nullptr;
	salary=0;
	leave_avalible=0;
}
Teacher::Teacher(char *n=nullptr,char *nic=nullptr,int d=0,int m=0,int y=0,char *id=nullptr,double s=0,int l=0,int al=0):allow_leave(al),Person(nic,n,d,m,y)//,nullptr,nullptr)
{
	tid=new MyString(id);
	salary=s;
	leave_avalible=l;
}
Teacher::Teacher(Student *S):allow_leave()
{
	TA=S;
}
void Teacher::set_tid(char* id)
{
	tid->set_string(id);
}
void Teacher::set_salary(double s)
{
	salary=s;
}
void Teacher::set_leave_avalible(int l)
{
	leave_avalible=l;
}
char* Teacher::get_tid()const
{
	return tid->get_string();
}
double Teacher::get_salary()
{
	return salary;
}
int Teacher::get_leave_avalible()
{
	return leave_avalible;
}
Teacher::~Teacher(void)
{
}
