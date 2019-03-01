#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
using namespace std;

template<typename T1>
struct stack
{
	T1 *ptr;
	int cur_size;
	int max_size;
	int row;
	void read(T1 arr[][50])
	{
		ifstream fin;
		fin.open("input.txt",ios::in);
		if(!fin.is_open())
		{
			cout<<"file to read is not open";
		}
		else
		{
			fin>>row;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<row;j++)
				{
					fin>>arr[i][j];
					//cout<<arr[i][j]<<' ';
				}
				//cout<<endl;
			}
		}
	}
	void init()
	{
		//row=0;
		cur_size=0;
		max_size=row;
		ptr=new T1 [max_size];
	}
	void print_board(T1 arr[][50])
	{
		system("cls");
		for(int i=0;i<row;i++)
			{
				for(int j=0;j<row;j++)
				{
					cout<<arr[i][j]<<' ';
				}
				cout<<endl;
		    }
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
			//return key;
		}
		return key;
	}
	void top(T1 &key)
	{
		cout << key;
	}
	void display()
	{
		cout<<endl;
		for(int i=0;i<cur_size;i++)//max_size
		{
			cout<<ptr[i]<<' ';
		}
	}
	bool is_right(int r,int &c,T1 array[][50])
{
	if((array[r][c+1]!='0')&&(r<max_size  || c<max_size)) //|| r>0||c>0))
	{
		//c++;
		return true;
	}
	return false;
}
	bool is_down(int r,int c,T1 array[][50])
{
	if((array[r+1][c]!='0')&&(r<max_size  && c<max_size))
	{
		return true;
	}
	else
	{
		return false;
	}
}
	bool is_up(int r,int c,T1 array[][50])
   {
	if((array[r-1][c]!='0')&&(r<max_size  && c<max_size)&&(array[r-1][c]==1))
	{
		return true;
	}
	else
	{
		return false;
	}
   }
	bool is_left(int r,int c,T1 array[][50])
   {
	if((array[r][c-1]!='0')&&(r<max_size  && c<=max_size)&&(array[r][c-1]=='*'))
	{
		//if((array[r][c-1]=='*'))
		//{
		return true;
		//}
	}
	else
	{
		return false;
	}
   }
	bool final_destination(int &r,int &c,T1 arr[][50])
    {
		if((r==row-1)||(c==row-1))
		{
			return true;
		}
		else
		{
			return false;
		}
    }
};
template <typename D>
void make_move(int r,int c,D arr[][50])
{
	arr[r][c]='*';
}
template <typename D>
void make_move_reverse(int r,int c,D arr[][50])
{
		arr[r][c]='0';
}
int main()
{
	stack <char> S;
	char array[50][50];
	S.read(array);
	S.print_board(array);
	S.init();
	int r=0;
	int c=0;
	do
	{
		if(S.is_right(r,c,array)==true)//&&(S.legal(r,c,array)==true))
		{
			S.push('R');
			//make_move(r,c,array);
			//S.display();//print_board(array);
			c++;
		}
		else if((S.is_down(r,c,array)==true))//&&(S.legal(r,c,array)==true))
		{
			S.push('D');
			//make_move(r,c,array);
			//S.display();//print_board(array);
			r++;
		}
		else if(S.is_left(r,c,array)==true)//&&(S.legal(r,c,array)==false))
		{
			S.push('L');
			//sa=S.pop('L');
			//make_move_reverse(r,c,array);
			//S.display();//print_board(array);
			c--;
		}
		else if((S.is_up(r,c,array)==true))//&&(S.legal(r,c,array)==false))
		{
			S.push('U');
			//sa=S.pop('U');
			//make_move_reverse(r,c,array);
			//S.display();//print_board(array);
			r--;
		}
	}while(!S.final_destination(r,c,array));
	S.display();
}