#include "salon.h"
salon::salon(void)
{
	B=new Beautician;
	//B1=new Beautician;
	C=nullptr;
	M=new Manager;
	//M1=new Manager;
}
salon::salon(int id=0,char*n=nullptr,int date_of_birth=0,char g=NULL,int C_NO=0,int sal=0,int passcode=0,char*typ=nullptr)
{
	B=new Beautician(id,n,date_of_birth,g,C_NO,sal,passcode,typ);
	M=new Manager(id,n,date_of_birth,g,C_NO,sal,passcode,typ);
	//M1=new Manager(id,n,date_of_birth,g,C_NO,sal,passcode,typ);
	//B1=new Beautician(id,n,date_of_birth,g,C_NO,sal,passcode,typ);
}
void salon::use_clint_info(Client C)
{
	cout<<C.get_contect()<<endl;
	cout<<C.get_dob()<<endl;
	cout<<C.get_locker()<<endl;
	cout<<C.get_member_ship()<<endl;
	cout<<C.get_name()<<endl;
}

salon::~salon(void)
{
//	delete B;
	//delete B1;
//	delete M;
	//delete M1;
}
