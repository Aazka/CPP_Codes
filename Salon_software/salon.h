#include"Beautician.h"
#include"Client.h"
#include"Manager.h"
#include<iostream>
using namespace std;
class salon
{
	Beautician *B;
	//Beautician *B1;
	Client *C;
	Manager *M;
	//Manager *M1;
public:
	salon(void);
	salon(int,char*,int,char,int,int,int,char*);
	void use_clint_info(Client);
	/*void set_Beautician_name(char*);
	void set_MAnager_name(char*);
	void set_Beautician_DOB(int);
	void set_MAnager_DOB(int);*/
	~salon(void);
};

