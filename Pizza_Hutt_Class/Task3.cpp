#include "t3.h"
int main()
{
	char pizza_type[100]={"pan"};
	char size[100]={"large"};
	bool topping=1;
	double pepper=5;
	Pizza_Hutt PH[3]={Pizza_Hutt(pizza_type,size,pepper,topping),
					Pizza_Hutt(),
					Pizza_Hutt()};
	PH[0].display();
	cout<<endl;

	cout<<"enter the pizza type (pan,deep dish,hand tossed etc)";
	cin.getline(pizza_type,100);
	cout<<endl;
	cout<<"enter the size of pizza"<<' ';
	cin.getline(size,100);
	cout<<endl;
	cout<<"do u want to add extra topping  press 1 or 0, yes(1) and no(0)?"<<endl;
	cin>>topping;
	cout<<endl;
	cout<<"how many pepperoines in your pizza?";
	cin>>pepper;
	PH[1].set_Pizza_type(pizza_type);
	PH[1].set_size(size);
	PH[1].set_pepperoins(pepper);
	PH[1].set_extra_topping(topping);
	PH[1].display();
	
	cin.ignore();
	cout<<"enter the pizza type (pan,deep dish,hand tossed etc)";
	cin.getline(pizza_type,100);
	cout<<endl;
	cout<<"enter the size of pizza"<<' ';
	cin.getline(size,100);
	cout<<endl;
	cout<<"do u want to add extra topping  press 1 or 0, yes(1) and no(0)?"<<endl;
	cin>>topping;
	cout<<endl;
	cout<<"how many pepperoines in your pizza?";
	cin>>pepper;
	
	PH[2].set_Pizza_type(pizza_type);
	PH[2].set_size(size);
	PH[2].set_pepperoins(pepper);
	PH[2].set_extra_topping(topping);
	PH[2].display();
	
	int r1=PH[0].Cost_of_pizza();
	int r2=PH[1].Cost_of_pizza();
	int r3=PH[2].Cost_of_pizza();

	cout<<"the cost of pizza of customer1 is"<<' '<<r1<<endl;
	cout<<"the cost of pizza of customer2 is"<<' '<<r2<<endl;
	cout<<"the cost of pizza of customer3 is"<<' '<<r3;
}