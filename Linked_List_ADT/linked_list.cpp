#include<iostream>
using namespace std;

class dabba
{
public:

	int data;
	dabba *next;
public:
	dabba(int d,dabba *N)
	{
		data=d;
		next=N;
	}
};

void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
class Linked_List
{
	dabba *front;
	dabba *tail;
public:
	Linked_List()
	{
		front=NULL;
		tail=NULL;
	}
	void insert_at_start(int value)
	{
		if(front==NULL)
		{
			tail=front=new dabba(value,NULL);
			//tail=new dabba(value,NULL);
		}
		else
		{
			dabba *temp=new dabba(value,front);
			front=temp;
		}
	}
	void insert_at_tail(int value)
	{
		if(tail==NULL)
		{
			tail=front=new dabba(value,NULL);
		}
		else
		{
			dabba *temp=new dabba(value,NULL);
			tail->next=temp;
			tail=temp;
		}
	}
	void delete_start()
	{
		dabba *t=front;
		if(t==NULL)
		{
			cout<<"null";
		}
		front=front->next;
	}
	void delete_end()
	{
		if(front==tail)
		{
			front=NULL;
			tail=NULL;
		}
		dabba *pre=front;
		while(pre->next->next!=NULL)//pre->next!=NULL &&
		{
			pre=pre->next->next;
		}
		pre->next=NULL;
		tail=pre;
	}
	dabba *search(int value)
	{
		dabba *temp=front;
		while(temp->next!=NULL)
		{
			if(temp->data==value)
			{
				cout<<value<<' ';
				return temp;
			}
			temp=temp->next;
		}
		if(temp->data==value)
			{
				cout<<value<<' ';
				return temp;
			}
	}
	void insert_before(int value,int key)
	{
		dabba *pre=front;
		if(front==tail)
		{
			cout<<"cant insert";
		}
		while(pre->next!=NULL)
		{
			if(pre->next->data==key)
			{
				dabba *temp=new dabba(value,pre->next);
				pre->next=temp;
				break;
			}
			pre=pre->next;
		}
	}
	void insert_after(int value,int key)
	{
		dabba *present=front;
		while(present->next!=NULL)
		{
			if(present->data==key)
			{
				dabba *temp=new dabba(value,present->next);//->next);
					present->next=temp;
					break;
			}
			present=present->next;
		}
	}
	void delete_value(int value)
	{
		dabba *pre=front;
		while(pre->next!=NULL)
		{
			if(pre->next->data==value)
			{
				pre->next=pre->next->next;
				break;
			}
			pre=pre->next;
		}
	}
	void sort()
	{
		dabba *pre1=front;
		dabba *pre2=front->next;
		dabba *pre3=front->next;
		while(pre1->next!=NULL)
		{
			while(pre2->next!=NULL)
			{
				if(pre1->data>pre2->data)
				{
					swap(pre1->data,pre2->data);
				}
				else
				{
				pre2=pre2->next;
				}
			}
			pre1=pre1->next;
			pre2=pre3->next;
		}
	}
	void remove_before(int key)
	{
		if(front->next->next==NULL)
		{
			front=front->next;
			//break;
		}
		else if(front->next=NULL)
		{
			cout<<"cant remove";
			//break;
		}
		else
		{
			dabba *pre=front;
			while(pre->next!=NULL)
			{
				if(pre->next->next->data=key)
				{
					pre->next=pre->next->next;
					break;
				}
			}
			pre=pre->next;
		}
	}
	void remove_after(int key)
	{
		if(front->next->next==NULL)
		{
			front=front->next;
			//break;
		}
		else if(front->next=NULL)
		{
			cout<<"cant remove";
			//break;
		}
		else
		{
			dabba *pre=front;
			while(pre->next!=NULL)
			{
				if(pre->next->data==key)
				{
					pre->next=pre->next->next;
					break;
				}
				pre=pre->next;
			}
		
		}
	}
	void print()
	{
		dabba *t=front;
		while(t->next!=NULL)
		{
			cout<<t->data<<"=>";
			t=t->next;
		}
		cout<<t->data<<endl;
		cout<<"null"<<endl;
	}
};
int main()
{
	Linked_List list;
	cout<<"insert start"<<endl;
	list.insert_at_start(2);
	list.insert_at_start(3);
	list.print();
	cout<<"insert tail"<<endl;
	list.insert_at_tail(0);
	list.insert_at_tail(1);
	list.insert_at_tail(10);
	list.print();
	cout<<"delete start"<<endl;
	list.delete_start();
	list.print();
	cout<<"delete end"<<endl;
	list.delete_end();
	list.print();
	cout<<"search"<<endl;
	cout<<list.search(0)<<endl;
	cout<<"insert_before"<<endl;
	list.insert_before(7,1);
	list.print();
	cout<<"insert_end"<<endl;
	list.insert_after(11,0);
	list.print();
	cout<<"delete perticular value"<<endl;
	list.delete_value(0);
	list.print();
}