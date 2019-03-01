#pragma once
#include"Door.h"
#include"Wall.h"
#include"Window.h"
#include"Person.h"
#include"Room.h"
class Hotel
{
	Room R[20];
	//static int room_counter;
	void Check_in();
	void Check_out();
public:
	Hotel(void);
	void Assosiate(Person &);
	void Add_Room_Specification(char*,double,char*,int,int,int,int);//parametriz constructor
	void View_Room_Specification(int);
	void update_Room(char*,double,char*,int,int,int,char*,char*,double,int,int);
	void Check_Room();
	void Display_empty();
	void Display();
	void Delete_Room_Specification();
	~Hotel(void);
};

