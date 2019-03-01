#pragma once
#include"Door.h"
#include"Wall.h"
#include"Window.h"
#include"Person.h"
class Room
{
	Door Dr;
	Wall Wll;
	Window Windw;
	Person P;
public:
	Room(void);
	Room(char*,double,char*,int,int,int,int);//char*,char*,double,
	Room(const Room&);
	void set_Room_wall_color(char*);
	void set_Room_wall_height(double);
	void set_Room_Door_material(char*);
	void set_Room_Door_length(int);
	void set_Room_Window_Num(int);
	void set_Room_Window_height(double);
	void set_person_no(int);
	void set_person_name(char*);
	void set_person_cnic(char*);
	void set_person_PH(double);

	char*get_person_name()const;
	char*get_person_cnic()const;
	double get_person_PH();
	int get_person_no();
	char*get_Room_wall_color()const;
	double get_Room_wall_height();
	char* get_Room_Door_material();
	int get_Room_Door_length();
	int get_Room_window_no();
	double get_Room_window_height();

	~Room(void);
};

