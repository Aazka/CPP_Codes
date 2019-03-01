#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string>
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
	/*T1 top(T1 key)
	{
		key=ptr[cur_size];
		return ptr[cur_size];
	}*/
	void display_reverse()
	{
		int count=0;
		//cout<<"Array"<<endl;
		for(int i=cur_size;i>0;i--)//max_size
		{
			//cout<<ptr[i]<<' ';
			count ++;
		}
		cout<<count;
	}
	void display()
	{
		int count=0;
		cout<<"Array"<<endl;
		for(int i=0;i<cur_size;i++)//max_size
		{
			cout<<ptr[i]<<' ';
			count++;
		}
		cout<<count;
	}
};
int main()
{
	stack <string> S;
	cout<<"enter the size... how many name/ pair u want to enter";
	int m_s;
	cin>>m_s;
	S.init(m_s);
	string A;
	string az;
	string as;
	int i=0;
	while(i<m_s)
	{
		cout<<' '<<"enter the pair"<<endl;
		cin>>A;
		if(S.empty()==false)
		{
			as=S.top();
			if(as!=A)
			{
				S.push(A);
			}
			else
			{
				az=S.pop(A);
				cout<<az<<' '<<az<<' '<<"destroyed"<<endl;
				//az=S.pop(as);
			}
			//S.push(A);
		}
		else if(S.empty()==true)
		{
			S.push(A);
		}
		i++;
	}
	S.display();
}
/*cout<<"enter the pair ";
	string az;
	//az=A.size();
	for(int i=0;i<m_s;i++)
	{
		
	}*/