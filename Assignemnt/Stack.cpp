#include "Stack.h"
//#include "string.h"
//template<typename T1>
Stack::Stack()
{
	cur_size=0;
	ptr=nullptr;
	ptr=new int[cur_size+1];
	//max_size=0;
}
//template<typename T1>
/*Stack::Stack(int s)
{
	max_size=s;
	ptr=new int[max_size+1];
	cur_size=0;
}*/
//template<typename T1>
Stack::Stack(const Stack&obj)
{
	//int l=get_max_size();
	//ptr=new int[l+1];
	cur_size=0;
	ptr=new int[cur_size+2];
	for(int i=0;i<obj.cur_size;i++)
	{
		ptr[i]=obj.ptr[i];
	}
	//ptr[l]='\0';
	//max_size=obj.max_size;
	cur_size=obj.cur_size;
}
//template<typename T1>
/*void Stack::set_max_size(int max)
{
	max_size=max;
	ptr=new int[max_size];
}*/
//template<typename T1>
/*void Stack::set_current_size(int c)
{
	if(c<=max_size)
	{
		cur_size=c;
	}
}*/
//template<typename T1>
/*void Stack::set_ptr(int *pointer,int size)
{
	for(int i=0;i<size;i++)
	{
		ptr[i]=pointer[i];
	}
}*/
//template<typename T1>
//template<typename T1>
int Stack::get_cur_size()
{
	return cur_size;
}
//template<typename T1>
const int* Stack::get_ptr()
{
	return ptr;
}
//template<typename T1>
/*int Stack::get_max_size()
{
	
	return max_size;
}*/
//template<typename T1>
/*bool Stack::full()
{
		if (cur_size > )
		{
			return true;
			//cout << "full";
		}
		return false;
}*/
//template<typename T1>
bool Stack::empty()
{
		if (cur_size == 0)
		{
			return true;
		}
		return false;
}
//template<typename T1>
void Stack::copy(int *arr,int *arr2,int &size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr2[i];
	}
}
int* Stack::regrow(int *ptr, int in,int &size)
{
	int *t = new int[size+1];
	copy(t, ptr, size);
	t[size] = in;
	//size++;
	delete[]ptr; 
	ptr = t;
	t = NULL;
	return ptr;
}
//template<typename T1>
void Stack::push(int key)
{
		//if (full()==false)
	ptr=regrow(ptr,key,cur_size);
	ptr[cur_size] = key;
	cur_size++;	
}
//template<typename T1>
int Stack::pop()
{
	int r=0;
		if (empty() == false)
		{
			r = ptr[cur_size-1];//max_size-1];
			cur_size = cur_size - 1;
			return r;
		}
		return r;
}
//template<typename T1>
int Stack::top()
{
		int t=ptr[cur_size-1];
		return t;
}
//template<typename T1>
void Stack:: display()
{
		cout<<"Array"<<endl;
		for(int i=cur_size-1;i>=0;i--)//max_size
		{
			cout<<ptr[i]<<' ';
		}
}
//template<typename T1>
Stack::~Stack(void)
{
	delete[]ptr;
}
