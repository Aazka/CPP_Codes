#pragma once
#include"User.h"
#include"Reader.h"
class Librarian:public User
{
	int fine;
public:
	Librarian(void);
	//void operator=(const Librarian&);
	Librarian(char*,int);
	void issue_status();
	void calculate_fine();
//	void payment();
	~Librarian(void);
};

