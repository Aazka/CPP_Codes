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
	int size,value,choice,d;
	cout<<"enter the size";
	cin>>size;
	cout<<endl;
	cout<<" 1 for enqueue, 2 for dequeue and 3 for print";
	Queue_list <int> Q1(size);
	for(int i=0;i<size;i++)
	{
		cout<<"enter your choice"<<' ';
		cin>>choice;
		if(choice==1)
		{
			cout<<"enter the value"<<' ';
			cin>>value;
			Q1.enque(value);
		}
		else if(choice==2)
		{
			d=Q1.dequeue();
		}
		else if(choice==3)
		{
			Q1.print_list();
		}
	}
}