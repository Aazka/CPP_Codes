#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

template<typename T1>
class stack
{
private:
	T1 *ptr;
	int cur_size;
	int max_size;
public:
	void init(int s)
	{
		cur_size=0;
		max_size=s;
		ptr=new T1 [max_size];
	}
	bool full()
	{
		if (cur_size > max_size)
		{
			return true;
			//cout << "full";
		}
		return false;
	}
	bool empty()
	{
		if (cur_size == 0)
		{
			return true;
		}
		return false;
	}
	void push(T1 key)
	{
		//for (int i = cur; i < max; i++)
		//{
		if (full()==false)
		{
			ptr[cur_size] = key;
			cur_size++;
		}
		//}
	}
	T1 pop(T1 key)
	{
		if (empty() == false)
		{
			key = ptr[cur_size-1];//max_size-1];
			cur_size = cur_size - 1;
			return key;
		}
	}
	T1 top()//T1 &key)
	{
		T1 t=ptr[cur_size-1];
		return t;
	}
	void display()
	{
		cout<<"Array"<<endl;
		for(int i=cur_size-1;i>=0;i--)//max_size
		{
			cout<<ptr[i]<<' ';
		}
	}
};
struct Q_S
{
	stack <int> S1,S2;
	void enqueue(int b)
	{
		if(!S1.full())
		{
			S1.push(b);
		}
	}
	void dequeue(int i)
	{
		int d;
		if(!S2.empty())
		{
			d=S2.pop(i);
		}
	}
};
int main()
{
	Q_S Q;
	int z,a,j,l,k;
	cout<<"enter the size and how many time u want to enqueue in queue";
	cin>>z;
	Q.S1.init(z);
	Q.S2.init(z);
	for(int i=0;i<z;i++)
	{
		cout<<"enter the number";
		cin>>a;
		Q.enqueue(a);
	}
	for(int i=0;i<z;i++)
	{
		//if(!Q.S2.empty())
		//{
			j=Q.S1.top();
			Q.S2.push(j);
			k=Q.S1.pop(j);
		//}
	}
	cout<<"hpw many time u want to dequeue";
	cin>>l;
	for(int i=0;i<l;i++)
	{
		Q.dequeue(i);
	}
	Q.S2.display();
}