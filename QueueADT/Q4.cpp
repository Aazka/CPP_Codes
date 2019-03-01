#include<iostream>
#include<stdio.h>
using namespace std;
template <typename T>
class Queue_list
{
private:
	int rare;
	int front;
	T *ptr;
	int max;
public:
	Queue_list(int S)
	{
		rare=-1;
		front=-1;
		max=S;
		ptr=new T [max];
	}
    bool is_empty()
	{
		if((front>rare) || (front ==-1 && rare==-1))
		{
			return true;
		}
		return false;
	}
	bool is_full()
	{
		if(rare==max)
		{
			return true;
		}
		return false;
	}
	void enque(T value)
	{
		if(is_empty())
		{
			rare=0;
			front=0;
			ptr[rare]=value;
			rare++;
		}
		else if(!is_full())
		{
			ptr[rare]=value;
			rare++;
		}
	}
	T dequeue()
	{
		int a;
		if(!is_empty())
		{
			a=ptr[front];
			front++;
			return a;
		}
		return -1;
	}
	void print_list()
	{
		for(int i=front;i<=rare-1;i++)
		{
			cout<<ptr[i]<<' ';
		}
	}
};
int main()
{
	int m=0,b=0;
	int f,d;
	cout<<"enetr the size max";
	cin>>m;
	Queue_list <int> Q1(m);
	for(int i=0;i<m;i++)
	{
		cout<<"enter the number";
    	cin>>b;
		Q1.enque(b);
	}
	cout<<"how many time u want to dequeue";
	cin>>f;
	for(int i=0;i<f;i++)
	{
		d=Q1.dequeue();
		if(d==-1)
		{
			cout<<"list is empty"<<endl;
		}
	}
	Q1.print_list();
}