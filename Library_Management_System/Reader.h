#pragma once
#include"User.h"
#include"Library_Book.h"
class Reader:public User
{
	Library_Book *B;
public:
//	static int i;
	Reader(void);
	Reader(char*,int);
	void borrow();
	//void search_book();
	void Read_Book();
	static int get_I();
	~Reader(void);
};

