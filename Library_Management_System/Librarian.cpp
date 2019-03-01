#include "Librarian.h"


Librarian::Librarian(void):User()
{
	fine=5;
}
Librarian::Librarian(char*n,int id):User(n,id)
{
	fine=5;
}
void Librarian::issue_status()
{
	cout<<Reader::get_I()<<"are isuues";
}
void Librarian::calculate_fine()
{
	cout<<Reader::get_I()*fine<<' '<<"are the fine"<<endl;
}
Librarian::~Librarian(void)
{
}
