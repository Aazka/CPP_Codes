#include "Room.h"


Room::Room(void)
{
	Wall();
	Door();
	Window();
	Person();
}
Room::Room(char *Wll_colour=nullptr,double Wll_height=0,char*Dr_marterial=nullptr,int Dr_length=0,int Wind_length=0,int Wind_Num=0,int no=0)//char *NIC=nullptr,char*Naam=nullptr,double cont=0
{
	Wll.set_W_color(Wll_colour);
	Wll.set_W_height(Wll_height);
	Dr.set_length(Dr_length);
	Dr.set_material(Dr_marterial);
	Windw.set_H_window(Wind_length);
	Windw.set_num_window(Wind_Num);
	if(no>0 ||no<=4)
	{
		/*P.set_contact_person(cont);
		P.set_name_person(Naam);
		P.set_nic_person(NIC);*/
		P.set_no_people(no);
	}
	/*Wll=new Wall(Wll_colour,Wll_height);
	Dr=new Door(Dr_length,Dr_marterial);
	Windw=new Window(Wind_length,Wind_height);
	if(no>0 ||no<=4)
	{
	   P=new Person(Naam,NIC,cont,no);
	}*/
}
void Room::set_person_no(int n)
{
	P.set_no_people(n);
}
int Room::get_person_no()
{
	return P.get_no_people();
}
void Room::set_person_name(char*N)
{
	P.set_name_person(N);
}
void Room::set_person_cnic(char*nic)
{
	P.set_nic_person(nic);
}
void Room::set_person_PH(double ph)
{
	P.set_contact_person(ph);
}

char*Room::get_person_name()const
{
	return P.get_name_person();
}
char*Room::get_person_cnic()const
{
	return P.get_nic_peron();
}
double Room::get_person_PH()
{
	return P.get_contact_person();
}
Room::Room(const Room&obj)
{
	//double d=obj.Wll.get_height_of_wall();
	/*Wll.set_W_color(obj.Wll.get_Wall_color());
	Wll.set_W_height(obj.Wll.get_height_of_wall());
	Dr.set_length(obj.Dr.get_length());
	Dr.set_material(obj.Dr.get_material());
	Windw.set_H_window(obj.Windw.get_H_window());
	Windw.set_num_window(obj.Windw.get_num_window());
	P.set_contact_person(obj.P.get_contact_person());
	P.set_name_person(obj.P.get_name_person());
	P.set_nic_person(obj.P.get_nic_peron());
	P.set_no_people(obj.P.get_no_people());*/
	/*Wll=new Wall(obj.Wll->get_Wall_color(),obj.Wll->get_height_of_wall());
	Dr=new Door(obj.Dr->get_length(),obj.Dr->get_material());
	Windw=new Window(obj.Windw->get_num_window(),obj.Windw->get_num_window());
	P=new Person(obj.P->get_name_person(),obj.P->get_nic_peron(),obj.P->get_contact_person(),0);*/
}
void Room::set_Room_wall_color(char*C)
{
	Wll.set_W_color(C);
}
void Room::set_Room_wall_height(double H)
{
	Wll.set_W_height(H);
}
void Room::set_Room_Door_material(char *M)
{
	Dr.set_material(M);
}
void Room::set_Room_Door_length(int l)
{
	Dr.set_length(l);
}
void Room::set_Room_Window_Num(int w)
{
	Windw.set_num_window(w);
}
void Room::set_Room_Window_height(double d)
{
	Windw.set_H_window(d);
}

char*Room::get_Room_wall_color()const
{
	return Wll.get_Wall_color();
}
double Room::get_Room_wall_height()
{
	return Wll.get_height_of_wall();
}
char* Room::get_Room_Door_material()
{
	return Dr.get_material();
}
int Room::get_Room_Door_length()
{
	return Dr.get_length();
}
int Room::get_Room_window_no()
{
	return Windw.get_num_window();
}
double Room::get_Room_window_height()
{
	return Windw.get_H_window();
}
Room::~Room(void)
{
}
