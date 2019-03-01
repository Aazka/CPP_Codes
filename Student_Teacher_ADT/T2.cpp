#include"Address.h"
#include"DataOfBirth.h"
#include"Property.h"
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include<fstream>

void write_on_file(Teacher *T[],Student *S[],int T_size,int S_size)
{
	ofstream fout;
	fout.open("Teacher.txt",ios::app);
	if(!fout.is_open())
	{
		cout<<"file to write teacher.txt is not open"<<endl;
	}
	else
	{
		for(int i=0;i<T_size;i++)
		{
			fout<<T[i]->get_name()<<endl;
			fout<<T[i]->get_nic()<<endl;
			fout<<T[i]->get_salary()<<endl;
			fout<<T[i]->get_tid()<<endl;
			fout<<T[i]->get_leave_avalible()<<endl;
			fout<<T[i]->get_DOB_day()<<' '<<T[i]->get_DOB_month()<<' '<<T[i]->get_DOB_day();
			fout<<T[i]->address->get_name_C()<<endl;
			fout<<T[i]->address->get_name_P()<<endl;
			fout<<T[i]->address->get_lane_no()<<endl;
			fout<<T[i]->address->get_lane_no()<<endl;
			fout<<T[i]->property->get_A_name_C()<<endl;
			fout<<T[i]->property->get_A_number()<<endl;
			/*cout<<T[i]->get_name()<<endl;
			cout<<T[i]->get_nic()<<endl;
			cout<<T[i]->get_salary()<<endl;
			cout<<T[i]->get_tid()<<endl;
			cout<<T[i]->get_leave_avalible()<<endl;
			cout<<T[i]->get_DOB_day()<<' '<<T[i]->get_DOB_month()<<' '<<T[i]->get_DOB_day();
			*/
		}
	}
	ofstream fout1;
	fout1.open("Student.txt",ios::app);
	if(!fout1.is_open())
	{
		cout<<"file to write teacher.txt is not open"<<endl;
	}
	else
	{
		for(int i=0;i<S_size;i++)
		{
			fout<<S[i]->get_name()<<endl;
			fout<<S[i]->get_nic()<<endl;
			fout<<S[i]->get_SID()<<endl;
			fout<<S[i]->get_gpa()<<endl;
			fout<<S[i]->get_DOB_day()<<' '<<S[i]->get_DOB_month()<<' '<<S[i]->get_DOB_year()<<endl;
			fout<<S[i]->address->get_name_C()<<endl;
			fout<<S[i]->address->get_name_P()<<endl;
			fout<<S[i]->address->get_lane_no()<<endl;
			fout<<S[i]->address->get_lane_no()<<endl;
			fout<<S[i]->property->get_A_name_C()<<endl;
			fout<<S[i]->property->get_A_number()<<endl;
		}
	}
}
int main()
{

	Teacher *T[3];
	T[0]=new Teacher("72nic","rizwan",21,8,1982,"28c1",100000,2,5);
	Address A("johar","punjab",23,32);
	Property P("lahore",1);
	T[0]->aggrigation(&A,&P);
	/*T[0]->address->set_name_C("johar");
	T[0]->address->set_name_P("punjab");
	T[0]->address->set_Hno(28);
	T[0]->address->set_laneNo(21);
	T[0]->property->set_A_number(1);
	T[0]->property->set_A_name_C("lahore");
	*/
	T[1]=new Teacher("21nic","ahmed",21,9,1992,"f160223",000000,0,5);
//	T[1]=new Teacher(&S);
	Address A2("johar","punjab",21,3);
	Property P2("lahore",2);
	T[1]->aggrigation(&A2,&P2);
	/*T[1]->address->set_name_C("johar");
	T[1]->address->set_Hno(21);
	T[1]->address->set_name_P("punjab");
	T[1]->address->set_laneNo(21);
	T[1]->property->set_A_number(2);
	T[1]->property->set_A_name_C("lahore");*/
	Address A3("johar","punjab",23,1);
	Property P3("lahore",3);
	T[2]=new Teacher("23nic","Imran_Arshad_CHudhary",12,3,1990,"01CS",1000000,0,5);
	T[2]->aggrigation(&A3,&P3);
	/*T[2]->address->set_name_C("johar");
	T[2]->address->set_name_P("Punjab");
	T[2]->address->set_laneNo(23);
	T[2]->address->set_Hno(01);
	T[2]->property->set_A_number(3);
	T[2]->property->set_A_name_C("lahore");
	*/
	Student *St[2];
	St[0]=new Student("023nic","saad",23,2,1994,"f15027",4,6);
	St[0]->aggrigation(&A,&P2);
	St[1]=new Student("023nic","aazka",27,9,1998,"f16191",4,6);
	St[1]->aggrigation(&A3,&P3);
	write_on_file(T,St,3,2);
}