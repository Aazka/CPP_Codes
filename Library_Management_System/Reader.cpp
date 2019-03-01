#include "Reader.h"

static int i=0;
Reader::Reader(void)
{
}
Reader::Reader(char*n,int card):User(n,card)
{
	/*int l=strlen(n);
	name=new char[l+1];
	for(int i=0;i<l;i++)
	{
		name[i]=na[i];
	}
	name[l]='\0';
	*/
}
void Reader::borrow()
{
	cout<<"reader is borrowing"<<' '<<B->get_title();
	i++;
}
void Reader::Read_Book()
{
		cout<<"reader is reading "<<' '<<B->get_title();
}
int Reader::get_I()
{
	return i;
}
Reader::~Reader(void)
{
}
