#include "Library_Book.h"
#include"string.h"

Library_Book::Library_Book(void)
{
	title=new char[20];
	title=nullptr;
	author=new char[20];
	author=nullptr;
	ID=0;
}
Library_Book::Library_Book(char*T,char*A,int id)
{
	int l=strlen(T);
	title=new char[l+1];
	for(int i=0;i<l;i++)
	{
		title[i]=T[i];
	}
	title[l]='\0';
	l=strlen(A);
	author=new char[l+1];
	for(int i=0;i<l;i++)
	{
		author[i]=A[i];
	}
	author[l]='\0';
	ID=id;
}
void Library_Book::set_author(char*A)
{
	int l=strlen(A);
	author=new char[l+1];
	for(int i=0;i<l;i++)
	{
		author[i]=A[i];
	}
	author[l]='\0';
}
void Library_Book::set_title(char*T)
{
	int l=strlen(T);
	title=new char[l+1];
	for(int i=0;i<l;i++)
	{
		title[i]=T[i];
	}
	title[l]='\0';
}
void Library_Book::set_ID(int id)
{
	ID=id;
}
char* Library_Book::get_author()const
{
	return author;
}
char*Library_Book::get_title()const
{
	return title;
}
int Library_Book::get_ID()
{
	return ID;
}
Library_Book::~Library_Book(void)
{
	delete title;
	delete author;
}
