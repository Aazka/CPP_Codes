#include<iostream>
using namespace std;
#include<string>
#include"Person.h"
#include"Patients.h"
#include "Administrative_staff.h"
#include "Department.h"
#include "Doctor.h"
#include "Front_Desk_staff.h"
#include "Hospital.h"
#include "NURSE.h"
#include "Operation_Staff.h"
#include "Receptionist.h"
#include "Staff.h"
#include "Surgeon.h"
#include "Technical_staff.h"
#include "Technician.h"
#include "Technologist.h"
int main()
{
	cout<<"                                        HOSPITAL MANAGEMENT SYSYTEM  "<<endl;     
	/*int dmy[3];
	dmy[0]=2;
	dmy[1]=3;
	dmy[2]=2015;
	int pno[11];
	for(int i=0;i<11;i++)
	{
		pno[i]=i;
	}
	Patients P[20];
	for(int i=0;i<2;i++)
	{
		P[i].set_fname("ahmed");
		P[i].set_lname("asad");
		P[i].set_DOB(dmy);
		P[i].set_gender('M');
		P[i].set_pno(pno);
		P[i].set_sickness("khassi");
		P[i].set_room(i);
		P[i].set_ID(i);
		P[i].display();
	}*/
	Patients P1[10];
	Hospital H;
	H.get_input(P1);
	for(int i=0;i<10;i++)
	{
		//P1[i].display();
	}
	
		cout<<"1:Patient Data enter"<<endl;//done
		cout<<"2:Patient Data view "<<endl;//done
		cout<<"3:patient Data delete"<<endl;
		cout<<"4:patient Data Update "<<endl;
		cout<<"5:patient data Search "<<endl;//done
		cout<<"6:Staff Data view "<<endl;
		cout<<"7:Staff Data delete"<<endl;
	    cout<<"8:Staff  Data enter "<<endl;//done		
	//	cout<<"9:Staff Data Update"<<endl;
	//	cout<<"10:staff Data Search"<<endl;
		cout<<"9: Exist "<<endl;

	int A=0;
	cin>>A;
	//Patients P[11];
	string f; 
	string l; 
	int dmy[3]; 
	char g; 
	char*sick;
	sick=new char[100];
	int room=0; 
	int ID;
	int count = 0;
	int Dcount = 0;
	int Scount = 0;
	int Ncount = 0;
	int Rcount = 0;
	int T1count = 0;
	int T2count = 0;
	/*Staff S1[10];
	H.get_input_of_staff(S1);
	for(int i=0;i<10;i++)
	{
		S1[i].staff_Display();
	}*/
	Doctor *D[10];//=new Doctor();
	Surgeon *S[10];
	NURSE *N[10];
	Receptionist *R[10];
	Technician *T1[10];
	Technologist *T2[10];
		if(A==1)
		{
			system("cls");
			cout<<"1:Patient Data enter"<<endl;
			cout << "Enter Patient First Name" << endl;
			cin >> f;
			cout << "Enter Patient Last Name" << endl;
			cin >> l;
			cout << "Patient Date of Birth" << endl;
			cout << "Enter Day" << endl;
			cin >> dmy[0];
			cout << "Enter Month" << endl;
			cin >> dmy[1];
			cout << "Enter Year" << endl;
			cin >> dmy[2];

			cout << "Enter gender" << endl;
			cin >> g;

			cout << "enter ID" << endl;
			cin >> ID;
			cout << "sickness" << endl;
			cin >> sick;

			//P[count] = new Patients();
			P1[count].set_fname(f);
			P1[count].set_lname(l);
			P1[count].set_DOB(dmy);
			P1[count].set_gender(g);
			//P[count]->set_pno(pno);
			P1[count].set_sickness(sick);
			P1[count].set_ID(ID);
			P1[count].set_room(room);

			P1[count].display();
			count++;

		}
		else if (A == 2)
		{
			system("cls");
			string N;
			int x = 0;
			cout << "Patient Data view " << endl;
			cout << "Enter patient Name" << endl;
			cin >> N;
			for(int i=0;i<10;i++)
			{
			if(H.patient_search_data(P1[i],N)==1)
			{
				P1[i].display();
				break;
			}
			}
		}
		else if (A == 3)
		{
			cout << "patient Data delete" << endl;
			system("cls");
			string N;
			int x = 0;
			cout << "Enter patient Name" << endl;
			cin >> N;
			for(int i=0;i<10;i++)
			if (H.patient_search_data(P1[i],N))
			{
				cout<<"deleted"<<endl;
//				delete [i]P1;
				break;
				
			}

		}
		else if (A == 4)
		{
			cout << "patient Data Update " << endl;
			system("cls");
			string N;
			int x = 0;
			cout << "Enter patient Name" << endl;
			cin >> N;
			for (int i = 0; i < 10; i++)
			{
				if (P1[x].getFname() == N)
					break;
				x++;
			}
			cout << "enter attribute update " << endl;
			cout << "1:Enter Patient First Name" << endl;	
			cout << "2:Enter Patient Last Name" << endl;
			cout << "3:Patient Date of Birth" << endl;
			cout << "4:Enter gender" << endl;
			cout << "5:enter ID" << endl;
			cout << "6:sickness" << endl;
			int j = 0;
			cin >> j;
			if (j == 1)
			{
				cout << "Enter Patient First Name" << endl;
				cin >> f;
				P1[x].set_fname(f);
			}
			else if (j == 2)
			{
				cout << "Enter Patient Last Name" << endl;
				cin >> l;
				P1[x].set_lname(l);
			}
			else if (j == 3)
			{
				cout << "Patient Date of Birth" << endl;
				cout << "Enter Day" << endl;
				cin >> dmy[0];
				cout << "Enter Month" << endl;
				cin >> dmy[1];
				cout << "Enter Year" << endl;
				cin >> dmy[2];
				P1[x].set_DOB(dmy);
			}
			else if (j == 4)
			{
				cout << "Enter gender" << endl;
				cin >> g;
				P1[x].set_gender(g);
			}
				
			else if (j == 5)
			{
				cout << "enter ID" << endl;
				cin >> ID;
				P1[x].set_ID(ID);
			}
			else if (j == 6)
			{
				cout << "sickness" << endl;
				cin >> sick;
				P1[x].set_sickness(sick);
			}	
		}
			else if (A == 6)
			{
				//system("cls");
				cout << "Staff Data view " << endl;
				cout << "1:Doctor" << endl;
				cout << "2:Surgeon" << endl;
				cout << "3:Nurse" << endl;
				cout << "4:Receptionis" << endl;
				cout << "5:Technician" << endl;
				cout << "6:Technongist" << endl;
				int z = 0;
				cin >> z;
				string G;
				if (z == 1)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i=0; i < 10; i++)//Dcount
					{
						if (D[i]->getFname() == G)
						{
							D[i]->Display();
						}
					}
					cout << "Data not exists" << endl;

				}
				else if (z == 2)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i=0; i < Scount; i++)
					{
						if (S[i]->getFname() == G)
						{
							S[i]->Display();
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 3)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i=0; i < Ncount; i++)
					{
						if (N[i]->getFname() == G)
						{
							//N[i].display();
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 4)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i=0; i < Rcount; i++)
					{
						if (R[i]->getFname() == G)
						{
							N[i]->display();
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 5)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i=0; i < T1count; i++)
					{
						if (T1[i]->getFname() == G)
						{
							//N[i]->Display();
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 6)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i=0; i < T2count; i++)
					{
						if (T2[i]->getFname() == G)
						{
							//N[i]->Display();
						}
					}
					cout << "Data not exists" << endl;
				}
			}
			else if (A == 7)
			{
				cout << "Staff Data delete" << endl;
				cout << "1:Doctor" << endl;
				cout << "2:Surgeon" << endl;
				cout << "3:Nurse" << endl;
				cout << "4:Receptionis" << endl;
				cout << "5:Technician" << endl;
				cout << "6:Technongist" << endl;
				int z = 0;
				cin >> z;
				string G;
				if (z == 1)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i = 0; i < Dcount; i++)
					{
						if (D[i]->getFname() == G)
						{
							delete D[i];
						}
					}
					cout << "Data not exists" << endl;

				}
				else if (z == 2)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i = 0; i < Scount; i++)
					{
						if (S[i]->getFname() == G)
						{
							delete S[i];
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 3)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i = 0; i < Ncount; i++)
					{
						if (N[i]->getFname() == G)
						{
							delete N[i];
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 4)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i = 0; i < Rcount; i++)
					{
						if (R[i]->getFname() == G)
						{
							N[i]->display();
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 5)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i = 0; i < T1count; i++)
					{
						if (T1[i]->getFname() == G)
						{
							N[i]->display();
						}
					}
					cout << "Data not exists" << endl;
				}
				else if (z == 6)
				{
					cout << "Enter Name" << endl;
					cin >> G;
					for (int i = 0; i < T2count; i++)
					{
						if (T2[i]->getFname() == G)
						{
							//N[i]->Display();
						}
					}
					cout << "Data not exists" << endl;
				}
			}
			
		else if (A == 8)
		{
			system("cls");
			int b = 0;
			cout << "Staff  Data enter " << endl;
			cout << "1: Operation staff" << endl;
			cout << "2: Administrative staff" << endl;
			cout << "3: Technical staff" << endl;
            
			cin >> b;
			if (b == 1)
			{
				system("cls");
				int c = 0;
				cout << "1: Doctor" << endl;
				cout << "2: Nurse" << endl;

				cin >> c;
				if (c = 1)
				{
					system("cls");
					int d = 0;
					cout << "1:Simple Doctor" << endl;
					cout << "2:Surgeon " << endl;
					cin >> d;
					if (d == 1)
					{
						system("cls");
						cout << "1:Simple Doctor" << endl;

						string f; string l; int dmy[3]; char g; int pno[11]; char*Quali=new char[100]; int jd; int jm; int jy; string special; string loc; int dno; string Dname;
						cout << "Enter first Name " << endl;
						cin >> f;
						cout << "Enter Last Name " << endl;
						cin >> l;

						cout << "Enter first Name " << endl;
						cin >> f;

						cout << "Date of Birth" << endl;
						cout << "Enter Day" << endl;
						cin >> dmy[0];
						cout << "Enter Month" << endl;
						cin >> dmy[1];
						cout << "Enter Year" << endl;
						cin >> dmy[2];

						cout << "Enter gender" << endl;
						cin >> g;

						cout << "Enter Qualification" << endl;
						cin >> Quali;

						cout << "Date of Joining" << endl;
						cout << "Enter Day" << endl;
						cin >> jd;
						cout << "Enter Month" << endl;
						cin >> jm;
						cout << "Enter Year" << endl;
						cin >> jy;

						cout << "Specilist" << endl;
						cin >> special;
						cout << "Loction Room Number" << endl;
						cin >> loc;
						cout << "Dno" << endl;
						cin >> dno;
						cout << "DName" << endl;
						cin >> Dname;

						
						D[Dcount]->set_fname(f);
						D[Dcount]->set_lname(l);
						D[Dcount]->set_DOB(dmy);
						D[Dcount]->set_gender(g);
						D[Dcount]->set_qualification(Quali);
						Dcount++;
						

                    }
					else if (d == 2)
					{
						system("cls");
						cout << "2:Surgeon " << endl;
						string f; string l; int dmy[3]; char g; int pno[11]; char*Quali=new char[100]; int jd; int jm; int jy; string special; string loc; int dno; string Dname;
						cout << "Enter first Name " << endl;
						cin >> f;
						cout << "Enter Last Name " << endl;
						cin >> l;

						cout << "Enter first Name " << endl;
						cin >> f;

						cout << "Date of Birth" << endl;
						cout << "Enter Day" << endl;
						cin >> dmy[0];
						cout << "Enter Month" << endl;
						cin >> dmy[1];
						cout << "Enter Year" << endl;
						cin >> dmy[2];

						cout << "Enter gender" << endl;
						cin >> g;

						cout << "Enter Qualification" << endl;
						cin >> Quali;

						cout << "Date of Joining" << endl;
						cout << "Enter Day" << endl;
						cin >> jd;
						cout << "Enter Month" << endl;
						cin >> jm;
						cout << "Enter Year" << endl;
						cin >> jy;

						cout << "Specilist" << endl;
						cin >> special;
						cout << "Loction Room Number" << endl;
						cin >> loc;
						cout << "Dno" << endl;
						cin >> dno;
						cout << "DName" << endl;
						cin >> Dname;
						
						S[Scount]->set_fname(f);
						S[Scount]->set_lname(l);
						S[Scount]->set_DOB(dmy);
						S[Scount]->set_gender(g);
						//S[Scount]->set_qualification(Quali);
						Scount++;


					}
					else if (c == 2)
					{
						system("cls");
						cout << "2: Nurse" << endl;

						string f; string l; int dmy[3]; char g; int pno[11]; char*Quali=new char[100]; int jd; int jm; int jy; string special; string loc; int dno; string Dname;
						cout << "Enter first Name " << endl;
						cin >> f;
						cout << "Enter Last Name " << endl;
						cin >> l;

						cout << "Enter first Name " << endl;
						cin >> f;

						cout << "Date of Birth" << endl;
						cout << "Enter Day" << endl;
						cin >> dmy[0];
						cout << "Enter Month" << endl;
						cin >> dmy[1];
						cout << "Enter Year" << endl;
						cin >> dmy[2];

						cout << "Enter gender" << endl;
						cin >> g;

						cout << "Enter Qualification" << endl;
						cin >> Quali;

						cout << "Date of Joining" << endl;
						cout << "Enter Day" << endl;
						cin >> jd;
						cout << "Enter Month" << endl;
						cin >> jm;
						cout << "Enter Year" << endl;
						cin >> jy;

						cout << "Specilist" << endl;
						cin >> special;
						cout << "Loction Room Number" << endl;
						cin >> loc;
						cout << "Dno" << endl;
						cin >> dno;
						cout << "DName" << endl;
						cin >> Dname;

						
						N[Ncount]->set_fname(f);
						N[Ncount]->set_lname(l);
						N[Ncount]->set_DOB(dmy);
						N[Ncount]->set_gender(g);
						//N[Ncount]->set_qualification(Quali);
						Ncount++;
					}
				}

				else if (b == 2)
				{
					system("cls");
					cout << "2: Administrative staff" << endl;
					cout << "Receptionist" << endl;

					string f; string l; int dmy[3]; char g; int pno[11]; char*Quali = new char[100]; int jd; int jm; int jy; string special; string loc; int dno; string Dname;
					cout << "Enter first Name " << endl;
					cin >> f;
					cout << "Enter Last Name " << endl;
					cin >> l;

					cout << "Enter first Name " << endl;
					cin >> f;

					cout << "Date of Birth" << endl;
					cout << "Enter Day" << endl;
					cin >> dmy[0];
					cout << "Enter Month" << endl;
					cin >> dmy[1];
					cout << "Enter Year" << endl;
					cin >> dmy[2];

					cout << "Enter gender" << endl;
					cin >> g;

					cout << "Enter Qualification" << endl;
					cin >> Quali;

					cout << "Date of Joining" << endl;
					cout << "Enter Day" << endl;
					cin >> jd;
					cout << "Enter Month" << endl;
					cin >> jm;
					cout << "Enter Year" << endl;
					cin >> jy;
					cout << "Specilist" << endl;
					cin >> special;
					cout << "Loction Room Number" << endl;
					cin >> loc;
					cout << "Dno" << endl;
					cin >> dno;
					cout << "DName" << endl;
					cin >> Dname;

					
					R[Rcount]->set_fname(f);
					R[Rcount]->set_lname(l);
					R[Rcount]->set_DOB(dmy);
					R[Rcount]->set_gender(g);
					//N[Ncount]->set_qualification(Quali);
					Rcount++;


				}
				else if (b == 3)
				{
					system("cls");
					cout << "Technical staff" << endl;
					cout << "1:Technician " << endl;
					cout << "2:Technologist" << endl;
					int t = 0;
					cin >> t;
					if (t == 1)
					{
						system("cls");
						cout << "1:Technician " << endl;
						string f; string l; int dmy[3]; char g; int pno[11]; char*Quali = new char[100]; int jd; int jm; int jy; string special; string loc; int dno; string Dname;
						cout << "Enter first Name " << endl;
						cin >> f;
						cout << "Enter Last Name " << endl;
						cin >> l;

						cout << "Enter first Name " << endl;
						cin >> f;

						cout << "Date of Birth" << endl;
						cout << "Enter Day" << endl;
						cin >> dmy[0];
						cout << "Enter Month" << endl;
						cin >> dmy[1];
						cout << "Enter Year" << endl;
						cin >> dmy[2];

						cout << "Enter gender" << endl;
						cin >> g;

						cout << "Enter Qualification" << endl;
						cin >> Quali;

						cout << "Date of Joining" << endl;
						cout << "Enter Day" << endl;
						cin >> jd;
						cout << "Enter Month" << endl;
						cin >> jm;
						cout << "Enter Year" << endl;
						cin >> jy;
						cout << "Specilist" << endl;
						cin >> special;
						cout << "Loction Room Number" << endl;
						cin >> loc;
						cout << "Dno" << endl;
						cin >> dno;
						cout << "DName" << endl;
						cin >> Dname;

						
						T1[T1count]->set_fname(f);
						T1[T1count]->set_lname(l);
						T1[T1count]->set_DOB(dmy);
						T1[T1count]->set_gender(g);
						//N[Ncount]->set_qualification(Quali);
						T1count++;


					}
					else if (t == 2)
					{
						system("cls");
						cout << "2:Technologist" << endl;
						string f; string l; int dmy[3]; char g; int pno[11]; char*Quali = new char[100]; int jd; int jm; int jy; string special; string loc; int dno; string Dname;
						cout << "Enter first Name " << endl;
						cin >> f;
						cout << "Enter Last Name " << endl;
						cin >> l;

						cout << "Enter first Name " << endl;
						cin >> f;

						cout << "Date of Birth" << endl;
						cout << "Enter Day" << endl;
						cin >> dmy[0];
						cout << "Enter Month" << endl;
						cin >> dmy[1];
						cout << "Enter Year" << endl;
						cin >> dmy[2];

						cout << "Enter gender" << endl;
						cin >> g;

						cout << "Enter Qualification" << endl;
						cin >> Quali;

						cout << "Date of Joining" << endl;
						cout << "Enter Day" << endl;
						cin >> jd;
						cout << "Enter Month" << endl;
						cin >> jm;
						cout << "Enter Year" << endl;
						cin >> jy;
						cout << "Specilist" << endl;
						cin >> special;
						cout << "Loction Room Number" << endl;
						cin >> loc;
						cout << "Dno" << endl;
						cin >> dno;
						cout << "DName" << endl;
						cin >> Dname;

						
						T2[T2count]->set_fname(f);
						T2[T2count]->set_lname(l);
						T2[T2count]->set_DOB(dmy);
						T2[T2count]->set_gender(g);
						//N[Ncount]->set_qualification(Quali);
						T2count++;
					}

				}
			}
		
		
  		system("pause");
		}
		}