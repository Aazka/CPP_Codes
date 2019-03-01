#include "task4.h"
int main()
{
	cout<<"tell the length of ur name"<<' ';
	int size=0;
	cin>>size;
	char *Name=new char [size];
	char inp = 0;
	cout << "enter ur name";
	for(int i=0;i<size;i++)
	{
	cin >> inp;
	Name[i]=inp;
	}
	Name[size]='\0';

	int size_acc=5;
	int *c_no=new int[size_acc];
	int inp1=0;//use for input
	cout<<"enter the employee code"<<endl;
	for(int i=0;i<size_acc;i++)
	{
		cin>>inp1;
		c_no[i]=inp1;
	}
	int day,month,year;
	cout<<"enter day"<<endl;
	cin>>day;
	cout<<"enter month"<<endl;
	cin>>month;
	cout<<"enter year"<<endl;
	cin>>year;
	//employee(char *n,int n_size,int *co,int size_c,int jd,int jm,int jy);
	employee E1(Name,size,c_no,size_acc,day,month,year);


	employee E2(Name,size,c_no,size_acc,day,month,year);
	cout<<"enetr the length of name2"<<endl;
	size=0;
	cin>>size;
	char *name=new char [size];
	inp = 0;
	cout << "enter ur name2";
	for(int i=0;i<size;i++)
	{
	cin >> inp;
	name[i]=inp;
	}
	name[size]='\0';
	E2.set_name(name,size);

	 size_acc=5;
	int *c=new int[size_acc];
	inp1=0;//use for input
	cout<<"enter the employ number2"<<endl;
	for(int i=0;i<size_acc;i++)
	{
		cin>>inp1;
		c[i]=inp1;
	}
	E2.set_code(c,size_acc);
	E2.set_day(23);
	E2.set_month(2);
	E2.set_year(1994);

	employee E3(Name,size,c_no,size_acc,day,month,year);
	cout<<"enetr the length of name3"<<endl;
	size=0;
	cin>>size;
	char *n=new char [size];
	inp = 0;
	cout << "enter ur name3";
	for(int i=0;i<size;i++)
	{
	cin >> inp;
	n[i]=inp;
	}
	n[size]='\0';
	E3.set_name(n,size);

	 size_acc=5;
	int *cd=new int[size_acc];
	inp1=0;//use for input
	cout<<"enter the emplyee number3"<<endl;
	for(int i=0;i<size_acc;i++)
	{
		cin>>inp1;
		cd[i]=inp1;
	}
	E2.set_code(cd,size_acc);
	E3.set_day(27);
	E3.set_month(9);
	E3.set_year(1998);
	cout<<"enetr the current year"<<' ';
	int y1=0;
	cin>>y1;
	int e1=E1.calculate_tenure(y1);
	int e2=E2.calculate_tenure(y1);
	int e3=E3.calculate_tenure(y1);
	if(e1>=2)
	{
		E1.display();
	}
	else if(e2>=2)
	{
		E2.display();
	}
	else
	{
		E3.display();
	}
}