#include "Library.h"


Library::Library(void)
{
}
Library::Library(Library_Book *B1[2],Reader *R1[2])
{
	for(int i=0;i<2;i++)
	{
		B[i]=B1[i];
	}
	for(int i=0;i<2;i++)
	{
		R[i]=R1[i];
	}
	L=new Librarian();
}
void Library::Print()
{
	for(int i=0;i<2;i++)
	{
		cout<<R[i]->get_id()<<endl;
		cout<<B[i]->get_title()<<endl;
		cout<<R[i]->get_I()<<"are issue no"<<endl;
		cout<<R[i]->get_name()<<endl;
		cout<<B[i]->get_author()<<"the author name"<<endl;
	}
}
Library::~Library(void)
{
}
