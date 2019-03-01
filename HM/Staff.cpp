#include "Staff.h"
#include"string.h"
#include<fstream>
ofstream fout2("StaffINFO.txt",ios::app);
ifstream fin2("StaffINFO.txt",ios::in);
Staff::Staff(void):Person()
{
	education=new char;
	education=nullptr;
	joiningDate=0;
	joiningMonth=0;
	joiningYear=0;
}

void Staff::set_qualification(char*Quali)
{
	int len=strlen(Quali);
	char *education=new char[len+1];
	for(int i=0;i<len;i++)
	{
		education[i]=Quali[i];
	}
	education[len]='\0';
	fout2<<education<<' ';

}
Staff::Staff(string f, string l, int dmy[3], char g, int pno[11], char*Quali, int jd, int jm, int jy, int dno, string Dname) :Person(f, l, dmy, g, pno,2)//, Department(dno,Dname)
{
	int len=strlen(Quali);
	char *education=new char[len+1];
	for(int i=0;i<len;i++)
	{
		education[i]=Quali[i];
	}
	education[len]='\0';
	fout2<<education<<' ';
	if(jd<1 && jd>31)
	{
		joiningDate=0;
		cout<<"invaild joining date"<<endl;
	}
	else if( jm<1 && jm>12)
	{
		joiningMonth=0;
		cout<<"invaild joining month"<<endl;	
	}
	else if( jy==0)
	{
		joiningYear=0;
		cout<<"invaild joining year"<<endl;	
	}
	else
	{
		joiningDate=jd;
		joiningMonth=jm;
		joiningYear=jy;
		fout2<<joiningDate<<' '<<joiningMonth<<' '<<joiningYear<<' ';
	}
}
void Staff::staff_Display()
{
	cout<<"joining date :"<<joiningDate<<' '<<"joining month :"<<joiningMonth<<' '<<"joining month :"<<joiningYear<<' ';
	cout<<"qualification"<<' '<<education<<' ';
}
Staff::~Staff(void)
{
}
