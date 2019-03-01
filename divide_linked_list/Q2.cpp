
#include<iostream>
using namespace std;

template <typename T>
struct dabba
{
	T data;
	dabba *next;
	dabba(T dt, dabba *N)
	{
		data = dt;
		next = N;
	}
};
template <typename T>
class Linked_List
{
	dabba<T> *front;
	dabba<T> *tail;
public:
	Linked_List()
	{
		front = NULL;
		tail = NULL;
	}
	void insert_at_tail(T value)
	{
		if (tail == NULL)
		{
			tail = front = new dabba<T>(value, NULL);
		}
		else
		{
			dabba<T> *temp = new dabba<T>(value, NULL);
			tail->next = temp;
			tail = temp;
		}
	}
	void delete_end()
	{
		if (front == tail)
		{
			front = NULL;
			tail = NULL;
		}
		dabba<T> *pre = front;
		while (pre->next->next != NULL)//pre->next!=NULL &&
		{
			pre = pre->next->next;
		}
		pre->next = NULL;
		tail = pre;
	}
	void delete_value(int value)
	{
		dabba<T> *pre = front;
		while (pre->next != NULL)
		{
			if (pre->next->data == value)
			{
				pre->next = pre->next->next;
				break;
			}
			pre = pre->next;
		}
	}
	void sort()
	{
		dabba<T> *pre1 = front;
		dabba <T>*pre2 = front->next;
		dabba <T>*pre3 = front->next;
		while (pre1->next != NULL)
		{
			while (pre2->next != NULL)
			{
				if (pre1->data>pre2->data)
				{
					swap(pre1->data, pre2->data);
				}
				else
				{
					pre2 = pre2->next;
				}
			}
			pre1 = pre1->next;
			pre2 = pre3->next;
		}
	}
	int length_list()
	{
		int s = 0;
		dabba<T> *cur = front;
		while (cur != NULL)
		{
			s++;
			cur = cur->next;
		}
		return s;
	}
	void divide_mid(Linked_List &sublist)
	{
		dabba<T> *pre = front;
		int l = length_list();
		int i = 1;
		l = l / 2;
		while (i<l)
		{
			pre = pre->next;
			i++;
		}
		tail = pre;
		//tail = NULL;
		dabba <T>*pre2 = pre->next;
		pre->next = NULL;
		while (pre2 != NULL)
		{
			sublist.insert_at_tail(pre2->data);
			dabba<T> *temp = pre2;
			pre2 = pre2->next;
			delete temp;
		}
	}
	void print()
	{
		dabba<T> *t = front;
		while (t->next != NULL)
		{
			cout << t->data << "=>";
			t = t->next;
		}
		cout << t->data << endl;
		cout << "null" << endl;
	}
};
int main()
{
	Linked_List<int> my_list;
	Linked_List<int> sub_list;
	for (int i = 1; i <= 8; i++)
	{
		my_list.insert_at_tail(i);
	}
	cout<<"before divide"<<endl;
	my_list.print();
	my_list.divide_mid(sub_list);
	cout<<"after divide the values in my list is"<<endl;
	my_list.print();
	cout<<"after divide the value in sub list is"<<endl;
	sub_list.print();
}
