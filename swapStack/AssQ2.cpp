#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

template<typename T1>
struct stack
{
	T1 *ptr;
	int cur_size;
	int max_size;
	void init(int s)
	{
		cur_size=0;
		max_size=s;
		ptr=new T1 [max_size];
	}
	/*void read()
	{
		int lol=0;
		ifstream fin;
		fin.open("input.txt",ios::in);
		if(!fin.is_open())
		{
			cout<<"file to read is not open";
		}
		else
		{
			char arr[10]={'\0'};
			int j=0;
			while(fin>>arr[j])
			{
				lol++;
				j++;
			}
			init(lol);
			for(int i=0;arr[i]!='\0';i++)
			{
				ptr[i]=arr[i];
			}
		}
	}*/
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
	void top(T1 &key)
	{
		cout << key;
	}
	void display()
	{
		cout<<"Array"<<endl;
		for(int i=0;i<cur_size;i++)//max_size
		{
			cout<<ptr[i]<<' ';
		}
	}
};
template <typename StackType>
void reverseStack(stack<char> &stack1, stack<char> &stack2)
{
	StackType *ptr = new char[stack1.max_size];
	char sa=NULL;
	for (int i = 0; i < stack1.max_size; i++)
	{
		ptr[i] = stack1.pop(sa);
		stack2.push(ptr[i]);
		sa=NULL;

	}
}
bool alpha(char a)
{
	if((a>='A'&&a<='Z')||(a<='a'&&a>='z'))
	{
		return true;
	}
	return false;

}
int getLength(char s[])
{
	int a = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		a++;
	}
	return a;

}
int main()
{
	stack <char> S,S1;
	int m=0;
	cout<<"enter the max value";
	cin>>m;
	S.init(m);
	S1.init(m);
	char val;
	for(int i=0;i<m;i++)
	{
		cout<<"enter the character";
		cin>>val;
		S.push(val);
	}
	S.display();
	reverseStack<char>(S,S1);
	S1.display();
}