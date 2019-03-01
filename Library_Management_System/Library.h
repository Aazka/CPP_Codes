#pragma once
#include"Librarian.h"
#include"Library_Book.h"
#include"Reader.h"
class Library
{
	Librarian *L;
	Library_Book *B[2];
	Reader *R[2];
public:
	Library(void);
	Library(Library_Book *B1[2],Reader *R1[2]);
	void Print();
	~Library(void);
};

