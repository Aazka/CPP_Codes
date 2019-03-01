#include"Name.h"
int main()
{
	cout<<"1.for all small letters hendle, 2.for all captial letters hendle"<<endl;
	int choice=0;
	cin>>choice;
	if(choice==1)
	{
	Name N("AAZKA","IQBAL");
	Name N1(N);
	N1.display();
	//N.display();
	if(N.isValidName()==true)
	{
	N.toLower();
	N.camelCase();
	cout<<"the total letters in ur name is"<<N.nameLength()<<endl;	
	N.swapNames();
	cout<<N.fullName()<<endl;
	N.swapNames();
	N.display();
	}
    }
	else
	{
		Name N("aazka","iqbal");
		if(N.isValidName()==true)
     	{
			cout<<"the total letters in ur name is"<<N.nameLength()<<endl;
			N.toUpper();
			N.swapNames();
	        N.display();
			N.swapNames();
			cout<<N.fullName()<<endl;
	    }
	}

}