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
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
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
	void delete_start()
	{
		dabba<T> *t = front;
		if (t == NULL)
		{
			cout << "null";
		}
		front = front->next;
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
	dabba<T> *search(T value)
	{
		dabba<T> *temp = front;
		while (temp->next != NULL)
		{
			if (temp->data == value)
			{
				cout << value << ' ';
				return temp;
			}
			temp = temp->next;
		}
		if (temp->data == value)
		{
			cout << value << ' ';
			return temp;
		}
	}
	void sort()
	{
		dabba<T> *cur = front;
		while (cur != NULL)
		{
			T max = cur->data;
			dabba<T> *t = cur->next;
			while (t != NULL)
			{
				if (max>t->data)
				{
					swap(cur->data, t->data);
					max = cur->data;
				}
				t = t->next;
			}
			cur = cur->next;
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
	dabba <T>*head_return()
	{
		return front;
	}
	void merge_list(Linked_List &list1, Linked_List &list2)
	{
		int flag = 0;
		int a=list1.length_list();
		int b = list2.length_list();
		int c = a + b; 
		dabba<T> *cur = list1.head_return();
		dabba<T> *cur1 = list2.head_return();
		int i = 0;
		while (i < c)
		{
			if (cur->data <= cur1->data)
			{
				insert_at_tail(cur->data);
				cur = cur->next;
			}
			if (cur->data >= cur1->data)
			{
				insert_at_tail(cur1->data);
				cur1 = cur1->next;
			}
			i++;
			if (cur->next == NULL)
			{
				flag = 0;
				break;
			}

			if (cur1->next == NULL)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			while (cur1 != NULL)
			{
				insert_at_tail(cur1->data);
				cur1 = cur1->next;
			}
		}
		if (flag == 1)
		{
			while (cur != NULL)
			{
				insert_at_tail(cur->data);
					cur = cur->next;
			}
		}
		/*dabba<T> *cur = list1.head_return();
		while (cur != NULL)
		{
			insert_at_tail(cur->data);
			cur = cur->next;
			list1.delete_start();
		}
		dabba<T> *pre = list2.head_return();
		cur = pre;
		while (cur != NULL)
		{
			insert_at_tail(cur->data);
			cur = cur->next;
			list2.delete_start();
		}
		sort();*/
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
	Linked_List <int> L1, L2, L3;
	//for(int i=1;i<=3;i++)
	//{
	L2.insert_at_tail(0);
	L1.insert_at_tail(1);
	L1.insert_at_tail(2);
	L1.insert_at_tail(3);
	cout << "the linked list1" << endl;
	L1.print();

	//}
	//for(int i=4;i<=6;i++)
	//{
	L2.insert_at_tail(5);
	L2.insert_at_tail(6);
	L2.insert_at_tail(8);
	cout << "the linked list2" << endl;
	L2.print();

	//}
	L3.merge_list(L1, L2);
	cout << "merge linked list sorted" << endl;
	L3.print();
}
