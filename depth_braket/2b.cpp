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
bool alpha(char a)
{
	if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
	{
		return true;
	}
	return false;

}
int main()
{
	stack <char> S2;
	int ma=0,cot1=0,cot=0;
	cout<<"enter the full size";
	cin>>ma;
	S2.init(ma);
	char value;
	char charcter[50]={'\0'};
	char c[20]={'\0'};
	int array[10];
	cout<<"enter the experation";
	cin>>charcter;
	for(int i=0;charcter[i]!='\0';i++)
	{
		if(charcter[i]=='(')
		{
			cot1++;
		}
		if(charcter[i]==')')
		{
			cot++;
		}
	}
	if(cot1!=cot)
	{
		cout<<"not equal";
	}
	int i=0;
	int count=0;
	char s;
	int c1=0;
	while(charcter[i]!='\0')
	{
		if(charcter[i]=='(')
		{
			count++;
			S2.push(charcter[i]);
		}
		else if(alpha(charcter[i])==true)
		{
			c[c1]=charcter[i];
			array[c1]=count;
			c1++;
		}
		else if(charcter[i]==')')
		{
			if(!S2.empty())
			{
				s=S2.pop(charcter[i]);
				count--;
			}
			else
			{		
				cout<<"parenthess is unbalance"<<endl;
				break;
			
			}
		}
		i++;
	}
	int flag=0,az=0;
	for(int j=0;c[j]!='\0';j++)
		{

			if(array[j]==array[j+1])
			{
				cout<<"values are equal"<<endl;
				flag=2;
				break;
				
			}
			else if(array[j]>array[j+1])
			{
				flag=1;
				az=j;
				break;//cout<<c[j] <<"having"<< array[j];
			}
			else
			{
				flag=0;
			}
		}
	if(flag==1)
	{
		cout<<c[az]<<' '<<"having"<<' '<<array[az];
	}
	//S2.push(value);
	//S2.display();
}
