#include"Hotel.h"
#include"Person.h"
int main()
{
	Hotel H;
	cout<<"Add_Room_Specification()"<<endl;
	H.Add_Room_Specification("blue",7,"wood",7,9,2,4);
	Person P("saad","2cl3",033321,4);
	H.Assosiate(P);
	cout<<"Check who is staying in room or room is empty"<<endl;
	H.Check_Room();
	cout<<"display_empty()"<<endl;
	H.Display_empty();
	cout<<"update"<<endl;
	H.update_Room("pink",10,"iron",8,9,2,"ahmed","2nic",022,4,0);
	H.Display();
	cout<<"view room"<<endl;
	H.View_Room_Specification(0);
	cout<<"delete/checkout"<<endl;
	H.Delete_Room_Specification();
	H.Display();
	cout<<"display empty"<<endl;
	H.Display_empty();

	H.View_Room_Specification(0);
	H.Delete_Room_Specification();
	//H.Display();
}