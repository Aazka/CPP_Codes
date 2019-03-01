#include "Patients.h"
#include"string.h"
#include<fstream>
ofstream fout1("PatientsDate.txt",ios::app);
ifstream fin1("PatientsDate.txt",ios::in);
Patients::Patients(void):Person()
{
	sickness=new char[100];
	sickness=nullptr;
	roomNo=0;
}
Patients::Patients(string f, string l, int dmy[3], char g, int pno[11], char* sick, int room, int ID) :Person(f, l, dmy, g, pno,1)
{
	int len=strlen(sick);
	char *sickness=new char[len+1];
	for(int i=0;i<len;i++)
	{
		sickness[i]=sick[i];
	}
	sickness[len]='\0';
	fout1<<sickness<<' ';
	roomNo=room;
	fout1<<roomNo<<' ';
	id=ID;
	fout1<<id<<' ';
}
char*Patients::get_sickness()const
{
	return sickness;
}
int Patients::get_id()
{
	return id;
}
int Patients::get_roomNo()
{
	return roomNo;
}
void Patients::set_sickness(char*sick)
{
	int len=strlen(sick);
	char *sickness=new char[len+1];
	for(int i=0;i<len;i++)
	{
		sickness[i]=sick[i];
	}
	sickness[len]='\0';
	fout1<<sickness<<' ';
}
void  Patients::display()
{
	Person::person_display();
	cout<<"Patient ID :"<<id<<' ';
	//cout<<"sickness : "<<sickness<<' ';
	cout<<"Room NO: "<<roomNo<<endl;
}
void Patients::set_ID(int Id)
{
	id = Id;
	fout1<<id<<' ';
}
void Patients::set_room(int RN)
{
	roomNo = RN;
	fout1<<roomNo<<' ';
}
/*void Patients::patient_Data_enter(Patients *p)
{
	//p=P;
	fin1>>p->getFname();
	fin1>>p->getlname();
	//dmy,pno
	fin1>>p->get_gender();
	fin1>>p->get_sickness();

}*/

Patients::~Patients(void)
{
}
