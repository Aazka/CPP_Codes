#include<iostream>
using namespace std;

template <typename T>
struct Dabba
{
	T data;
	Dabba *next;
	Dabba(T dt,Dabba *N)
	{
		data=dt;
		next=N;
	}
};
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
template <typename T>
class cir_link_list
{
public:
	Dabba <T> *front;
	Dabba <T> *tail;
	cir_link_list()
	{
		front=NULL;
		tail=NULL;
	}
	void insert(T value)
	{
		if(tail==NULL)
		{
			tail=front=new Dabba <T>(value,NULL);
		}
		else
		{
			Dabba <T> *temp=new Dabba <T>(value,front);
			tail->next=temp;
			tail=temp;
		}
	}
	bool empty()
	{
		if(front==NULL)
		{
			return false;
		}
		return true;
	}
	int length()
	{
		int count=0;
		Dabba<T> *pre=front;
		while(pre->next!=front)
		{
			count++;
			pre=pre->next;
		}
		pre=pre->next;
		count++;
		return count;
	}
	Dabba <T> *search(T v)
	{
		Dabba <T> *pre=front;
		if(pre->data==v)
		{
			cout<<v<<' ';
			return pre;
		}
		else
		{
			while(pre->next!=front)
			{
				if(pre->data==v)
				{
					cout<<v<<' ';
					return pre;
				}
				pre=pre->next;
			}
			if(pre->data==v)
			{
				cout<<v<<' ';
				return pre;
			}
			else
				{
					cout<<"not found"<<' ';
			return 0;
			}
		}
	}
	void destroy()
	{
		while(front!=tail)
		{
			Dabba<T> *pre=front;
			while(pre->next->next!=front)
			{
				pre=pre->next;
			}
			pre->next=front;
			tail=pre;
		}
		if(front==tail)
		{
			front=NULL;
			tail=NULL;
			cout<<"destroy"<<endl;
		}
	}
	void copy()
	{
		cir_link_list l1;
		Dabba<T> *cur=front;
		while(cur->next!=front)
		{
			l1.insert(cur->data);
			cur=cur->next;
		}
		l1.insert(cur->data);
		l1.print();
	}
	void sort()
	{
		Dabba <T> *cur=front;
		while(cur->next!=front)
		{
			T max=cur->data;
			Dabba <T> *t=cur->next;
			while(t!=front)
			{
				if(max>t->data)
				{
					swap(cur->data,t->data);
					max=cur->data;
				}
				t=t->next;
			}
			cur=cur->next;
		}
	}
	void delete_item(T value)
	{
		Dabba<T> *cur=front;
		if(cur->data==value)
		{
			front=cur->next;
			tail->next=front;
		}
		while(cur->next->next!=front)
		{
			if(cur->next->data==value)
			{
				cur->next=cur->next->next;
				break;
			}
			cur=cur->next;
		}
		if(cur->next->data==value)
		{
			tail=cur;
			cur->next=front;
		}
	}
	void print()
	{
		Dabba<T> *t=front;
		/*if(front==NULL)
		{
			cout<<"nothing to display";
			
		}*/
		while(t->next!=front)
		{
			cout<<t->data<<"=>";
			t=t->next;
		}
		if(t->next==front)
		{
			cout<<t->data;
			cout<<endl;
		}
		else
			cout<<"empty";
	}
};
void p1()
{
	cout<<"1.empty check"<<endl;
	cout<<"2.distroy list"<<endl;
	cout<<"3.finding length"<<endl;
	cout<<"4.search value"<<endl;
	cout<<"5.delete value"<<endl;
	cout<<"6.copy list"<<endl;
	cout<<"7.sort list"<<endl;
	cout<<"8.display list"<<endl;
}
int main()
{
	int d=0;
	int l;
	int a=0;
	int s=0;
	int value;
	int choice=0;
	cir_link_list <int>  list;
	cout<<"how many time u want to insert??"<<endl;
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cout<<"insert the value from tail"<<endl;
		cin>>value;
		list.insert(value);
	}
	p1();
	cout<<"enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
		if(list.empty()==false)
		{
			cout<<"not empty";
			break;
		}
		else
		{
			cout<<"empty";
			break;
		}
	case 2:
		list.destroy();
		cout<<"the list has been destroyed"<<endl;
		break;
	case 3:
		 l=list.length();
		cout<<"the total length of this list is"<<' '<<l<<endl;
		break;
	case 4:
		cout<<"enter the value u want to search"<<endl;
		cin>>a;
		cout<<"the address of the search value is"<<' '<<list.search(a);
		break;
	case 5:
		cout<<"enter the number you want to delete"<<endl;
		cin>>d;
		list.delete_item(d);
		list.print();
		break;
	case 6:
		list.copy();
		cout<<"list has been copied"<<endl;
		break;
	case 7:
		list.sort();
		cout<<"the sorted list is"<<endl;
		list.print();
		break;
	case 8:
		cout<<"display list"<<endl;
	     list.print();
		 break;
	}
	/*cir_link_list  list;
	list.insert(10);
	list.insert(8);
	list.insert(2);
	list.insert(102);
	list.insert(100);
	//list.sort();
	list.print();
	list.delete_item(8);
	list.print();
	*/
}
/*for(int i=1;i<=3;i++)
	{
	list.insert(i);
	}
	list.print();
	if(list.empty()==false)
	{
		cout<<"empty"<<endl;
	}
	else
		cout<<"not empty"<<endl;
	list.print();
	int i=list.length(a);
	cout<<"the total length"<<i<<endl;
	cout<<list.search(5)<<endl;
	//list.destroy();
	list.copy();
	cout<<"list has been copied";*/