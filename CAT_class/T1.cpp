#include "task1.h"
int main()
{
	char name[100]={"persion "};
	char owner[100] = {"abc"};
	double weight = 34;
	cat C1(name, owner, weight);
	C1.display();

	cat C2;
	cout << "enetr the cat_name" << ' ';
	cin >> name;
	C2.set_name(name);
	cout << endl;
	cout << "enetr the owner name" << ' ';
	cin >> owner;
	C2.set_owner(owner);
	C2.set_weight(54);
	cout << endl;
	C2.display();

	cat C3(name,owner,weight);
	cout << "enetr tyhe owner_name" << ' ';
	cin >> owner;
	C3.change(owner);
	C3.display();
	return 0;

}