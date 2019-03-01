#include "Hotel.h"

static int room_counter=-1;
Hotel::Hotel(void)
{
	Room();
	room_counter=-1;
}
void Hotel::Assosiate(Person &P)
{
	R[room_counter].set_person_cnic(P.get_nic_peron());
	R[room_counter].set_person_name(P.get_name_person());
	R[room_counter].set_person_PH(P.get_contact_person());
}
void Hotel::Check_in()
{
	room_counter++;
}
void Hotel::Check_out()
{
	room_counter--;
}
void Hotel::Add_Room_Specification(char *Wll_colour=nullptr,double Wll_height=0,char*Dr_marterial=nullptr,int Dr_length=0,int Wind_length=0,int Wind_Num=0,int no_people=0)//,int no_of_in=0)
{
	Check_in();
	R[room_counter].set_Room_wall_color(Wll_colour);
	R[room_counter].set_Room_wall_height(Wll_height);
	R[room_counter].set_Room_Door_material(Dr_marterial);
	R[room_counter].set_Room_Door_length(Dr_length);
	R[room_counter].set_Room_Window_height(Wind_length);
	R[room_counter].set_Room_Window_Num(Wind_Num);
	R[room_counter].set_person_no(no_people);
}
void Hotel::View_Room_Specification(int i)
{
	cout<<"num_of_person()"<<endl;
	cout<<R[i].get_person_no()<<endl;
	cout<<"Room_Door_length()"<<endl;
	cout<<R[i].get_Room_Door_length()<<endl;
	cout<<"get_Room_Door_material()"<<endl;	
	cout<<R[i].get_Room_Door_material()<<endl;
	cout<<"get_Room_wall_color()"<<endl;
	cout<<R[i].get_Room_wall_color()<<endl;
	cout<<"get_Room_wall_height()"<<endl;
	cout<<R[i].get_Room_wall_height()<<endl;
	cout<<"get_Room_window_height()"<<endl;
	cout<<R[i].get_Room_window_height()<<endl;
	cout<<"get_Room_window_no()"<<endl;
	cout<<R[i].get_Room_window_no()<<endl;
}
void Hotel::update_Room(char*Wll_colour=nullptr,double Wll_height=0,char*Dr_marterial=nullptr,int Dr_length=0,int Wind_length=0,int Wind_Num=0,char*N=nullptr,char*nic=nullptr,double cont=0,int no_people=0,int i=0)
{
	R[i].set_Room_wall_color(Wll_colour);
	R[i].set_Room_wall_height(Wll_height);
	R[i].set_Room_Door_material(Dr_marterial);
	R[i].set_Room_Door_length(Dr_length);
	R[i].set_Room_Window_height(Wind_length);
	R[i].set_Room_Window_Num(Wind_Num);
	R[i].set_person_no(no_people);
	R[i].set_person_cnic(nic);
	R[i].set_person_name(N);
	R[i].set_person_PH(cont);
}
void Hotel::Check_Room()
{
	for(int i=0;i<20;i++)
	{
		if(R[i].get_person_name()==nullptr)
		{
			cout<<"room is empty"<<endl;
		}
		else
		{
			cout<<R[i].get_person_name()<<endl;
		}
	}
}
void Hotel::Display_empty()
{
	for(int i=0;i<20;i++)
	{
		if(R[i].get_person_name()==nullptr)
		{
			cout<<"Room"<<' '<<i<<"is empty";
		}
	}
}
void Hotel::Display()
{
	for(int i=0;i<20;i++)
	{
		if(R[i].get_person_name()==nullptr)
		{
			cout<<"Room"<<' '<<i<<"is empty"<<endl;
		}
		else
		{
	cout<<"peoples in room are"<<R[i].get_person_name()<<endl;
	cout<<"num_of_person()"<<endl;
	cout<<R[i].get_person_no()<<endl;
	cout<<"Room_Door_length()"<<endl;
	cout<<R[i].get_Room_Door_length()<<endl;
	cout<<"get_Room_Door_material()"<<endl;	
	cout<<R[i].get_Room_Door_material()<<endl;
	cout<<"get_Room_wall_color()"<<endl;
	cout<<R[i].get_Room_wall_color()<<endl;
	cout<<"get_Room_wall_height()"<<endl;
	cout<<R[i].get_Room_wall_height()<<endl;
	cout<<"get_Room_window_height()"<<endl;
	cout<<R[i].get_Room_window_height()<<endl;
	cout<<"get_Room_window_no()"<<endl;
	cout<<R[i].get_Room_window_no()<<endl;
	}
	}
}
void Hotel::Delete_Room_Specification()
{
	Check_out();
}
Hotel::~Hotel(void)
{
}
