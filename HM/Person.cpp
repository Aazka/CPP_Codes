#include "Person.h"
#include<string>
#include<fstream>
ofstream fout("PatientsDate.txt",ios::app);
ifstream fin("PatientsDate.txt",ios::in);
ofstream fo2("StaffINFO.txt",ios::app);
ifstream fi2("StaffINFO.txt",ios::in);

Person::Person(void)
{	
}
Person::Person(string f, string l, int dmy[3], char g, int pno[11],int a)
{

//	int l1=strlen(f);
//	fname=new char[l1+1];
//	for(int i=0;i<l1;i++)
//	{
//		fname[i]=f[i];
//	//	fout<<fname[i];
//	}
//	fname[l1]='\0';
//	fout<<' ';
//	l1=strlen(l);
//	lname=new char[l1+1];
//	for(int i=0;i<l1;i++)
//	{
//		lname[i]=l[i];
////		fout<<lname[i];
//	}
//	lname[l1]='\0';
//	fout<<fname<<' ';
//	fout<<lname<<' ';
	if(a==1)
	{
	fname = f;
	fout<<f<<' ';
	lname = l;
	fout<<l<<' ';
	DOB[0]=dmy[0];
	DOB[1]=dmy[1];
	DOB[2]=dmy[2];
	fout<<DOB[0]<<"-"<<DOB[1]<<"-"<<DOB[2]<<' ';
	gender=g;
	fout<<gender<<' ';
	for(int i=0;i<11;i++)
	{
		phoneNo[i]=pno[i];
		fout<<phoneNo[i];
	}
	fout<<' ';
	}
	else 
	{
		fname = f;
		fout<<f<<' ';
	lname = l;
	fout<<l<<' ';
	DOB[0]=dmy[0];
	DOB[1]=dmy[1];
	DOB[2]=dmy[2];
	fo2<<DOB[0]<<"-"<<DOB[1]<<"-"<<DOB[2]<<' ';
	gender=g;
	fo2<<gender<<' ';
	for(int i=0;i<11;i++)
	{
		phoneNo[i]=pno[i];
		fo2<<phoneNo[i];
	}
	fo2<<' ';
	
	}
}
void Person::set_fname(string  fn)
{
	fname = fn;
	fout<<fn<<' ';
//	fout<<' ';
	/*char *first=new char[100];
	int l=strlen(fname);
	while(!fin.eof())
	{
		for(int i=0;i<l;i++)
		{
			fin>>first;
			if(first[i]!=fname[i])
			{
				break;
			}
		}
	}
	int l1=strlen(f);
	fname=new char[l1+1];
	for(int i=0;i<l1;i++)
	{
		fname[i]=f[i];
		first[i]=fname[i];
	}
	fname[l1]='\0';
	first[l1]='\0';
	fout<<first;*/
}
void Person::set_lname(string l)
{
	lname = l;
	fout<<l<<' ';
	//fout<<' ';
	/*char *first=new char[100];
	int l1=strlen(lname);
	while(!fin.eof())
	{
		for(int i=0;i<l1;i++)
		{
			fin>>first;
			if(first[i]!=lname[i])
			{
				break;
			}
		}
	}
	l1=strlen(l);
	fname=new char[l1+1];
	for(int i=0;i<l1;i++)
	{
		lname[i]=l[i];
		first[i]=lname[i];
	}
	lname[l1]='\0';
	first[l1]='\0';
	fout<<first;*/
/*	int l1=strlen(l);
	lname=new char[l1+1];
	for(int i=0;i<l1;i++)
	{
		lname[i]=l[i];
	}
	lname[l1]='\0';
*/}
void Person::set_DOB(int dmy[3])
{
	for(int i=0;i<3;i++)
	{
		DOB[i]=dmy[i];
		fout<<DOB[i]<<' ';
	}
	fout<<' ';
}
void Person::set_gender(char g)
{
	gender=g;
	fout<<gender<<' ';
}
void Person::set_pno(int pno[11])
{
	for(int i=0;i<11;i++)
	{
		phoneNo[i]=pno[i];
		fout<<phoneNo[i];
	}
	fout<<' ';
}
string  Person::getFname()const
{
	return fname;
}
string Person::getlname()const
{
	return lname;
}
void Person::get_dislay_dob()
{
	for(int i=0;i<3;i++)
	{
		cout<<DOB[i]<<' ';
	}
	cout<<endl;
}
/*int Person::get_pno()
{
	
	for(int i=0;i<11;i++)
	{
		cout<<phoneNo[i];
	}
}*/
char Person::get_gender()
{
	return gender;
}
void Person::person_display()
{
	cout<<"First name :"<<fname<<' ';
	cout<<"Last name:"<<lname<<' ';
	cout<<"Date of birth "<<DOB[0]<<"/"<<DOB[1]<<"/"<<DOB[2]<<' ';
	cout<<"Gender :"<<gender<<' ';
	//cout<<"Phone No : "<<phoneNo<<' ';
}

Person::~Person(void)
{
	/*delete fname;
	delete lname;*/
}
