#include"Linked_List.h"
#include"Queue.h"
#include "Stack.h"
int main()
{
	cout<<"enter 1 for Linked list,2 fro Queue  and 3 fro stack"<<endl;
	int ch=0;
	cin>>ch;
	switch(ch)
	{
	case 1:
		{
	Linked_List L;
	L.insert_at_start(42);
	L.insert_at_tail(43);
	L.print();
	Linked_List L2(L);
	L2.print();
	break;
	}
	case 2:
		{
			
	Queue Q;
	Q.enque(10);
	Q.enque(5);
	Q.enque(1);
	Q.enque(7);
	cout<<Q.dequeue()<<endl;
	//Q.set_front(3);
	//Q.set_rare(5);
	//int r=Q.dequeue();
	Q.print_list();
	cout<<"using copy constructor"<<endl;
	Queue Q2(Q);
	Q2.print_list();
	break;
		}
	case 3:
		{
			
	Stack S;
	S.push(15);
	S.push(45);
	S.push(23);
	S.display();
	int r=S.pop();
	cout<<r;
	Stack S2(S);
	S2.display();
		}
	}
}