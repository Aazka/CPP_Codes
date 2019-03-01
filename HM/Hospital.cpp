#include "Hospital.h"
#include<string>
#include<fstream>
ofstream fout4("PatientsDate.txt",ios::app);
ifstream fin4("PatientsDate.txt",ios::in);

ofstream out("StaffINFO.txt",ios::app);
ifstream fin5("StaffINFO.txt",ios::in);
int Hospital::count=0;
Hospital::Hospital(void)
{
	name=new char;
	name=nullptr;
	for(int i=0;i<11;i++)
	{
		pno[i]=0;
	}
}
Hospital::Hospital(char*n,int ph[11])
{
	int len=strlen(n);
	char *name=new char[len+1];
	for(int i=0;i<len;i++)
	{
		name[i]=n[i];
	}
	name[len]='\0';
	for(int i=0;i<11;i++)
	{
		pno[i]=ph[i];
	}
}
void Hospital::patient_Data_enter(Patients *p)
{
//	p=P;
	fout4<<p->getFname();
	fout4<<p->getlname();
	//dmy
	fout4<<p->get_gender();
	//pno
	fout4<<p->get_sickness();
	fout4<<p->get_roomNo();
	fout4<<p->get_id();
}
/*void Hospital::Staff_data_enter(Staff *s)
{
	//S=s;
	out<<s->getFname();
	out<<s->getlname();
	//DMY
	out<<s->get_gender();
	//pno
	out<<s->get_qualification();
	//return true;
}*/
void Hospital::get_input(Patients P[10])
{
	string f;
	string l;
	int dmy[3];
	char g;
	int pno[11];
	int room;
	int ID;
	char* sick=new char[100];
	for(int i=0;i<10;i++)
	{
		fin4>>f;
		P[i].set_fname(f);
		fin4>>l;
		P[i].set_lname(l);
		fin4>>dmy[0];
		fin4>>dmy[1];
		fin4>>dmy[2];
		P[i].set_DOB(dmy);
		fin4>>g;
		int a=0;
		P[i].set_gender(g);
		for(int j=0;j<11;j++)
		{
			//pno[0]=a;
			fin4>>a;
			pno[j]=j;
		}
//		P[i].set_pno(pno);
		fin4>>sick;
		P[i].set_sickness(sick);
		room=count;
		P[i].set_room(room);
		ID=count;
		P[i].set_ID(ID);
		count++;
	}
}
/*void Hospital::get_input_of_staff(Staff S[10])
{
	string f; string l; int dmy[3]; char g; int pno[11]; char*Quali=new char[100]; int jd; int jm; int jy; string special; string loc; int dno; string Dname;
	int id;
	for(int i=0;i<10;i++)
	{
		fin5>>id;
		fin5>>f;
		S[i].set_fname(f);
		fin5>>l;
		S[i].set_lname(l);
		fin5>>dmy[0];
		fin5>>dmy[1];
		fin5>>dmy[2];
		S[i].set_DOB(dmy);
		fin5>>g;
		int a=0;
		S[i].set_gender(g);
		fin5>>Quali;
		S[i].set_qualification(Quali);
	}
}*/
int Hospital::patient_search_data(Patients &P1,string N)//Patients P1
{
	       if (P1.getFname() == N)
			{
				return 1;
			}
		   else
			   return 0;
	/*int I=P1.get_id();
	if(I==id)
	{
		return 1;
	}
	else 
		return 0;*/
}
 

Hospital::~Hospital(void)
{
}
/*Patients Hospital::patient_search_data(char*N)
{
	/*char fn[100];
	fin4>>fn;
	while(!fin4.eof())
	{
		fin4>>fn;
		for(int i=0;;i++)
		{
			if(fn[i]!=N[i])
			{
				break;
			}
		}
	}

}*/